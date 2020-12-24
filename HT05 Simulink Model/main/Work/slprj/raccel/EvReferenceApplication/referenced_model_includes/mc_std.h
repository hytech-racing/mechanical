#ifndef __mc_std_h__
#define __mc_std_h__
#include "pm_std.h"
#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
typedef struct McRealFunctionTag McRealFunction;typedef struct McIntFunctionTag
McIntFunction;typedef struct McMatrixFunctionTag McMatrixFunction;
#ifdef __cplusplus
}
#endif /* __cplusplus */
#include "pm_std.h"
#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
typedef struct McLinearAlgebraFactoryTag McLinearAlgebraFactory;typedef struct
McLinearAlgebraTag McLinearAlgebra;typedef enum McLinearAlgebraStatusTag{
MC_LA_INVALID= -1,MC_LA_ERROR,MC_LA_OK}McLinearAlgebraStatus;typedef struct
McLinearAlgebraDataTag McLinearAlgebraData;struct McLinearAlgebraTag{
McLinearAlgebraData*mPrivateData;McLinearAlgebraStatus(*mFactor)(
McLinearAlgebra*,const real_T*);McLinearAlgebraStatus(*mSolve)(McLinearAlgebra
*la,const real_T*A,real_T*x,const real_T*b);real_T(*mCondest)(const
McLinearAlgebra*);size_t(*mMemusage)(const McLinearAlgebra*);void(*mDestructor
)(McLinearAlgebra*);};struct McLinearAlgebraFactoryTag{McLinearAlgebraStatus(*
mCreateLinearAlgebra)(const McLinearAlgebraFactory*,McLinearAlgebra**,const
PmSparsityPattern*);McLinearAlgebraStatus(*mCreateLinearAlgebraComplete)(const
McLinearAlgebraFactory*,McLinearAlgebra**,const PmSparsityPattern*,size_t
nPermCol);};
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* __mc_std_h__ */
