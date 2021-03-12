#ifndef RTW_HEADER_EvPowertrainController_h_
#define RTW_HEADER_EvPowertrainController_h_
#include <string.h>
#include <stddef.h>
#include "rtw_modelmap.h"
#ifndef EvPowertrainController_COMMON_INCLUDES_
#define EvPowertrainController_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "simstruc.h"
#include "fixedpoint.h"
#endif
#include "EvPowertrainController_types.h"
#include "multiword_types.h"
#include "mwmathutil.h"
#include "rt_nonfinite.h"
typedef struct { real_T g11mbzoj5e ; } j43xi004pt ; struct kmsrr4v05yq_ {
real_T P_0 ; real_T P_1 ; real_T P_2 ; real_T P_3 ; real_T P_4 ; real_T P_5 ;
real_T P_6 [ 11 ] ; real_T P_7 [ 11 ] ; real_T P_8 [ 11 ] ; real_T P_9 [ 11 ]
; real_T P_10 ; real_T P_11 ; real_T P_12 [ 180 ] ; real_T P_13 [ 12 ] ;
real_T P_14 [ 15 ] ; real_T P_15 ; real_T P_16 ; real_T P_17 ; real_T P_18 [
12 ] ; real_T P_19 [ 12 ] ; real_T P_20 [ 11 ] ; real_T P_21 [ 11 ] ; real_T
P_22 [ 2 ] ; real_T P_23 [ 2 ] ; real_T P_24 ; real_T P_25 [ 12 ] ; real_T
P_26 [ 12 ] ; real_T P_27 ; real_T P_28 ; real_T P_29 ; real_T P_30 ; real_T
P_31 ; real_T P_32 ; real_T P_33 [ 12 ] ; real_T P_34 [ 12 ] ; real_T P_35 ;
real_T P_36 ; real_T P_37 ; real_T P_38 ; real_T P_39 ; real_T P_40 ;
uint32_T P_41 [ 2 ] ; } ; struct a50xwovlji { struct SimStruct_tag *
_mdlRefSfcnS ; struct { rtwCAPI_ModelMappingInfo mmi ;
rtwCAPI_ModelMapLoggingInstanceInfo mmiLogInstanceInfo ; sysRanDType *
systemRan [ 11 ] ; int_T systemTid [ 11 ] ; } DataMapInfo ; struct { int_T
mdlref_GlobalTID [ 2 ] ; } Timing ; } ; typedef struct { j43xi004pt rtb ;
h5efmxf3a3 rtm ; } pwecol01r52 ; extern void io04qbfqhk ( SimStruct *
_mdlRefSfcnS , int_T mdlref_TID0 , int_T mdlref_TID1 , h5efmxf3a3 * const
e4f4oaoqet , j43xi004pt * localB , void * sysRanPtr , int contextTid ,
rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T * rt_ChildPath , int_T
rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ; extern void
mr_EvPowertrainController_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T *
modelName , int_T * retVal ) ; extern mxArray *
mr_EvPowertrainController_GetDWork ( const pwecol01r52 * mdlrefDW ) ; extern
void mr_EvPowertrainController_SetDWork ( pwecol01r52 * mdlrefDW , const
mxArray * ssDW ) ; extern void
mr_EvPowertrainController_RegisterSimStateChecksum ( SimStruct * S ) ; extern
mxArray * mr_EvPowertrainController_GetSimStateDisallowedBlocks ( ) ; extern
const rtwCAPI_ModelMappingStaticInfo *
EvPowertrainController_GetCAPIStaticMap ( void ) ; extern void
EvPowertrainController ( const real_T * prupxtwaeb , const real_T *
jym0osvxgw , const real_T * mipgkbochp , const real_T * crcnsgdctu , const
real_T * kb3nkebj5c , real_T * j3hft4pgzt , real_T * ljajhg2mpa , j43xi004pt
* localB ) ; extern void EvPowertrainControllerTID1 ( j43xi004pt * localB ) ;
extern void lktaxgo5iz ( h5efmxf3a3 * const e4f4oaoqet ) ;
#endif
