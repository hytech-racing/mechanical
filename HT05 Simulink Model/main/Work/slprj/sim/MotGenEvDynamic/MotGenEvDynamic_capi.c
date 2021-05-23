#include <stddef.h>
#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "MotGenEvDynamic_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)    
#else
#include "builtin_typeid_types.h"
#include "MotGenEvDynamic.h"
#include "MotGenEvDynamic_capi.h"
#include "MotGenEvDynamic_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST                  
#define TARGET_STRING(s)               (NULL)                    
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static const rtwCAPI_SignalHierLoggingInfo rtSigHierLoggingInfo [ ] = { { ""
, 4 , 0 } , { "SrcPwr" , 0 , - 1 } , { "LdPwr" , 0 , - 1 } , { "PwrLoss" , 0
, - 1 } , { "MtrTrqEst" , 0 , - 1 } } ; static const uint_T
rtSigHierLoggingChildIdxs [ ] = { 1 , 2 , 3 , 4 } ; static rtwCAPI_Signals
rtBlockSignals [ ] = { { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 } }
; static rtwCAPI_States rtBlockStates [ ] = { { 0 , - 1 , TARGET_STRING (
"MotGenEvDynamic/Unit Delay" ) , TARGET_STRING ( "DSTATE" ) , "" , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 } , { 1 , - 1 , TARGET_STRING (
"MotGenEvDynamic/Unit Delay" ) , TARGET_STRING ( "DSTATE" ) , "" , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 1 } , { 2 , - 1 , TARGET_STRING (
"MotGenEvDynamic/Unit Delay" ) , TARGET_STRING ( "DSTATE" ) , "" , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 2 } , { 3 , - 1 , TARGET_STRING (
"MotGenEvDynamic/Unit Delay" ) , TARGET_STRING ( "DSTATE" ) , "" , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 3 } , { 4 , 1 , TARGET_STRING (
 "MotGenEvDynamic/Interior PMSM/PMSM Speed Input Continuous/PMSM Speed Input Core/Mechanical and Angle/Int1"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 , 1 , - 1
, 0 } , { 5 , - 1 , TARGET_STRING (
 "MotGenEvDynamic/Interior PM Controller/Interior PMSM Torque Control Drive TL/Current Controller/DQ Current Control and Decouple/Integrator/Unit Delay"
) , TARGET_STRING ( "DSTATE" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 6
, - 1 , TARGET_STRING (
 "MotGenEvDynamic/Interior PM Controller/Interior PMSM Torque Control Drive TL/Current Controller/DQ Current Control and Decouple/Integrator1/Unit Delay"
) , TARGET_STRING ( "DSTATE" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 7
, 0 , TARGET_STRING (
 "MotGenEvDynamic/Interior PMSM/PMSM Speed Input Continuous/PMSM Speed Input Core/PMSM Electromagnetic/PMSM Equivalent Circuit/D Axis Stator Voltage/Integrator"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 , 1 , - 1
, 0 } , { 8 , 2 , TARGET_STRING (
 "MotGenEvDynamic/Interior PMSM/PMSM Speed Input Continuous/PMSM Speed Input Core/PMSM Electromagnetic/PMSM Equivalent Circuit/D Axis Stator Voltage1/Integrator"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 , 1 , - 1
, 0 } , { 0 , - 1 , ( NULL ) , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 , 0 ,
- 1 , 0 } } ; static int_T rt_LoggedStateIdxList [ ] = { 1 , 0 , 2 , 3 , 1 ,
4 , 5 , 0 , 2 } ;
#ifndef HOST_CAPI_BUILD
static void MotGenEvDynamic_InitializeDataAddr ( void * dataAddr [ ] ,
cloq5bin3y * localDW , fsi3zxjdsv * localX ) { dataAddr [ 0 ] = ( void * ) (
& localDW -> lmqwggutck ) ; dataAddr [ 1 ] = ( void * ) ( & localDW ->
pdv153zdu5 ) ; dataAddr [ 2 ] = ( void * ) ( & localDW -> omrrdh0nvo ) ;
dataAddr [ 3 ] = ( void * ) ( & localDW -> gxkwygbb4g ) ; dataAddr [ 4 ] = (
void * ) ( & localX -> lsis3mvtl3 ) ; dataAddr [ 5 ] = ( void * ) ( & localDW
-> hh4vgn0tkn ) ; dataAddr [ 6 ] = ( void * ) ( & localDW -> n1xqcq4unv ) ;
dataAddr [ 7 ] = ( void * ) ( & localX -> jjrb01sfag ) ; dataAddr [ 8 ] = (
void * ) ( & localX -> kqb0spkyga ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void MotGenEvDynamic_InitializeVarDimsAddr ( int32_T * vardimsAddr [ ]
) { vardimsAddr [ 0 ] = ( NULL ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void MotGenEvDynamic_InitializeLoggingFunctions ( RTWLoggingFcnPtr
loggingPtrs [ ] ) { loggingPtrs [ 0 ] = ( NULL ) ; loggingPtrs [ 1 ] = ( NULL
) ; loggingPtrs [ 2 ] = ( NULL ) ; loggingPtrs [ 3 ] = ( NULL ) ; loggingPtrs
[ 4 ] = ( NULL ) ; loggingPtrs [ 5 ] = ( NULL ) ; loggingPtrs [ 6 ] = ( NULL
) ; loggingPtrs [ 7 ] = ( NULL ) ; loggingPtrs [ 8 ] = ( NULL ) ; }
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "double" ,
"real_T" , 0 , 0 , sizeof ( real_T ) , SS_DOUBLE , 0 , 0 , 0 } } ;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_SCALAR , 0 , 2 , 0 } } ; static uint_T rtDimensionArray [ ] = { 1 , 1
} ; static const real_T rtcapiStoredFloats [ ] = { 5.0E-5 , 0.0 } ; static
rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) ,
rtwCAPI_FIX_RESERVED , 0 , 0 , 0 } , } ; static rtwCAPI_SampleTimeMap
rtSampleTimeMap [ ] = { { ( const void * ) & rtcapiStoredFloats [ 0 ] , (
const void * ) & rtcapiStoredFloats [ 1 ] , 2 , 0 } , { ( const void * ) &
rtcapiStoredFloats [ 1 ] , ( const void * ) & rtcapiStoredFloats [ 1 ] , 0 ,
0 } } ; static int_T rtContextSystems [ 10 ] ; static rtwCAPI_LoggingMetaInfo
loggingMetaInfo [ ] = { { 0 , 0 , "" , 0 } } ; static
rtwCAPI_ModelMapLoggingStaticInfo mmiStaticInfoLogging = { 10 ,
rtContextSystems , loggingMetaInfo , 0 , NULL , { 5 , rtSigHierLoggingInfo ,
rtSigHierLoggingChildIdxs } , 0 , ( NULL ) } ; static
rtwCAPI_ModelMappingStaticInfo mmiStatic = { { rtBlockSignals , 0 , ( NULL )
, 0 , ( NULL ) , 0 } , { ( NULL ) , 0 , ( NULL ) , 0 } , { rtBlockStates , 9
} , { rtDataTypeMap , rtDimensionMap , rtFixPtMap , rtElementMap ,
rtSampleTimeMap , rtDimensionArray } , "float" , { 3390124480U , 3346966259U
, 2813906734U , 2410746006U } , & mmiStaticInfoLogging , 0 , 0 ,
rt_LoggedStateIdxList } ; const rtwCAPI_ModelMappingStaticInfo *
MotGenEvDynamic_GetCAPIStaticMap ( void ) { return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
static void MotGenEvDynamic_InitializeSystemRan ( mv4ga5jwa1 * const
oczxsqne0n , sysRanDType * systemRan [ ] , cloq5bin3y * localDW , int_T
systemTid [ ] , void * rootSysRanPtr , int rootTid ) { UNUSED_PARAMETER (
oczxsqne0n ) ; UNUSED_PARAMETER ( localDW ) ; systemRan [ 0 ] = ( sysRanDType
* ) rootSysRanPtr ; systemRan [ 1 ] = ( sysRanDType * ) & localDW ->
feypm5vhbq ; systemRan [ 2 ] = ( sysRanDType * ) & localDW -> djzzdpaje3 ;
systemRan [ 3 ] = ( sysRanDType * ) & localDW -> n0wi1kglhh ; systemRan [ 4 ]
= ( sysRanDType * ) & localDW -> ooikcgayh1 ; systemRan [ 5 ] = ( sysRanDType
* ) & localDW -> o22jbjlb32 ; systemRan [ 6 ] = ( sysRanDType * ) & localDW
-> kk4n2up2w1 ; systemRan [ 7 ] = ( NULL ) ; systemRan [ 8 ] = ( NULL ) ;
systemRan [ 9 ] = ( NULL ) ; systemTid [ 1 ] = oczxsqne0n -> Timing .
mdlref_GlobalTID [ 2 ] ; systemTid [ 2 ] = oczxsqne0n -> Timing .
mdlref_GlobalTID [ 2 ] ; systemTid [ 5 ] = oczxsqne0n -> Timing .
mdlref_GlobalTID [ 2 ] ; systemTid [ 4 ] = oczxsqne0n -> Timing .
mdlref_GlobalTID [ 2 ] ; systemTid [ 3 ] = oczxsqne0n -> Timing .
mdlref_GlobalTID [ 2 ] ; systemTid [ 6 ] = oczxsqne0n -> Timing .
mdlref_GlobalTID [ 2 ] ; systemTid [ 7 ] = oczxsqne0n -> Timing .
mdlref_GlobalTID [ 2 ] ; systemTid [ 8 ] = oczxsqne0n -> Timing .
mdlref_GlobalTID [ 2 ] ; systemTid [ 9 ] = oczxsqne0n -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 0 ] = rootTid ; rtContextSystems [ 0 ] =
0 ; rtContextSystems [ 1 ] = 1 ; rtContextSystems [ 2 ] = 2 ;
rtContextSystems [ 3 ] = 3 ; rtContextSystems [ 4 ] = 4 ; rtContextSystems [
5 ] = 5 ; rtContextSystems [ 6 ] = 6 ; rtContextSystems [ 7 ] = 0 ;
rtContextSystems [ 8 ] = 0 ; rtContextSystems [ 9 ] = 0 ; }
#endif
#ifndef HOST_CAPI_BUILD
void MotGenEvDynamic_InitializeDataMapInfo ( mv4ga5jwa1 * const oczxsqne0n ,
cloq5bin3y * localDW , fsi3zxjdsv * localX , void * sysRanPtr , int
contextTid ) { rtwCAPI_SetVersion ( oczxsqne0n -> DataMapInfo . mmi , 1 ) ;
rtwCAPI_SetStaticMap ( oczxsqne0n -> DataMapInfo . mmi , & mmiStatic ) ;
rtwCAPI_SetLoggingStaticMap ( oczxsqne0n -> DataMapInfo . mmi , &
mmiStaticInfoLogging ) ; MotGenEvDynamic_InitializeDataAddr ( oczxsqne0n ->
DataMapInfo . dataAddress , localDW , localX ) ; rtwCAPI_SetDataAddressMap (
oczxsqne0n -> DataMapInfo . mmi , oczxsqne0n -> DataMapInfo . dataAddress ) ;
MotGenEvDynamic_InitializeVarDimsAddr ( oczxsqne0n -> DataMapInfo .
vardimsAddress ) ; rtwCAPI_SetVarDimsAddressMap ( oczxsqne0n -> DataMapInfo .
mmi , oczxsqne0n -> DataMapInfo . vardimsAddress ) ; rtwCAPI_SetPath (
oczxsqne0n -> DataMapInfo . mmi , ( NULL ) ) ; rtwCAPI_SetFullPath (
oczxsqne0n -> DataMapInfo . mmi , ( NULL ) ) ;
MotGenEvDynamic_InitializeLoggingFunctions ( oczxsqne0n -> DataMapInfo .
loggingPtrs ) ; rtwCAPI_SetLoggingPtrs ( oczxsqne0n -> DataMapInfo . mmi ,
oczxsqne0n -> DataMapInfo . loggingPtrs ) ; rtwCAPI_SetInstanceLoggingInfo (
oczxsqne0n -> DataMapInfo . mmi , & oczxsqne0n -> DataMapInfo .
mmiLogInstanceInfo ) ; rtwCAPI_SetChildMMIArray ( oczxsqne0n -> DataMapInfo .
mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArrayLen ( oczxsqne0n -> DataMapInfo .
mmi , 0 ) ; MotGenEvDynamic_InitializeSystemRan ( oczxsqne0n , oczxsqne0n ->
DataMapInfo . systemRan , localDW , oczxsqne0n -> DataMapInfo . systemTid ,
sysRanPtr , contextTid ) ; rtwCAPI_SetSystemRan ( oczxsqne0n -> DataMapInfo .
mmi , oczxsqne0n -> DataMapInfo . systemRan ) ; rtwCAPI_SetSystemTid (
oczxsqne0n -> DataMapInfo . mmi , oczxsqne0n -> DataMapInfo . systemTid ) ;
rtwCAPI_SetGlobalTIDMap ( oczxsqne0n -> DataMapInfo . mmi , & oczxsqne0n ->
Timing . mdlref_GlobalTID [ 0 ] ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void MotGenEvDynamic_host_InitializeDataMapInfo (
MotGenEvDynamic_host_DataMapInfo_T * dataMap , const char * path ) {
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
