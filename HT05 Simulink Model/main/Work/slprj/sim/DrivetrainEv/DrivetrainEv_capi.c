#include <stddef.h>
#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "DrivetrainEv_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)    
#else
#include "builtin_typeid_types.h"
#include "DrivetrainEv.h"
#include "DrivetrainEv_capi.h"
#include "DrivetrainEv_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST                  
#define TARGET_STRING(s)               (NULL)                    
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 0 , ( NULL ) , ( NULL ) ,
0 , 0 , 0 , 0 , 0 } } ; static rtwCAPI_States rtBlockStates [ ] = { { 0 , 2 ,
TARGET_STRING ( "DrivetrainEv/Vehicle/Integrator" ) , TARGET_STRING ( "" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1 , 0 } , { 1 , 15 ,
TARGET_STRING (
 "DrivetrainEv/Rotational Inertia/Rotational Inertia/Rotational Inertia External Input/Integrator"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 , 1 , - 1
, 0 } , { 2 , 14 , TARGET_STRING (
 "DrivetrainEv/Torsional Compliance/Torsional Compliance Linear 2way/Torsional Compliance Linear/Integrator"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 , 1 , - 1
, 0 } , { 3 , 16 , TARGET_STRING (
 "DrivetrainEv/Differential and Compliance/Rear Wheel Drive/Limited Slip Differential/Limited Slip Differential/Integrator"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1
, 0 } , { 4 , 13 , TARGET_STRING (
 "DrivetrainEv/Torsional Compliance/Torsional Compliance Linear 2way/Torsional Compliance Linear/Cont LPF IC Dyn/Integrator"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 , 1 , - 1
, 0 } , { 5 , 4 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/3DOF (Body Axes)/Position"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1
, 0 } , { 6 , 6 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/3DOF (Body Axes)/Theta"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 , 1 , - 1
, 0 } , { 7 , 0 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/3DOF (Body Axes)/U,w"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1
, 0 } , { 8 , 7 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/3DOF (Body Axes)/q"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 , 1 , - 1
, 0 } , { 9 , 18 , TARGET_STRING (
 "DrivetrainEv/Differential and Compliance/Rear Wheel Drive/Limited Slip Differential/Limited Slip Differential/Clutch Response/Integrator"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 , 1 , - 1
, 0 } , { 10 , 10 , TARGET_STRING (
 "DrivetrainEv/Differential and Compliance/Rear Wheel Drive/Rear Axle Compliance 1/Torsional Compliance Linear 2way/Torsional Compliance Linear/Integrator"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 , 1 , - 1
, 0 } , { 11 , 8 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Wheel Module/relaxation/Cont LPF Dyn/Integrator"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 , 1 , - 1
, 0 } , { 12 , 11 , TARGET_STRING (
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Wheel Module/relaxation/Cont LPF Dyn/Integrator"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 , 1 , - 1
, 0 } , { 13 , 9 , TARGET_STRING (
 "DrivetrainEv/Differential and Compliance/Rear Wheel Drive/Rear Axle Compliance 1/Torsional Compliance Linear 2way/Torsional Compliance Linear/Cont LPF IC Dyn/Integrator"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 , 1 , - 1
, 0 } , { 14 , 12 , TARGET_STRING (
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Body Frame/Longitudinal 3DOF/Integrator3"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 , 1 , - 1
, 0 } , { 0 , - 1 , ( NULL ) , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 , 0 ,
- 1 , 0 } } ;
#ifndef HOST_CAPI_BUILD
static void DrivetrainEv_InitializeDataAddr ( void * dataAddr [ ] ,
lvsoqlxlcs * localDW , edp3webv0p * localX ) { dataAddr [ 0 ] = ( void * ) (
& localX -> d5vyxqghh0 [ 0 ] ) ; dataAddr [ 1 ] = ( void * ) ( & localX ->
lavyvivx1k ) ; dataAddr [ 2 ] = ( void * ) ( & localX -> fxodvuf53f ) ;
dataAddr [ 3 ] = ( void * ) ( & localX -> mjiky0nofi [ 0 ] ) ; dataAddr [ 4 ]
= ( void * ) ( & localX -> cs3cbynlcj ) ; dataAddr [ 5 ] = ( void * ) ( &
localX -> noatsby3ej [ 0 ] ) ; dataAddr [ 6 ] = ( void * ) ( & localX ->
in4ouu3rj0 ) ; dataAddr [ 7 ] = ( void * ) ( & localX -> ncmmxrrgvr [ 0 ] ) ;
dataAddr [ 8 ] = ( void * ) ( & localX -> fmsvpqigtm ) ; dataAddr [ 9 ] = (
void * ) ( & localX -> pvkalczr1c ) ; dataAddr [ 10 ] = ( void * ) ( & localX
-> dkpe1jeg2m ) ; dataAddr [ 11 ] = ( void * ) ( & localX -> neffdf1vy0 ) ;
dataAddr [ 12 ] = ( void * ) ( & localX -> exw1srp224 ) ; dataAddr [ 13 ] = (
void * ) ( & localX -> m5tmby1aqo ) ; dataAddr [ 14 ] = ( void * ) ( & localX
-> lwzedupgn2 ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void DrivetrainEv_InitializeVarDimsAddr ( int32_T * vardimsAddr [ ] )
{ vardimsAddr [ 0 ] = ( NULL ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void DrivetrainEv_InitializeLoggingFunctions ( RTWLoggingFcnPtr
loggingPtrs [ ] ) { loggingPtrs [ 0 ] = ( NULL ) ; loggingPtrs [ 1 ] = ( NULL
) ; loggingPtrs [ 2 ] = ( NULL ) ; loggingPtrs [ 3 ] = ( NULL ) ; loggingPtrs
[ 4 ] = ( NULL ) ; loggingPtrs [ 5 ] = ( NULL ) ; loggingPtrs [ 6 ] = ( NULL
) ; loggingPtrs [ 7 ] = ( NULL ) ; loggingPtrs [ 8 ] = ( NULL ) ; loggingPtrs
[ 9 ] = ( NULL ) ; loggingPtrs [ 10 ] = ( NULL ) ; loggingPtrs [ 11 ] = (
NULL ) ; loggingPtrs [ 12 ] = ( NULL ) ; loggingPtrs [ 13 ] = ( NULL ) ;
loggingPtrs [ 14 ] = ( NULL ) ; }
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "double" ,
"real_T" , 0 , 0 , sizeof ( real_T ) , SS_DOUBLE , 0 , 0 , 0 } } ;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_VECTOR , 0 , 2 , 0 } , { rtwCAPI_SCALAR , 2 , 2 , 0 } } ; static
uint_T rtDimensionArray [ ] = { 2 , 1 , 1 , 1 } ; static const real_T
rtcapiStoredFloats [ ] = { 0.0 } ; static rtwCAPI_FixPtMap rtFixPtMap [ ] = {
{ ( NULL ) , ( NULL ) , rtwCAPI_FIX_RESERVED , 0 , 0 , 0 } , } ; static
rtwCAPI_SampleTimeMap rtSampleTimeMap [ ] = { { ( const void * ) &
rtcapiStoredFloats [ 0 ] , ( const void * ) & rtcapiStoredFloats [ 0 ] , 0 ,
0 } } ; static int_T rtContextSystems [ 25 ] ; static rtwCAPI_LoggingMetaInfo
loggingMetaInfo [ ] = { { 0 , 0 , "" , 0 } } ; static
rtwCAPI_ModelMapLoggingStaticInfo mmiStaticInfoLogging = { 25 ,
rtContextSystems , loggingMetaInfo , 0 , NULL , { 0 , NULL , NULL } , 0 , (
NULL ) } ; static rtwCAPI_ModelMappingStaticInfo mmiStatic = { {
rtBlockSignals , 0 , ( NULL ) , 0 , ( NULL ) , 0 } , { ( NULL ) , 0 , ( NULL
) , 0 } , { rtBlockStates , 15 } , { rtDataTypeMap , rtDimensionMap ,
rtFixPtMap , rtElementMap , rtSampleTimeMap , rtDimensionArray } , "float" ,
{ 2137829015U , 1225820561U , 2702400977U , 1804579957U } , &
mmiStaticInfoLogging , 0 , 0 } ; const rtwCAPI_ModelMappingStaticInfo *
DrivetrainEv_GetCAPIStaticMap ( void ) { return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
static void DrivetrainEv_InitializeSystemRan ( hcopmldpph * const a5ree4wwe5
, sysRanDType * systemRan [ ] , lvsoqlxlcs * localDW , int_T systemTid [ ] ,
void * rootSysRanPtr , int rootTid ) { UNUSED_PARAMETER ( a5ree4wwe5 ) ;
UNUSED_PARAMETER ( localDW ) ; systemRan [ 0 ] = ( sysRanDType * )
rootSysRanPtr ; systemRan [ 1 ] = ( NULL ) ; systemRan [ 2 ] = ( NULL ) ;
systemRan [ 3 ] = ( NULL ) ; systemRan [ 4 ] = ( NULL ) ; systemRan [ 5 ] = (
sysRanDType * ) & localDW -> fbnwpfi1ef3 [ 0 ] . nod5vp1cyy . fate2u2iog .
lim0ml1jqw ; systemRan [ 6 ] = ( sysRanDType * ) & localDW -> fbnwpfi1ef3 [ 0
] . nod5vp1cyy . fate2u2iog . iojd2jlc3k ; systemRan [ 7 ] = ( sysRanDType *
) & localDW -> fbnwpfi1ef3 [ 0 ] . nod5vp1cyy . fate2u2iog . d3vznomj0x ;
systemRan [ 8 ] = ( sysRanDType * ) & localDW -> fbnwpfi1ef3 [ 0 ] .
nod5vp1cyy . fate2u2iog . k3j1amkab5 ; systemRan [ 9 ] = ( NULL ) ; systemRan
[ 10 ] = ( NULL ) ; systemRan [ 11 ] = ( NULL ) ; systemRan [ 12 ] = ( NULL )
; systemRan [ 13 ] = ( NULL ) ; systemRan [ 14 ] = ( NULL ) ; systemRan [ 15
] = ( sysRanDType * ) & localDW -> cg32ix3bhp [ 0 ] . nod5vp1cyy . fate2u2iog
. lim0ml1jqw ; systemRan [ 16 ] = ( sysRanDType * ) & localDW -> cg32ix3bhp [
0 ] . nod5vp1cyy . fate2u2iog . iojd2jlc3k ; systemRan [ 17 ] = ( sysRanDType
* ) & localDW -> cg32ix3bhp [ 0 ] . nod5vp1cyy . fate2u2iog . d3vznomj0x ;
systemRan [ 18 ] = ( sysRanDType * ) & localDW -> cg32ix3bhp [ 0 ] .
nod5vp1cyy . fate2u2iog . k3j1amkab5 ; systemRan [ 19 ] = ( NULL ) ;
systemRan [ 20 ] = ( NULL ) ; systemRan [ 21 ] = ( NULL ) ; systemRan [ 22 ]
= ( NULL ) ; systemRan [ 23 ] = ( NULL ) ; systemRan [ 24 ] = ( NULL ) ;
systemTid [ 1 ] = a5ree4wwe5 -> Timing . mdlref_GlobalTID [ 0 ] ; systemTid [
2 ] = a5ree4wwe5 -> Timing . mdlref_GlobalTID [ 0 ] ; systemTid [ 3 ] =
a5ree4wwe5 -> Timing . mdlref_GlobalTID [ 0 ] ; systemTid [ 4 ] = a5ree4wwe5
-> Timing . mdlref_GlobalTID [ 0 ] ; systemTid [ 14 ] = a5ree4wwe5 -> Timing
. mdlref_GlobalTID [ 0 ] ; systemTid [ 8 ] = a5ree4wwe5 -> Timing .
mdlref_GlobalTID [ 1 ] ; systemTid [ 18 ] = a5ree4wwe5 -> Timing .
mdlref_GlobalTID [ 1 ] ; systemTid [ 7 ] = a5ree4wwe5 -> Timing .
mdlref_GlobalTID [ 1 ] ; systemTid [ 17 ] = a5ree4wwe5 -> Timing .
mdlref_GlobalTID [ 1 ] ; systemTid [ 5 ] = a5ree4wwe5 -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 15 ] = a5ree4wwe5 -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 6 ] = a5ree4wwe5 -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 16 ] = a5ree4wwe5 -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 9 ] = a5ree4wwe5 -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 19 ] = a5ree4wwe5 -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 10 ] = a5ree4wwe5 -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 20 ] = a5ree4wwe5 -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 11 ] = a5ree4wwe5 -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 21 ] = a5ree4wwe5 -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 12 ] = a5ree4wwe5 -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 13 ] = a5ree4wwe5 -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 22 ] = a5ree4wwe5 -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 23 ] = a5ree4wwe5 -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 24 ] = a5ree4wwe5 -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 0 ] = rootTid ; rtContextSystems [ 0 ] =
0 ; rtContextSystems [ 1 ] = 0 ; rtContextSystems [ 2 ] = 0 ;
rtContextSystems [ 3 ] = 0 ; rtContextSystems [ 4 ] = 0 ; rtContextSystems [
5 ] = 5 ; rtContextSystems [ 6 ] = 6 ; rtContextSystems [ 7 ] = 7 ;
rtContextSystems [ 8 ] = 8 ; rtContextSystems [ 9 ] = 0 ; rtContextSystems [
10 ] = 0 ; rtContextSystems [ 11 ] = 0 ; rtContextSystems [ 12 ] = 0 ;
rtContextSystems [ 13 ] = 0 ; rtContextSystems [ 14 ] = 0 ; rtContextSystems
[ 15 ] = 15 ; rtContextSystems [ 16 ] = 16 ; rtContextSystems [ 17 ] = 17 ;
rtContextSystems [ 18 ] = 18 ; rtContextSystems [ 19 ] = 0 ; rtContextSystems
[ 20 ] = 0 ; rtContextSystems [ 21 ] = 0 ; rtContextSystems [ 22 ] = 0 ;
rtContextSystems [ 23 ] = 0 ; rtContextSystems [ 24 ] = 0 ; }
#endif
#ifndef HOST_CAPI_BUILD
void DrivetrainEv_InitializeDataMapInfo ( hcopmldpph * const a5ree4wwe5 ,
lvsoqlxlcs * localDW , edp3webv0p * localX , void * sysRanPtr , int
contextTid ) { rtwCAPI_SetVersion ( a5ree4wwe5 -> DataMapInfo . mmi , 1 ) ;
rtwCAPI_SetStaticMap ( a5ree4wwe5 -> DataMapInfo . mmi , & mmiStatic ) ;
rtwCAPI_SetLoggingStaticMap ( a5ree4wwe5 -> DataMapInfo . mmi , &
mmiStaticInfoLogging ) ; DrivetrainEv_InitializeDataAddr ( a5ree4wwe5 ->
DataMapInfo . dataAddress , localDW , localX ) ; rtwCAPI_SetDataAddressMap (
a5ree4wwe5 -> DataMapInfo . mmi , a5ree4wwe5 -> DataMapInfo . dataAddress ) ;
DrivetrainEv_InitializeVarDimsAddr ( a5ree4wwe5 -> DataMapInfo .
vardimsAddress ) ; rtwCAPI_SetVarDimsAddressMap ( a5ree4wwe5 -> DataMapInfo .
mmi , a5ree4wwe5 -> DataMapInfo . vardimsAddress ) ; rtwCAPI_SetPath (
a5ree4wwe5 -> DataMapInfo . mmi , ( NULL ) ) ; rtwCAPI_SetFullPath (
a5ree4wwe5 -> DataMapInfo . mmi , ( NULL ) ) ;
DrivetrainEv_InitializeLoggingFunctions ( a5ree4wwe5 -> DataMapInfo .
loggingPtrs ) ; rtwCAPI_SetLoggingPtrs ( a5ree4wwe5 -> DataMapInfo . mmi ,
a5ree4wwe5 -> DataMapInfo . loggingPtrs ) ; rtwCAPI_SetInstanceLoggingInfo (
a5ree4wwe5 -> DataMapInfo . mmi , & a5ree4wwe5 -> DataMapInfo .
mmiLogInstanceInfo ) ; rtwCAPI_SetChildMMIArray ( a5ree4wwe5 -> DataMapInfo .
mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArrayLen ( a5ree4wwe5 -> DataMapInfo .
mmi , 0 ) ; DrivetrainEv_InitializeSystemRan ( a5ree4wwe5 , a5ree4wwe5 ->
DataMapInfo . systemRan , localDW , a5ree4wwe5 -> DataMapInfo . systemTid ,
sysRanPtr , contextTid ) ; rtwCAPI_SetSystemRan ( a5ree4wwe5 -> DataMapInfo .
mmi , a5ree4wwe5 -> DataMapInfo . systemRan ) ; rtwCAPI_SetSystemTid (
a5ree4wwe5 -> DataMapInfo . mmi , a5ree4wwe5 -> DataMapInfo . systemTid ) ;
rtwCAPI_SetGlobalTIDMap ( a5ree4wwe5 -> DataMapInfo . mmi , & a5ree4wwe5 ->
Timing . mdlref_GlobalTID [ 0 ] ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void DrivetrainEv_host_InitializeDataMapInfo (
DrivetrainEv_host_DataMapInfo_T * dataMap , const char * path ) {
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
