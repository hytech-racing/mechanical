#ifndef RTW_HEADER_BattEv_h_
#define RTW_HEADER_BattEv_h_
#include <string.h>
#include <stddef.h>
#include "rtw_modelmap.h"
#ifndef BattEv_COMMON_INCLUDES_
#define BattEv_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "simstruc.h"
#include "fixedpoint.h"
#endif
#include "BattEv_types.h"
#include "multiword_types.h"
#include "model_reference_types.h"
#include "rt_nonfinite.h"
typedef struct { real_T cxft4ixm0k ; real_T awwyaae3xe ; } nw51lwywlm ;
typedef struct { int_T c0lxguzdmo ; int_T aq4rfpgnmi ; } dmy10bqvs5 ; typedef
struct { real_T hflmlajctv ; } hkgv0zhr3w ; typedef struct { real_T
hflmlajctv ; } nvyvwtjtwa ; typedef struct { boolean_T hflmlajctv ; }
khjrgybdwv ; typedef struct { real_T hflmlajctv ; } fr5wy4tsqu ; typedef
struct { real_T hflmlajctv ; } ebrgzbbeqm ; typedef struct { real_T
hflmlajctv ; } op3keyawy1 ; typedef struct { real_T jlvu1k5feu ; real_T
dghrbykmv0 ; real_T mknsjhdkfa ; } o3ciyyrlrx ; struct a2kiykjvrxh_ { real_T
P_0 ; real_T P_1 ; real_T P_2 [ 7 ] ; real_T P_3 [ 101 ] ; real_T P_4 [ 6 ] ;
real_T P_5 [ 101 ] ; real_T P_6 ; real_T P_7 ; real_T P_8 [ 42 ] ; real_T P_9
; real_T P_10 ; uint32_T P_11 [ 2 ] ; } ; struct bjbjtykkxm { struct
SimStruct_tag * _mdlRefSfcnS ; const rtTimingBridge * timingBridge ; struct {
rtwCAPI_ModelMappingInfo mmi ; rtwCAPI_ModelMapLoggingInstanceInfo
mmiLogInstanceInfo ; void * dataAddress [ 1 ] ; int32_T * vardimsAddress [ 1
] ; RTWLoggingFcnPtr loggingPtrs [ 1 ] ; sysRanDType * systemRan [ 2 ] ;
int_T systemTid [ 2 ] ; } DataMapInfo ; struct { int_T mdlref_GlobalTID [ 2 ]
; } Timing ; } ; typedef struct { nw51lwywlm rtb ; dmy10bqvs5 rtdw ;
euywnbmp33 rtm ; } lobjb0lvrdo ; extern void lst5ppimoh ( SimStruct *
_mdlRefSfcnS , int_T mdlref_TID0 , int_T mdlref_TID1 , euywnbmp33 * const
n4jdqa0poy , nw51lwywlm * localB , dmy10bqvs5 * localDW , hkgv0zhr3w * localX
, void * sysRanPtr , int contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI
, const char_T * rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ;
extern void mr_BattEv_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T *
modelName , int_T * retVal ) ; extern mxArray * mr_BattEv_GetDWork ( const
lobjb0lvrdo * mdlrefDW ) ; extern void mr_BattEv_SetDWork ( lobjb0lvrdo *
mdlrefDW , const mxArray * ssDW ) ; extern void
mr_BattEv_RegisterSimStateChecksum ( SimStruct * S ) ; extern mxArray *
mr_BattEv_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * BattEv_GetCAPIStaticMap ( void ) ; extern
void poo3kmg0ob ( euywnbmp33 * const n4jdqa0poy , dmy10bqvs5 * localDW ,
hkgv0zhr3w * localX ) ; extern void havtbmuleg ( euywnbmp33 * const
n4jdqa0poy , dmy10bqvs5 * localDW , hkgv0zhr3w * localX ) ; extern void
pexk2pi1gg ( nw51lwywlm * localB , dmy10bqvs5 * localDW , khjrgybdwv *
localXdis , nvyvwtjtwa * localXdot ) ; extern void d3sayc4aih ( nw51lwywlm *
localB , dmy10bqvs5 * localDW , hkgv0zhr3w * localX , o3ciyyrlrx * localZCSV
) ; extern void c0hgp3wnut ( euywnbmp33 * const n4jdqa0poy , nw51lwywlm *
localB , dmy10bqvs5 * localDW , hkgv0zhr3w * localX ) ; extern void
c0hgp3wnutTID1 ( void ) ; extern void BattEv ( euywnbmp33 * const n4jdqa0poy
, const real_T * bgau4kdtsz , const real_T * nend3jcwem , real_T * icwqjgxcm3
, real_T * jovjkqw4dc , nw51lwywlm * localB , dmy10bqvs5 * localDW ,
hkgv0zhr3w * localX ) ; extern void BattEvTID1 ( nw51lwywlm * localB ) ;
extern void m5uwyjpoin ( euywnbmp33 * const n4jdqa0poy ) ;
#endif
