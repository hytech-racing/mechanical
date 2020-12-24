#ifndef ___ne_ds_h__
#define ___ne_ds_h__
#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
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
NeParameterData;
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
dynSys->mSetupLogger(dynSys,builder);}typedef enum NeEqGroupMethodIdTag{
NE_EQ_GROUP_INVALID= -1,NE_EQ_GROUP_ZC,NE_EQ_GROUP_MODE,NE_EQ_GROUP_CACHE,
NE_EQ_GROUP_UPDATE_R,NE_EQ_GROUP_UPDATE_I,NE_EQ_GROUP_SFO,NE_EQ_GROUP_SFP,
NE_EQ_GROUP_INIT_R,NE_EQ_GROUP_INIT_I,NE_EQ_GROUP_ASSERT,NE_EQ_GROUP_DEL_T,
NE_EQ_GROUP_DEL_V,NE_EQ_GROUP_DEL_V0,NE_EQ_GROUP_DEL_TMAX,NE_EQ_GROUP_DDELT,
NE_EQ_GROUP_DDELT_P,NE_EQ_GROUP_NUM}NeEqGroupMethodId;typedef enum
NeEqParamMethodIdTag{NE_EQ_PARAM_INVALID= -1,NE_EQ_PARAM_C1,NE_EQ_PARAM_NUM}
NeEqParamMethodId;typedef enum NeEqMethodIdTag{NE_EQ_INVALID= -1,NE_EQ_M,
NE_EQ_DM_P,NE_EQ_DM,NE_EQ_F,NE_EQ_VMF,NE_EQ_SLF,NE_EQ_VMM,NE_EQ_DF_P,NE_EQ_DF,
NE_EQ_DWF_P,NE_EQ_DWF,NE_EQ_TDF_P,NE_EQ_NUM}NeEqMethodId;typedef union
NeEqGroupMethodOutputTag{real_T*mZC;int32_T*mMODE;int32_T*mCACHE;real_T*
mUPDATE_R;int32_T*mUPDATE_I;real_T*mSFO;real_T*mSFP;real_T*mINIT_R;int32_T*
mINIT_I;int32_T*mASSERT;real_T*mDEL_T;real_T*mDEL_V;real_T*mDEL_V0;real_T*
mDEL_TMAX;real_T*mDDELT;int32_T*mDDELT_P;}NeEqGroupMethodOutput;typedef union
NeEqMethodParamOutputTag{real_T*mC1;}NeEqParamMethodOutput;typedef union
NeEqMethodOutputTag{real_T mM;int32_T*mDM_P;real_T*mDM;real_T mF;boolean_T mVMF
;boolean_T mSLF;boolean_T mVMM;int32_T*mDF_P;real_T*mDF;int32_T*mDWF_P;real_T*
mDWF;int32_T*mTDF_P;}NeEqMethodOutput;typedef struct NeEqMethodInputTag
NeEqMethodInput;typedef struct NeElementEquationGroupInfoTag
NeElementEquationGroupInfo;typedef void*(*NeEqSetupFcn)(const
NeElementEquationGroupInfo*);typedef void(*NeEqCleanupFcn)(void*);typedef void
(*NeEqParamMethod)(const void*,NeEqParamMethodOutput*);typedef void(*
NeEqMethod)(const NeEqMethodInput*,NeEqMethodOutput*);struct NeEqMethodInputTag
{real_T*mX;int32_T*mM;int32_T*mQ;real_T*mW;void*mEqData;};
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* ___ne_ds_h__ */
