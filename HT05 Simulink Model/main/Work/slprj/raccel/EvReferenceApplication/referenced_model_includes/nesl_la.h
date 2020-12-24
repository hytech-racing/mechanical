/* Copyright 2007-2018 The MathWorks, Inc. */
/*!
 * @file
 * RTW Implementation of the Linear Algebra Service for deployed NE
 * solver
 */

#include <math.h>
#include <rt_matrixlib.h>
#include <string.h>

#ifndef pm_allocator_alloc
#define pm_allocator_alloc(_allocator, _m, _n) \
    ((_allocator)->mCallocFcn((_allocator), (size_t) (_m), (size_t) (_n)))
#endif

#ifndef pm_allocator_free
#define pm_allocator_free(_allocator, _ptr)                          \
    {                                                                \
        void* __allocator_pointer = (_ptr);                          \
        if (__allocator_pointer != 0) {                              \
            (_allocator)->mFreeFcn(_allocator, __allocator_pointer); \
        }                                                            \
    }
#endif
/*
 * UNUSED_PARAMETER(x)
 *   Used to specify that a function parameter (argument) is required but not
 *   accessed by the function body.
 */
#ifndef UNUSED_PARAMETER
#if defined(__LCC__)
#define UNUSED_PARAMETER(x) /* do nothing */
#else
/*
 * This is the semi-ANSI standard way of indicating that a
 * unused function parameter is required.
 */
#define UNUSED_PARAMETER(x) (void)(x)
#endif
#endif

struct McLinearAlgebraDataTag
{
    int32_T                  mNumRow;
    int32_T                  mNumCol;
    real_T*                  mLU;
    real_T*                  mLinvB;
    int32_T*                 mPivotIndices;
    PmAllocator*             mAllocatorPtr;
    const PmSparsityPattern* mSparsityPatternPtr;
};

/* Populate full column major matrix from sparsity pattern. Memory is NOT
 * allocated here */
PMF_DEPLOY_STATIC void populate_full_matrix_from_sparsitypattern(
    real_T*                  A,
    const PmSparsityPattern* jacobian_pattern_ptr,
    const real_T*            Ax,
    PmAllocator*             allocatorPtr)
{
    int32_T  nRow = (int32_T)jacobian_pattern_ptr->mNumRow;
    int32_T  nCol = (int32_T)jacobian_pattern_ptr->mNumCol;
    int32_T* Ap   = jacobian_pattern_ptr->mJc;
    int32_T* Ai   = jacobian_pattern_ptr->mIr;
    int32_T  j    = 0;
    int32_T  nz   = 0;

    memset(A, 0, sizeof(real_T) * (size_t) nRow * (size_t) nCol);
    for (j = 0; j < nCol; j++) {
        nz = *(Ap + j + 1) - (*(Ap + j));
        while (nz) {
            *(A + (*Ai) + (j * nRow)) = *Ax;
            Ai++;
            Ax++;
            nz--;
        }
    }
    UNUSED_PARAMETER(allocatorPtr);
}

/*
  Allocate all memory needed right away, to avoid need for allocation during
  simulation.
 */
PMF_DEPLOY_STATIC McLinearAlgebraData*
                  rtw_linalg_create_data(PmAllocator*             allocatorPtr,
                                         const PmSparsityPattern* jacobian_pattern_ptr)
{
    McLinearAlgebraData* ne_la_data = (McLinearAlgebraData*)pm_allocator_alloc(
        allocatorPtr, sizeof(McLinearAlgebraData), 1);
    ne_la_data->mSparsityPatternPtr = jacobian_pattern_ptr;
    ne_la_data->mNumRow             = (int32_T)jacobian_pattern_ptr->mNumRow;
    ne_la_data->mNumCol             = (int32_T)jacobian_pattern_ptr->mNumCol;
    ne_la_data->mAllocatorPtr       = allocatorPtr;
    ne_la_data->mLU                 = (real_T*)pm_allocator_alloc(
        ne_la_data->mAllocatorPtr,
        sizeof(real_T),
        jacobian_pattern_ptr->mNumRow * jacobian_pattern_ptr->mNumCol);

    ne_la_data->mLinvB =
        (real_T*)pm_allocator_alloc(ne_la_data->mAllocatorPtr,
                                    sizeof(real_T),
                                    jacobian_pattern_ptr->mNumRow);

    ne_la_data->mPivotIndices = (int32_T*)pm_allocator_alloc(
        ne_la_data->mAllocatorPtr,
        sizeof(int32_T),
        ((((int32_T)jacobian_pattern_ptr->mNumRow) < ne_la_data->mNumCol)
             ? ne_la_data->mNumRow
             : ne_la_data->mNumCol));
    return ne_la_data;
}

/* Perform the LU factorization */
PMF_DEPLOY_STATIC McLinearAlgebraStatus
                  rtw_linalg_numeric(McLinearAlgebra* ne_la, const real_T* Ax)
{
    McLinearAlgebraData* ne_la_data = ne_la->mPrivateData;

    populate_full_matrix_from_sparsitypattern(ne_la_data->mLU,
                                              ne_la_data->mSparsityPatternPtr,
                                              Ax,
                                              ne_la_data->mAllocatorPtr);
    rt_lu_real(ne_la_data->mLU, ne_la_data->mNumRow, ne_la_data->mPivotIndices);
    UNUSED_PARAMETER(Ax);

    /* Check for zeros on the main diagonal */
    {
        int32_T diagLen =
            ((ne_la_data->mNumRow < ne_la_data->mNumCol) ? ne_la_data->mNumRow
                                                         : ne_la_data->mNumCol);
        int32_T diagSkip = ne_la_data->mNumRow + 1;
        int32_T diagIdx  = 0;
        int32_T i        = 0;
        for (i = 0; i < diagLen; i++) {
            if (ne_la_data->mLU[diagIdx] == 0.0) {
                return MC_LA_ERROR; /* matrix singular */
            }
            diagIdx += diagSkip;
        }
    }

    return MC_LA_OK;
}

/* solve: forward & back substitution */
PMF_DEPLOY_STATIC McLinearAlgebraStatus
                  rtw_linalg_solve(McLinearAlgebra* ne_la,
                                   const real_T*    Ax /*not used*/,
                                   real_T*          dy,
                                   const real_T*    B)
{
    McLinearAlgebraData* ne_la_data = ne_la->mPrivateData;

    memcpy(dy, B, (size_t)ne_la_data->mNumRow * sizeof(real_T));
    rt_ForwardSubstitutionRR_Dbl(ne_la_data->mLU,
                                 B,
                                 ne_la_data->mLinvB,
                                 ne_la_data->mNumRow,
                                 1,
                                 ne_la_data->mPivotIndices,
                                 true);
    rt_BackwardSubstitutionRR_Dbl(
        ne_la_data->mLU + ((ne_la_data->mNumRow * ne_la_data->mNumRow) - 1),
        ne_la_data->mLinvB + (ne_la_data->mNumRow - 1),
        dy,
        ne_la_data->mNumRow,
        1,
        false);
    UNUSED_PARAMETER(Ax);
    return MC_LA_OK;
}

PMF_DEPLOY_STATIC
size_t rtw_linalg_memusage(const McLinearAlgebra* ne_la)
{
    const McLinearAlgebraData* ne_la_data = ne_la->mPrivateData;
    const size_t numrow = (size_t) ne_la_data->mNumRow;
    const size_t numcol = (size_t) ne_la_data->mNumCol;

    return

        sizeof(*ne_la) + sizeof(*ne_la_data) +
        numrow * numcol * sizeof(real_T) +
        numrow * sizeof(real_T) +
        ((numrow < numcol) ? numrow
         : numcol) *
        sizeof(int32_T);
}

PMF_DEPLOY_STATIC void rtw_linalg_destroy(McLinearAlgebra* ne_la)
{
    McLinearAlgebraData* ne_la_data = ne_la->mPrivateData;
    PmAllocator*         alloc      = ne_la_data->mAllocatorPtr;

    pm_allocator_free(alloc, ne_la_data->mLU);
    ne_la_data->mLU = NULL;
    pm_allocator_free(alloc, ne_la_data->mLinvB);
    ne_la_data->mLinvB = NULL;

    pm_allocator_free(alloc, ne_la_data->mPivotIndices);
    ne_la_data->mPivotIndices = NULL;

    ne_la_data->mSparsityPatternPtr = NULL;
    pm_allocator_free(alloc, ne_la_data);
    pm_allocator_free(alloc, ne_la);
}

PMF_DEPLOY_STATIC McLinearAlgebraStatus
                  create_rtw_linear_algebra_complete(const McLinearAlgebraFactory* factory,
                                                     McLinearAlgebra**             linAlg,
                                                     const PmSparsityPattern*      pattern,
                                                     size_t                        nPerm)
{
    PmAllocator*     alloc = pm_default_allocator();
    McLinearAlgebra* la =
        (McLinearAlgebra*)pm_allocator_alloc(alloc, sizeof(McLinearAlgebra), 1);

    (void)factory;
    (void)nPerm;

    la->mPrivateData = rtw_linalg_create_data(alloc, pattern);
    la->mFactor      = &rtw_linalg_numeric;
    la->mSolve       = &rtw_linalg_solve;
    la->mCondest     = NULL;
    la->mMemusage    = &rtw_linalg_memusage;
    la->mDestructor  = &rtw_linalg_destroy;

    *linAlg = la;

    return MC_LA_OK;
}

PMF_DEPLOY_STATIC McLinearAlgebraStatus
                  create_rtw_linear_algebra(const McLinearAlgebraFactory* factory,
                                            McLinearAlgebra**             linAlg,
                                            const PmSparsityPattern*      pattern)
{
    return create_rtw_linear_algebra_complete(factory, linAlg, pattern, pattern->mNumCol);
}

/*!
 * Returns a static pointer to McLinearAlgebraFactory to be used by the client
 */
PMF_DEPLOY_STATIC const McLinearAlgebraFactory* get_rtw_linear_algebra(void)
{
    static McLinearAlgebraFactory factory;

    factory.mCreateLinearAlgebra = &create_rtw_linear_algebra;

    factory.mCreateLinearAlgebraComplete = &create_rtw_linear_algebra_complete;

    return &factory;
}

PMF_DEPLOY_STATIC McLinearAlgebraStatus
                  create_auto_linear_algebra_complete(const McLinearAlgebraFactory* factory,
                                                      McLinearAlgebra**             linAlg,
                                                      const PmSparsityPattern*      pattern,
                                                      size_t                        nPerm)
{
    const McLinearAlgebraFactory* sparse_la = mc_get_csparse_linear_algebra();
    const McLinearAlgebraFactory* full_la   = get_rtw_linear_algebra();
    McLinearAlgebraStatus         result;
    real_T                        N   = (real_T)pattern->mNumCol;
    real_T                        nnz = (real_T)pattern->mJc[pattern->mNumCol];

    (void)factory;

    if(N <= 20.0 || (N <= 100.0 && nnz/N > 0.1125*N - 1.25) || 
       (N > 100 && nnz/N > 0.277*N - 17.7)) {
        result = full_la->mCreateLinearAlgebraComplete(full_la, linAlg, pattern, nPerm);
    } else {
        result = sparse_la->mCreateLinearAlgebraComplete(sparse_la, linAlg, pattern, nPerm);
    }

    return result;
}

PMF_DEPLOY_STATIC McLinearAlgebraStatus
                  create_auto_linear_algebra(const McLinearAlgebraFactory* factory,
                                             McLinearAlgebra**             linAlg,
                                             const PmSparsityPattern*      pattern)
{
    return create_auto_linear_algebra_complete(factory, linAlg, pattern, pattern->mNumCol);
}

/*!
 * Returns a static pointer to McLinearAlgebraFactory to be used by the client
 */
PMF_DEPLOY_STATIC const McLinearAlgebraFactory* get_auto_linear_algebra(void)
{
    static McLinearAlgebraFactory factory;

    factory.mCreateLinearAlgebra = &create_auto_linear_algebra;

    factory.mCreateLinearAlgebraComplete = &create_auto_linear_algebra_complete;

    return &factory;
}
