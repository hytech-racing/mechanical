#ifndef __ne_dae_h__
#define __ne_dae_h__
#include "pm_inline.h"
#include "pm_std.h"
#include "pm_std.h"
#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
typedef struct NeLoggerBuilderObjectTag NeLoggerBuilderObject;typedef struct
NeFrequencyAttributesTag NeFrequencyAttributes;typedef struct
NeLoggerBuilderTag{NeLoggerBuilderObject*mLoggerBuilder;NeFrequencyAttributes*
mFreqStruct;}NeLoggerBuilder;typedef struct NeCgParamsTag NeCgParams;typedef
struct NeCgResultsTag NeCgResults;typedef struct NeuDiagnosticTreeTag
NeuDiagnosticTree;typedef struct NeuDiagnosticManagerTag NeuDiagnosticManager;
typedef enum{NEU_DIAGNOSTIC_LEVEL_INVALID= -1,NEU_DIAGNOSTIC_LEVEL_TERSE,
NEU_DIAGNOSTIC_LEVEL_VERBOSE,NEU_NUM_DIAGNOSTIC_LEVELS}NeuDiagnosticLevel;
#ifdef __cplusplus
}
#endif /* __cplusplus */
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
num_signals;}typedef enum NeEquationDomainTag{NE_EQUATION_DOMAIN_INVALID= -1,
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
NeParameterData;typedef struct NeCustomDataSizeTag NeCustomDataSize;typedef
struct NeCustomDataTag NeCustomData;typedef struct NeDaeTag NeDae;typedef
struct NeRealFunctorDataTag NeRealFunctorData;typedef struct NeRealFunctorTag
NeRealFunctor;typedef enum SscDiagnosticSettingTag{SSC_DIAGNOSTIC_INVALID= -1,
SSC_DIAGNOSTIC_ERROR,SSC_DIAGNOSTIC_WARNING,SSC_DIAGNOSTIC_NONE,
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
mIndices;NeParameterVector mReals;}NeParameterInfo;typedef struct NeProfilerTag
NeProfiler;typedef struct SlSparseMatrixTag{PmSparsityPattern*mPattern;
PmRealVector*mPr;}SlSparseMatrix;typedef struct SLMatricesTag{boolean_T
mIsYAffineTermUpdated;boolean_T mIsXP0AffineTermUpdated;size_t mOffsetX0InD;
size_t mOffsetU0InD;size_t mSlDaeNumDiscreteMajor;size_t mSlDaeNumCache;
PmRealVector mAffineY;PmRealVector mAffineXP0;PmRealVector mYX0;PmRealVector
mYU0;SlSparseMatrix mDxddotDxd;SlSparseMatrix mDxddotDu;SlSparseMatrix mDyDxd;
SlSparseMatrix mDyDu;SlSparseMatrix mDxaDxd;SlSparseMatrix mDxaDu;PmIntVector
mMode;PmIntVector mMajor;PmIntVector mCache;}SLMatrices;typedef union
NeDaeMethodOutputTag{PmSparsityPattern mM_P;PmRealVector mM;PmSparsityPattern
mDXM_P;PmRealVector mDXM;PmSparsityPattern mDUM_P;PmRealVector mDUM;
PmRealVector mF;PmSparsityPattern mDXF_P;PmRealVector mDXF;PmSparsityPattern
mDUF_P;PmRealVector mDUF;PmSparsityPattern mDTF_P;PmRealVector mDTF;
PmRealVector mY;PmSparsityPattern mDXY_P;PmRealVector mDXY;PmSparsityPattern
mDUY_P;PmSparsityPattern mTDUY_P;PmRealVector mDUY;PmRealVector mXP0;
PmRealVector mZC;PmIntVector mASSERT;PmIntVector mPASSERT;PmIntVector mIASSERT
;PmRealVector mSO;PmRealVector mSP;PmIntVector mMODE;PmIntVector mUDOT_REQ;
PmRealVector mDELAYS;PmBoolVector mDXF_V_X;PmBoolVector mDUF_V_X;PmRealVector
mOBS_EXP;PmRealVector mOBS_ACT;PmRealVector mEQ_TOL;PmIntVector mSTIFF;
PmRealVector mNUMJAC_DX_LO;PmRealVector mNUMJAC_DX_HI;PmRealVector mSTIFF_IND;
}NeDaeMethodOutput;typedef enum NeDaeMethodIdTag{NE_INVALID_DAE_METHOD_ID= -1,
NE_DAE_METHOD_M_P,NE_DAE_METHOD_M,NE_DAE_METHOD_DXM_P,NE_DAE_METHOD_DXM,
NE_DAE_METHOD_DUM_P,NE_DAE_METHOD_DUM,NE_DAE_METHOD_F,NE_DAE_METHOD_DXF_P,
NE_DAE_METHOD_DXF,NE_DAE_METHOD_DUF_P,NE_DAE_METHOD_DUF,NE_DAE_METHOD_DTF_P,
NE_DAE_METHOD_DTF,NE_DAE_METHOD_Y,NE_DAE_METHOD_DXY_P,NE_DAE_METHOD_DXY,
NE_DAE_METHOD_DUY_P,NE_DAE_METHOD_TDUY_P,NE_DAE_METHOD_DUY,NE_DAE_METHOD_XP0,
NE_DAE_METHOD_ZC,NE_DAE_METHOD_ASSERT,NE_DAE_METHOD_PASSERT,
NE_DAE_METHOD_IASSERT,NE_DAE_METHOD_SO,NE_DAE_METHOD_SP,NE_DAE_METHOD_MODE,
NE_DAE_METHOD_UDOT_REQ,NE_DAE_METHOD_DELAYS,NE_DAE_METHOD_DXF_V_X,
NE_DAE_METHOD_DUF_V_X,NE_DAE_METHOD_OBS_EXP,NE_DAE_METHOD_OBS_ACT,
NE_DAE_METHOD_EQ_TOL,NE_DAE_METHOD_STIFF,NE_DAE_METHOD_NUMJAC_DX_LO,
NE_DAE_METHOD_NUMJAC_DX_HI,NE_DAE_METHOD_STIFF_IND,NE_NUM_DAE_METHODS}
NeDaeMethodId;typedef enum NeDaeSolveIdTag{NE_DAE_SOLVE_INVALID= -1,
NE_DAE_SOLVE_IC_MODE,NE_DAE_SOLVE_IC_LIS,NE_DAE_SOLVE_IC_LSS,
NE_DAE_SOLVE_CIC_MODE,NE_DAE_SOLVE_CONSAT,NE_DAE_SOLVE_CIC,NE_DAE_SOLVE_RESET,
NE_DAE_SOLVE_NUDGE,NE_DAE_SOLVE_NUM}NeDaeSolveId;typedef PmfMessageId(*
NeDaeMethod)(const NeDae*,const NeSystemInput*,NeDaeMethodOutput*,
NeuDiagnosticManager*);typedef PmfMessageId(*NeDaeSolve)(const NeDae*,const
NeSystemInput*,NeuDiagnosticManager*);typedef PmfMessageId(*NeDaeFunction)(
const NeDae*,const NeSystemInput*);typedef PmfMessageId(*NeDaeLinearizeFcn)(
const NeDae*,const NeSystemInput*,PmRealVector*,NeuDiagnosticManager*);typedef
NeDaeMethodOutput*(*NeDaeMakeOutputFcn)(const NeDae*,PmAllocator*);typedef void
(*NeDaeFreeOutputFcn)(NeDaeMethodOutput*,PmAllocator*);typedef NeRealFunctor*(
*NeRealFunctorFcn)(const NeDae*dae,NeDaeMethodId id,PmAllocator*allocator);
typedef void(*NeDaeSetParameters)(const NeDae*,const NeParameterBundle*);
typedef struct NeDaePrivateDataTag NeDaePrivateData;struct NeDaeTag{size_t
mNumStates;size_t mNumDifferentialStates;size_t mNumDiscreteStates;size_t
mNumInputs;size_t mInputOrder;size_t mNumOutputs;size_t mNumMassMatrixNzMax;
size_t mNumTrimResiduals;size_t mNumLinJacobianNzMax;size_t mNumModes;size_t
mNumMajorModes;size_t mNumRealCache;size_t mNumIntCache;size_t mNumZcs;size_t
mNumAsserts;size_t mNumParamAsserts;size_t mNumInitialAsserts;size_t mNumRanges
;size_t mNumEquationRanges;size_t mNumAssertRanges;size_t mNumParamAssertRanges
;size_t mNumInitialAssertRanges;size_t mNumSamples;size_t mNumDelays;size_t
mNumDxfNzMax;size_t mNumDufNzMax;size_t mNumDtfNzMax;size_t mNumDxyNzMax;
size_t mNumDuyNzMax;size_t mNumTDuyNzMax;size_t mNumDtyNzMax;size_t
mNumDxmNzMax;size_t mNumDumNzMax;size_t mNumObservables;size_t
mNumObservableElements;boolean_T mIsMConstant;boolean_T mIsMPwConstant;
boolean_T mIsDxfConstant;boolean_T mIsDufConstant;boolean_T mIsYLinear;
boolean_T mHasConstraints;boolean_T mSupportsLinearization;boolean_T mIsDae;
boolean_T mIsContinuousLti;boolean_T mIsSwitchedLinear;boolean_T mIsDfAnalytic
;boolean_T mIsDmAnalytic;boolean_T mIsDyAnalytic;real_T mFundamentalSampleTime
;size_t mRefCount;boolean_T mIsNormalizable;NeEquationData*mEquationData;
NeVariableData*mVariableData;NeVariableData*mDiscreteData;NeModeData*
mMajorModeData;NeZCData*mZCData;NeAssertData*mAssertData;NeAssertData*
mParamAssertData;NeAssertData*mInitialAssertData;NeRange*mRanges;NeRange*
mEquationRanges;NeRange*mAssertRanges;NeRange*mParamAssertRanges;NeRange*
mInitialAssertRanges;NeObservableData*mObservableData;NeParameterInfo
mParameterInfo;const PmBoolVector*mDirectFeedthrough;const PmIntVector*
mOutputFunctionMap;size_t mNumIo[NUM_IO_TYPES];const NeDsIoInfo*mIo[
NUM_IO_TYPES];NeChecksum*mChecksum;NeProfiler*mProfiler;NeDaePrivateData*
mPrivateData;void(*mDestroy)(NeDae*);NeDae*(*mCloneFcn)(const NeDae*);
NeDaeMethod mMethods[NE_NUM_DAE_METHODS];NeDaeSolve mSolves[NE_DAE_SOLVE_NUM];
NeDaeSolve mCheck;NeDaeSetParameters mSetParameters;NeDaeFunction
mPreTrDiagnoseFcn;NeDaeFunction mPreDcDiagnoseFcn;NeDaeSolve mAllInputsWorkFcn
;NeDaeLinearizeFcn mResidualsFcn;NeDaeLinearizeFcn mLinearizeFcn;PmfMessageId(
*mInitializeFcn)(NeDae*dae,NeModelParameters mp,NeuDiagnosticManager*mgr);void
(*mSolverFailureNotify)(NeDae*dae,size_t num_consecutive_failures);void(*
mSetupLoggerFcn)(const NeDae*,NeLoggerBuilder*);int32_T(*mLogFcn)(const NeDae*
,const NeSystemInput*,PmRealVector*);void(*mGenerateFcn)(const NeDae*,const
NeCgParams*,NeCgResults*);const SLMatrices**(*mSwitchedLinearDataFcn)(const
NeDae*);NeDaeMakeOutputFcn mMakeOutput[NE_NUM_DAE_METHODS];NeDaeFreeOutputFcn
mFreeOutput[NE_NUM_DAE_METHODS];NeRealFunctorFcn mRealFunctorFcn;void(*
mSetOutputFunction)(const NeDae*,size_t outputFunctionIndex);void(*
mStartOutputLoop)(const NeDae*);NeCustomData*(*mGetCustomDataFcn)(const NeDae*
);PmfMessageId(*mSetCustomDataFcn)(const NeCustomData*,const NeDae*,
NeuDiagnosticManager*mgr);};PMF_DEPLOY_STATIC PmfMessageId ne_dae_linearize(
const NeDae*dae,const NeSystemInput*input,PmRealVector*LinJacobian,
NeuDiagnosticManager*mgr){return dae->mLinearizeFcn(dae,input,LinJacobian,mgr)
;}PMF_DEPLOY_STATIC PmfMessageId ne_dae_residuals(const NeDae*daePtr,const
NeSystemInput*inputPtr,PmRealVector*residualsRvPtr,NeuDiagnosticManager*mgr){
return daePtr->mResidualsFcn(daePtr,inputPtr,residualsRvPtr,mgr);}
PMF_DEPLOY_STATIC PmfMessageId ne_dae_call_method(const NeDae*dae,
NeDaeMethodId id,const NeSystemInput*input,NeDaeMethodOutput*output,
NeuDiagnosticManager*mgr){return dae->mMethods[id](dae,input,output,mgr);}
PMF_DEPLOY_STATIC NeDaeMethodOutput*ne_dae_default_output(const NeDae*dae,
NeDaeMethodId id,PmAllocator*allocator){return dae->mMakeOutput[id](dae,
allocator);}PMF_DEPLOY_STATIC NeDaeMethodOutput*ne_dae_method_output(const
NeDae*dae,NeDaeMethodId id,const NeSystemInput*input,NeuDiagnosticManager*mgr,
PmAllocator*allocator){NeDaeMethodOutput*daeOutput=ne_dae_default_output(dae,
id,allocator);ne_dae_call_method(dae,id,input,daeOutput,mgr);return daeOutput;
}PMF_DEPLOY_STATIC PmfMessageId ne_dae_solve(const NeDae*dae,NeDaeSolveId id,
const NeSystemInput*input,NeuDiagnosticManager*mgr){return dae->mSolves[id](
dae,input,mgr);}PMF_DEPLOY_STATIC NeSystemInputSizes
ne_dae_get_system_input_sizes(const NeDae*dae){NeSystemInputSizes sizes;sizes.
mSizes[NE_SYSTEM_INPUT_ID_Q]=dae->mNumMajorModes;sizes.mSizes[
NE_SYSTEM_INPUT_ID_M]=dae->mNumModes;sizes.mSizes[NE_SYSTEM_INPUT_ID_T]=1;
sizes.mSizes[NE_SYSTEM_INPUT_ID_U]=dae->mNumInputs;sizes.mSizes[
NE_SYSTEM_INPUT_ID_V]=dae->mNumInputs;sizes.mSizes[NE_SYSTEM_INPUT_ID_X]=dae->
mNumStates;sizes.mSizes[NE_SYSTEM_INPUT_ID_D]=dae->mNumDiscreteStates;sizes.
mSizes[NE_SYSTEM_INPUT_ID_E]=dae->mNumSamples;sizes.mSizes[
NE_SYSTEM_INPUT_ID_CR]=dae->mNumRealCache;sizes.mSizes[NE_SYSTEM_INPUT_ID_CI]=
dae->mNumIntCache;return sizes;}PMF_DEPLOY_STATIC void
ne_dae_default_output_free(const NeDae*dae,NeDaeMethodOutput*output,
NeDaeMethodId id,PmAllocator*allocator){dae->mFreeOutput[id](output,allocator)
;}PMF_DEPLOY_STATIC void ne_dae_get_reference(NeDae*dae){++(dae->mRefCount);}
PMF_DEPLOY_STATIC void ne_dae_release_reference(NeDae*dae){(void)0;;if(--(dae
->mRefCount)==0){dae->mDestroy(dae);}}
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* __ne_dae_h__ */
