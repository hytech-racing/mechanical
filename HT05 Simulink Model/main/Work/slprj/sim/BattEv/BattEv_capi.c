#include <stddef.h>
#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "BattEv_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)    
#else
#include "builtin_typeid_types.h"
#include "BattEv.h"
#include "BattEv_capi.h"
#include "BattEv_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST                  
#define TARGET_STRING(s)               (NULL)                    
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 0 , ( NULL ) , ( NULL ) ,
0 , 0 , 0 , 0 , 0 } } ; static rtwCAPI_States rtBlockStates [ ] = { { 0 , 0 ,
TARGET_STRING (
 "BattEv/Lithium Ion Battery Pack/Datasheet Battery Internal/Datasheet Battery/Charge Model/Integrator\nLimited"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1
, 0 } , { 0 , - 1 , ( NULL ) , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 , 0 ,
- 1 , 0 } } ;
#ifndef HOST_CAPI_BUILD
static void BattEv_InitializeDataAddr ( void * dataAddr [ ] , dmy10bqvs5 *
localDW , hkgv0zhr3w * localX ) { dataAddr [ 0 ] = ( void * ) ( & localX ->
hflmlajctv ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void BattEv_InitializeVarDimsAddr ( int32_T * vardimsAddr [ ] ) {
vardimsAddr [ 0 ] = ( NULL ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void BattEv_InitializeLoggingFunctions ( RTWLoggingFcnPtr loggingPtrs
[ ] ) { loggingPtrs [ 0 ] = ( NULL ) ; }
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "double" ,
"real_T" , 0 , 0 , sizeof ( real_T ) , SS_DOUBLE , 0 , 0 , 0 } } ;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_SCALAR , 0 , 2 , 0 } } ; static uint_T rtDimensionArray [ ] = { 1 , 1
} ; static const real_T rtcapiStoredFloats [ ] = { 0.0 } ; static
rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) ,
rtwCAPI_FIX_RESERVED , 0 , 0 , 0 } , } ; static rtwCAPI_SampleTimeMap
rtSampleTimeMap [ ] = { { ( const void * ) & rtcapiStoredFloats [ 0 ] , (
const void * ) & rtcapiStoredFloats [ 0 ] , 0 , 0 } } ; static int_T
rtContextSystems [ 2 ] ; static rtwCAPI_LoggingMetaInfo loggingMetaInfo [ ] =
{ { 0 , 0 , "" , 0 } } ; static rtwCAPI_ModelMapLoggingStaticInfo
mmiStaticInfoLogging = { 2 , rtContextSystems , loggingMetaInfo , 0 , NULL ,
{ 0 , NULL , NULL } , 0 , ( NULL ) } ; static rtwCAPI_ModelMappingStaticInfo
mmiStatic = { { rtBlockSignals , 0 , ( NULL ) , 0 , ( NULL ) , 0 } , { ( NULL
) , 0 , ( NULL ) , 0 } , { rtBlockStates , 1 } , { rtDataTypeMap ,
rtDimensionMap , rtFixPtMap , rtElementMap , rtSampleTimeMap ,
rtDimensionArray } , "float" , { 2630729822U , 4281388535U , 4025192798U ,
2384138663U } , & mmiStaticInfoLogging , 0 , 0 } ; const
rtwCAPI_ModelMappingStaticInfo * BattEv_GetCAPIStaticMap ( void ) { return &
mmiStatic ; }
#ifndef HOST_CAPI_BUILD
static void BattEv_InitializeSystemRan ( euywnbmp33 * const n4jdqa0poy ,
sysRanDType * systemRan [ ] , dmy10bqvs5 * localDW , int_T systemTid [ ] ,
void * rootSysRanPtr , int rootTid ) { UNUSED_PARAMETER ( n4jdqa0poy ) ;
UNUSED_PARAMETER ( localDW ) ; systemRan [ 0 ] = ( sysRanDType * )
rootSysRanPtr ; systemRan [ 1 ] = ( NULL ) ; systemTid [ 1 ] = n4jdqa0poy ->
Timing . mdlref_GlobalTID [ 0 ] ; systemTid [ 0 ] = rootTid ;
rtContextSystems [ 0 ] = 0 ; rtContextSystems [ 1 ] = 0 ; }
#endif
#ifndef HOST_CAPI_BUILD
void BattEv_InitializeDataMapInfo ( euywnbmp33 * const n4jdqa0poy ,
dmy10bqvs5 * localDW , hkgv0zhr3w * localX , void * sysRanPtr , int
contextTid ) { rtwCAPI_SetVersion ( n4jdqa0poy -> DataMapInfo . mmi , 1 ) ;
rtwCAPI_SetStaticMap ( n4jdqa0poy -> DataMapInfo . mmi , & mmiStatic ) ;
rtwCAPI_SetLoggingStaticMap ( n4jdqa0poy -> DataMapInfo . mmi , &
mmiStaticInfoLogging ) ; BattEv_InitializeDataAddr ( n4jdqa0poy ->
DataMapInfo . dataAddress , localDW , localX ) ; rtwCAPI_SetDataAddressMap (
n4jdqa0poy -> DataMapInfo . mmi , n4jdqa0poy -> DataMapInfo . dataAddress ) ;
BattEv_InitializeVarDimsAddr ( n4jdqa0poy -> DataMapInfo . vardimsAddress ) ;
rtwCAPI_SetVarDimsAddressMap ( n4jdqa0poy -> DataMapInfo . mmi , n4jdqa0poy
-> DataMapInfo . vardimsAddress ) ; rtwCAPI_SetPath ( n4jdqa0poy ->
DataMapInfo . mmi , ( NULL ) ) ; rtwCAPI_SetFullPath ( n4jdqa0poy ->
DataMapInfo . mmi , ( NULL ) ) ; BattEv_InitializeLoggingFunctions (
n4jdqa0poy -> DataMapInfo . loggingPtrs ) ; rtwCAPI_SetLoggingPtrs (
n4jdqa0poy -> DataMapInfo . mmi , n4jdqa0poy -> DataMapInfo . loggingPtrs ) ;
rtwCAPI_SetInstanceLoggingInfo ( n4jdqa0poy -> DataMapInfo . mmi , &
n4jdqa0poy -> DataMapInfo . mmiLogInstanceInfo ) ; rtwCAPI_SetChildMMIArray (
n4jdqa0poy -> DataMapInfo . mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArrayLen (
n4jdqa0poy -> DataMapInfo . mmi , 0 ) ; BattEv_InitializeSystemRan (
n4jdqa0poy , n4jdqa0poy -> DataMapInfo . systemRan , localDW , n4jdqa0poy ->
DataMapInfo . systemTid , sysRanPtr , contextTid ) ; rtwCAPI_SetSystemRan (
n4jdqa0poy -> DataMapInfo . mmi , n4jdqa0poy -> DataMapInfo . systemRan ) ;
rtwCAPI_SetSystemTid ( n4jdqa0poy -> DataMapInfo . mmi , n4jdqa0poy ->
DataMapInfo . systemTid ) ; rtwCAPI_SetGlobalTIDMap ( n4jdqa0poy ->
DataMapInfo . mmi , & n4jdqa0poy -> Timing . mdlref_GlobalTID [ 0 ] ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void BattEv_host_InitializeDataMapInfo ( BattEv_host_DataMapInfo_T * dataMap
, const char * path ) { rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ;
rtwCAPI_SetStaticMap ( dataMap -> mmi , & mmiStatic ) ;
rtwCAPI_SetDataAddressMap ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , NULL ) ; rtwCAPI_SetPath (
dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif
