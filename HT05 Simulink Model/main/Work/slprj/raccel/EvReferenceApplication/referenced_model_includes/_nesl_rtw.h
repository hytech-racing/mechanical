#ifndef ___nesl_rtw_h__
#define ___nesl_rtw_h__
#include "pm_std.h"
#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
typedef struct McSparseMatrixTag McSparseMatrix;struct McSparseMatrixTag{
PmSparsityPattern*mPattern;PmRealVector*mPr;};McSparseMatrix*
mc_assemble_sparse_matrix(const PmSparsityPattern*patternPtr,const PmRealVector
*prPtr,PmAllocator*allocatorPtr);void mc_disassemble_sparse_matrix(
McSparseMatrix*matrix,PmAllocator*allocatorPtr);McSparseMatrix*
mc_create_sparse_matrix(size_t nNzMax,size_t nRow,size_t nCol,PmAllocator*
allocatorPtr);McSparseMatrix*mc_copy_sparse_matrix(const McSparseMatrix*
matrixPtr,PmAllocator*allocatorPtr);McSparseMatrix*
mc_create_identity_sparse_matrix(size_t n,PmAllocator*allocatorPtr);
McSparseMatrix*mc_create_hcat_sparse_matrix(const McSparseMatrix*a,const
McSparseMatrix*b,PmAllocator*allocatorPtr);McSparseMatrix*
mc_create_vcat_sparse_matrix(const McSparseMatrix*a,const McSparseMatrix*b,
PmAllocator*allocatorPtr);McSparseMatrix*mc_create_section_sparse_matrix(const
McSparseMatrix*matrix,size_t rowStart,size_t rowEndPlusOne,size_t colStart,
size_t colEndPlusOne,PmAllocator*allocatorPtr);McSparseMatrix*
mc_create_transpose_sparse_matrix(const McSparseMatrix*matrix,PmAllocator*
allocatorPtr);McSparseMatrix*mc_create_right_padded_sparse_matrix(const
McSparseMatrix*matrix,size_t padding,PmAllocator*allocatorPtr);McSparseMatrix*
mc_create_bottom_padded_sparse_matrix(const McSparseMatrix*matrix,size_t
padding,PmAllocator*allocatorPtr);McSparseMatrix*
mc_create_product_sparse_matrix(const McSparseMatrix*A,const McSparseMatrix*B,
PmAllocator*allocatorPtr);McSparseMatrix*mc_create_sum_sparse_matrix(const
McSparseMatrix*A,const McSparseMatrix*B,PmAllocator*allocatorPtr);
McSparseMatrix*mc_create_sparse_submatrix(const McSparseMatrix*matrix,const
PmBoolVector*selectedRows,const PmBoolVector*selectedCols,PmAllocator*
allocatorPtr);McSparseMatrix*mc_create_sparse_supermatrix(const McSparseMatrix
*matrix,const PmBoolVector*rows,const PmBoolVector*cols,PmAllocator*al);
McSparseMatrix*mc_create_sparse_restriction(const McSparseMatrix*matrix,const
PmBoolVector*selectedRows,const PmBoolVector*selectedCols,PmAllocator*
allocatorPtr);McSparseMatrix*mc_extract_col(const McSparseMatrix*matrix,size_t
col,PmAllocator*allocatorPtr);McSparseMatrix*mc_extract_row(const
McSparseMatrix*matrix,size_t row,PmAllocator*allocatorPtr);McSparseMatrix*
mc_remove_col(const McSparseMatrix*matrix,size_t col,PmAllocator*allocatorPtr)
;McSparseMatrix*mc_remove_row(const McSparseMatrix*matrix,size_t row,
PmAllocator*allocatorPtr);void mc_destroy_sparse_matrix(McSparseMatrix*
matrixPtr,PmAllocator*allocatorPtr);McSparseMatrix*mc_remove_element(const
McSparseMatrix*matrix,size_t element,PmAllocator*allocator);McSparseMatrix*
mc_clean_sparse_matrix(const McSparseMatrix*in,PmAllocator*allocator);typedef
struct NeslContLtiDataTag NeslContLtiData;struct NeslContLtiDataTag{
PmRealVector*mLtiFlatU;McSparseMatrix mDx;McSparseMatrix mDu;PmRealVector mC0;
boolean_T mEmptyDx;boolean_T mEmptyDu;};
#ifdef __cplusplus
}
#endif /* __cplusplus */
#include "pm_inline.h"
#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
typedef struct NeslSimulationDataTag NeslSimulationData;typedef struct
NeslSimulationDataDataTag NeslSimulationDataData;struct NeslSimulationDataTag{
PmRealVector*(*mTime)(const NeslSimulationData*);PmRealVector*(*mContStates)(
const NeslSimulationData*);PmIntVector*(*mModeVector)(const NeslSimulationData
*);PmRealVector*(*mDiscStates)(const NeslSimulationData*);PmIntVector*(*
mSampleHits)(const NeslSimulationData*);PmRealVector*(*mOutputs)(const
NeslSimulationData*);PmRealVector*(*mDx)(const NeslSimulationData*);
PmRealVector*(*mNonSampledZCs)(const NeslSimulationData*);PmRealVector*(*
mResiduals)(const NeslSimulationData*);PmRealVector*(*mTolerances)(const
NeslSimulationData*);PmSparsityPattern*(*mM_P)(const NeslSimulationData*);
PmRealVector*(*mMassMatrixPr)(const NeslSimulationData*);PmSparsityPattern*(*
mLinJacobianPattern)(const NeslSimulationData*);PmRealVector*(*mLinJacobian)(
const NeslSimulationData*);PmSparsityPattern*(*mSolJacobianPattern)(const
NeslSimulationData*);PmRealVector*(*mSolJacobianPr)(const NeslSimulationData*)
;PmRealVector*(*mNumjacDxLo)(const NeslSimulationData*);PmRealVector*(*
mNumjacDxHi)(const NeslSimulationData*);PmRealVector*(*mInputValues)(const
NeslSimulationData*);PmIntVector*(*mInputOffsets)(const NeslSimulationData*);
boolean_T*(*mFoundZcEvents)(const NeslSimulationData*);boolean_T*(*
mIsMajorTimeStep)(const NeslSimulationData*);boolean_T*(*mIsSolverAssertCheck)
(const NeslSimulationData*);boolean_T*(*mIsSolverCheckingCIC)(const
NeslSimulationData*);boolean_T*(*mIsComputingJacobian)(const NeslSimulationData
*);boolean_T*(*mIsEvaluatingF0)(const NeslSimulationData*);boolean_T*(*
mIsSolverRequestingReset)(const NeslSimulationData*);boolean_T*(*
mIsFundamentalSampleHit)(const NeslSimulationData*);boolean_T*(*
mCstateHasChanged)(const NeslSimulationData*);void(*mDestroy)(
NeslSimulationData*);NeslSimulationDataData*mData;};PMF_DEPLOY_STATIC
PmRealVector nesl_get_time(const NeslSimulationData*sd){return*(sd->mTime(sd))
;}PMF_DEPLOY_STATIC PmRealVector nesl_get_cont_states(const NeslSimulationData
*sd){return*(sd->mContStates(sd));}PMF_DEPLOY_STATIC PmIntVector
nesl_get_mode_vector(const NeslSimulationData*sd){return*(sd->mModeVector(sd))
;}PMF_DEPLOY_STATIC PmRealVector nesl_get_disc_states(const NeslSimulationData
*sd){return*(sd->mDiscStates(sd));}PMF_DEPLOY_STATIC PmIntVector
nesl_get_sample_hits(const NeslSimulationData*sd){return*(sd->mSampleHits(sd))
;}PMF_DEPLOY_STATIC PmRealVector nesl_get_outputs(const NeslSimulationData*sd)
{return*(sd->mOutputs(sd));}PMF_DEPLOY_STATIC PmRealVector nesl_get_dx(const
NeslSimulationData*sd){return*(sd->mDx(sd));}PMF_DEPLOY_STATIC PmRealVector
nesl_get_nonsampled_zcs(const NeslSimulationData*sd){return*(sd->
mNonSampledZCs(sd));}PMF_DEPLOY_STATIC PmRealVector nesl_get_residuals(const
NeslSimulationData*sd){return*(sd->mResiduals(sd));}PMF_DEPLOY_STATIC
PmRealVector nesl_get_tolerances(const NeslSimulationData*sd){return*(sd->
mTolerances(sd));}PMF_DEPLOY_STATIC PmSparsityPattern
nesl_get_mass_matrix_pattern(const NeslSimulationData*sd){return*(sd->mM_P(sd)
);}PMF_DEPLOY_STATIC PmRealVector nesl_get_mass_matrix_pr(const
NeslSimulationData*sd){return*(sd->mMassMatrixPr(sd));}PMF_DEPLOY_STATIC
PmSparsityPattern nesl_get_lin_jacobian_pattern(const NeslSimulationData*sd){
return*(sd->mLinJacobianPattern(sd));}PMF_DEPLOY_STATIC PmRealVector
nesl_get_lin_jacobian(const NeslSimulationData*sd){return*(sd->mLinJacobian(sd
));}PMF_DEPLOY_STATIC PmSparsityPattern nesl_get_sol_jacobian_pattern(const
NeslSimulationData*sd){return*(sd->mSolJacobianPattern(sd));}PMF_DEPLOY_STATIC
PmRealVector nesl_get_sol_jacobian_pr(const NeslSimulationData*sd){return*(sd
->mSolJacobianPr(sd));}PMF_DEPLOY_STATIC PmRealVector nesl_get_numjac_dx_lo(
const NeslSimulationData*sd){return*(sd->mNumjacDxLo(sd));}PMF_DEPLOY_STATIC
PmRealVector nesl_get_numjac_dx_hi(const NeslSimulationData*sd){return*(sd->
mNumjacDxHi(sd));}PMF_DEPLOY_STATIC PmRealVector nesl_get_input_values(const
NeslSimulationData*sd){return*(sd->mInputValues(sd));}PMF_DEPLOY_STATIC
PmIntVector nesl_get_input_offsets(const NeslSimulationData*sd){return*(sd->
mInputOffsets(sd));}PMF_DEPLOY_STATIC boolean_T nesl_found_zcs(const
NeslSimulationData*sd){return*(sd->mFoundZcEvents(sd));}PMF_DEPLOY_STATIC
boolean_T nesl_is_major_time_step(const NeslSimulationData*sd){return*(sd->
mIsMajorTimeStep(sd));}PMF_DEPLOY_STATIC boolean_T nesl_is_solver_assert_check
(const NeslSimulationData*sd){return*(sd->mIsSolverAssertCheck(sd));}
PMF_DEPLOY_STATIC boolean_T nesl_is_solver_checking_cic(const
NeslSimulationData*sd){return*(sd->mIsSolverCheckingCIC(sd));}
PMF_DEPLOY_STATIC boolean_T nesl_is_computing_jacobian(const NeslSimulationData
*sd){return*(sd->mIsComputingJacobian(sd));}PMF_DEPLOY_STATIC boolean_T
nesl_is_evaluating_f0(const NeslSimulationData*sd){return*(sd->mIsEvaluatingF0
(sd));}PMF_DEPLOY_STATIC boolean_T nesl_is_solver_requesting_reset(const
NeslSimulationData*sd){return*(sd->mIsSolverRequestingReset(sd));}
PMF_DEPLOY_STATIC boolean_T nesl_is_fundamental_sample_hit(const
NeslSimulationData*sd){return*(sd->mIsFundamentalSampleHit(sd));}
PMF_DEPLOY_STATIC void nesl_set_cstate_has_changed(const NeslSimulationData*sd
,boolean_T value){*(sd->mCstateHasChanged(sd))=value;}PMF_DEPLOY_STATIC
boolean_T nesl_get_cstate_has_changed(const NeslSimulationData*sd){return*(sd
->mCstateHasChanged(sd));}PMF_DEPLOY_STATIC boolean_T nesl_has_sample_hits(
const NeslSimulationData*sd){size_t i;PmIntVector sample_hits=
nesl_get_sample_hits(sd);for(i=0;i<sample_hits.mN;i++){if(sample_hits.mX[i]){
return true;}}return false;}
#ifdef __cplusplus
}
#endif /* __cplusplus */
#include "pm_inline.h"
#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
typedef struct NeuDiagnosticTreeTag NeuDiagnosticTree;typedef struct
NeuDiagnosticManagerTag NeuDiagnosticManager;typedef enum{
NEU_DIAGNOSTIC_LEVEL_INVALID= -1,NEU_DIAGNOSTIC_LEVEL_TERSE,
NEU_DIAGNOSTIC_LEVEL_VERBOSE,NEU_NUM_DIAGNOSTIC_LEVELS}NeuDiagnosticLevel;
typedef enum NeEquationDomainTag{NE_EQUATION_DOMAIN_INVALID= -1,
NE_EQUATION_DOMAIN_TIME,NE_EQUATION_DOMAIN_FREQUENCY_REAL,
NE_EQUATION_DOMAIN_FREQUENCY_IMAG,NE_EQUATION_DOMAIN_COMPLEX,
NE_EQUATION_DOMAIN_DELAY,NE_EQUATION_DOMAIN_NUM}NeEquationDomain;
#ifdef __cplusplus
}
#endif /* __cplusplus */
#include "ne_std.h"
#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
typedef unsigned int NeDsEquationFlag;typedef unsigned int NeDsICRFlag;typedef
unsigned int NeDsVariableFlag;typedef struct NeDsEquationDataTag{const char*
mFullPath;size_t mIndex;NeDsEquationFlag mFlags;NeEquationDomain mDomain;const
char*mObject;size_t mNumRanges;size_t mStart;boolean_T mIsSwitchedLinear;
real_T mScale;const char*mUnit;}NeEquationData;typedef struct NeDsICRDataTag{
const char*mFullPath;size_t mIndex;NeDsICRFlag mFlags;const char*mObject;
size_t mNumRanges;size_t mStart;}NeICRData;typedef struct NeVariableDataTag{
const char*mFullPath;size_t mIndex;NeDsVariableFlag mFlags;const char*mObject;
real_T mScale;const char*mUnit;real_T mICValue;boolean_T mIsDifferential;
boolean_T mHasInitialRange;size_t mM;size_t mN;NeInitMode mInitMode;const char
*mDescription;}NeVariableData;typedef struct NeObservableDataTag{const char*
mFullPath;const char*mObject;size_t mM;size_t mN;const char*mUnit;real_T
mNominalValue;const char*mNominalUnit;NeNominalSource mNominalSource;
NeInitMode mInitMode;boolean_T mIsDetermined;boolean_T mIsDifferential;
NeFreqTimeType mFreqTimeType;boolean_T mIsExternal;boolean_T mIsVariable;const
char*mDescription;}NeObservableData;typedef struct NeModeDataTag{const char*
mFullPath;size_t mIndex;const char*mObject;int32_T mICValue;const char*
mDescription;}NeModeData;typedef enum NeRangeTypeIdTag{NE_RANGE_TYPE_INVALID= -
1,NE_RANGE_TYPE_NORMAL,NE_RANGE_TYPE_PROTECTED,NE_RANGE_TYPE_NA,
NE_RANGE_TYPE_NUM}NeRangeTypeId;typedef struct NeRangeTag{const char*mFileName
;size_t mBeginLine;size_t mBeginColumn;size_t mEndLine;size_t mEndColumn;
NeRangeTypeId mType;}NeRange;typedef enum NeZcTypeTag{NE_ZC_TYPE_INVALID= -1,
NE_ZC_TYPE_TRUE,NE_ZC_TYPE_FALSE,NE_ZC_TYPE_EITHER,NE_ZC_TYPE_NUM}NeZcType;
typedef struct NeZCDataTag{const char*mObject;size_t mNumRanges;size_t mStart;
const char*mPath;const char*mDescriptor;NeZcType mType;}NeZCData;typedef struct
NeAssertDataTag{const char*mObject;size_t mNumRanges;size_t mStart;const char*
mPath;const char*mDescriptor;boolean_T mIsWarn;const char*mMessage;const char*
mMessageID;}NeAssertData;typedef struct NeParameterDataTag{const char*
mFullPath;const char*mObject;const char*mDescription;size_t mIndex;size_t mM;}
NeParameterData;typedef enum SscDiagnosticSettingTag{SSC_DIAGNOSTIC_INVALID= -
1,SSC_DIAGNOSTIC_ERROR,SSC_DIAGNOSTIC_WARNING,SSC_DIAGNOSTIC_NONE,
SSC_DIAGNOSTIC_NUM}SscDiagnosticSetting;typedef enum SscLoggingSettingTag{
SSC_LOGGING_INVALID= -1,SSC_LOGGING_NONE,SSC_LOGGING_ALL,SSC_LOGGING_LOCAL,
SSC_LOGGING_NUM}SscLoggingSetting;typedef struct NeModelParametersTag
NeModelParameters;typedef enum NeSolverTypeTag{NE_SOLVER_TYPE_INVALID= -1,
NE_SOLVER_TYPE_DAE,NE_SOLVER_TYPE_ODE,NE_SOLVER_TYPE_DISCRETE,
NE_SOLVER_TYPE_NUM}NeSolverType;struct NeModelParametersTag{NeSolverType
mSolverType;real_T mSolverTolerance;boolean_T mVariableStepSolver;boolean_T
mIsUsingODEN;real_T mFixedStepSize;real_T mStartTime;boolean_T
mLoadInitialState;boolean_T mUseSimState;boolean_T mLinTrimCompile;
SscLoggingSetting mLoggingMode;real_T mRTWModifiedTimeStamp;};typedef struct
NeParameterBundleTag{PmIntVector mLogicalParameters;PmIntVector
mIntegerParameters;PmIntVector mIndexParameters;PmRealVector mRealParameters;}
NeParameterBundle;typedef struct NeParameterVectorTag{size_t mN;
NeParameterData*mX;}NeParameterVector;typedef struct NeParameterInfoTag{
NeParameterVector mLogicals;NeParameterVector mIntegers;NeParameterVector
mIndices;NeParameterVector mReals;}NeParameterInfo;typedef struct
SlSparseMatrixTag{PmSparsityPattern*mPattern;PmRealVector*mPr;}SlSparseMatrix;
typedef struct SLMatricesTag{boolean_T mIsYAffineTermUpdated;boolean_T
mIsXP0AffineTermUpdated;size_t mOffsetX0InD;size_t mOffsetU0InD;size_t
mSlDaeNumDiscreteMajor;size_t mSlDaeNumCache;PmRealVector mAffineY;
PmRealVector mAffineXP0;PmRealVector mYX0;PmRealVector mYU0;SlSparseMatrix
mDxddotDxd;SlSparseMatrix mDxddotDu;SlSparseMatrix mDyDxd;SlSparseMatrix mDyDu
;SlSparseMatrix mDxaDxd;SlSparseMatrix mDxaDu;PmIntVector mMode;PmIntVector
mMajor;PmIntVector mCache;}SLMatrices;typedef struct NeCustomDataSizeTag
NeCustomDataSize;typedef struct NeCustomDataTag NeCustomData;struct
NeCustomDataSizeTag{size_t mDoubleSize;size_t mIntegerSize;};struct
NeCustomDataTag{double*mDouble;int32_T*mInteger;NeCustomDataSize mSizes;
NeCustomData*mChildData;};NeCustomDataSize ne_get_zero_custom_data_size(void);
NeCustomData*ne_allocate_custom_data(NeCustomDataSize sizes);NeCustomData*
ne_allocate_empty_custom_data(void);void ne_free_custom_data(NeCustomData*ncd)
;typedef struct NeslSimulationSizesTag{size_t mNumContStates;size_t
mNumDiscStates;size_t mNumModes;size_t mNumOutputs;size_t mNumZCs;size_t
mNumRanges;size_t mNumSamples;size_t mNumMassMatrixNzMax;size_t
mNumLinJacobianNzMax;size_t mNumSolJacobianNzMax;size_t mNumTrimResiduals;
boolean_T mDisableProjection;boolean_T mDefaultLinJacobian;boolean_T
mDisableSolJacobian;boolean_T mIsMConstant;boolean_T mUpdateJacobianAtReset;
boolean_T mIsDae;boolean_T mRegistersStateNames;boolean_T mHasUpdate;const
PmIntVector*mNumInputs;const PmBoolVector*mDirectFeedthrough;}
NeslSimulationSizes;typedef struct NeslStateNameDataTag{size_t mWidth;const
char*mStateName;const char*mBlockName;}NeslStateNameData;typedef struct
NeslStateNameVectorTag{NeslStateNameData*mStateNames;size_t mNumStates;}
NeslStateNameVector;typedef enum NeslSimulatorMethodIdTag{NESL_SIM_INVALID= -1
,NESL_SIM_INITIALIZEONCE,NESL_SIM_INITSYSTEMMATRICES,NESL_SIM_OUTPUTS,
NESL_SIM_UPDATE,NESL_SIM_PROJECTION,NESL_SIM_MASSMATRIX,NESL_SIM_DERIVATIVES,
NESL_SIM_FORCINGFUNCTION,NESL_SIM_ZEROCROSSINGS,NESL_SIM_LINJACOBIAN,
NESL_SIM_SOLJACOBIAN,NESL_SIM_LINJACOBIANIRJC,NESL_SIM_SOLJACOBIANIRJC,
NESL_SIM_RESIDUALS,NESL_SIM_TOLERANCES,NESL_SIM_NUMJAC_DX_BOUNDS,
NESL_NUM_SIMULATOR_METHODS}NeslSimulatorMethodId;typedef struct
NeslSimulatorTag NeslSimulator;typedef struct NeslSimulatorUserDataTag
NeslSimulatorUserData;typedef enum NeslSimulatorStatusTag{NESL_SIM_ERROR= -1,
NESL_SIM_OK}NeslSimulatorStatus;typedef NeslSimulatorStatus(*
NeslSimulatorMethod)(const NeslSimulator*,const NeslSimulationData*,
NeuDiagnosticManager*);typedef void(*NeslSimulatorInitializeStartStatus)(void*
);typedef void(*NeslSimulatorInitializeEndStatus)(void*);struct
NeslSimulatorTag{NeslSimulatorUserData*mUserData;NeslSimulatorMethod mMethods[
NESL_NUM_SIMULATOR_METHODS];NeslSimulationSizes(*mSizes)(const NeslSimulator*s
);void(*mStateNames)(const NeslSimulator*s,const NeslStateNameVector*snv);void
(*mSampleTimes)(const NeslSimulator*s,PmRealVector*periods,PmRealVector*
offsets);NeslSimulatorStatus(*mInitialize)(const NeslSimulator*s,const
NeModelParameters*mp,NeuDiagnosticManager*mgr,
NeslSimulatorInitializeStartStatus start,NeslSimulatorInitializeEndStatus end,
void*rb);const NeslContLtiData*(*mGetContLtiData)(const NeslSimulator*s);const
SLMatrices**(*mGetSLMatrices)(const NeslSimulator*s);void(*mDestroy)(
NeslSimulator*);NeCustomData*(*mGetCustomData)(const NeslSimulator*);
NeslSimulatorStatus(*mSetCustomData)(const NeCustomData*,const NeslSimulator*,
NeuDiagnosticManager*);const NeZCData*mZCData;const NeRange*mRanges;
NeParameterInfo mParameterInfo;void(*mSetParameters)(const NeslSimulator*,
const NeParameterBundle*);};PMF_DEPLOY_STATIC NeslSimulatorStatus
ne_simulator_method(const NeslSimulator*simulator_ptr,NeslSimulatorMethodId
method_id,const NeslSimulationData*sim_data,NeuDiagnosticManager*mgr){return
simulator_ptr->mMethods[method_id](simulator_ptr,sim_data,mgr);}typedef struct
NeProfilerTag NeProfiler;typedef struct NeSolverParametersTag
NeSolverParameters;typedef enum NeLocalSolverChoiceTag{
NE_INVALID_ADVANCER_CHOICE= -1,NE_BACKWARD_EULER_ADVANCER,
NE_TRAPEZOIDAL_ADVANCER,NE_NDF2_ADVANCER,NE_VARIABLE_STEP_ADVANCER,
NE_PARTITIONING_ADVANCER,NE_NUM_ADVANCER_CHOICES}NeLocalSolverChoice;typedef
enum NeLinearAlgebraChoiceTag{NE_INVALID_LA_CHOICE= -1,NE_AUTO_LA,NE_SPARSE_LA
,NE_FULL_LA,NE_NUM_LA_CHOICES}NeLinearAlgebraChoice;typedef enum
NeEquationFormulationChoiceTag{NE_INVALID_EF_CHOICE= -1,NE_TIME_EF,
NE_FREQUENCY_TIME_EF,NE_NUM_EF_CHOICES}NeEquationFormulationChoice;typedef enum
NePartitionStorageMethodTag{NE_PARTITIONING_INVALID= -1,
NE_PARTITIONING_AS_NEEDED,NE_PARTITIONING_EXHAUSTIVE,NE_PARTITIONING_NUM}
NePartitionStorageMethod;typedef enum NePartitionMethodTag{
NE_PARTITIONING_METHOD_INVALID= -1,NE_PARTITIONING_METHOD_ROBUST,
NE_PARTITIONING_METHOD_FAST,NE_PARTITIONING_METHOD_ALG_EQS,
NE_PARTITIONING_METHOD_ALL_EQS,NE_PARTITIONING_METHOD_MERGE,
NE_PARTITIONING_METHOD_NUM}NePartitionMethod;struct NeSolverParametersTag{
boolean_T mProfile;boolean_T mUseLocalSampling;boolean_T
mEnableSwitchedLinearOptims;boolean_T mFrequencyDomain;boolean_T mUseCCode;
real_T mRelTol;real_T mAbsTol;real_T mMinStep;boolean_T mToWorkspace;boolean_T
mRevertToSquareIcSolve;size_t mNumHomotopyIterations;boolean_T mPhasorMode;
size_t mPhasorModeNumHarmonics;boolean_T mDoDC;real_T mResidualTolerance;
boolean_T mUseLocalSolver;NeLocalSolverChoice mLocalSolverChoice;real_T
mLocalSolverSampleTime;boolean_T mDoFixedCost;size_t mMaxNonlinIter;size_t
mMaxModeIter;NeLinearAlgebraChoice mLinearAlgebra;NeEquationFormulationChoice
mEquationFormulation;size_t mDelaysMemoryBudget;boolean_T mAutomaticFiltering;
real_T mFilteringTimeConstant;NePartitionStorageMethod mPartitionStorageMethod
;size_t mPartitionMemoryBudget;NePartitionMethod mPartitionMethod;};typedef
struct NeOutputParametersTag{size_t mDaeIndex;size_t mOutputFunctionIndex;}
NeOutputParameters;
#ifdef __cplusplus
}
#endif /* __cplusplus */
#include "pm_std.h"
#include "pm_std.h"
#include "pm_std.h"
#include "stdarg.h"
#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
typedef NeuDiagnosticTree*NeuDiagnosticId;typedef struct
NeuDiagnosticManagerPrivateDataTag NeuDiagnosticManagerPrivateData;struct
NeuDiagnosticManagerTag{NeuDiagnosticManagerPrivateData*mPrivateData;
NeuDiagnosticId(*mStartSubtree)(const NeuDiagnosticManager*mgr);void(*
mFinishSubtree)(const NeuDiagnosticManager*mgr,NeuDiagnosticId diagId,
NeuDiagnosticLevel verbosity,PmfMessageId msgId,va_list args);void(*
mFinishSubtreeUser)(const NeuDiagnosticManager*mgr,NeuDiagnosticId diagId,
NeuDiagnosticLevel verbosity,PmfMessageId msgId,va_list args);void(*
mClearSubtree)(const NeuDiagnosticManager*mgr,NeuDiagnosticId diagId);void(*
mTransferTree)(const NeuDiagnosticManager*dest,const NeuDiagnosticManager*src)
;const NeuDiagnosticTree*(*mGetInitialTree)(const NeuDiagnosticManager*mgr);
void(*mDestroy)(NeuDiagnosticManager*mgr);};PmfMessageId
neu_diagnostic_finish_subtree(const NeuDiagnosticManager*mgr,NeuDiagnosticId
diagId,NeuDiagnosticLevel verbosity,PmfMessageId msgId,...);PmfMessageId
neu_diagnostic_finish_subtree_user(const NeuDiagnosticManager*mgr,
NeuDiagnosticId diagId,NeuDiagnosticLevel verbosity,PmfMessageId msgId,...);
PmfMessageId neu_diagnostic_one_node_subtree(const NeuDiagnosticManager*mgr,
NeuDiagnosticLevel verbosity,PmfMessageId msgId,...);PmfMessageId
neu_diagnostic_finish_subtree_preformatted(const NeuDiagnosticManager*mgr,
NeuDiagnosticId diagId,NeuDiagnosticLevel verbosity,PmfMessageId msgId,const
char*msg);PmfMessageId neu_diagnostic_one_node_subtree_preformatted(const
NeuDiagnosticManager*mgr,NeuDiagnosticLevel verbosity,PmfMessageId msgId,const
char*msg);NeuDiagnosticManager*neu_create_diagnostic_manager(PmAllocator*alloc
);typedef struct NeslRtpManagerTag NeslRtpManager;typedef struct
NeslRtpManagerUserDataTag NeslRtpManagerUserData;struct NeslRtpManagerTag{
NeslRtpManagerUserData*mUserData;void(*mDestroy)(NeslRtpManager*);
NeParameterInfo(*mParameterInfo)(const NeslRtpManager*);boolean_T(*
mSetParameters)(const NeslRtpManager*,double,const NeParameterBundle*,
NeuDiagnosticManager*);};typedef enum NeslSimulatorCategoryTag{
NESL_SIMULATOR_CATEGORY_INVALID= -1,NESL_SIMULATOR_CATEGORY_STATE,
NESL_SIMULATOR_CATEGORY_OUTPUT,NESL_SIMULATOR_CATEGORY_NUM}
NeslSimulatorCategory;typedef struct NeslSimulatorGroupTag NeslSimulatorGroup;
typedef struct NeslSimulatorGroupDataTag NeslSimulatorGroupData;struct
NeslSimulatorGroupTag{const NeslSimulator*(*mSimulator)(const
NeslSimulatorGroup*g,NeslSimulatorCategory c,size_t i);const NeslRtpManager*(*
mRtpManager)(const NeslSimulatorGroup*g,size_t i);NeslSimulatorGroup*(*mClone)
(const NeslSimulatorGroup*g);void(*mGetReference)(NeslSimulatorGroup*g);void(*
mReleaseReference)(NeslSimulatorGroup*g);const NeProfiler*mProfiler;
NeslSimulatorGroupData*mData;size_t mNumSimulators[NESL_SIMULATOR_CATEGORY_NUM
];size_t mNumRtpManagers;};typedef struct NeDaeTag NeDae;PmfMessageId
nesl_register_simulator_group(const char*key,const size_t numDae,NeDae*const*
dae,const NeSolverParameters*sp,const NeModelParameters*mp,const size_t
numOutputs,const NeOutputParameters*op,const size_t numRtpDaes,const int*
rtpDaes);typedef struct NeslSimulatorGroupRegistryTag
NeslSimulatorGroupRegistry;typedef struct NeslSimulatorGroupRegistryDataTag
NeslSimulatorGroupRegistryData;struct NeslSimulatorGroupRegistryTag{void(*
mInsert)(const NeslSimulatorGroupRegistry*registry,const char*key,
NeslSimulatorGroup*group);void(*mErase)(const NeslSimulatorGroupRegistry*
registry,const char*key);void(*mEraseModel)(const NeslSimulatorGroupRegistry*
registry,const char*model);NeslSimulatorGroup*(*mLookup)(const
NeslSimulatorGroupRegistry*registry,const char*key);const NeslSimulator*(*
mLeaseSimulator)(const NeslSimulatorGroupRegistry*registry,const char*key,
NeslSimulatorCategory cat,size_t idx);const NeslRtpManager*(*mLeaseRtpManager)
(const NeslSimulatorGroupRegistry*registry,const char*key,size_t idx);
boolean_T(*mHasBeenCloned)(const NeslSimulatorGroupRegistry*registry,const char
*key);void(*mClear)(const NeslSimulatorGroupRegistry*registry);void(*mDestroy)
(NeslSimulatorGroupRegistry*registry);NeslSimulatorGroupRegistryData*mData;};
const NeslSimulatorGroupRegistry*nesl_get_registry(void);int_T
pm_create_sparsity_pattern_fields(PmSparsityPattern*patternPtr,size_t nNzMax,
size_t nRow,size_t nCol,PmAllocator*allocator);PmSparsityPattern*
pm_create_sparsity_pattern(size_t nNzMax,size_t nRow,size_t nCol,PmAllocator*
allocatorPtr);void pm_sp_equals_sp(PmSparsityPattern*Ap,const PmSparsityPattern
*Bp);boolean_T pm_sp_equalequals_sp(const PmSparsityPattern*Ap,const
PmSparsityPattern*Bp);PmSparsityPattern*pm_copy_sparsity_pattern(const
PmSparsityPattern*input_pattern,PmAllocator*allocatorPtr);void
pm_destroy_sparsity_pattern_fields(PmSparsityPattern*patternPtr,PmAllocator*
allocator);void pm_destroy_sparsity_pattern(PmSparsityPattern*patternPtr,
PmAllocator*allocatorPtr);PmSparsityPattern*pm_create_full_sparsity_pattern(
size_t nrows,size_t ncols,PmAllocator*allocatorPtr);PmSparsityPattern*
pm_create_empty_sparsity_pattern(size_t nrows,size_t ncols,PmAllocator*
allocatorPtr);PmSparsityPattern*pm_create_partial_identity_sparsity_pattern(
size_t p,size_t n,PmAllocator*allocatorPtr);PmSparsityPattern*
pm_create_identity_sparsity_pattern(size_t n,PmAllocator*allocatorPtr);void
pm_rv_equals_rv(const PmRealVector*xPtr,const PmRealVector*yPtr);void
pm_iv_equals_iv(const PmIntVector*xPtr,const PmIntVector*yPtr);void
pm_bv_equals_bv(const PmBoolVector*xPtr,const PmBoolVector*yPtr);void
pm_cv_equals_cv(const PmCharVector*xPtr,const PmCharVector*yPtr);boolean_T
pm_rv_equalequals_rv(const PmRealVector*xPtr,const PmRealVector*yPtr);
boolean_T pm_iv_equalequals_iv(const PmIntVector*xPtr,const PmIntVector*yPtr);
boolean_T pm_bv_equalequals_bv(const PmBoolVector*xPtr,const PmBoolVector*yPtr
);int_T pm_create_real_vector_fields(PmRealVector*vecPtr,size_t size,
PmAllocator*allocatorPtr);PmRealVector*pm_create_real_vector(size_t numElements
,PmAllocator*allocatorPtr);PmRealVector*pm_copy_real_vector(const PmRealVector
*vecPtr,PmAllocator*allocatorPtr);void pm_destroy_real_vector_fields(
PmRealVector*vecPtr,PmAllocator*allocatorPtr);void pm_destroy_real_vector(
PmRealVector*vecPtr,PmAllocator*allocatorPtr);int_T pm_create_int_vector_fields
(PmIntVector*vecPtr,size_t size,PmAllocator*allocatorPtr);PmIntVector*
pm_create_int_vector(size_t numElements,PmAllocator*allocatorPtr);PmIntVector*
pm_copy_int_vector(const PmIntVector*vecPtr,PmAllocator*allocatorPtr);void
pm_destroy_int_vector_fields(PmIntVector*vecPtr,PmAllocator*allocatorPtr);void
pm_destroy_int_vector(PmIntVector*vecPtr,PmAllocator*allocatorPtr);int_T
pm_create_bool_vector_fields(PmBoolVector*vecPtr,size_t size,PmAllocator*
allocatorPtr);PmBoolVector*pm_create_bool_vector(size_t numElements,
PmAllocator*allocatorPtr);void pm_destroy_bool_vector_fields(PmBoolVector*
vecPtr,PmAllocator*allocatorPtr);void pm_destroy_bool_vector(PmBoolVector*
vecPtr,PmAllocator*allocatorPtr);PmBoolVector*pm_copy_bool_vector(const
PmBoolVector*vecPtr,PmAllocator*allocatorPtr);int_T
pm_create_char_vector_fields(PmCharVector*vecPtr,size_t size,PmAllocator*
allocatorPtr);PmCharVector*pm_create_char_vector(size_t numElements,
PmAllocator*allocatorPtr);void pm_destroy_char_vector_fields(PmCharVector*
vecPtr,PmAllocator*allocatorPtr);void pm_destroy_char_vector(PmCharVector*
vecPtr,PmAllocator*allocatorPtr);int_T pm_create_size_vector_fields(
PmSizeVector*vecPtr,size_t size,PmAllocator*allocatorPtr);PmSizeVector*
pm_create_size_vector(size_t numElements,PmAllocator*allocatorPtr);void
pm_destroy_size_vector_fields(PmSizeVector*vecPtr,PmAllocator*allocatorPtr);
void pm_destroy_size_vector(PmSizeVector*vecPtr,PmAllocator*allocatorPtr);void
pm_sv_equals_sv(const PmSizeVector*xPtr,const PmSizeVector*yPtr);boolean_T
pm_sv_equalequals_sv(const PmSizeVector*xPtr,const PmSizeVector*yPtr);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#include "mc_std.h"
#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
const McLinearAlgebraFactory*mc_get_csparse_linear_algebra(void);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#include "mc_std.h"
#include "pm_std.h"
#include "ne_std.h"
#include "pm_inline.h"
#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
typedef enum NeDsIoTypeTag{UNKNOWN_IO_TYPE= -1,NE_INPUT_IO_TYPE,
NE_OUTPUT_IO_TYPE,NUM_IO_TYPES}NeDsIoType;typedef struct NeDsIoInfoTag{const
char*mName;size_t mM;size_t mN;const char*mUnit;const char*mIdentifier;}
NeDsIoInfo;PMF_DEPLOY_STATIC size_t ne_get_num_io_signals(const NeDsIoInfo*
io_info_ptr,size_t io_info_size){size_t i=0,num_signals=0;for(i=0;i<
io_info_size;i++){num_signals+=io_info_ptr[i].mM*io_info_ptr[i].mN;}return
num_signals;}typedef struct NeCgParamsTag NeCgParams;typedef struct
NeCgResultsTag NeCgResults;
#ifdef __cplusplus
}
#endif /* __cplusplus */
#include "pm_inline.h"
#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
typedef struct NeLoggerBuilderObjectTag NeLoggerBuilderObject;typedef struct
NeFrequencyAttributesTag NeFrequencyAttributes;typedef struct
NeLoggerBuilderTag{NeLoggerBuilderObject*mLoggerBuilder;NeFrequencyAttributes*
mFreqStruct;}NeLoggerBuilder;enum{NE_NODAL_EQ_FLAG=1<<0,NE_SIGNAL_EQ_FLAG=1<<1
,NE_BRANCH_EQ_FLAG=1<<2,NE_GENERAL_EQ_FLAG=1<<3,NE_TIME_EQ_FLAG=1<<4,
NE_THROUGH_EQ_FLAG=1<<5,NE_INTEG_EQ_FLAG=1<<6,NE_NO_EQ_FLAGS=0};enum{
NE_INITIAL_ICR_FLAG=1<<0,NE_NO_ICR_FLAGS=0};enum{NE_NODAL_VAR_FLAG=1<<0,
NE_OUTPUT_VAR_FLAG=1<<1,NE_INPUT_VAR_FLAG=1<<2,NE_SIGNAL_VAR_FLAG=1<<3,
NE_TIME_VAR_FLAG=1<<4,NE_INTEG_VAR_FLAG=1<<5,NE_NO_VAR_FLAGS=0};typedef union
NeDsMethodOutputTag{PmSparsityPattern mM_P;PmRealVector mM;PmBoolVector mVMM;
PmSparsityPattern mDXM_P;PmRealVector mDXM;PmSparsityPattern mDDM_P;
PmRealVector mDDM;PmSparsityPattern mDUM_P;PmRealVector mDUM;PmSparsityPattern
mDTM_P;PmRealVector mDTM;PmSparsityPattern mA_P;PmRealVector mA;
PmSparsityPattern mB_P;PmRealVector mB;PmSparsityPattern mC_P;PmRealVector mC;
PmRealVector mF;PmBoolVector mVMF;PmBoolVector mVPF;PmBoolVector mSLF;
PmBoolVector mSLF0;PmSparsityPattern mDXF_P;PmRealVector mDXF;
PmSparsityPattern mDUF_P;PmRealVector mDUF;PmSparsityPattern mDTF_P;
PmRealVector mDTF;PmSparsityPattern mDDF_P;PmRealVector mDDF;PmSparsityPattern
mDWF_P;PmRealVector mDWF;PmSparsityPattern mTDUF_P;PmSparsityPattern mTDXF_P;
PmSparsityPattern mDNF_P;PmRealVector mDNF;PmBoolVector mDNF_V_X;PmRealVector
mIC;PmRealVector mICR;PmIntVector mICR_IM;PmBoolVector mICR_ID;PmBoolVector
mICR_IL;PmRealVector mDXICR;PmSparsityPattern mDXICR_P;PmRealVector mDDICR;
PmSparsityPattern mDDICR_P;PmSparsityPattern mTDUICR_P;PmSparsityPattern
mICRM_P;PmRealVector mICRM;PmSparsityPattern mDXICRM_P;PmRealVector mDXICRM;
PmSparsityPattern mDDICRM_P;PmRealVector mDDICRM;PmSparsityPattern mMDUY_P;
PmSparsityPattern mMDXY_P;PmSparsityPattern mTDUY_P;PmSparsityPattern mTDXY_P;
PmRealVector mY;PmSparsityPattern mDXY_P;PmRealVector mDXY;PmSparsityPattern
mDUY_P;PmRealVector mDUY;PmSparsityPattern mDTY_P;PmRealVector mDTY;
PmIntVector mMODE;PmRealVector mZC;PmRealVector mCACHE_R;PmIntVector mCACHE_I;
PmRealVector mUPDATE_R;PmIntVector mUPDATE_I;PmRealVector mUPDATE2_R;
PmIntVector mUPDATE2_I;PmBoolVector mLOCK_R;PmBoolVector mLOCK_I;PmBoolVector
mLOCK2_R;PmBoolVector mLOCK2_I;PmRealVector mSFO;PmRealVector mSFP;
PmRealVector mINIT_R;PmIntVector mINIT_I;PmRealVector mLOG;PmIntVector mASSERT
;PmIntVector mPASSERT;PmIntVector mIASSERT;PmRealVector mDEL_T;PmRealVector
mDEL_V;PmRealVector mDEL_V0;PmRealVector mDEL_TMAX;PmSparsityPattern mDXDELT_P
;PmRealVector mDXDELT;PmSparsityPattern mDUDELT_P;PmRealVector mDUDELT;
PmSparsityPattern mDTDELT_P;PmRealVector mDTDELT;PmRealVector mOBS_EXP;
PmRealVector mOBS_ACT;PmRealVector mOBS_ALL;PmBoolVector mOBS_IL;PmIntVector
mDP_L;PmIntVector mDP_I;PmIntVector mDP_J;PmRealVector mDP_R;PmRealVector mQX;
PmRealVector mQU;PmRealVector mQT;PmRealVector mQ1;PmSparsityPattern mQX_P;
PmSparsityPattern mQU_P;PmSparsityPattern mQT_P;PmSparsityPattern mQ1_P;
PmRealVector mVAR_TOL;PmRealVector mEQ_TOL;PmBoolVector mLV;PmBoolVector mSLV;
PmRealVector mIMIN;PmRealVector mIMAX;}NeDsMethodOutput;typedef enum
NeDsMethodIdTag{NE_INVALID_METHOD_ID= -1,NE_DS_METHOD_M_P,NE_DS_METHOD_M,
NE_DS_METHOD_VMM,NE_DS_METHOD_DXM_P,NE_DS_METHOD_DXM,NE_DS_METHOD_DDM_P,
NE_DS_METHOD_DDM,NE_DS_METHOD_DUM_P,NE_DS_METHOD_DUM,NE_DS_METHOD_DTM_P,
NE_DS_METHOD_DTM,NE_DS_METHOD_A_P,NE_DS_METHOD_A,NE_DS_METHOD_B_P,
NE_DS_METHOD_B,NE_DS_METHOD_C_P,NE_DS_METHOD_C,NE_DS_METHOD_F,NE_DS_METHOD_VMF
,NE_DS_METHOD_VPF,NE_DS_METHOD_SLF,NE_DS_METHOD_SLF0,NE_DS_METHOD_DXF_P,
NE_DS_METHOD_DXF,NE_DS_METHOD_DUF_P,NE_DS_METHOD_DUF,NE_DS_METHOD_DTF_P,
NE_DS_METHOD_DTF,NE_DS_METHOD_DDF_P,NE_DS_METHOD_DDF,NE_DS_METHOD_DWF_P,
NE_DS_METHOD_DWF,NE_DS_METHOD_TDUF_P,NE_DS_METHOD_TDXF_P,NE_DS_METHOD_DNF_P,
NE_DS_METHOD_DNF,NE_DS_METHOD_DNF_V_X,NE_DS_METHOD_IC,NE_DS_METHOD_ICR,
NE_DS_METHOD_ICR_IM,NE_DS_METHOD_ICR_ID,NE_DS_METHOD_ICR_IL,NE_DS_METHOD_DXICR
,NE_DS_METHOD_DXICR_P,NE_DS_METHOD_DDICR,NE_DS_METHOD_DDICR_P,
NE_DS_METHOD_TDUICR_P,NE_DS_METHOD_ICRM_P,NE_DS_METHOD_ICRM,
NE_DS_METHOD_DXICRM_P,NE_DS_METHOD_DXICRM,NE_DS_METHOD_DDICRM_P,
NE_DS_METHOD_DDICRM,NE_DS_METHOD_MDUY_P,NE_DS_METHOD_MDXY_P,
NE_DS_METHOD_TDUY_P,NE_DS_METHOD_TDXY_P,NE_DS_METHOD_Y,NE_DS_METHOD_DXY_P,
NE_DS_METHOD_DXY,NE_DS_METHOD_DUY_P,NE_DS_METHOD_DUY,NE_DS_METHOD_DTY_P,
NE_DS_METHOD_DTY,NE_DS_METHOD_MODE,NE_DS_METHOD_ZC,NE_DS_METHOD_CACHE_R,
NE_DS_METHOD_CACHE_I,NE_DS_METHOD_UPDATE_R,NE_DS_METHOD_UPDATE_I,
NE_DS_METHOD_UPDATE2_R,NE_DS_METHOD_UPDATE2_I,NE_DS_METHOD_LOCK_R,
NE_DS_METHOD_LOCK_I,NE_DS_METHOD_LOCK2_R,NE_DS_METHOD_LOCK2_I,NE_DS_METHOD_SFO
,NE_DS_METHOD_SFP,NE_DS_METHOD_INIT_R,NE_DS_METHOD_INIT_I,NE_DS_METHOD_LOG,
NE_DS_METHOD_ASSERT,NE_DS_METHOD_PASSERT,NE_DS_METHOD_IASSERT,
NE_DS_METHOD_DEL_T,NE_DS_METHOD_DEL_V,NE_DS_METHOD_DEL_V0,
NE_DS_METHOD_DEL_TMAX,NE_DS_METHOD_DXDELT_P,NE_DS_METHOD_DXDELT,
NE_DS_METHOD_DUDELT_P,NE_DS_METHOD_DUDELT,NE_DS_METHOD_DTDELT_P,
NE_DS_METHOD_DTDELT,NE_DS_METHOD_OBS_EXP,NE_DS_METHOD_OBS_ACT,
NE_DS_METHOD_OBS_ALL,NE_DS_METHOD_OBS_IL,NE_DS_METHOD_DP_L,NE_DS_METHOD_DP_I,
NE_DS_METHOD_DP_J,NE_DS_METHOD_DP_R,NE_DS_METHOD_QX,NE_DS_METHOD_QU,
NE_DS_METHOD_QT,NE_DS_METHOD_Q1,NE_DS_METHOD_QX_P,NE_DS_METHOD_QU_P,
NE_DS_METHOD_QT_P,NE_DS_METHOD_Q1_P,NE_DS_METHOD_VAR_TOL,NE_DS_METHOD_EQ_TOL,
NE_DS_METHOD_LV,NE_DS_METHOD_SLV,NE_DS_METHOD_IMIN,NE_DS_METHOD_IMAX,
NE_NUM_METHODS}NeDsMethodId;typedef int32_T(*NeDsMethod)(const NeDynamicSystem
*,const NeDynamicSystemInput*,NeDsMethodOutput*);typedef NeDsMethodOutput*(*
NeDsMakeOutputFcn)(const NeDynamicSystem*,PmAllocator*);typedef void(*
NeDsManagementFcn)(NeDynamicSystem*);typedef void(*NeDsGenerateFcn)(const
NeDynamicSystem*,const NeCgParams*,NeCgResults*);typedef void(*
NeDsSetupLoggerFcn)(const NeDynamicSystem*,NeLoggerBuilder*);typedef
NeDynamicSystem*(*NeDsCreateDsFcn)(NeDynamicSystem*);typedef void(*
NeDsExpandFcn)(const NeDynamicSystem*,const NeDynamicSystemInput*,PmRealVector
*);struct NeDynamicSystemTag{size_t mNumIo[NUM_IO_TYPES];const NeDsIoInfo*mIo[
NUM_IO_TYPES];size_t mNumVariables;size_t mNumDiscreteRealVariables;size_t
mNumDifferentialVariables;size_t mNumEquations;size_t mNumICResiduals;size_t
mNumModes;size_t mNumMajorModes;size_t mNumRealCache;size_t mNumIntCache;
size_t mNumObservables;size_t mNumObservableElements;size_t mNumZcs;size_t
mNumAsserts;size_t mNumAssertRanges;size_t mNumParamAsserts;size_t
mNumParamAssertRanges;size_t mNumInitialAsserts;size_t mNumInitialAssertRanges
;size_t mNumRanges;size_t mNumEquationRanges;size_t mNumICRRanges;size_t
mNumFundamentalSamples;size_t mNumDelays;size_t mNumLogicalParameters;size_t
mNumIntegerParameters;size_t mNumIndexParameters;size_t mNumRealParameters;
size_t mNumLogicalDerivedParameters;size_t mNumIntegerDerivedParameters;size_t
mNumIndexDerivedParameters;size_t mNumRealDerivedParameters;boolean_T
mIsOutputLinear;boolean_T mIsOutputSwitchedLinear;NeDsManagementFcn
mReleaseReference;NeDsManagementFcn mGetReference;NeDsMethod mMethods[
NE_NUM_METHODS];NeDsMakeOutputFcn mMakeOutput[NE_NUM_METHODS];
NeDsSetupLoggerFcn mSetupLogger;NeEquationData*mEquationData;NeICRData*
mICRData;NeVariableData*mVariableData;NeVariableData*mDiscreteData;NeModeData*
mMajorModeData;NeObservableData*mObservableData;NeZCData*mZCData;NeAssertData*
mAssertData;NeRange*mAssertRanges;NeAssertData*mParamAssertData;NeRange*
mParamAssertRanges;NeAssertData*mInitialAssertData;NeRange*
mInitialAssertRanges;NeRange*mRanges;NeRange*mEquationRanges;NeRange*
mICRRanges;NeParameterData*mLogicalParameters;NeParameterData*
mIntegerParameters;NeParameterData*mIndexParameters;NeParameterData*
mRealParameters;void*mLargeArrayData;NeDsGenerateFcn mGenerateFcn;
NeDsCreateDsFcn mDiagnosticsDsFcn;NeDsExpandFcn mExpandFcn;NeChecksum mChecksum
;};PMF_DEPLOY_STATIC void ne_ds_release_reference(NeDynamicSystem*dynSys){if(
dynSys){dynSys->mReleaseReference(dynSys);}}PMF_DEPLOY_STATIC void
ne_ds_get_reference(NeDynamicSystem*dynSys){if(dynSys){dynSys->mGetReference(
dynSys);}}PMF_DEPLOY_STATIC int32_T ne_ds_call_method(const NeDynamicSystem*
dynSys,NeDsMethodId id,const NeDynamicSystemInput*input,NeDsMethodOutput*
output){return dynSys->mMethods[id](dynSys,input,output);}PMF_DEPLOY_STATIC
NeDsMethodOutput*ne_ds_default_output(const NeDynamicSystem*dynSys,
NeDsMethodId id,PmAllocator*allocator){return dynSys->mMakeOutput[id](dynSys,
allocator);}PMF_DEPLOY_STATIC NeDynamicSystemInputSizes
ne_ds_get_system_input_sizes(const NeDynamicSystem*ds){
NeDynamicSystemInputSizes sizes;sizes.mSizes[NE_DYNAMIC_SYSTEM_INPUT_ID_Q]=ds
->mNumMajorModes;sizes.mSizes[NE_DYNAMIC_SYSTEM_INPUT_ID_M]=ds->mNumModes;
sizes.mSizes[NE_DYNAMIC_SYSTEM_INPUT_ID_T]=1;sizes.mSizes[
NE_DYNAMIC_SYSTEM_INPUT_ID_U]=ne_get_num_io_signals(ds->mIo[NE_INPUT_IO_TYPE],
ds->mNumIo[NE_INPUT_IO_TYPE]);sizes.mSizes[NE_DYNAMIC_SYSTEM_INPUT_ID_V]=
ne_get_num_io_signals(ds->mIo[NE_INPUT_IO_TYPE],ds->mNumIo[NE_INPUT_IO_TYPE]);
sizes.mSizes[NE_DYNAMIC_SYSTEM_INPUT_ID_X]=ds->mNumVariables;sizes.mSizes[
NE_DYNAMIC_SYSTEM_INPUT_ID_D]=ds->mNumDiscreteRealVariables;sizes.mSizes[
NE_DYNAMIC_SYSTEM_INPUT_ID_E]=ds->mNumFundamentalSamples;sizes.mSizes[
NE_DYNAMIC_SYSTEM_INPUT_ID_CR]=ds->mNumRealCache;sizes.mSizes[
NE_DYNAMIC_SYSTEM_INPUT_ID_CI]=ds->mNumIntCache;sizes.mSizes[
NE_DYNAMIC_SYSTEM_INPUT_ID_W]=ds->mNumDelays;sizes.mSizes[
NE_DYNAMIC_SYSTEM_INPUT_ID_S]=1;sizes.mSizes[NE_DYNAMIC_SYSTEM_INPUT_ID_P_L]=
ds->mNumLogicalParameters;sizes.mSizes[NE_DYNAMIC_SYSTEM_INPUT_ID_P_I]=ds->
mNumIntegerParameters;sizes.mSizes[NE_DYNAMIC_SYSTEM_INPUT_ID_P_J]=ds->
mNumIndexParameters;sizes.mSizes[NE_DYNAMIC_SYSTEM_INPUT_ID_P_R]=ds->
mNumRealParameters;sizes.mSizes[NE_DYNAMIC_SYSTEM_INPUT_ID_DP_L]=ds->
mNumLogicalDerivedParameters;sizes.mSizes[NE_DYNAMIC_SYSTEM_INPUT_ID_DP_I]=ds
->mNumIntegerDerivedParameters;sizes.mSizes[NE_DYNAMIC_SYSTEM_INPUT_ID_DP_J]=
ds->mNumIndexDerivedParameters;sizes.mSizes[NE_DYNAMIC_SYSTEM_INPUT_ID_DP_R]=
ds->mNumRealDerivedParameters;return sizes;}PMF_DEPLOY_STATIC void
ne_ds_setup_logger(const NeDynamicSystem*dynSys,NeLoggerBuilder*builder){
dynSys->mSetupLogger(dynSys,builder);}NeSystemInputSizes
neu_get_empty_system_input_sizes(void);NeSystemInputSizes
neu_get_system_input_sizes(const NeSystemInput*in);NeSystemInput*
neu_create_system_input(NeSystemInputSizes sizes,PmAllocator*allocatorPtr);
void neu_destroy_system_input(NeSystemInput*sysInputPtr,PmAllocator*
allocatorPtr);NeDynamicSystemInputSizes
neu_get_empty_dynamic_system_input_sizes(void);NeDynamicSystemInputSizes
neu_get_dynamic_system_input_sizes(const NeDynamicSystemInput*in);
NeDynamicSystemInput*neu_create_dynamic_system_input(NeDynamicSystemInputSizes
sizes,PmAllocator*allocatorPtr);void neu_destroy_dynamic_system_input(
NeDynamicSystemInput*sysInputPtr,PmAllocator*allocatorPtr);void
neu_si_equals_si(const NeSystemInput*destPtr,const NeSystemInput*srcPtr);
NeSystemInput*neu_copy_si(const NeSystemInput*in,PmAllocator*al);void
neu_dsi_equals_dsi(const NeDynamicSystemInput*destPtr,const
NeDynamicSystemInput*srcPtr);NeDynamicSystemInput*neu_copy_dsi(const
NeDynamicSystemInput*in,PmAllocator*al);boolean_T neu_si_equalequals_si(const
NeSystemInput*destPtr,const NeSystemInput*srcPtr);boolean_T
neu_sis_equalequals_sis(const NeSystemInputSizes left,const NeSystemInputSizes
right);boolean_T neu_dsi_equalequals_dsi(const NeDynamicSystemInput*destPtr,
const NeDynamicSystemInput*srcPtr);boolean_T neu_dsis_equalequals_dsis(const
NeDynamicSystemInputSizes left,const NeDynamicSystemInputSizes right);typedef
struct NeSolverSystemTag NeSolverSystem;void nes_dae_get_base_methods(NeDae*
dae_ptr);PmIntVector*nes_compute_output_function_map(const PmSparsityPattern*
duy,uint32_T inputOrder);NeSolverSystem*nes_create_crude_solver_system(
NeDynamicSystem*dynamicsystemPtr,NeModelParameters modelParameters,
NeSolverParameters solverParameters,PmAllocator*allocatorPtr);typedef struct
NeConstraintStatTag NeConstraintStat;struct NeConstraintStatTag{void(*
mVariable)(const NeConstraintStat*,const NeVariableData*);struct
NeConstraintStatData*mData;};typedef struct NeCompStatsTag NeCompStats;struct
NeCompStatsTag{const NeConstraintStat*(*mConstraint)(const NeCompStats*);
struct NeCompStatsData*mData;};NeSolverSystem*
nes_create_index_reduced_solver_system(NeSolverSystem*basePtr,
NeSolverParameters sp,const NeCompStats*compStats,PmAllocator*allocatorPtr);
NeSolverSystem*nes_create_optimized_solver_system(NeSolverSystem*
solverSystemPtr,PmAllocator*allocatorPtr);NeSolverSystem*
nes_create_regularized_solver_system(NeSolverSystem*ss,NeSolverParameters sp,
PmAllocator*allocator);typedef struct NeProfilingServiceTag{NeDynamicSystem*(*
mProfileDs)(const NeProfiler*,NeDynamicSystem*);NeSolverSystem*(*mProfileSs)(
const NeProfiler*,NeSolverSystem*,const char*);NeDae*(*mProfileDae)(const
NeProfiler*,NeDae*);}NeProfilingService;boolean_T nes_set_profiling_service(
NeProfilingService*);NeDynamicSystem*nes_profile_dynamic_system(const
NeProfiler*,NeDynamicSystem*);NeSolverSystem*nes_profile_solver_system(const
NeProfiler*,NeSolverSystem*,const char*);NeDae*nes_profile_dae(const NeProfiler
*,NeDae*);typedef int32_T(*DiagnosisSupportMethod)(const NeSolverSystem*topSys
,const NeSystemInput*topInput,real_T,PmCharVector,boolean_T);typedef
PmfMessageId(*StiffnessIndicatorMethod)(const NeSolverSystem*sys,const
NeSystemInput*input,real_T*sf);typedef PmfMessageId(*
LinearizationSupportMethod)(const NeSolverSystem*,const NeSystemInput*,
PmRealVector*);typedef PmfMessageId(*VslsSupportMethod)(const PmRealVector*);
typedef void(*EventIterationDiagMethod)(const NeSolverSystem*,const
NeSystemInput*,const PmRealVector*d,const PmIntVector*q,PmCharVector);typedef
struct NeSolverSupportMethodsTag{DiagnosisSupportMethod
mDcDiagnosisSupportMethod;DiagnosisSupportMethod mTrDiagnosisSupportMethod;
DiagnosisSupportMethod mAdvSolDiagnosisSupportMethod;DiagnosisSupportMethod
mInconsistentIcMethod;DiagnosisSupportMethod mIcJacobianDiagnosticsMethod;
DiagnosisSupportMethod mMassMatrixDiagnosticsMethod;LinearizationSupportMethod
mLinearizationSupportMethod;StiffnessIndicatorMethod mStiffnessIndicatorMethod
;VslsSupportMethod mVslsSupportMethod;EventIterationDiagMethod
mEventIterationDiagMethod;}NeSolverSupportMethods;void
nes_register_solver_support(const NeSolverSupportMethods*methods);const
NeSolverSupportMethods*nes_get_support_methods(void);typedef struct
NeuDiagnosticTreePrinterTag NeuDiagnosticTreePrinter;typedef struct
NeuDiagnosticTreePrinterPrivateDataTag NeuDiagnosticTreePrinterPrivateData;
struct NeuDiagnosticTreePrinterTag{NeuDiagnosticTreePrinterPrivateData*
mPrivateData;const char*(*mPrint)(NeuDiagnosticTreePrinter*printer,const
NeuDiagnosticTree*tree);void(*mDestroy)(NeuDiagnosticTreePrinter*printer);};
NeuDiagnosticTreePrinter*neu_create_diagnostic_tree_printer(PmAllocator*alloc)
;const char*neu_tree_viewer_get_id(const NeuDiagnosticTree*tree);const char*
neu_tree_viewer_get_msg(const NeuDiagnosticTree*tree);NeuDiagnosticLevel
neu_tree_viewer_get_level(const NeuDiagnosticTree*tree);size_t
neu_tree_viewer_get_num_causes(const NeuDiagnosticTree*tree);const
NeuDiagnosticTree*neu_tree_viewer_get_cause_k(const NeuDiagnosticTree*tree,
size_t k);void neu_diagnostic_tree_warning(const NeuDiagnosticTree*tree);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#include "pm_std.h"
#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
struct LtiIcDataTag{PmSparsityPattern mStatesPattern;PmRealVector mStatesPr;
PmSparsityPattern mInputsPattern;PmRealVector mInputsPr;PmRealVector mConsts;}
;typedef struct LtiIcDataTag LtiIcData;struct LtiDcDataTag{PmSparsityPattern
mAPattern;PmRealVector mAPr;PmSparsityPattern mBPattern;PmRealVector mBPr;
PmRealVector mFa;};typedef struct LtiDcDataTag LtiDcData;struct LtiIcParamsTag
{LtiIcData mFirstSolve,mSecondSolve;LtiDcData mDcSolve;PmRealVector mGuess;
real_T mResTol;boolean_T mDoDC;};typedef struct LtiIcParamsTag LtiIcParams;
typedef void(*LtiDiagnosisMethod)(void*,PmCharVector);typedef struct
LtiSupportMethodsTag{void*mLtiDiagnosisData;LtiDiagnosisMethod
mIcDiagnosisMethod;LtiDiagnosisMethod mDcDiagnosisMethod;}LtiSupportMethods;
boolean_T ic_solve_impl(PmRealVector*x,const PmRealVector*u,const LtiIcParams*
ltiIcParams,const LtiSupportMethods*methods,NeuDiagnosticManager*mgr);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#include "pm_std.h"
#include "mc_std.h"
#include "pm_std.h"
#include "ne_std.h"
#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
typedef struct SscIniterTag SscIniter;typedef enum{INVALID_CARDINALITY= -1,
SWL_FINITE,SWL_COUNTABLE,SWL_UNCOUNTABLE,SWL_NONLINEAR,NUM_CARDINALITY}
ModeCardinality;typedef struct GlobalMethodTableTag GlobalMethodTable;typedef
union GmtMethodOutputTag{PmIntVector mMODE;PmRealVector mY;PmRealVector mOBS;
PmIntVector mASSERT;PmIntVector mIASSERT;PmRealVector mINIT_R;PmIntVector
mINIT_I;PmRealVector mCACHE_R;PmIntVector mCACHE_I;PmRealVector mUPDATE_R;
PmIntVector mUPDATE_I;PmIntVector mDP_L;PmIntVector mDP_I;PmIntVector mDP_J;
PmRealVector mDP_R;PmRealVector mINIT_DIFF;}GmtMethodOutput;typedef enum
GmtMethodIdTag{GMT_INVALID_METHOD_ID= -1,GMT_METHOD_MODE,GMT_METHOD_Y,
GMT_METHOD_OBS,GMT_METHOD_ASSERT,GMT_METHOD_IASSERT,GMT_METHOD_INIT_R,
GMT_METHOD_INIT_I,GMT_METHOD_CACHE_R,GMT_METHOD_CACHE_I,GMT_METHOD_UPDATE_R,
GMT_METHOD_UPDATE_I,GMT_METHOD_DP_L,GMT_METHOD_DP_I,GMT_METHOD_DP_J,
GMT_METHOD_DP_R,GMT_METHOD_INIT_DIFF,GMT_NUM_METHODS}GmtMethodId;typedef
int32_T(*GmtMethod)(const GlobalMethodTable*,const NeDynamicSystemInput*,
GmtMethodOutput*);struct GlobalMethodTableTag{GmtMethod mMethods[
GMT_NUM_METHODS];size_t mNumY;size_t mNumObsElts;size_t mNumAsserts;const
NeAssertData*mAssertData;size_t mNumAssertRanges;const NeRange*mAssertRanges;
size_t mNumInitialAsserts;const NeAssertData*mInitialAssertData;size_t
mNumInitialAssertRanges;const NeRange*mInitialAssertRanges;NeParameterInfo
mParameterInfo;PmIntVector*mModeIndices;PmIntVector*mObsIsLinear;};typedef
struct SwitchedLinearClumpTag SwitchedLinearClump;typedef union
SlcMethodOutputTag{PmSparsityPattern mM_P;PmRealVector mM;PmSparsityPattern
mJ_P;PmRealVector mJ;PmRealVector mFX;PmRealVector mF;PmRealVector mXNPLUS1;
PmIntVector mMODE;}SlcMethodOutput;typedef enum SlcMethodIdTag{
SLC_INVALID_METHOD_ID= -1,SLC_METHOD_M_P,SLC_METHOD_M,SLC_METHOD_J_P,
SLC_METHOD_J,SLC_METHOD_FX,SLC_METHOD_F,SLC_METHOD_XNPLUS1,SLC_METHOD_MODE,
SLC_NUM_METHODS}SlcMethodId;typedef int32_T(*SlcMethod)(const
SwitchedLinearClump*,const NeDynamicSystemInput*,SlcMethodOutput*);typedef
PmSizeVector*SizeVectorPtr;struct SwitchedLinearClumpTag{SlcMethod mMethods[
SLC_NUM_METHODS];size_t mMNnz;size_t mJNnz;boolean_T mIsLti;
NeDynamicSystemInputSizes mSizes;SizeVectorPtr mSelectors[
NE_NUM_DYNAMIC_SYSTEM_INPUT_ID];PmIntVector*mStateIndices;PmIntVector*
mModeIndices;PmIntVector*mMRefIndices;PmIntVector*mQRefIndices;boolean_T
mIsModeBoolean;ModeCardinality mModeCardinality;};typedef struct
DifferentialClumpTag DifferentialClump;typedef union DcMethodOutputTag{
PmSparsityPattern mM_P;PmRealVector mM;PmRealVector mF;}DcMethodOutput;typedef
enum DcMethodIdTag{DC_INVALID_METHOD_ID= -1,DC_METHOD_M_P,DC_METHOD_M,
DC_METHOD_F,DC_NUM_METHODS}DcMethodId;typedef int32_T(*DcMethod)(const
DifferentialClump*,const NeDynamicSystemInput*,DcMethodOutput*);struct
DifferentialClumpTag{DcMethod mMethods[DC_NUM_METHODS];size_t mMNnz;
PmIntVector*mStateIndices;PmIntVector*mMRefIndices;PmIntVector*mQRefIndices;
ModeCardinality mModeCardinality;};typedef struct SwitchedLinearSystemTag
SwitchedLinearSystem;struct SwitchedLinearSystemTag{NeDynamicSystemInputSizes
mSizes;PmIntVector*mDiffStateIndices;GlobalMethodTable*mGlobalMethodTable;
size_t mNumClumps;SwitchedLinearClump**mClumps;DifferentialClump*mDiffClump;
SscIniter*mIniter;void(*mDestroy)(SwitchedLinearSystem*sls);};typedef struct
SimulatorTag Simulator;typedef struct SimulatorDataTag SimulatorData;typedef
void(*SimulatorInitializeStartStatus)(void*);typedef void(*
SimulatorInitializeEndStatus)(void*);struct SimulatorTag{size_t mNumInputs;
size_t mNumStates;size_t mNumOutputs;double mStepSize;const NeParameterInfo*
mParameterInfo;SimulatorData*mData;const PmSizeVector*mMemEstimates;boolean_T(
*mSetParameters)(const Simulator*solver,const NeParameterBundle*bundle);
boolean_T(*mStart)(const Simulator*solver,const NeuDiagnosticManager*mgr);
NeDynamicSystemInput(*mGetDsi)(const Simulator*simulator,const PmRealVector*
inputs,const PmRealVector*states,real_T time);boolean_T(*mSolve)(const
Simulator*solver,const PmRealVector*inputs,const PmRealVector*states,const
PmRealVector*outputs,real_T time,const NeuDiagnosticManager*mgr,boolean_T
firstOutput);boolean_T(*mCheck)(const Simulator*solver,const PmRealVector*
inputs,const PmRealVector*states,real_T time,const NeuDiagnosticManager*mgr);
void(*mInitialize)(const Simulator*s,SimulatorInitializeStartStatus start,
SimulatorInitializeEndStatus end,void*rb);void(*mDestroy)(Simulator*solver);};
Simulator*simulator_create(SwitchedLinearSystem*sls,const NeSolverParameters
param,const McLinearAlgebraFactory*la,const NeVariableData*vardata,const
NeObservableData*obsdata,const size_t numObservables);NeslRtpManager*
rtp_manager_create(const Simulator*simulator);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* ___nesl_rtw_h__ */
