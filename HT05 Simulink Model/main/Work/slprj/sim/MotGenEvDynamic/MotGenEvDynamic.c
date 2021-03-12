#include "MotGenEvDynamic_capi.h"
#include "MotGenEvDynamic.h"
#include "MotGenEvDynamic_private.h"
#include "look1_binlxpw.h"
#include "look2_binlcapw.h"
#include "plook_u32d_evencka.h"
static RegMdlInfo rtMdlInfo_MotGenEvDynamic [ 45 ] = { { "l0vfpqnnodc" ,
MDL_INFO_NAME_MDLREF_DWORK , 0 , - 1 , ( void * ) "MotGenEvDynamic" } , {
"f0can1sh3a" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"MotGenEvDynamic" } , { "p1rrq1ih3i" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "MotGenEvDynamic" } , { "fw3b52wipm" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "MotGenEvDynamic" } ,
{ "fjkqlf2nvp" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"MotGenEvDynamic" } , { "a2tgpeokha" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "MotGenEvDynamic" } , { "evfyajgoqu" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "MotGenEvDynamic" } ,
{ "fsi3zxjdsv" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"MotGenEvDynamic" } , { "dnp4tfveqx" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "MotGenEvDynamic" } , { "ccbblm2i42" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "MotGenEvDynamic" } ,
{ "b4pfzmpesc" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"MotGenEvDynamic" } , { "g1eluy0pnh" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "MotGenEvDynamic" } , { "cloq5bin3y" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "MotGenEvDynamic" } ,
{ "cx3bhokmct" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"MotGenEvDynamic" } , { "nle35gwn4o" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "MotGenEvDynamic" } , { "kh5ykjtmv0" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "MotGenEvDynamic" } ,
{ "dk15ta1msh" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"MotGenEvDynamic" } , { "byych5oy3s" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "MotGenEvDynamic" } , { "oyr1jsm2fc" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "MotGenEvDynamic" } ,
{ "cmnf4xtkyp" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"MotGenEvDynamic" } , { "mfy1r3luh1" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "MotGenEvDynamic" } , { "lwglwij1vj" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "MotGenEvDynamic" } ,
{ "fb4yyrugqd" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"MotGenEvDynamic" } , { "dwpuxjpomb" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "MotGenEvDynamic" } , { "cwmdpnrf2r" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "MotGenEvDynamic" } ,
{ "n5k0o3qutm" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"MotGenEvDynamic" } , { "pv4vhh3fcm" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "MotGenEvDynamic" } , { "MotGenEvDynamic" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0 , ( NULL ) } , { "fmq4tpy2xx" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "MotGenEvDynamic" } ,
{ "n4bpxhx2nv" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"MotGenEvDynamic" } , { "mv4ga5jwa1" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "MotGenEvDynamic" } , {
"mr_MotGenEvDynamic_GetSimStateDisallowedBlocks" , MDL_INFO_ID_MODEL_FCN_NAME
, 0 , - 1 , ( void * ) "MotGenEvDynamic" } , {
"mr_MotGenEvDynamic_extractBitFieldFromCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "MotGenEvDynamic" } , {
"mr_MotGenEvDynamic_cacheBitFieldToCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "MotGenEvDynamic" } , {
"mr_MotGenEvDynamic_restoreDataFromMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "MotGenEvDynamic" } , {
"mr_MotGenEvDynamic_cacheDataToMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "MotGenEvDynamic" } , {
"mr_MotGenEvDynamic_extractBitFieldFromMxArray" , MDL_INFO_ID_MODEL_FCN_NAME
, 0 , - 1 , ( void * ) "MotGenEvDynamic" } , {
"mr_MotGenEvDynamic_cacheBitFieldToMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0
, - 1 , ( void * ) "MotGenEvDynamic" } , {
"mr_MotGenEvDynamic_restoreDataFromMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0
, - 1 , ( void * ) "MotGenEvDynamic" } , {
"mr_MotGenEvDynamic_cacheDataAsMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , -
1 , ( void * ) "MotGenEvDynamic" } , {
"mr_MotGenEvDynamic_RegisterSimStateChecksum" , MDL_INFO_ID_MODEL_FCN_NAME ,
0 , - 1 , ( void * ) "MotGenEvDynamic" } , { "mr_MotGenEvDynamic_SetDWork" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "MotGenEvDynamic" } , {
"mr_MotGenEvDynamic_GetDWork" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void
* ) "MotGenEvDynamic" } , { "MotGenEvDynamic.h" , MDL_INFO_MODEL_FILENAME , 0
, - 1 , ( NULL ) } , { "MotGenEvDynamic.c" , MDL_INFO_MODEL_FILENAME , 0 , -
1 , ( void * ) "MotGenEvDynamic" } } ; hp0wdh0z5x5 hp0wdh0z5x = { 15.0796 ,
0.15708 , 0.16336 , 0.000125 , { 0.000125 , 0.00013 } , 0.00013 , 10.0 , 10.0
, 0.012 , { 20.0 , 40.0 , 60.0 , 80.0 , 100.0 , 120.0 } , { 0.0 ,
19.985156633074 , 39.971428506838 , 59.9599303436293 , 79.9517758302521 ,
99.9480771031373 , 119.949944236996 , 139.958484738103 , 159.974803043325 ,
180.000000025972 } , { 0.0 , - 0.1462179567608 , - 0.584806564968636 , -
1.31557018395526 , - 2.33818323037254 , - 3.65219090220048 , -
5.25701018709997 , - 7.15193114990723 , - 9.33611849267687 , -
11.8086133793206 } , { 0.0 , 0.0 } , { - 11.8086131593411 , 304.885461307355
, 305.114057134944 } , { 0.0 , 33.9012465822705 , 67.800601762615 ,
101.696176775709 , 135.586088119489 , 169.468460162012 , 203.341427718783 ,
237.203138591047 , 271.05175605583 , 304.885461298835 } , 0.0393 , 0.0393 , {
0.97 , 0.97 , 0.97 , 0.97 , 0.97 , 0.97 , 0.97 , 0.97 , 0.97 , 0.97 , 0.97 ,
0.97 , 0.97 , 0.97 , 0.97 , 0.97 , 0.97 , 0.97 , 0.97 , 0.97 , 0.97 , 0.97 ,
0.97 , 0.97 , 0.97 , 0.97 , 0.97 , 0.97 , 0.97 , 0.97 } , 0.0 , { 105.0 ,
210.0 , 315.0 , 420.0 , 525.0 } , 0.0 , 0.0 , 0.0 , 3.0 , 0.0 , 0.0 , 3.0 ,
0.0 , 0.0 , 2.2204460492503131E-16 , 0.0 , 0.0 , 0.0 , 0.0 , 3.0 ,
2.2204460492503131E-16 , 0.0 , 3.0 , 0.66666666666666663 , -
0.33333333333333331 , - 1.0 , - 0.33333333333333331 , 0.57735026918962573 , -
0.57735026918962573 , 0.57735026918962584 , 4.0 , 0.0 , 0.0 , 0.0 , 5.0E-5 ,
1.0E+7 , - 1.0E+7 , 0.0 , 5.0E-5 , 1.0E+7 , - 1.0E+7 , - 0.5 , - 0.5 ,
0.8660254037844386 , - 0.8660254037844386 , 1.0 , 2.0 ,
2.2204460492503131E-16 , { 4021.27659574468 , 3217.02127659574 ,
2412.76595744681 , 1608.51063829787 , 1718.18181818182 , 1512.0 , 1512.0 ,
2268.0 , 3024.0 , 3780.0 , 3351.06382978723 , 2210.52631578947 ,
1657.8947368421 , 1105.26315789474 , 913.043478260869 , 840.0 , 1050.0 ,
1575.0 , 2100.0 , 3150.0 , 2210.52631578947 , 1400.0 , 1050.0 ,
700.000000000001 , 730.434782608695 , 672.0 , 672.000000000001 , 1008.0 ,
1344.0 , 2100.0 , 2010.63829787234 , 1326.31578947368 , 787.500000000001 ,
663.157894736841 , 547.826086956521 , 504.0 , 629.999999999999 ,
756.000000000001 , 1260.0 , 1890.0 , 2333.33333333333 , 1072.34042553191 ,
804.255319148936 , 536.170212765957 , 466.666666666667 , 420.0 ,
503.999999999999 , 755.999999999999 , 1008.0 , 2100.0 , 1431.81818181818 ,
1145.45454545455 , 859.09090909091 , 572.727272727273 , 286.363636363637 ,
252.0 , 504.0 , 756.0 , 1008.0 , 1260.0 , 1260.0 , 1008.0 , 756.0 , 504.0 ,
252.0 , 286.363636363637 , 572.727272727273 , 859.09090909091 ,
1145.45454545455 , 1431.81818181818 , 2100.0 , 1008.0 , 755.999999999999 ,
503.999999999999 , 420.0 , 466.666666666667 , 536.170212765957 ,
804.255319148936 , 1072.34042553191 , 2333.33333333333 , 1890.0 , 1260.0 ,
756.000000000001 , 629.999999999999 , 504.0 , 547.826086956521 ,
663.157894736841 , 787.500000000001 , 1326.31578947368 , 2010.63829787234 ,
2100.0 , 1344.0 , 1008.0 , 672.000000000001 , 672.0 , 730.434782608695 ,
700.000000000001 , 1050.0 , 1400.0 , 2210.52631578947 , 3150.0 , 2100.0 ,
1575.0 , 1050.0 , 840.0 , 913.043478260869 , 1105.26315789474 ,
1657.8947368421 , 2210.52631578947 , 3351.06382978723 , 3780.0 , 3024.0 ,
2268.0 , 1512.0 , 1512.0 , 1718.18181818182 , 1608.51063829787 ,
2412.76595744681 , 3217.02127659574 , 4021.27659574468 } , { - 525.0 , -
420.0 , - 315.0 , - 210.0 , - 105.0 , 105.0 , 210.0 , 315.0 , 420.0 , 525.0 }
, { - 120.0 , - 100.0 , - 80.0 , - 60.0 , - 40.0 , - 20.0 , 20.0 , 40.0 ,
60.0 , 80.0 , 100.0 , 120.0 } , 0.0 , 0.0 , 1.0E+7 , - 1.0E+7 ,
3.1415926535897931 , - 3.1415926535897931 , 1.0E+7 , - 1.0E+7 , - 0.5 ,
0.8660254037844386 , 0.66666666666666663 , - 0.33333333333333331 , -
0.33333333333333331 , 0.57735026918962573 , - 0.57735026918962573 , - 0.5 , -
0.8660254037844386 , 0.001 , 0.0 , 0.0 , 1.0 , 2.0 , 1.0 , 1.0 , 2.0 , 1.0 ,
1.0 , 2.0 , 2.0 , 1.0 , 2.0 , 2.0 , 2.0 , { 9U , 11U } , { 4U , 5U } } ; void
pv4vhh3fcm ( mv4ga5jwa1 * const oczxsqne0n , cloq5bin3y * localDW ) { if ( (
ssGetSimMode ( oczxsqne0n -> _mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( (
oczxsqne0n -> _mdlRefSfcnS ) -> mdlInfo -> rtwgenMode !=
SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { { if (
slIsRapidAcceleratorSimulating ( ) || ( ssGetSimMode ( oczxsqne0n ->
_mdlRefSfcnS ) == SS_SIMMODE_NORMAL ) || ssRTWGenIsAccelerator ( oczxsqne0n
-> _mdlRefSfcnS ) ) { { sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName =
sdiGetLabelFromChars ( "<LdPwr>" ) ; sdiLabelU origSigName =
sdiGetLabelFromChars ( "<LdPwr>" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"MotGenEvDynamic/Bus Selector" ) ; sdiLabelU blockSID = sdiGetLabelFromChars
( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ;
sdiDims forEachMdlRefDims ; int_T forEachMdlRefDimsArray [ 32 ] ; sdiLabelU
sigName = sdiGetLabelFromChars ( "<LdPwr>" ) ; sdiAsyncQueueHandle
hForEachParent = ( NULL ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE
; int_T sigDimsArray [ 2 ] = { 1 , 1 } ; sigDims . nDims = 2 ; sigDims .
dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ; srcInfo .
fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; if (
slIsRapidAcceleratorSimulating ( ) ) { forEachMdlRefDims . nDims = 0 ; } else
{ forEachMdlRefDims . nDims = slSigLogGetForEachDimsForRefModel ( oczxsqne0n
-> _mdlRefSfcnS , forEachMdlRefDimsArray ) ; forEachMdlRefDims . dimensions =
forEachMdlRefDimsArray ; } if ( forEachMdlRefDims . nDims > 0 ) {
hForEachParent = sdiCreateForEachParent ( & srcInfo , oczxsqne0n ->
DataMapInfo . mmi . InstanceMap . fullPath , ( NULL ) , loggedName ,
origSigName , propName , & forEachMdlRefDims ) ; sdiUpdateForEachLeafName ( &
srcInfo , hForEachParent ) ; } localDW -> brnt2ej5x1 . AQHandles =
sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo , oczxsqne0n -> DataMapInfo
. mmi . InstanceMap . fullPath , "2bb4b8c7-d009-4109-abe8-069db4ef2253" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ; if (
localDW -> brnt2ej5x1 . AQHandles ) { sdiSetSignalSampleTimeString ( localDW
-> brnt2ej5x1 . AQHandles , "5e-05" , 5.0E-5 , rtmGetTFinal ( oczxsqne0n ) )
; sdiSetRunStartTime ( localDW -> brnt2ej5x1 . AQHandles , rtmGetTaskTime (
oczxsqne0n , 2 ) ) ; sdiAsyncRepoSetSignalExportSettings ( localDW ->
brnt2ej5x1 . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW
-> brnt2ej5x1 . AQHandles , loggedName , origSigName , propName ) ; if (
forEachMdlRefDims . nDims > 0 ) { sdiAttachForEachIterationToParent (
hForEachParent , localDW -> brnt2ej5x1 . AQHandles , ( NULL ) ) ; if (
srcInfo . signalName != sigName ) { sdiFreeName ( srcInfo . signalName ) ; }
} } sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } } } } if ( (
ssGetSimMode ( oczxsqne0n -> _mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( (
oczxsqne0n -> _mdlRefSfcnS ) -> mdlInfo -> rtwgenMode !=
SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { { if (
slIsRapidAcceleratorSimulating ( ) || ( ssGetSimMode ( oczxsqne0n ->
_mdlRefSfcnS ) == SS_SIMMODE_NORMAL ) || ssRTWGenIsAccelerator ( oczxsqne0n
-> _mdlRefSfcnS ) ) { { sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName =
sdiGetLabelFromChars ( "<SrcPwr>" ) ; sdiLabelU origSigName =
sdiGetLabelFromChars ( "<SrcPwr>" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"MotGenEvDynamic/Bus Selector" ) ; sdiLabelU blockSID = sdiGetLabelFromChars
( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ;
sdiDims forEachMdlRefDims ; int_T forEachMdlRefDimsArray [ 32 ] ; sdiLabelU
sigName = sdiGetLabelFromChars ( "<SrcPwr>" ) ; sdiAsyncQueueHandle
hForEachParent = ( NULL ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE
; int_T sigDimsArray [ 2 ] = { 1 , 1 } ; sigDims . nDims = 2 ; sigDims .
dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ; srcInfo .
fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 1 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; if (
slIsRapidAcceleratorSimulating ( ) ) { forEachMdlRefDims . nDims = 0 ; } else
{ forEachMdlRefDims . nDims = slSigLogGetForEachDimsForRefModel ( oczxsqne0n
-> _mdlRefSfcnS , forEachMdlRefDimsArray ) ; forEachMdlRefDims . dimensions =
forEachMdlRefDimsArray ; } if ( forEachMdlRefDims . nDims > 0 ) {
hForEachParent = sdiCreateForEachParent ( & srcInfo , oczxsqne0n ->
DataMapInfo . mmi . InstanceMap . fullPath , ( NULL ) , loggedName ,
origSigName , propName , & forEachMdlRefDims ) ; sdiUpdateForEachLeafName ( &
srcInfo , hForEachParent ) ; } localDW -> jckcnytr4c . AQHandles =
sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo , oczxsqne0n -> DataMapInfo
. mmi . InstanceMap . fullPath , "57382739-058b-4784-a3a9-5e455d328f2c" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ; if (
localDW -> jckcnytr4c . AQHandles ) { sdiSetSignalSampleTimeString ( localDW
-> jckcnytr4c . AQHandles , "5e-05" , 5.0E-5 , rtmGetTFinal ( oczxsqne0n ) )
; sdiSetRunStartTime ( localDW -> jckcnytr4c . AQHandles , rtmGetTaskTime (
oczxsqne0n , 2 ) ) ; sdiAsyncRepoSetSignalExportSettings ( localDW ->
jckcnytr4c . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW
-> jckcnytr4c . AQHandles , loggedName , origSigName , propName ) ; if (
forEachMdlRefDims . nDims > 0 ) { sdiAttachForEachIterationToParent (
hForEachParent , localDW -> jckcnytr4c . AQHandles , ( NULL ) ) ; if (
srcInfo . signalName != sigName ) { sdiFreeName ( srcInfo . signalName ) ; }
} } sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } } } } } void
dwpuxjpomb ( mv4ga5jwa1 * const oczxsqne0n , cx3bhokmct * localB , cloq5bin3y
* localDW , fsi3zxjdsv * localX ) { boolean_T tmp ; localDW -> pdv153zdu5 =
hp0wdh0z5x . P_68 ; localDW -> lmqwggutck = hp0wdh0z5x . P_69 ; localDW ->
lf2zfdimpe = 1 ; if ( rtmIsFirstInitCond ( oczxsqne0n ) ) { localX ->
jjrb01sfag = 0.0 ; tmp = slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) {
tmp = ssGetGlobalInitialStatesAvailable ( oczxsqne0n -> _mdlRefSfcnS ) ;
localDW -> lf2zfdimpe = ! tmp ; } else { localDW -> lf2zfdimpe = 1 ; } localX
-> kqb0spkyga = 0.0 ; } localX -> lsis3mvtl3 = hp0wdh0z5x . P_18 ; localDW ->
hjhxitxtn4 = 1 ; if ( rtmIsFirstInitCond ( oczxsqne0n ) ) { tmp =
slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp =
ssGetGlobalInitialStatesAvailable ( oczxsqne0n -> _mdlRefSfcnS ) ; localDW ->
hjhxitxtn4 = ! tmp ; } else { localDW -> hjhxitxtn4 = 1 ; } } localDW ->
omrrdh0nvo = hp0wdh0z5x . P_86 ; localDW -> gxkwygbb4g = hp0wdh0z5x . P_87 ;
localDW -> hh4vgn0tkn = hp0wdh0z5x . P_50 ; localDW -> n1xqcq4unv =
hp0wdh0z5x . P_54 ; localB -> bnhtuo4pzv = hp0wdh0z5x . P_32 ; localB ->
ancya45mmo = hp0wdh0z5x . P_33 ; localB -> jmh12knqk4 = hp0wdh0z5x . P_48 ;
localB -> j4an1koocn = hp0wdh0z5x . P_49 ; } void fb4yyrugqd ( mv4ga5jwa1 *
const oczxsqne0n , cloq5bin3y * localDW , fsi3zxjdsv * localX ) { boolean_T
tmp ; localDW -> pdv153zdu5 = hp0wdh0z5x . P_68 ; localDW -> lmqwggutck =
hp0wdh0z5x . P_69 ; localDW -> lf2zfdimpe = 1 ; if ( rtmIsFirstInitCond (
oczxsqne0n ) ) { localX -> jjrb01sfag = 0.0 ; tmp =
slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp =
ssGetGlobalInitialStatesAvailable ( oczxsqne0n -> _mdlRefSfcnS ) ; localDW ->
lf2zfdimpe = ! tmp ; } else { localDW -> lf2zfdimpe = 1 ; } localX ->
kqb0spkyga = 0.0 ; } localX -> lsis3mvtl3 = hp0wdh0z5x . P_18 ; localDW ->
hjhxitxtn4 = 1 ; if ( rtmIsFirstInitCond ( oczxsqne0n ) ) { tmp =
slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp =
ssGetGlobalInitialStatesAvailable ( oczxsqne0n -> _mdlRefSfcnS ) ; localDW ->
hjhxitxtn4 = ! tmp ; } else { localDW -> hjhxitxtn4 = 1 ; } } localDW ->
omrrdh0nvo = hp0wdh0z5x . P_86 ; localDW -> gxkwygbb4g = hp0wdh0z5x . P_87 ;
localDW -> hh4vgn0tkn = hp0wdh0z5x . P_50 ; localDW -> n1xqcq4unv =
hp0wdh0z5x . P_54 ; } void byych5oy3s ( mv4ga5jwa1 * const oczxsqne0n ,
cloq5bin3y * localDW ) { switch ( localDW -> bfuoehqzsl ) { case 0 :
ssSetBlockStateForSolverChangedAtMajorStep ( oczxsqne0n -> _mdlRefSfcnS ) ;
break ; case 1 : ssSetBlockStateForSolverChangedAtMajorStep ( oczxsqne0n ->
_mdlRefSfcnS ) ; switch ( localDW -> mekacwiae4 ) { case 0 :
ssSetBlockStateForSolverChangedAtMajorStep ( oczxsqne0n -> _mdlRefSfcnS ) ;
break ; case 1 : ssSetBlockStateForSolverChangedAtMajorStep ( oczxsqne0n ->
_mdlRefSfcnS ) ; break ; } localDW -> mekacwiae4 = - 1 ; switch ( localDW ->
cmjt0zg4xt ) { case 0 : ssSetBlockStateForSolverChangedAtMajorStep (
oczxsqne0n -> _mdlRefSfcnS ) ; break ; case 1 :
ssSetBlockStateForSolverChangedAtMajorStep ( oczxsqne0n -> _mdlRefSfcnS ) ;
break ; } localDW -> cmjt0zg4xt = - 1 ; break ; } localDW -> bfuoehqzsl = - 1
; } void n5k0o3qutm ( mv4ga5jwa1 * const oczxsqne0n , cloq5bin3y * localDW )
{ localDW -> i3e2kfzsoy = 0 ; localDW -> nvnt5k5wtu = 0 ; localDW ->
bsszatmvjl = 0 ; ssSetBlockStateForSolverChangedAtMajorStep ( oczxsqne0n ->
_mdlRefSfcnS ) ; ssSetBlockStateForSolverChangedAtMajorStep ( oczxsqne0n ->
_mdlRefSfcnS ) ; localDW -> mekacwiae4 = - 1 ;
ssSetBlockStateForSolverChangedAtMajorStep ( oczxsqne0n -> _mdlRefSfcnS ) ;
ssSetBlockStateForSolverChangedAtMajorStep ( oczxsqne0n -> _mdlRefSfcnS ) ;
localDW -> cmjt0zg4xt = - 1 ; ssSetBlockStateForSolverChangedAtMajorStep (
oczxsqne0n -> _mdlRefSfcnS ) ; ssSetBlockStateForSolverChangedAtMajorStep (
oczxsqne0n -> _mdlRefSfcnS ) ; switch ( localDW -> mekacwiae4 ) { case 0 :
ssSetBlockStateForSolverChangedAtMajorStep ( oczxsqne0n -> _mdlRefSfcnS ) ;
break ; case 1 : ssSetBlockStateForSolverChangedAtMajorStep ( oczxsqne0n ->
_mdlRefSfcnS ) ; break ; } localDW -> mekacwiae4 = - 1 ; switch ( localDW ->
cmjt0zg4xt ) { case 0 : ssSetBlockStateForSolverChangedAtMajorStep (
oczxsqne0n -> _mdlRefSfcnS ) ; break ; case 1 :
ssSetBlockStateForSolverChangedAtMajorStep ( oczxsqne0n -> _mdlRefSfcnS ) ;
break ; } localDW -> cmjt0zg4xt = - 1 ; localDW -> bfuoehqzsl = - 1 ; } void
MotGenEvDynamic ( mv4ga5jwa1 * const oczxsqne0n , const real_T * emppsgntig ,
const real_T * geawchg2qh , const real_T * cvcsdesmn4 , real_T * fnbywarnx2 ,
real_T * cg1dw5wgio , real_T * pjvsscaswy , cx3bhokmct * localB , cloq5bin3y
* localDW , fsi3zxjdsv * localX ) { real_T duyyqqd1zm ; real_T b1nxi21q0c_p ;
real_T d0niepgk02_p ; real_T ejpw5agfwl ; real_T fcx3qihz0y_p ; real_T
fexu2mpvzu ; real_T fuwbeu0mi2 ; real_T g1paxxagjp_p ; real_T gcfwi3ao2o ;
real_T hytb3op1gy ; real_T jaabiiivdd ; real_T jedkbzvhbx ; real_T jzng23hn5g
; real_T n3svixcllx_p ; real_T nx40kxmidk ; real_T odjtfn3yxu ; real_T
oo0kzookhd_p ; int32_T tmp ; uint32_T bpIdx ; int8_T rtAction ; int8_T
rtPrevAction ; if ( rtmIsMajorTimeStep ( oczxsqne0n ) && rtmIsSampleHit (
oczxsqne0n , 2 , 0 ) ) { * pjvsscaswy = localDW -> pdv153zdu5 ; { if (
localDW -> brnt2ej5x1 . AQHandles && ssGetLogOutput ( oczxsqne0n ->
_mdlRefSfcnS ) ) { sdiWriteSignal ( localDW -> brnt2ej5x1 . AQHandles ,
rtmGetTaskTime ( oczxsqne0n , 2 ) , ( char * ) pjvsscaswy + 0 ) ; } }
duyyqqd1zm = localDW -> lmqwggutck ; { if ( localDW -> jckcnytr4c . AQHandles
&& ssGetLogOutput ( oczxsqne0n -> _mdlRefSfcnS ) ) { sdiWriteSignal ( localDW
-> jckcnytr4c . AQHandles , rtmGetTaskTime ( oczxsqne0n , 2 ) , ( char * ) &
duyyqqd1zm + 0 ) ; } } } if ( rtmIsMajorTimeStep ( oczxsqne0n ) ) { if (
localDW -> lf2zfdimpe != 0 ) { localX -> jjrb01sfag = localB -> d4f2unf52i ;
} if ( localX -> jjrb01sfag >= hp0wdh0z5x . P_70 ) { if ( localX ->
jjrb01sfag != hp0wdh0z5x . P_70 ) { localX -> jjrb01sfag = hp0wdh0z5x . P_70
; ssSetBlockStateForSolverChangedAtMajorStep ( oczxsqne0n -> _mdlRefSfcnS ) ;
} localDW -> juyze14tin = 3 ; } else if ( localX -> jjrb01sfag <= hp0wdh0z5x
. P_71 ) { if ( localX -> jjrb01sfag != hp0wdh0z5x . P_71 ) { localX ->
jjrb01sfag = hp0wdh0z5x . P_71 ; ssSetBlockStateForSolverChangedAtMajorStep (
oczxsqne0n -> _mdlRefSfcnS ) ; } localDW -> juyze14tin = 4 ; } else { if (
localDW -> juyze14tin != 0 ) { ssSetBlockStateForSolverChangedAtMajorStep (
oczxsqne0n -> _mdlRefSfcnS ) ; } localDW -> juyze14tin = 0 ; } oo0kzookhd_p =
localX -> jjrb01sfag ; } else { oo0kzookhd_p = localX -> jjrb01sfag ; }
g1paxxagjp_p = localX -> lsis3mvtl3 ; muDoubleScalarSinCos ( hp0wdh0z5x . P_6
* localX -> lsis3mvtl3 , & gcfwi3ao2o , & nx40kxmidk ) ; if (
rtmIsMajorTimeStep ( oczxsqne0n ) ) { if ( localDW -> hjhxitxtn4 != 0 ) {
localX -> kqb0spkyga = localB -> lwpvkhuswg ; } if ( localX -> kqb0spkyga >=
hp0wdh0z5x . P_74 ) { if ( localX -> kqb0spkyga != hp0wdh0z5x . P_74 ) {
localX -> kqb0spkyga = hp0wdh0z5x . P_74 ;
ssSetBlockStateForSolverChangedAtMajorStep ( oczxsqne0n -> _mdlRefSfcnS ) ; }
localDW -> f4evhke5td = 3 ; } else if ( localX -> kqb0spkyga <= hp0wdh0z5x .
P_75 ) { if ( localX -> kqb0spkyga != hp0wdh0z5x . P_75 ) { localX ->
kqb0spkyga = hp0wdh0z5x . P_75 ; ssSetBlockStateForSolverChangedAtMajorStep (
oczxsqne0n -> _mdlRefSfcnS ) ; } localDW -> f4evhke5td = 4 ; } else { if (
localDW -> f4evhke5td != 0 ) { ssSetBlockStateForSolverChangedAtMajorStep (
oczxsqne0n -> _mdlRefSfcnS ) ; } localDW -> f4evhke5td = 0 ; } fcx3qihz0y_p =
localX -> kqb0spkyga ; } else { fcx3qihz0y_p = localX -> kqb0spkyga ; }
b1nxi21q0c_p = oo0kzookhd_p * nx40kxmidk - fcx3qihz0y_p * gcfwi3ao2o ;
d0niepgk02_p = oo0kzookhd_p * gcfwi3ao2o + fcx3qihz0y_p * nx40kxmidk ;
n3svixcllx_p = hp0wdh0z5x . P_76 * b1nxi21q0c_p + hp0wdh0z5x . P_77 *
d0niepgk02_p ; if ( rtmIsMajorTimeStep ( oczxsqne0n ) && rtmIsSampleHit (
oczxsqne0n , 2 , 0 ) ) { if ( rtmIsMajorTimeStep ( oczxsqne0n ) &&
rtmIsSampleHit ( oczxsqne0n , 2 , 0 ) ) { fuwbeu0mi2 = ( b1nxi21q0c_p +
n3svixcllx_p ) * hp0wdh0z5x . P_42 ; ejpw5agfwl = ( hp0wdh0z5x . P_40 *
b1nxi21q0c_p + hp0wdh0z5x . P_41 * n3svixcllx_p ) + hp0wdh0z5x . P_43 *
fuwbeu0mi2 ; fuwbeu0mi2 = hp0wdh0z5x . P_44 * n3svixcllx_p + hp0wdh0z5x .
P_45 * fuwbeu0mi2 ; fexu2mpvzu = muDoubleScalarAbs ( * emppsgntig ) ;
jzng23hn5g = muDoubleScalarAbs ( * geawchg2qh ) ; jedkbzvhbx = hp0wdh0z5x .
P_46 * * cvcsdesmn4 ; hytb3op1gy = hp0wdh0z5x . P_7 * jzng23hn5g ; jzng23hn5g
= hp0wdh0z5x . P_47 * * emppsgntig ; jaabiiivdd = look1_binlxpw ( fexu2mpvzu
, hp0wdh0z5x . P_10 , hp0wdh0z5x . P_11 , 9U ) ; odjtfn3yxu = look1_binlxpw (
fexu2mpvzu , hp0wdh0z5x . P_10 , hp0wdh0z5x . P_14 , 9U ) ; rtPrevAction =
localDW -> bfuoehqzsl ; rtAction = ( int8_T ) ! ( hytb3op1gy <= jedkbzvhbx /
localB -> l1joaocm0k ) ; localDW -> bfuoehqzsl = rtAction ; if ( rtPrevAction
!= rtAction ) { switch ( rtPrevAction ) { case 0 :
ssSetBlockStateForSolverChangedAtMajorStep ( oczxsqne0n -> _mdlRefSfcnS ) ;
break ; case 1 : ssSetBlockStateForSolverChangedAtMajorStep ( oczxsqne0n ->
_mdlRefSfcnS ) ; switch ( localDW -> mekacwiae4 ) { case 0 :
ssSetBlockStateForSolverChangedAtMajorStep ( oczxsqne0n -> _mdlRefSfcnS ) ;
break ; case 1 : ssSetBlockStateForSolverChangedAtMajorStep ( oczxsqne0n ->
_mdlRefSfcnS ) ; break ; } localDW -> mekacwiae4 = - 1 ; switch ( localDW ->
cmjt0zg4xt ) { case 0 : ssSetBlockStateForSolverChangedAtMajorStep (
oczxsqne0n -> _mdlRefSfcnS ) ; break ; case 1 :
ssSetBlockStateForSolverChangedAtMajorStep ( oczxsqne0n -> _mdlRefSfcnS ) ;
break ; } localDW -> cmjt0zg4xt = - 1 ; break ; } } if ( rtAction == 0 ) { if
( 0 != rtPrevAction ) { if ( rtmGetTaskTime ( oczxsqne0n , 2 ) !=
rtmGetTStart ( oczxsqne0n ) ) { ssSetBlockStateForSolverChangedAtMajorStep (
oczxsqne0n -> _mdlRefSfcnS ) ; } } localB -> jmh12knqk4 = jaabiiivdd ; localB
-> j4an1koocn = odjtfn3yxu ; srUpdateBC ( localDW -> feypm5vhbq ) ; } else {
if ( 1 != rtPrevAction ) { if ( rtmGetTaskTime ( oczxsqne0n , 2 ) !=
rtmGetTStart ( oczxsqne0n ) ) { ssSetBlockStateForSolverChangedAtMajorStep (
oczxsqne0n -> _mdlRefSfcnS ) ; } } if ( rtmIsMajorTimeStep ( oczxsqne0n ) &&
rtmIsSampleHit ( oczxsqne0n , 2 , 0 ) ) { jedkbzvhbx /= muDoubleScalarMax (
hytb3op1gy , hp0wdh0z5x . P_37 ) ; jedkbzvhbx = muDoubleScalarMax ( localB ->
emqermn25v - ( localB -> hpq3zpwor5 - jedkbzvhbx * jedkbzvhbx ) * localB ->
hddlzs2xkt , hp0wdh0z5x . P_38 ) ; if ( rtmIsMajorTimeStep ( oczxsqne0n ) ) {
if ( localDW -> bsszatmvjl != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( oczxsqne0n -> _mdlRefSfcnS ) ;
localDW -> bsszatmvjl = 0 ; } hytb3op1gy = muDoubleScalarSqrt ( jedkbzvhbx )
; } else if ( jedkbzvhbx < 0.0 ) { hytb3op1gy = - muDoubleScalarSqrt (
muDoubleScalarAbs ( jedkbzvhbx ) ) ; localDW -> bsszatmvjl = 1 ; } else {
hytb3op1gy = muDoubleScalarSqrt ( jedkbzvhbx ) ; } jedkbzvhbx = ( -
hp0wdh0z5x . P_15 * hp0wdh0z5x . P_3 + hytb3op1gy ) / localB -> cbuxsm4rne ;
rtPrevAction = localDW -> mekacwiae4 ; rtAction = ( int8_T ) ! ( jedkbzvhbx <
localB -> fvwphmszym ) ; localDW -> mekacwiae4 = rtAction ; if ( rtPrevAction
!= rtAction ) { switch ( rtPrevAction ) { case 0 :
ssSetBlockStateForSolverChangedAtMajorStep ( oczxsqne0n -> _mdlRefSfcnS ) ;
break ; case 1 : ssSetBlockStateForSolverChangedAtMajorStep ( oczxsqne0n ->
_mdlRefSfcnS ) ; break ; } } if ( rtAction == 0 ) { if ( 0 != rtPrevAction )
{ if ( rtmGetTaskTime ( oczxsqne0n , 2 ) != rtmGetTStart ( oczxsqne0n ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( oczxsqne0n -> _mdlRefSfcnS ) ; }
} if ( rtmIsMajorTimeStep ( oczxsqne0n ) && rtmIsSampleHit ( oczxsqne0n , 2 ,
0 ) ) { if ( rtmIsMajorTimeStep ( oczxsqne0n ) ) { localB -> bnhtuo4pzv = -
hp0wdh0z5x . P_13 [ ( int32_T ) hp0wdh0z5x . P_23 - 1 ] ; } else { if ( (
int32_T ) hp0wdh0z5x . P_23 > 3 ) { tmp = 3 ; } else if ( ( int32_T )
hp0wdh0z5x . P_23 < 1 ) { tmp = 1 ; } else { tmp = ( int32_T ) hp0wdh0z5x .
P_23 ; } localB -> bnhtuo4pzv = - hp0wdh0z5x . P_13 [ tmp - 1 ] ; } localB ->
ancya45mmo = hp0wdh0z5x . P_22 ; } srUpdateBC ( localDW -> djzzdpaje3 ) ; }
else { if ( 1 != rtPrevAction ) { if ( rtmGetTaskTime ( oczxsqne0n , 2 ) !=
rtmGetTStart ( oczxsqne0n ) ) { ssSetBlockStateForSolverChangedAtMajorStep (
oczxsqne0n -> _mdlRefSfcnS ) ; } } if ( rtmIsMajorTimeStep ( oczxsqne0n ) &&
rtmIsSampleHit ( oczxsqne0n , 2 , 0 ) ) { localB -> bnhtuo4pzv = jedkbzvhbx ;
jedkbzvhbx = localB -> gnsidwdg2i - jedkbzvhbx * jedkbzvhbx ; if (
rtmIsMajorTimeStep ( oczxsqne0n ) ) { if ( localDW -> nvnt5k5wtu != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( oczxsqne0n -> _mdlRefSfcnS ) ;
localDW -> nvnt5k5wtu = 0 ; } localB -> ancya45mmo = muDoubleScalarSqrt (
jedkbzvhbx ) ; } else if ( jedkbzvhbx < 0.0 ) { localB -> ancya45mmo = -
muDoubleScalarSqrt ( muDoubleScalarAbs ( jedkbzvhbx ) ) ; localDW ->
nvnt5k5wtu = 1 ; } else { localB -> ancya45mmo = muDoubleScalarSqrt (
jedkbzvhbx ) ; } } srUpdateBC ( localDW -> o22jbjlb32 ) ; } rtPrevAction =
localDW -> cmjt0zg4xt ; rtAction = ( int8_T ) ! ( ( ( hp0wdh0z5x . P_3 -
hp0wdh0z5x . P_5 ) * localB -> bnhtuo4pzv + hp0wdh0z5x . P_15 ) * localB ->
ancya45mmo * ( 1.5 * hp0wdh0z5x . P_7 ) < fexu2mpvzu ) ; localDW ->
cmjt0zg4xt = rtAction ; if ( rtPrevAction != rtAction ) { switch (
rtPrevAction ) { case 0 : ssSetBlockStateForSolverChangedAtMajorStep (
oczxsqne0n -> _mdlRefSfcnS ) ; break ; case 1 :
ssSetBlockStateForSolverChangedAtMajorStep ( oczxsqne0n -> _mdlRefSfcnS ) ;
break ; } } if ( rtAction == 0 ) { if ( 0 != rtPrevAction ) { if (
rtmGetTaskTime ( oczxsqne0n , 2 ) != rtmGetTStart ( oczxsqne0n ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( oczxsqne0n -> _mdlRefSfcnS ) ; }
} localB -> jmh12knqk4 = localB -> bnhtuo4pzv ; localB -> j4an1koocn = localB
-> ancya45mmo ; srUpdateBC ( localDW -> ooikcgayh1 ) ; } else { if ( 1 !=
rtPrevAction ) { if ( rtmGetTaskTime ( oczxsqne0n , 2 ) != rtmGetTStart (
oczxsqne0n ) ) { ssSetBlockStateForSolverChangedAtMajorStep ( oczxsqne0n ->
_mdlRefSfcnS ) ; } } if ( rtmIsMajorTimeStep ( oczxsqne0n ) && rtmIsSampleHit
( oczxsqne0n , 2 , 0 ) ) { localB -> j4an1koocn = fexu2mpvzu /
muDoubleScalarMax ( ( ( hp0wdh0z5x . P_3 - hp0wdh0z5x . P_5 ) * localB ->
bnhtuo4pzv + hp0wdh0z5x . P_15 ) * ( 1.5 * hp0wdh0z5x . P_7 ) , hp0wdh0z5x .
P_29 ) ; localB -> jmh12knqk4 = localB -> bnhtuo4pzv ; } srUpdateBC ( localDW
-> n0wi1kglhh ) ; } } srUpdateBC ( localDW -> kk4n2up2w1 ) ; }
muDoubleScalarSinCos ( hp0wdh0z5x . P_7 * g1paxxagjp_p , & fexu2mpvzu , &
jedkbzvhbx ) ; g1paxxagjp_p = ejpw5agfwl * jedkbzvhbx + fuwbeu0mi2 *
fexu2mpvzu ; hytb3op1gy = hp0wdh0z5x . P_7 * * geawchg2qh ; ejpw5agfwl =
fuwbeu0mi2 * jedkbzvhbx - ejpw5agfwl * fexu2mpvzu ; fuwbeu0mi2 = localB ->
j4an1koocn * muDoubleScalarTanh ( jzng23hn5g ) - ejpw5agfwl ; jzng23hn5g =
localB -> jmh12knqk4 - g1paxxagjp_p ; jaabiiivdd = hp0wdh0z5x . P_0 *
jzng23hn5g * hp0wdh0z5x . P_51 + localDW -> hh4vgn0tkn ; if ( jaabiiivdd >
hp0wdh0z5x . P_52 ) { localB -> m4fgfho05f = hp0wdh0z5x . P_52 ; } else if (
jaabiiivdd < hp0wdh0z5x . P_53 ) { localB -> m4fgfho05f = hp0wdh0z5x . P_53 ;
} else { localB -> m4fgfho05f = jaabiiivdd ; } jaabiiivdd = hp0wdh0z5x . P_0
* fuwbeu0mi2 * hp0wdh0z5x . P_55 + localDW -> n1xqcq4unv ; if ( jaabiiivdd >
hp0wdh0z5x . P_56 ) { localB -> bvc4d3rafa = hp0wdh0z5x . P_56 ; } else if (
jaabiiivdd < hp0wdh0z5x . P_57 ) { localB -> bvc4d3rafa = hp0wdh0z5x . P_57 ;
} else { localB -> bvc4d3rafa = jaabiiivdd ; } jzng23hn5g = ( hp0wdh0z5x .
P_1 * jzng23hn5g + localDW -> hh4vgn0tkn ) - hp0wdh0z5x . P_5 * ejpw5agfwl *
hytb3op1gy ; fuwbeu0mi2 = ( hp0wdh0z5x . P_3 * g1paxxagjp_p + hp0wdh0z5x .
P_15 ) * hytb3op1gy + ( hp0wdh0z5x . P_2 * fuwbeu0mi2 + localDW -> n1xqcq4unv
) ; localB -> pdqqh31clo = jzng23hn5g * jedkbzvhbx - fuwbeu0mi2 * fexu2mpvzu
; fuwbeu0mi2 = jzng23hn5g * fexu2mpvzu + fuwbeu0mi2 * jedkbzvhbx ; localB ->
j00saob3ud = hp0wdh0z5x . P_59 * localB -> pdqqh31clo + hp0wdh0z5x . P_60 *
fuwbeu0mi2 ; localB -> f5vescf5ru = hp0wdh0z5x . P_58 * localB -> pdqqh31clo
+ hp0wdh0z5x . P_61 * fuwbeu0mi2 ; localB -> hw3ausca5d = ( localB ->
pdqqh31clo - localB -> f5vescf5ru ) * b1nxi21q0c_p + ( localB -> j00saob3ud -
localB -> f5vescf5ru ) * n3svixcllx_p ; localB -> jnkn4uibnw = ( g1paxxagjp_p
* ejpw5agfwl * localB -> psb2gwkboz + hp0wdh0z5x . P_15 * ejpw5agfwl ) * (
1.5 * hp0wdh0z5x . P_7 ) ; localB -> fvvsnpnedq = look2_binlcapw ( localB ->
jnkn4uibnw , * geawchg2qh , hp0wdh0z5x . P_66 , hp0wdh0z5x . P_67 ,
hp0wdh0z5x . P_65 , hp0wdh0z5x . P_101 , 10U ) ; localB -> pnor5dxd5h =
localB -> hw3ausca5d + localB -> fvvsnpnedq ; } localB -> itzfvuw4wx = (
hp0wdh0z5x . P_78 * localB -> pdqqh31clo + hp0wdh0z5x . P_79 * localB ->
j00saob3ud ) + hp0wdh0z5x . P_80 * localB -> f5vescf5ru ; localB ->
ppknydtaqx = hp0wdh0z5x . P_81 * localB -> j00saob3ud + hp0wdh0z5x . P_82 *
localB -> f5vescf5ru ; } ejpw5agfwl = hp0wdh0z5x . P_6 * * geawchg2qh ; *
fnbywarnx2 = ( oo0kzookhd_p * fcx3qihz0y_p * localB -> iy2vl43zru +
hp0wdh0z5x . P_16 * fcx3qihz0y_p ) * ( 1.5 * hp0wdh0z5x . P_6 ) ; localB ->
anzxqmfotw = ( ( localB -> itzfvuw4wx * nx40kxmidk + localB -> ppknydtaqx *
gcfwi3ao2o ) / localB -> g2rrchs5nk + ejpw5agfwl * fcx3qihz0y_p * localB ->
n3svixcllx / localB -> pzram1ykgg ) - oo0kzookhd_p * hp0wdh0z5x . P_8 /
localB -> awrvzcwb52 ; localB -> mhdlhk0c14 = ( ( ( localB -> ppknydtaqx *
nx40kxmidk - localB -> itzfvuw4wx * gcfwi3ao2o ) / localB -> oxiq1p2ad5 -
oo0kzookhd_p * ejpw5agfwl * localB -> hx1st4ql1x / localB -> dmcxxglupf ) -
ejpw5agfwl * hp0wdh0z5x . P_16 / localB -> dza0jh5oc0 ) - fcx3qihz0y_p *
hp0wdh0z5x . P_8 / localB -> e5vi4snmv0 ; bpIdx = plook_u32d_evencka ( *
geawchg2qh , hp0wdh0z5x . P_19 [ 0 ] , hp0wdh0z5x . P_19 [ 1 ] - hp0wdh0z5x .
P_19 [ 0 ] , 4U ) ; oo0kzookhd_p = hp0wdh0z5x . P_17 [ plook_u32d_evencka ( *
fnbywarnx2 , hp0wdh0z5x . P_9 [ 0 ] , hp0wdh0z5x . P_9 [ 1 ] - hp0wdh0z5x .
P_9 [ 0 ] , 5U ) * 5U + bpIdx ] ; if ( rtmIsMajorTimeStep ( oczxsqne0n ) &&
rtmIsSampleHit ( oczxsqne0n , 1 , 0 ) ) { localB -> llnxhrzq2o = hp0wdh0z5x .
P_85 ; if ( rtmIsMajorTimeStep ( oczxsqne0n ) ) { localDW -> j1mwihstyy = ( *
cvcsdesmn4 >= localB -> llnxhrzq2o ) ; } localB -> o552djtg1l = localDW ->
j1mwihstyy ; } if ( localB -> o552djtg1l ) { gcfwi3ao2o = * cvcsdesmn4 ; }
else { gcfwi3ao2o = localB -> llnxhrzq2o ; } * cg1dw5wgio = ( ( ( (
hp0wdh0z5x . P_83 * b1nxi21q0c_p + hp0wdh0z5x . P_84 * d0niepgk02_p ) *
localB -> f5vescf5ru + ( b1nxi21q0c_p * localB -> pdqqh31clo + n3svixcllx_p *
localB -> j00saob3ud ) ) + oo0kzookhd_p ) + oo0kzookhd_p ) / gcfwi3ao2o ; }
void MotGenEvDynamicTID3 ( mv4ga5jwa1 * const oczxsqne0n , cx3bhokmct *
localB , cloq5bin3y * localDW ) { real_T eemfsamcqt ; real_T fkhiabecn2 ;
int32_T tmp ; if ( rtmIsMajorTimeStep ( oczxsqne0n ) ) { fkhiabecn2 =
hp0wdh0z5x . P_13 [ ( int32_T ) hp0wdh0z5x . P_62 - 1 ] ; eemfsamcqt =
hp0wdh0z5x . P_13 [ ( int32_T ) hp0wdh0z5x . P_63 - 1 ] ; } else { if ( (
int32_T ) hp0wdh0z5x . P_62 > 3 ) { tmp = 3 ; } else if ( ( int32_T )
hp0wdh0z5x . P_62 < 1 ) { tmp = 1 ; } else { tmp = ( int32_T ) hp0wdh0z5x .
P_62 ; } fkhiabecn2 = hp0wdh0z5x . P_13 [ tmp - 1 ] ; if ( ( int32_T )
hp0wdh0z5x . P_63 > 3 ) { tmp = 3 ; } else if ( ( int32_T ) hp0wdh0z5x . P_63
< 1 ) { tmp = 1 ; } else { tmp = ( int32_T ) hp0wdh0z5x . P_63 ; } eemfsamcqt
= hp0wdh0z5x . P_13 [ tmp - 1 ] ; } fkhiabecn2 = hp0wdh0z5x . P_3 *
fkhiabecn2 + hp0wdh0z5x . P_15 ; eemfsamcqt *= hp0wdh0z5x . P_5 ; fkhiabecn2
= fkhiabecn2 * fkhiabecn2 + eemfsamcqt * eemfsamcqt ; if ( rtmIsMajorTimeStep
( oczxsqne0n ) ) { if ( localDW -> i3e2kfzsoy != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( oczxsqne0n -> _mdlRefSfcnS ) ;
localDW -> i3e2kfzsoy = 0 ; } eemfsamcqt = muDoubleScalarSqrt ( fkhiabecn2 )
; localB -> fvwphmszym = - hp0wdh0z5x . P_13 [ ( int32_T ) hp0wdh0z5x . P_36
- 1 ] ; fkhiabecn2 = hp0wdh0z5x . P_13 [ ( int32_T ) hp0wdh0z5x . P_39 - 1 ]
; } else { if ( fkhiabecn2 < 0.0 ) { eemfsamcqt = - muDoubleScalarSqrt (
muDoubleScalarAbs ( fkhiabecn2 ) ) ; localDW -> i3e2kfzsoy = 1 ; } else {
eemfsamcqt = muDoubleScalarSqrt ( fkhiabecn2 ) ; } if ( ( int32_T )
hp0wdh0z5x . P_36 > 3 ) { tmp = 3 ; } else if ( ( int32_T ) hp0wdh0z5x . P_36
< 1 ) { tmp = 1 ; } else { tmp = ( int32_T ) hp0wdh0z5x . P_36 ; } localB ->
fvwphmszym = - hp0wdh0z5x . P_13 [ tmp - 1 ] ; if ( ( int32_T ) hp0wdh0z5x .
P_39 > 3 ) { tmp = 3 ; } else if ( ( int32_T ) hp0wdh0z5x . P_39 < 1 ) { tmp
= 1 ; } else { tmp = ( int32_T ) hp0wdh0z5x . P_39 ; } fkhiabecn2 =
hp0wdh0z5x . P_13 [ tmp - 1 ] ; } localB -> l1joaocm0k = muDoubleScalarMax (
eemfsamcqt , hp0wdh0z5x . P_64 ) ; eemfsamcqt = hp0wdh0z5x . P_5 * hp0wdh0z5x
. P_5 ; localB -> hpq3zpwor5 = eemfsamcqt * ( fkhiabecn2 * fkhiabecn2 ) +
hp0wdh0z5x . P_15 * hp0wdh0z5x . P_15 ; fkhiabecn2 = hp0wdh0z5x . P_15 *
hp0wdh0z5x . P_3 ; localB -> emqermn25v = fkhiabecn2 * fkhiabecn2 ;
fkhiabecn2 = hp0wdh0z5x . P_3 * hp0wdh0z5x . P_3 - eemfsamcqt ; localB ->
cbuxsm4rne = fkhiabecn2 ; localB -> hddlzs2xkt = fkhiabecn2 ; if (
rtmIsMajorTimeStep ( oczxsqne0n ) ) { fkhiabecn2 = hp0wdh0z5x . P_13 [ (
int32_T ) hp0wdh0z5x . P_26 - 1 ] ; } else { if ( ( int32_T ) hp0wdh0z5x .
P_26 > 3 ) { tmp = 3 ; } else if ( ( int32_T ) hp0wdh0z5x . P_26 < 1 ) { tmp
= 1 ; } else { tmp = ( int32_T ) hp0wdh0z5x . P_26 ; } fkhiabecn2 =
hp0wdh0z5x . P_13 [ tmp - 1 ] ; } localB -> gnsidwdg2i = fkhiabecn2 *
fkhiabecn2 ; localB -> psb2gwkboz = hp0wdh0z5x . P_3 - hp0wdh0z5x . P_5 ; if
( rtmIsMajorTimeStep ( oczxsqne0n ) ) { fkhiabecn2 = hp0wdh0z5x . P_4 [ (
int32_T ) hp0wdh0z5x . P_88 - 1 ] ; eemfsamcqt = hp0wdh0z5x . P_4 [ ( int32_T
) hp0wdh0z5x . P_89 - 1 ] ; localB -> d4f2unf52i = hp0wdh0z5x . P_12 [ (
int32_T ) hp0wdh0z5x . P_90 - 1 ] ; localB -> g2rrchs5nk = hp0wdh0z5x . P_4 [
( int32_T ) hp0wdh0z5x . P_91 - 1 ] ; localB -> n3svixcllx = hp0wdh0z5x . P_4
[ ( int32_T ) hp0wdh0z5x . P_92 - 1 ] ; localB -> pzram1ykgg = hp0wdh0z5x .
P_4 [ ( int32_T ) hp0wdh0z5x . P_93 - 1 ] ; localB -> awrvzcwb52 = hp0wdh0z5x
. P_4 [ ( int32_T ) hp0wdh0z5x . P_94 - 1 ] ; localB -> lwpvkhuswg =
hp0wdh0z5x . P_12 [ ( int32_T ) hp0wdh0z5x . P_95 - 1 ] ; localB ->
oxiq1p2ad5 = hp0wdh0z5x . P_4 [ ( int32_T ) hp0wdh0z5x . P_96 - 1 ] ; localB
-> hx1st4ql1x = hp0wdh0z5x . P_4 [ ( int32_T ) hp0wdh0z5x . P_97 - 1 ] ;
localB -> dmcxxglupf = hp0wdh0z5x . P_4 [ ( int32_T ) hp0wdh0z5x . P_98 - 1 ]
; localB -> dza0jh5oc0 = hp0wdh0z5x . P_4 [ ( int32_T ) hp0wdh0z5x . P_99 - 1
] ; localB -> e5vi4snmv0 = hp0wdh0z5x . P_4 [ ( int32_T ) hp0wdh0z5x . P_100
- 1 ] ; } else { if ( ( int32_T ) hp0wdh0z5x . P_88 > 2 ) { tmp = 2 ; } else
if ( ( int32_T ) hp0wdh0z5x . P_88 < 1 ) { tmp = 1 ; } else { tmp = ( int32_T
) hp0wdh0z5x . P_88 ; } fkhiabecn2 = hp0wdh0z5x . P_4 [ tmp - 1 ] ; if ( (
int32_T ) hp0wdh0z5x . P_89 > 2 ) { tmp = 2 ; } else if ( ( int32_T )
hp0wdh0z5x . P_89 < 1 ) { tmp = 1 ; } else { tmp = ( int32_T ) hp0wdh0z5x .
P_89 ; } eemfsamcqt = hp0wdh0z5x . P_4 [ tmp - 1 ] ; if ( ( int32_T )
hp0wdh0z5x . P_90 > 2 ) { tmp = 2 ; } else if ( ( int32_T ) hp0wdh0z5x . P_90
< 1 ) { tmp = 1 ; } else { tmp = ( int32_T ) hp0wdh0z5x . P_90 ; } localB ->
d4f2unf52i = hp0wdh0z5x . P_12 [ tmp - 1 ] ; if ( ( int32_T ) hp0wdh0z5x .
P_91 > 2 ) { tmp = 2 ; } else if ( ( int32_T ) hp0wdh0z5x . P_91 < 1 ) { tmp
= 1 ; } else { tmp = ( int32_T ) hp0wdh0z5x . P_91 ; } localB -> g2rrchs5nk =
hp0wdh0z5x . P_4 [ tmp - 1 ] ; if ( ( int32_T ) hp0wdh0z5x . P_92 > 2 ) { tmp
= 2 ; } else if ( ( int32_T ) hp0wdh0z5x . P_92 < 1 ) { tmp = 1 ; } else {
tmp = ( int32_T ) hp0wdh0z5x . P_92 ; } localB -> n3svixcllx = hp0wdh0z5x .
P_4 [ tmp - 1 ] ; if ( ( int32_T ) hp0wdh0z5x . P_93 > 2 ) { tmp = 2 ; } else
if ( ( int32_T ) hp0wdh0z5x . P_93 < 1 ) { tmp = 1 ; } else { tmp = ( int32_T
) hp0wdh0z5x . P_93 ; } localB -> pzram1ykgg = hp0wdh0z5x . P_4 [ tmp - 1 ] ;
if ( ( int32_T ) hp0wdh0z5x . P_94 > 2 ) { tmp = 2 ; } else if ( ( int32_T )
hp0wdh0z5x . P_94 < 1 ) { tmp = 1 ; } else { tmp = ( int32_T ) hp0wdh0z5x .
P_94 ; } localB -> awrvzcwb52 = hp0wdh0z5x . P_4 [ tmp - 1 ] ; if ( ( int32_T
) hp0wdh0z5x . P_95 > 2 ) { tmp = 2 ; } else if ( ( int32_T ) hp0wdh0z5x .
P_95 < 1 ) { tmp = 1 ; } else { tmp = ( int32_T ) hp0wdh0z5x . P_95 ; }
localB -> lwpvkhuswg = hp0wdh0z5x . P_12 [ tmp - 1 ] ; if ( ( int32_T )
hp0wdh0z5x . P_96 > 2 ) { tmp = 2 ; } else if ( ( int32_T ) hp0wdh0z5x . P_96
< 1 ) { tmp = 1 ; } else { tmp = ( int32_T ) hp0wdh0z5x . P_96 ; } localB ->
oxiq1p2ad5 = hp0wdh0z5x . P_4 [ tmp - 1 ] ; if ( ( int32_T ) hp0wdh0z5x .
P_97 > 2 ) { tmp = 2 ; } else if ( ( int32_T ) hp0wdh0z5x . P_97 < 1 ) { tmp
= 1 ; } else { tmp = ( int32_T ) hp0wdh0z5x . P_97 ; } localB -> hx1st4ql1x =
hp0wdh0z5x . P_4 [ tmp - 1 ] ; if ( ( int32_T ) hp0wdh0z5x . P_98 > 2 ) { tmp
= 2 ; } else if ( ( int32_T ) hp0wdh0z5x . P_98 < 1 ) { tmp = 1 ; } else {
tmp = ( int32_T ) hp0wdh0z5x . P_98 ; } localB -> dmcxxglupf = hp0wdh0z5x .
P_4 [ tmp - 1 ] ; if ( ( int32_T ) hp0wdh0z5x . P_99 > 2 ) { tmp = 2 ; } else
if ( ( int32_T ) hp0wdh0z5x . P_99 < 1 ) { tmp = 1 ; } else { tmp = ( int32_T
) hp0wdh0z5x . P_99 ; } localB -> dza0jh5oc0 = hp0wdh0z5x . P_4 [ tmp - 1 ] ;
if ( ( int32_T ) hp0wdh0z5x . P_100 > 2 ) { tmp = 2 ; } else if ( ( int32_T )
hp0wdh0z5x . P_100 < 1 ) { tmp = 1 ; } else { tmp = ( int32_T ) hp0wdh0z5x .
P_100 ; } localB -> e5vi4snmv0 = hp0wdh0z5x . P_4 [ tmp - 1 ] ; } localB ->
iy2vl43zru = fkhiabecn2 - eemfsamcqt ; } void lwglwij1vj ( mv4ga5jwa1 * const
oczxsqne0n , cx3bhokmct * localB , cloq5bin3y * localDW , a2tgpeokha *
localXdis ) { if ( rtmIsMajorTimeStep ( oczxsqne0n ) ) { if ( memcmp (
oczxsqne0n -> nonContDerivSignal [ 0 ] . pCurrVal , oczxsqne0n ->
nonContDerivSignal [ 0 ] . pPrevVal , oczxsqne0n -> nonContDerivSignal [ 0 ]
. sizeInBytes ) != 0 ) { ( void ) memcpy ( oczxsqne0n -> nonContDerivSignal [
0 ] . pPrevVal , oczxsqne0n -> nonContDerivSignal [ 0 ] . pCurrVal ,
oczxsqne0n -> nonContDerivSignal [ 0 ] . sizeInBytes ) ;
ssSetSolverNeedsReset ( oczxsqne0n -> _mdlRefSfcnS ) ; } if ( memcmp (
oczxsqne0n -> nonContDerivSignal [ 1 ] . pCurrVal , oczxsqne0n ->
nonContDerivSignal [ 1 ] . pPrevVal , oczxsqne0n -> nonContDerivSignal [ 1 ]
. sizeInBytes ) != 0 ) { ( void ) memcpy ( oczxsqne0n -> nonContDerivSignal [
1 ] . pPrevVal , oczxsqne0n -> nonContDerivSignal [ 1 ] . pCurrVal ,
oczxsqne0n -> nonContDerivSignal [ 1 ] . sizeInBytes ) ;
ssSetSolverNeedsReset ( oczxsqne0n -> _mdlRefSfcnS ) ; } } if (
rtmIsMajorTimeStep ( oczxsqne0n ) && rtmIsSampleHit ( oczxsqne0n , 2 , 0 ) )
{ localDW -> pdv153zdu5 = localB -> hw3ausca5d ; localDW -> lmqwggutck =
localB -> pnor5dxd5h ; } localDW -> lf2zfdimpe = 0 ; switch ( localDW ->
juyze14tin ) { case 3 : if ( localB -> anzxqmfotw < 0.0 ) { localDW ->
juyze14tin = 1 ; ssSetBlockStateForSolverChangedAtMajorStep ( oczxsqne0n ->
_mdlRefSfcnS ) ; } break ; case 4 : if ( localB -> anzxqmfotw > 0.0 ) {
localDW -> juyze14tin = 2 ; ssSetBlockStateForSolverChangedAtMajorStep (
oczxsqne0n -> _mdlRefSfcnS ) ; } break ; } localXdis -> jjrb01sfag = ( (
localDW -> juyze14tin == 3 ) || ( localDW -> juyze14tin == 4 ) ) ; localDW ->
hjhxitxtn4 = 0 ; switch ( localDW -> f4evhke5td ) { case 3 : if ( localB ->
mhdlhk0c14 < 0.0 ) { localDW -> f4evhke5td = 1 ;
ssSetBlockStateForSolverChangedAtMajorStep ( oczxsqne0n -> _mdlRefSfcnS ) ; }
break ; case 4 : if ( localB -> mhdlhk0c14 > 0.0 ) { localDW -> f4evhke5td =
2 ; ssSetBlockStateForSolverChangedAtMajorStep ( oczxsqne0n -> _mdlRefSfcnS )
; } break ; } localXdis -> kqb0spkyga = ( ( localDW -> f4evhke5td == 3 ) || (
localDW -> f4evhke5td == 4 ) ) ; if ( rtmIsMajorTimeStep ( oczxsqne0n ) &&
rtmIsSampleHit ( oczxsqne0n , 2 , 0 ) ) { if ( rtmIsMajorTimeStep (
oczxsqne0n ) && rtmIsSampleHit ( oczxsqne0n , 2 , 0 ) ) { localDW ->
hh4vgn0tkn = localB -> m4fgfho05f ; localDW -> n1xqcq4unv = localB ->
bvc4d3rafa ; } localDW -> omrrdh0nvo = localB -> fvvsnpnedq ; localDW ->
gxkwygbb4g = localB -> jnkn4uibnw ; } } void lwglwij1vjTID3 ( void ) { } void
mfy1r3luh1 ( const real_T * geawchg2qh , cx3bhokmct * localB , a2tgpeokha *
localXdis , evfyajgoqu * localXdot ) { if ( localXdis -> jjrb01sfag ) {
localXdot -> jjrb01sfag = 0.0 ; } else { localXdot -> jjrb01sfag = localB ->
anzxqmfotw ; } localXdot -> lsis3mvtl3 = * geawchg2qh ; if ( localXdis ->
kqb0spkyga ) { localXdot -> kqb0spkyga = 0.0 ; } else { localXdot ->
kqb0spkyga = localB -> mhdlhk0c14 ; } } void cmnf4xtkyp ( const real_T *
cvcsdesmn4 , cx3bhokmct * localB , cloq5bin3y * localDW , fsi3zxjdsv * localX
, f0can1sh3a * localZCSV ) { switch ( localDW -> juyze14tin ) { case 1 :
localZCSV -> dlemv12ixj = 0.0 ; localZCSV -> crlnvux0tw = hp0wdh0z5x . P_70 -
hp0wdh0z5x . P_71 ; break ; case 2 : localZCSV -> dlemv12ixj = hp0wdh0z5x .
P_71 - hp0wdh0z5x . P_70 ; localZCSV -> crlnvux0tw = 0.0 ; break ; default :
localZCSV -> dlemv12ixj = localX -> jjrb01sfag - hp0wdh0z5x . P_70 ;
localZCSV -> crlnvux0tw = localX -> jjrb01sfag - hp0wdh0z5x . P_71 ; break ;
} if ( ( localDW -> juyze14tin == 3 ) || ( localDW -> juyze14tin == 4 ) ) {
localZCSV -> geommsvcm0 = localB -> anzxqmfotw ; } else { localZCSV ->
geommsvcm0 = 0.0 ; } switch ( localDW -> f4evhke5td ) { case 1 : localZCSV ->
a3nogxtorf = 0.0 ; localZCSV -> pinuq3ljyw = hp0wdh0z5x . P_74 - hp0wdh0z5x .
P_75 ; break ; case 2 : localZCSV -> a3nogxtorf = hp0wdh0z5x . P_75 -
hp0wdh0z5x . P_74 ; localZCSV -> pinuq3ljyw = 0.0 ; break ; default :
localZCSV -> a3nogxtorf = localX -> kqb0spkyga - hp0wdh0z5x . P_74 ;
localZCSV -> pinuq3ljyw = localX -> kqb0spkyga - hp0wdh0z5x . P_75 ; break ;
} if ( ( localDW -> f4evhke5td == 3 ) || ( localDW -> f4evhke5td == 4 ) ) {
localZCSV -> jmqldch1ql = localB -> mhdlhk0c14 ; } else { localZCSV ->
jmqldch1ql = 0.0 ; } localZCSV -> ea2uuggopo = * cvcsdesmn4 - localB ->
llnxhrzq2o ; } void dk15ta1msh ( mv4ga5jwa1 * const oczxsqne0n , cloq5bin3y *
localDW ) { if ( ( ssGetSimMode ( oczxsqne0n -> _mdlRefSfcnS ) !=
SS_SIMMODE_EXTERNAL ) && ( ( oczxsqne0n -> _mdlRefSfcnS ) -> mdlInfo ->
rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { if ( localDW ->
brnt2ej5x1 . AQHandles ) { sdiTerminateStreaming ( & localDW -> brnt2ej5x1 .
AQHandles ) ; } } if ( ( ssGetSimMode ( oczxsqne0n -> _mdlRefSfcnS ) !=
SS_SIMMODE_EXTERNAL ) && ( ( oczxsqne0n -> _mdlRefSfcnS ) -> mdlInfo ->
rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { if ( localDW ->
jckcnytr4c . AQHandles ) { sdiTerminateStreaming ( & localDW -> jckcnytr4c .
AQHandles ) ; } } } void kh5ykjtmv0 ( mv4ga5jwa1 * const oczxsqne0n ) { if (
! slIsRapidAcceleratorSimulating ( ) ) { slmrRunPluginEvent ( oczxsqne0n ->
_mdlRefSfcnS , "MotGenEvDynamic" ,
"SIMSTATUS_TERMINATING_MODELREF_ACCEL_EVENT" ) ; } } void cwmdpnrf2r (
SimStruct * _mdlRefSfcnS , ssNonContDerivSigFeedingOutports * *
mr_nonContOutputArray , int_T mdlref_TID0 , int_T mdlref_TID1 , int_T
mdlref_TID2 , int_T mdlref_TID3 , mv4ga5jwa1 * const oczxsqne0n , cx3bhokmct
* localB , cloq5bin3y * localDW , fsi3zxjdsv * localX , void * sysRanPtr ,
int contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T *
rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) { rt_InitInfAndNaN
( sizeof ( real_T ) ) ; ( void ) memset ( ( void * ) oczxsqne0n , 0 , sizeof
( mv4ga5jwa1 ) ) ; oczxsqne0n -> Timing . mdlref_GlobalTID [ 0 ] =
mdlref_TID0 ; oczxsqne0n -> Timing . mdlref_GlobalTID [ 1 ] = mdlref_TID1 ;
oczxsqne0n -> Timing . mdlref_GlobalTID [ 2 ] = mdlref_TID2 ; oczxsqne0n ->
Timing . mdlref_GlobalTID [ 3 ] = mdlref_TID3 ; oczxsqne0n -> _mdlRefSfcnS =
( _mdlRefSfcnS ) ; if ( ! slIsRapidAcceleratorSimulating ( ) ) {
slmrRunPluginEvent ( oczxsqne0n -> _mdlRefSfcnS , "MotGenEvDynamic" ,
"START_OF_SIM_MODEL_MODELREF_ACCEL_EVENT" ) ; } ( void ) memset ( ( ( void *
) localB ) , 0 , sizeof ( cx3bhokmct ) ) ; { localB -> itzfvuw4wx = 0.0 ;
localB -> ppknydtaqx = 0.0 ; localB -> anzxqmfotw = 0.0 ; localB ->
mhdlhk0c14 = 0.0 ; localB -> llnxhrzq2o = 0.0 ; localB -> iy2vl43zru = 0.0 ;
localB -> d4f2unf52i = 0.0 ; localB -> g2rrchs5nk = 0.0 ; localB ->
n3svixcllx = 0.0 ; localB -> pzram1ykgg = 0.0 ; localB -> awrvzcwb52 = 0.0 ;
localB -> lwpvkhuswg = 0.0 ; localB -> oxiq1p2ad5 = 0.0 ; localB ->
hx1st4ql1x = 0.0 ; localB -> dmcxxglupf = 0.0 ; localB -> dza0jh5oc0 = 0.0 ;
localB -> e5vi4snmv0 = 0.0 ; localB -> hw3ausca5d = 0.0 ; localB ->
jnkn4uibnw = 0.0 ; localB -> fvvsnpnedq = 0.0 ; localB -> pnor5dxd5h = 0.0 ;
localB -> psb2gwkboz = 0.0 ; localB -> jmh12knqk4 = 0.0 ; localB ->
j4an1koocn = 0.0 ; localB -> m4fgfho05f = 0.0 ; localB -> bvc4d3rafa = 0.0 ;
localB -> pdqqh31clo = 0.0 ; localB -> j00saob3ud = 0.0 ; localB ->
f5vescf5ru = 0.0 ; localB -> l1joaocm0k = 0.0 ; localB -> bnhtuo4pzv = 0.0 ;
localB -> ancya45mmo = 0.0 ; localB -> fvwphmszym = 0.0 ; localB ->
hpq3zpwor5 = 0.0 ; localB -> emqermn25v = 0.0 ; localB -> cbuxsm4rne = 0.0 ;
localB -> hddlzs2xkt = 0.0 ; localB -> gnsidwdg2i = 0.0 ; } ( void ) memset (
( void * ) localDW , 0 , sizeof ( cloq5bin3y ) ) ; localDW -> pdv153zdu5 =
0.0 ; localDW -> lmqwggutck = 0.0 ; localDW -> omrrdh0nvo = 0.0 ; localDW ->
gxkwygbb4g = 0.0 ; localDW -> hh4vgn0tkn = 0.0 ; localDW -> n1xqcq4unv = 0.0
; MotGenEvDynamic_InitializeDataMapInfo ( oczxsqne0n , localDW , localX ,
sysRanPtr , contextTid ) ; if ( ( rt_ParentMMI != ( NULL ) ) && (
rt_ChildPath != ( NULL ) ) ) { rtwCAPI_SetChildMMI ( * rt_ParentMMI ,
rt_ChildMMIIdx , & ( oczxsqne0n -> DataMapInfo . mmi ) ) ; rtwCAPI_SetPath (
oczxsqne0n -> DataMapInfo . mmi , rt_ChildPath ) ;
rtwCAPI_MMISetContStateStartIndex ( oczxsqne0n -> DataMapInfo . mmi ,
rt_CSTATEIdx ) ; } oczxsqne0n -> nonContDerivSignal [ 0 ] . pPrevVal = (
char_T * ) oczxsqne0n -> NonContDerivMemory . mr_nonContSig0 ; oczxsqne0n ->
nonContDerivSignal [ 0 ] . sizeInBytes = ( 1 * sizeof ( real_T ) ) ;
oczxsqne0n -> nonContDerivSignal [ 0 ] . pCurrVal = ( char_T * ) ( & localB
-> ppknydtaqx ) ; ; oczxsqne0n -> nonContDerivSignal [ 1 ] . pPrevVal = (
char_T * ) oczxsqne0n -> NonContDerivMemory . mr_nonContSig1 ; oczxsqne0n ->
nonContDerivSignal [ 1 ] . sizeInBytes = ( 1 * sizeof ( real_T ) ) ;
oczxsqne0n -> nonContDerivSignal [ 1 ] . pCurrVal = ( char_T * ) ( & localB
-> itzfvuw4wx ) ; ; if ( mr_nonContOutputArray [ 1 ] != ( NULL ) ) {
mr_nonContOutputArray [ 1 ] [ 0 ] . sizeInBytes = 1 * sizeof ( boolean_T ) ;
mr_nonContOutputArray [ 1 ] [ 0 ] . currVal = ( char_T * ) & localB ->
o552djtg1l ; mr_nonContOutputArray [ 1 ] [ 0 ] . next = & (
mr_nonContOutputArray [ 1 ] [ 1 ] ) ; } if ( mr_nonContOutputArray [ 1 ] != (
NULL ) ) { mr_nonContOutputArray [ 1 ] [ 1 ] . sizeInBytes = 1 * sizeof (
real_T ) ; mr_nonContOutputArray [ 1 ] [ 1 ] . currVal = ( char_T * ) &
localB -> f5vescf5ru ; mr_nonContOutputArray [ 1 ] [ 1 ] . next = & (
mr_nonContOutputArray [ 1 ] [ 2 ] ) ; } if ( mr_nonContOutputArray [ 1 ] != (
NULL ) ) { mr_nonContOutputArray [ 1 ] [ 2 ] . sizeInBytes = 1 * sizeof (
real_T ) ; mr_nonContOutputArray [ 1 ] [ 2 ] . currVal = ( char_T * ) &
localB -> j00saob3ud ; mr_nonContOutputArray [ 1 ] [ 2 ] . next = & (
mr_nonContOutputArray [ 1 ] [ 3 ] ) ; } if ( mr_nonContOutputArray [ 1 ] != (
NULL ) ) { mr_nonContOutputArray [ 1 ] [ 3 ] . sizeInBytes = 1 * sizeof (
real_T ) ; mr_nonContOutputArray [ 1 ] [ 3 ] . currVal = ( char_T * ) &
localB -> pdqqh31clo ; mr_nonContOutputArray [ 1 ] [ 3 ] . next = ( NULL ) ;
} } void mr_MotGenEvDynamic_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T
* modelName , int_T * retVal ) { * retVal = 0 ; { boolean_T
regSubmodelsMdlinfo = false ; ssGetRegSubmodelsMdlinfo ( mdlRefSfcnS , &
regSubmodelsMdlinfo ) ; if ( regSubmodelsMdlinfo ) { } } * retVal = 0 ;
ssRegModelRefMdlInfo ( mdlRefSfcnS , modelName , rtMdlInfo_MotGenEvDynamic ,
45 ) ; * retVal = 1 ; } static void mr_MotGenEvDynamic_cacheDataAsMxArray (
mxArray * destArray , mwIndex i , int j , const void * srcData , size_t
numBytes ) ; static void mr_MotGenEvDynamic_cacheDataAsMxArray ( mxArray *
destArray , mwIndex i , int j , const void * srcData , size_t numBytes ) {
mxArray * newArray = mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes ,
mxUINT8_CLASS , mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , (
const uint8_T * ) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i ,
j , newArray ) ; } static void mr_MotGenEvDynamic_restoreDataFromMxArray (
void * destData , const mxArray * srcArray , mwIndex i , int j , size_t
numBytes ) ; static void mr_MotGenEvDynamic_restoreDataFromMxArray ( void *
destData , const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) {
memcpy ( ( uint8_T * ) destData , ( const uint8_T * ) mxGetData (
mxGetFieldByNumber ( srcArray , i , j ) ) , numBytes ) ; } static void
mr_MotGenEvDynamic_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i ,
int j , uint_T bitVal ) ; static void
mr_MotGenEvDynamic_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i ,
int j , uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j ,
mxCreateDoubleScalar ( ( double ) bitVal ) ) ; } static uint_T
mr_MotGenEvDynamic_extractBitFieldFromMxArray ( const mxArray * srcArray ,
mwIndex i , int j , uint_T numBits ) ; static uint_T
mr_MotGenEvDynamic_extractBitFieldFromMxArray ( const mxArray * srcArray ,
mwIndex i , int j , uint_T numBits ) { const uint_T varVal = ( uint_T )
mxGetScalar ( mxGetFieldByNumber ( srcArray , i , j ) ) ; return varVal & ( (
1u << numBits ) - 1u ) ; } static void
mr_MotGenEvDynamic_cacheDataToMxArrayWithOffset ( mxArray * destArray ,
mwIndex i , int j , mwIndex offset , const void * srcData , size_t numBytes )
; static void mr_MotGenEvDynamic_cacheDataToMxArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_MotGenEvDynamic_restoreDataFromMxArrayWithOffset ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t
numBytes ) ; static void mr_MotGenEvDynamic_restoreDataFromMxArrayWithOffset
( void * destData , const mxArray * srcArray , mwIndex i , int j , mwIndex
offset , size_t numBytes ) { const uint8_T * varData = ( const uint8_T * )
mxGetData ( mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T *
) destData , ( const uint8_T * ) & varData [ offset * numBytes ] , numBytes )
; } static void mr_MotGenEvDynamic_cacheBitFieldToCellArrayWithOffset (
mxArray * destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal )
; static void mr_MotGenEvDynamic_cacheBitFieldToCellArrayWithOffset ( mxArray
* destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) {
mxSetCell ( mxGetFieldByNumber ( destArray , i , j ) , offset ,
mxCreateDoubleScalar ( ( double ) fieldVal ) ) ; } static uint_T
mr_MotGenEvDynamic_extractBitFieldFromCellArrayWithOffset ( const mxArray *
srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ; static
uint_T mr_MotGenEvDynamic_extractBitFieldFromCellArrayWithOffset ( const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) {
const uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell (
mxGetFieldByNumber ( srcArray , i , j ) , offset ) ) ; return fieldVal & ( (
1u << numBits ) - 1u ) ; } mxArray * mr_MotGenEvDynamic_GetDWork ( const
l0vfpqnnodc * mdlrefDW ) { static const char * ssDWFieldNames [ 3 ] = { "rtb"
, "rtdw" , "NULL->rtzce" , } ; mxArray * ssDW = mxCreateStructMatrix ( 1 , 1
, 3 , ssDWFieldNames ) ; mr_MotGenEvDynamic_cacheDataAsMxArray ( ssDW , 0 , 0
, & ( mdlrefDW -> rtb ) , sizeof ( mdlrefDW -> rtb ) ) ; { static const char
* rtdwDataFieldNames [ 23 ] = { "mdlrefDW->rtdw.pdv153zdu5" ,
"mdlrefDW->rtdw.lmqwggutck" , "mdlrefDW->rtdw.omrrdh0nvo" ,
"mdlrefDW->rtdw.gxkwygbb4g" , "mdlrefDW->rtdw.hh4vgn0tkn" ,
"mdlrefDW->rtdw.n1xqcq4unv" , "mdlrefDW->rtdw.lf2zfdimpe" ,
"mdlrefDW->rtdw.hjhxitxtn4" , "mdlrefDW->rtdw.juyze14tin" ,
"mdlrefDW->rtdw.f4evhke5td" , "mdlrefDW->rtdw.bfuoehqzsl" ,
"mdlrefDW->rtdw.i3e2kfzsoy" , "mdlrefDW->rtdw.kk4n2up2w1" ,
"mdlrefDW->rtdw.bsszatmvjl" , "mdlrefDW->rtdw.mekacwiae4" ,
"mdlrefDW->rtdw.cmjt0zg4xt" , "mdlrefDW->rtdw.n0wi1kglhh" ,
"mdlrefDW->rtdw.ooikcgayh1" , "mdlrefDW->rtdw.o22jbjlb32" ,
"mdlrefDW->rtdw.nvnt5k5wtu" , "mdlrefDW->rtdw.djzzdpaje3" ,
"mdlrefDW->rtdw.feypm5vhbq" , "mdlrefDW->rtdw.j1mwihstyy" , } ; mxArray *
rtdwData = mxCreateStructMatrix ( 1 , 1 , 23 , rtdwDataFieldNames ) ;
mr_MotGenEvDynamic_cacheDataAsMxArray ( rtdwData , 0 , 0 , & ( mdlrefDW ->
rtdw . pdv153zdu5 ) , sizeof ( mdlrefDW -> rtdw . pdv153zdu5 ) ) ;
mr_MotGenEvDynamic_cacheDataAsMxArray ( rtdwData , 0 , 1 , & ( mdlrefDW ->
rtdw . lmqwggutck ) , sizeof ( mdlrefDW -> rtdw . lmqwggutck ) ) ;
mr_MotGenEvDynamic_cacheDataAsMxArray ( rtdwData , 0 , 2 , & ( mdlrefDW ->
rtdw . omrrdh0nvo ) , sizeof ( mdlrefDW -> rtdw . omrrdh0nvo ) ) ;
mr_MotGenEvDynamic_cacheDataAsMxArray ( rtdwData , 0 , 3 , & ( mdlrefDW ->
rtdw . gxkwygbb4g ) , sizeof ( mdlrefDW -> rtdw . gxkwygbb4g ) ) ;
mr_MotGenEvDynamic_cacheDataAsMxArray ( rtdwData , 0 , 4 , & ( mdlrefDW ->
rtdw . hh4vgn0tkn ) , sizeof ( mdlrefDW -> rtdw . hh4vgn0tkn ) ) ;
mr_MotGenEvDynamic_cacheDataAsMxArray ( rtdwData , 0 , 5 , & ( mdlrefDW ->
rtdw . n1xqcq4unv ) , sizeof ( mdlrefDW -> rtdw . n1xqcq4unv ) ) ;
mr_MotGenEvDynamic_cacheDataAsMxArray ( rtdwData , 0 , 6 , & ( mdlrefDW ->
rtdw . lf2zfdimpe ) , sizeof ( mdlrefDW -> rtdw . lf2zfdimpe ) ) ;
mr_MotGenEvDynamic_cacheDataAsMxArray ( rtdwData , 0 , 7 , & ( mdlrefDW ->
rtdw . hjhxitxtn4 ) , sizeof ( mdlrefDW -> rtdw . hjhxitxtn4 ) ) ;
mr_MotGenEvDynamic_cacheDataAsMxArray ( rtdwData , 0 , 8 , & ( mdlrefDW ->
rtdw . juyze14tin ) , sizeof ( mdlrefDW -> rtdw . juyze14tin ) ) ;
mr_MotGenEvDynamic_cacheDataAsMxArray ( rtdwData , 0 , 9 , & ( mdlrefDW ->
rtdw . f4evhke5td ) , sizeof ( mdlrefDW -> rtdw . f4evhke5td ) ) ;
mr_MotGenEvDynamic_cacheDataAsMxArray ( rtdwData , 0 , 10 , & ( mdlrefDW ->
rtdw . bfuoehqzsl ) , sizeof ( mdlrefDW -> rtdw . bfuoehqzsl ) ) ;
mr_MotGenEvDynamic_cacheDataAsMxArray ( rtdwData , 0 , 11 , & ( mdlrefDW ->
rtdw . i3e2kfzsoy ) , sizeof ( mdlrefDW -> rtdw . i3e2kfzsoy ) ) ;
mr_MotGenEvDynamic_cacheDataAsMxArray ( rtdwData , 0 , 12 , & ( mdlrefDW ->
rtdw . kk4n2up2w1 ) , sizeof ( mdlrefDW -> rtdw . kk4n2up2w1 ) ) ;
mr_MotGenEvDynamic_cacheDataAsMxArray ( rtdwData , 0 , 13 , & ( mdlrefDW ->
rtdw . bsszatmvjl ) , sizeof ( mdlrefDW -> rtdw . bsszatmvjl ) ) ;
mr_MotGenEvDynamic_cacheDataAsMxArray ( rtdwData , 0 , 14 , & ( mdlrefDW ->
rtdw . mekacwiae4 ) , sizeof ( mdlrefDW -> rtdw . mekacwiae4 ) ) ;
mr_MotGenEvDynamic_cacheDataAsMxArray ( rtdwData , 0 , 15 , & ( mdlrefDW ->
rtdw . cmjt0zg4xt ) , sizeof ( mdlrefDW -> rtdw . cmjt0zg4xt ) ) ;
mr_MotGenEvDynamic_cacheDataAsMxArray ( rtdwData , 0 , 16 , & ( mdlrefDW ->
rtdw . n0wi1kglhh ) , sizeof ( mdlrefDW -> rtdw . n0wi1kglhh ) ) ;
mr_MotGenEvDynamic_cacheDataAsMxArray ( rtdwData , 0 , 17 , & ( mdlrefDW ->
rtdw . ooikcgayh1 ) , sizeof ( mdlrefDW -> rtdw . ooikcgayh1 ) ) ;
mr_MotGenEvDynamic_cacheDataAsMxArray ( rtdwData , 0 , 18 , & ( mdlrefDW ->
rtdw . o22jbjlb32 ) , sizeof ( mdlrefDW -> rtdw . o22jbjlb32 ) ) ;
mr_MotGenEvDynamic_cacheDataAsMxArray ( rtdwData , 0 , 19 , & ( mdlrefDW ->
rtdw . nvnt5k5wtu ) , sizeof ( mdlrefDW -> rtdw . nvnt5k5wtu ) ) ;
mr_MotGenEvDynamic_cacheDataAsMxArray ( rtdwData , 0 , 20 , & ( mdlrefDW ->
rtdw . djzzdpaje3 ) , sizeof ( mdlrefDW -> rtdw . djzzdpaje3 ) ) ;
mr_MotGenEvDynamic_cacheDataAsMxArray ( rtdwData , 0 , 21 , & ( mdlrefDW ->
rtdw . feypm5vhbq ) , sizeof ( mdlrefDW -> rtdw . feypm5vhbq ) ) ;
mr_MotGenEvDynamic_cacheDataAsMxArray ( rtdwData , 0 , 22 , & ( mdlrefDW ->
rtdw . j1mwihstyy ) , sizeof ( mdlrefDW -> rtdw . j1mwihstyy ) ) ;
mxSetFieldByNumber ( ssDW , 0 , 1 , rtdwData ) ; } ( void ) mdlrefDW ; return
ssDW ; } void mr_MotGenEvDynamic_SetDWork ( l0vfpqnnodc * mdlrefDW , const
mxArray * ssDW ) { ( void ) ssDW ; ( void ) mdlrefDW ;
mr_MotGenEvDynamic_restoreDataFromMxArray ( & ( mdlrefDW -> rtb ) , ssDW , 0
, 0 , sizeof ( mdlrefDW -> rtb ) ) ; { const mxArray * rtdwData =
mxGetFieldByNumber ( ssDW , 0 , 1 ) ;
mr_MotGenEvDynamic_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . pdv153zdu5
) , rtdwData , 0 , 0 , sizeof ( mdlrefDW -> rtdw . pdv153zdu5 ) ) ;
mr_MotGenEvDynamic_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . lmqwggutck
) , rtdwData , 0 , 1 , sizeof ( mdlrefDW -> rtdw . lmqwggutck ) ) ;
mr_MotGenEvDynamic_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . omrrdh0nvo
) , rtdwData , 0 , 2 , sizeof ( mdlrefDW -> rtdw . omrrdh0nvo ) ) ;
mr_MotGenEvDynamic_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . gxkwygbb4g
) , rtdwData , 0 , 3 , sizeof ( mdlrefDW -> rtdw . gxkwygbb4g ) ) ;
mr_MotGenEvDynamic_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . hh4vgn0tkn
) , rtdwData , 0 , 4 , sizeof ( mdlrefDW -> rtdw . hh4vgn0tkn ) ) ;
mr_MotGenEvDynamic_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . n1xqcq4unv
) , rtdwData , 0 , 5 , sizeof ( mdlrefDW -> rtdw . n1xqcq4unv ) ) ;
mr_MotGenEvDynamic_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . lf2zfdimpe
) , rtdwData , 0 , 6 , sizeof ( mdlrefDW -> rtdw . lf2zfdimpe ) ) ;
mr_MotGenEvDynamic_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . hjhxitxtn4
) , rtdwData , 0 , 7 , sizeof ( mdlrefDW -> rtdw . hjhxitxtn4 ) ) ;
mr_MotGenEvDynamic_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . juyze14tin
) , rtdwData , 0 , 8 , sizeof ( mdlrefDW -> rtdw . juyze14tin ) ) ;
mr_MotGenEvDynamic_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . f4evhke5td
) , rtdwData , 0 , 9 , sizeof ( mdlrefDW -> rtdw . f4evhke5td ) ) ;
mr_MotGenEvDynamic_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . bfuoehqzsl
) , rtdwData , 0 , 10 , sizeof ( mdlrefDW -> rtdw . bfuoehqzsl ) ) ;
mr_MotGenEvDynamic_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . i3e2kfzsoy
) , rtdwData , 0 , 11 , sizeof ( mdlrefDW -> rtdw . i3e2kfzsoy ) ) ;
mr_MotGenEvDynamic_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . kk4n2up2w1
) , rtdwData , 0 , 12 , sizeof ( mdlrefDW -> rtdw . kk4n2up2w1 ) ) ;
mr_MotGenEvDynamic_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . bsszatmvjl
) , rtdwData , 0 , 13 , sizeof ( mdlrefDW -> rtdw . bsszatmvjl ) ) ;
mr_MotGenEvDynamic_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . mekacwiae4
) , rtdwData , 0 , 14 , sizeof ( mdlrefDW -> rtdw . mekacwiae4 ) ) ;
mr_MotGenEvDynamic_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . cmjt0zg4xt
) , rtdwData , 0 , 15 , sizeof ( mdlrefDW -> rtdw . cmjt0zg4xt ) ) ;
mr_MotGenEvDynamic_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . n0wi1kglhh
) , rtdwData , 0 , 16 , sizeof ( mdlrefDW -> rtdw . n0wi1kglhh ) ) ;
mr_MotGenEvDynamic_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . ooikcgayh1
) , rtdwData , 0 , 17 , sizeof ( mdlrefDW -> rtdw . ooikcgayh1 ) ) ;
mr_MotGenEvDynamic_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . o22jbjlb32
) , rtdwData , 0 , 18 , sizeof ( mdlrefDW -> rtdw . o22jbjlb32 ) ) ;
mr_MotGenEvDynamic_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . nvnt5k5wtu
) , rtdwData , 0 , 19 , sizeof ( mdlrefDW -> rtdw . nvnt5k5wtu ) ) ;
mr_MotGenEvDynamic_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . djzzdpaje3
) , rtdwData , 0 , 20 , sizeof ( mdlrefDW -> rtdw . djzzdpaje3 ) ) ;
mr_MotGenEvDynamic_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . feypm5vhbq
) , rtdwData , 0 , 21 , sizeof ( mdlrefDW -> rtdw . feypm5vhbq ) ) ;
mr_MotGenEvDynamic_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . j1mwihstyy
) , rtdwData , 0 , 22 , sizeof ( mdlrefDW -> rtdw . j1mwihstyy ) ) ; } } void
mr_MotGenEvDynamic_RegisterSimStateChecksum ( SimStruct * S ) { const
uint32_T chksum [ 4 ] = { 919103021U , 910968865U , 2225123687U , 1941559239U
, } ; slmrModelRefRegisterSimStateChecksum ( S , "MotGenEvDynamic" , & chksum
[ 0 ] ) ; } mxArray * mr_MotGenEvDynamic_GetSimStateDisallowedBlocks ( ) {
return NULL ; }
