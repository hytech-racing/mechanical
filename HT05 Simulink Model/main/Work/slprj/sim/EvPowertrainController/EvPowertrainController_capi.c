#include <stddef.h>
#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "EvPowertrainController_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)    
#else
#include "builtin_typeid_types.h"
#include "EvPowertrainController.h"
#include "EvPowertrainController_capi.h"
#include "EvPowertrainController_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST                  
#define TARGET_STRING(s)               (NULL)                    
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 0 , ( NULL ) , ( NULL ) ,
0 , 0 , 0 , 0 , 0 } } ; static rtwCAPI_States rtBlockStates [ ] = { { 0 , - 1
, ( NULL ) , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } } ;
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "" , "" , 0 ,
0 , 0 , 0 , 0 , 0 , 0 } } ;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_SCALAR , 0 , 0 , 0 } } ; static uint_T rtDimensionArray [ ] = { 0 } ;
static rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) ,
rtwCAPI_FIX_RESERVED , 0 , 0 , 0 } , } ; static rtwCAPI_SampleTimeMap
rtSampleTimeMap [ ] = { { ( NULL ) , ( NULL ) , 0 , 0 } } ; static int_T
rtContextSystems [ 11 ] ; static rtwCAPI_LoggingMetaInfo loggingMetaInfo [ ]
= { { 0 , 0 , "" , 0 } } ; static rtwCAPI_ModelMapLoggingStaticInfo
mmiStaticInfoLogging = { 11 , rtContextSystems , loggingMetaInfo , 0 , NULL ,
{ 0 , NULL , NULL } , 0 , ( NULL ) } ; static rtwCAPI_ModelMappingStaticInfo
mmiStatic = { { rtBlockSignals , 0 , ( NULL ) , 0 , ( NULL ) , 0 } , { ( NULL
) , 0 , ( NULL ) , 0 } , { rtBlockStates , 0 } , { rtDataTypeMap ,
rtDimensionMap , rtFixPtMap , rtElementMap , rtSampleTimeMap ,
rtDimensionArray } , "float" , { 3453810543U , 3120422280U , 2591501859U ,
1887033232U } , & mmiStaticInfoLogging , 0 , 0 } ; const
rtwCAPI_ModelMappingStaticInfo * EvPowertrainController_GetCAPIStaticMap (
void ) { return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
static void EvPowertrainController_InitializeSystemRan ( h5efmxf3a3 * const
e4f4oaoqet , sysRanDType * systemRan [ ] , int_T systemTid [ ] , void *
rootSysRanPtr , int rootTid ) { UNUSED_PARAMETER ( e4f4oaoqet ) ; systemRan [
0 ] = ( sysRanDType * ) rootSysRanPtr ; systemRan [ 1 ] = ( NULL ) ;
systemRan [ 2 ] = ( NULL ) ; systemRan [ 3 ] = ( NULL ) ; systemRan [ 4 ] = (
NULL ) ; systemRan [ 5 ] = ( NULL ) ; systemRan [ 6 ] = ( NULL ) ; systemRan
[ 7 ] = ( NULL ) ; systemRan [ 8 ] = ( NULL ) ; systemRan [ 9 ] = ( NULL ) ;
systemRan [ 10 ] = ( NULL ) ; systemTid [ 1 ] = e4f4oaoqet -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 2 ] = e4f4oaoqet -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 3 ] = e4f4oaoqet -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 4 ] = e4f4oaoqet -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 5 ] = e4f4oaoqet -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 6 ] = e4f4oaoqet -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 7 ] = e4f4oaoqet -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 8 ] = e4f4oaoqet -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 9 ] = e4f4oaoqet -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 10 ] = e4f4oaoqet -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 0 ] = rootTid ; rtContextSystems [ 0 ] =
0 ; rtContextSystems [ 1 ] = 0 ; rtContextSystems [ 2 ] = 0 ;
rtContextSystems [ 3 ] = 0 ; rtContextSystems [ 4 ] = 0 ; rtContextSystems [
5 ] = 0 ; rtContextSystems [ 6 ] = 0 ; rtContextSystems [ 7 ] = 0 ;
rtContextSystems [ 8 ] = 0 ; rtContextSystems [ 9 ] = 0 ; rtContextSystems [
10 ] = 0 ; }
#endif
#ifndef HOST_CAPI_BUILD
void EvPowertrainController_InitializeDataMapInfo ( h5efmxf3a3 * const
e4f4oaoqet , void * sysRanPtr , int contextTid ) { rtwCAPI_SetVersion (
e4f4oaoqet -> DataMapInfo . mmi , 1 ) ; rtwCAPI_SetStaticMap ( e4f4oaoqet ->
DataMapInfo . mmi , & mmiStatic ) ; rtwCAPI_SetLoggingStaticMap ( e4f4oaoqet
-> DataMapInfo . mmi , & mmiStaticInfoLogging ) ; rtwCAPI_SetPath (
e4f4oaoqet -> DataMapInfo . mmi , ( NULL ) ) ; rtwCAPI_SetFullPath (
e4f4oaoqet -> DataMapInfo . mmi , ( NULL ) ) ; rtwCAPI_SetInstanceLoggingInfo
( e4f4oaoqet -> DataMapInfo . mmi , & e4f4oaoqet -> DataMapInfo .
mmiLogInstanceInfo ) ; rtwCAPI_SetChildMMIArray ( e4f4oaoqet -> DataMapInfo .
mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArrayLen ( e4f4oaoqet -> DataMapInfo .
mmi , 0 ) ; EvPowertrainController_InitializeSystemRan ( e4f4oaoqet ,
e4f4oaoqet -> DataMapInfo . systemRan , e4f4oaoqet -> DataMapInfo . systemTid
, sysRanPtr , contextTid ) ; rtwCAPI_SetSystemRan ( e4f4oaoqet -> DataMapInfo
. mmi , e4f4oaoqet -> DataMapInfo . systemRan ) ; rtwCAPI_SetSystemTid (
e4f4oaoqet -> DataMapInfo . mmi , e4f4oaoqet -> DataMapInfo . systemTid ) ;
rtwCAPI_SetGlobalTIDMap ( e4f4oaoqet -> DataMapInfo . mmi , & e4f4oaoqet ->
Timing . mdlref_GlobalTID [ 0 ] ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void EvPowertrainController_host_InitializeDataMapInfo (
EvPowertrainController_host_DataMapInfo_T * dataMap , const char * path ) {
rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ; rtwCAPI_SetStaticMap ( dataMap ->
mmi , & mmiStatic ) ; rtwCAPI_SetDataAddressMap ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , NULL ) ; rtwCAPI_SetPath (
dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif
