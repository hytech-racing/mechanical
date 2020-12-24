#include "rt_logging_mmi.h"
#include "HT05Model_capi.h"
#include <math.h>
#include "HT05Model.h"
#include "HT05Model_private.h"
#include "HT05Model_dt.h"
extern void * CreateDiagnosticAsVoidPtr_wrapper ( const char * id , int nargs
, ... ) ; RTWExtModeInfo * gblRTWExtModeInfo = NULL ; extern boolean_T
gblExtModeStartPktReceived ; void raccelForceExtModeShutdown ( ) { if ( !
gblExtModeStartPktReceived ) { boolean_T stopRequested = false ;
rtExtModeWaitForStartPkt ( gblRTWExtModeInfo , 6 , & stopRequested ) ; }
rtExtModeShutdown ( 6 ) ; }
#include "slsv_diagnostic_codegen_c_api.h"
const int_T gblNumToFiles = 0 ; const int_T gblNumFrFiles = 0 ; const int_T
gblNumFrWksBlocks = 0 ;
#ifdef RSIM_WITH_SOLVER_MULTITASKING
boolean_T gbl_raccel_isMultitasking = 1 ;
#else
boolean_T gbl_raccel_isMultitasking = 0 ;
#endif
boolean_T gbl_raccel_tid01eq = 0 ; int_T gbl_raccel_NumST = 7 ; const char_T
* gbl_raccel_Version = "10.1 (R2020a) 18-Nov-2019" ; void
raccel_setup_MMIStateLog ( SimStruct * S ) {
#ifdef UseMMIDataLogging
rt_FillStateSigInfoFromMMI ( ssGetRTWLogInfo ( S ) , & ssGetErrorStatus ( S )
) ;
#else
UNUSED_PARAMETER ( S ) ;
#endif
} static DataMapInfo rt_dataMapInfo ; DataMapInfo * rt_dataMapInfoPtr = &
rt_dataMapInfo ; rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr = & (
rt_dataMapInfo . mmi ) ; const char * gblSlvrJacPatternFileName =
"slprj\\raccel\\HT05Model\\HT05Model_Jpattern.mat" ; const int_T
gblNumRootInportBlks = 0 ; const int_T gblNumModelInputs = 0 ; extern
rtInportTUtable * gblInportTUtables ; extern const char * gblInportFileName ;
extern void * gblAperiodicPartitionHitTimes ; const int_T
gblInportDataTypeIdx [ ] = { - 1 } ; const int_T gblInportDims [ ] = { - 1 }
; const int_T gblInportComplex [ ] = { - 1 } ; const int_T
gblInportInterpoFlag [ ] = { - 1 } ; const int_T gblInportContinuous [ ] = {
- 1 } ; int_T enableFcnCallFlag [ ] = { 1 , 1 , 1 , 1 , 1 , 1 , 1 } ; const
char * raccelLoadInputsAndAperiodicHitTimes ( const char * inportFileName ,
int * matFileFormat ) { return rt_RapidReadInportsMatFile ( inportFileName ,
matFileFormat , 1 ) ; }
#include "simstruc.h"
#include "fixedpoint.h"
#include "expm_fk22GNna.h"
#include "look1_pbinlcapw.h"
#include "mpower_TZKN3Egd.h"
#define at3gdnua4p (1U)
#define c4pv5v1ezr (3U)
#define j1qgqsmrxi (2U)
hfe00hbwsc hfe00hbwscw ; nltnw1e5gk nltnw1e5gkl ; ngqsle4aqn ngqsle4aqnz ;
hpzwhjywix hpzwhjywixq ; bcuvylxhef bcuvylxhefc ; static SimStruct model_S ;
SimStruct * const rtS = & model_S ; void MdlInitialize ( void ) { nltnw1e5gkl
. i4qubohzc1 = 0.0 ; bcuvylxhefc . k0zcask0cc [ 0 ] = ihnh5ag1lp .
RateTransition3_InitialCondition ; nltnw1e5gkl . nxcnpybje3 = 0.0 ;
bcuvylxhefc . klgv0izvyu [ 0 ] = ihnh5ag1lp .
RateTransition5_InitialCondition ; nltnw1e5gkl . a1yytga2i4 = ihnh5ag1lp .
Integrator_IC ; nltnw1e5gkl . d2vzwae4a0 = ihnh5ag1lp . Integrator1_IC ;
nltnw1e5gkl . fulynuhbhe = ihnh5ag1lp . Integrator1_IC_ajivek24xs ;
nltnw1e5gkl . hiwowua33s = ihnh5ag1lp . Integrator2_IC ; bcuvylxhefc .
cnrnbvpn5m [ 0 ] = ihnh5ag1lp . UnitDelay_InitialCondition [ 0 ] ;
bcuvylxhefc . cnrnbvpn5m [ 1 ] = ihnh5ag1lp . UnitDelay_InitialCondition [ 1
] ; eqyc2wn3m1 ( & ( bcuvylxhefc . iajxel3ezk . rtm ) , & ( bcuvylxhefc .
iajxel3ezk . rtb ) , & ( bcuvylxhefc . iajxel3ezk . rtdw ) , & ( nltnw1e5gkl
. hcwjqlhqcy ) ) ; poo3kmg0ob ( & ( bcuvylxhefc . ondfxuidp3 . rtm ) , & (
bcuvylxhefc . ondfxuidp3 . rtdw ) , & ( nltnw1e5gkl . fqvhaqjss0 ) ) ;
dwpuxjpomb ( & ( bcuvylxhefc . enbv0wioc4 . rtm ) , & ( bcuvylxhefc .
enbv0wioc4 . rtb ) , & ( bcuvylxhefc . enbv0wioc4 . rtdw ) , & ( nltnw1e5gkl
. b04e30byfs ) ) ; hfe00hbwscw . l152uhfy44 = ihnh5ag1lp . SignalHold_IC ;
bcuvylxhefc . itzcefxwhd = - 1 ; bcuvylxhefc . hztxj1g4oa = 0U ; bcuvylxhefc
. ln4xezh4u1 = 0U ; bcuvylxhefc . hm0lgp00gr = 0.0 ; bcuvylxhefc . dfwyqajqi3
= 0U ; bcuvylxhefc . a2qtt2hfe5 = 0.0 ; hfe00hbwscw . etuneoeubc = 0.0 ;
bcuvylxhefc . d2sayk0vr5 = 0.0 ; bcuvylxhefc . ojbxwztebs = 0.0 ; bcuvylxhefc
. ggyum1qn3e = 0.0 ; { int_T rootPeriodicContStateIndices [ 2 ] = { 7 , 25 }
; real_T rootPeriodicContStateRanges [ 4 ] = { - 3.1415926535897931 ,
3.1415926535897931 , - 3.1415926535897931 , 3.1415926535897931 } ; ( void )
memcpy ( ( void * ) ngqsle4aqnz , rootPeriodicContStateIndices , 2 * sizeof (
int_T ) ) ; ( void ) memcpy ( ( void * ) hpzwhjywixq ,
rootPeriodicContStateRanges , 4 * sizeof ( real_T ) ) ; } } void MdlEnable (
void ) { bcuvylxhefc . d2sayk0vr5 = ssGetTaskTime ( rtS , 1 ) ; bcuvylxhefc .
ggyum1qn3e = bcuvylxhefc . d2sayk0vr5 ; } void MdlStart ( void ) { { void * *
slioCatalogueAddr = rt_slioCatalogueAddr ( ) ; void * r2 = ( NULL ) ; void *
* pOSigstreamManagerAddr = ( NULL ) ; const int maxErrorBufferSize = 16384 ;
char errMsgCreatingOSigstreamManager [ 16384 ] ; bool
errorCreatingOSigstreamManager = false ; const char *
errorAddingR2SharedResource = ( NULL ) ; * slioCatalogueAddr =
rtwGetNewSlioCatalogue ( rt_GetMatSigLogSelectorFileName ( ) ) ;
errorAddingR2SharedResource = rtwAddR2SharedResource (
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) , 1 ) ; if (
errorAddingR2SharedResource != ( NULL ) ) { rtwTerminateSlioCatalogue (
slioCatalogueAddr ) ; * slioCatalogueAddr = ( NULL ) ; ssSetErrorStatus ( rtS
, errorAddingR2SharedResource ) ; return ; } r2 = rtwGetR2SharedResource (
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) ) ;
pOSigstreamManagerAddr = rt_GetOSigstreamManagerAddr ( ) ;
errorCreatingOSigstreamManager = rtwOSigstreamManagerCreateInstance (
rt_GetMatSigLogSelectorFileName ( ) , r2 , pOSigstreamManagerAddr ,
errMsgCreatingOSigstreamManager , maxErrorBufferSize ) ; if (
errorCreatingOSigstreamManager ) { * pOSigstreamManagerAddr = ( NULL ) ;
ssSetErrorStatus ( rtS , errMsgCreatingOSigstreamManager ) ; return ; } } {
bool externalInputIsInDatasetFormat = false ; void * pISigstreamManager =
rt_GetISigstreamManager ( ) ; rtwISigstreamManagerGetInputIsInDatasetFormat (
pISigstreamManager , & externalInputIsInDatasetFormat ) ; if (
externalInputIsInDatasetFormat ) { } } fzkpqsvdo4 ( & ( bcuvylxhefc .
iajxel3ezk . rtm ) , & ( bcuvylxhefc . iajxel3ezk . rtdw ) ) ; { void *
slioCatalogue = rt_slioCatalogue ( ) ? rtwGetPointerFromUniquePtr (
rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue ( rt_dataMapInfo . mmi .
InstanceMap . fullPath ) ; if ( ! slioCatalogue || ! rtwIsLoggingToFile (
slioCatalogue ) ) { { { sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU origSigName = sdiGetLabelFromChars (
"" ) ; sdiLabelU propName = sdiGetLabelFromChars ( "xdot" ) ; sdiLabelU
blockPath = sdiGetLabelFromChars (
"HT05Model/Passenger Car/Drivetrain Output/VehSpd" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars ( "xdot" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; bcuvylxhefc . o142ktwdad . AQHandles
= sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "572d87f8-0506-43c2-84bc-502ac3096101" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "m/s" ) ; if (
bcuvylxhefc . o142ktwdad . AQHandles ) { sdiSetSignalSampleTimeString (
bcuvylxhefc . o142ktwdad . AQHandles , "Continuous" , 0.0 , ssGetTFinal ( rtS
) ) ; sdiSetRunStartTime ( bcuvylxhefc . o142ktwdad . AQHandles ,
ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings (
bcuvylxhefc . o142ktwdad . AQHandles , 1 , 0 ) ;
sdiAsyncRepoSetSignalExportName ( bcuvylxhefc . o142ktwdad . AQHandles ,
loggedName , origSigName , propName ) ; } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } } } bcuvylxhefc . o142ktwdad . SlioLTF = (
NULL ) ; { void * treeVector = ( NULL ) ; void * accessor = ( NULL ) ; const
void * signalDescriptor = ( NULL ) ; void * loggingInterval = ( NULL ) ; char
* datasetName = "tmp_raccel_logsout" ; void * slioCatalogue =
rt_slioCatalogue ( ) ? rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) :
sdiGetSlioCatalogue ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if (
slioCatalogue && rtwIsLoggingToFile ( slioCatalogue ) ) { treeVector =
rtwGetTreeVector ( ) ; { int_T sigDimsArray [ 1 ] = { 1 } ; rtwAddLeafNode (
0 , "" , "linear" , 0 , ( unsigned int * ) sigDimsArray , 1 , "double" ,
"m/s" , "Continuous" , 0.0 , ssGetTFinal ( rtS ) , treeVector ) ; }
signalDescriptor = rtwGetSignalDescriptor ( treeVector , 1 , 1 , 0 , 1 , "" ,
"xdot" , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"HT05Model/Passenger Car/Drivetrain Output/VehSpd" , 1 , 0 , slioCatalogue ,
( NULL ) , 0 , ( NULL ) , 0 ) ; if ( ! rt_slioCatalogue ( ) ) {
sdiSlioIsLoggingSignal ( rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"HT05Model/Passenger Car/Drivetrain Output/VehSpd" , 1 , "" ) ; } if (
rtwLoggingOverride ( signalDescriptor , slioCatalogue ) ) { if ( ssGetRootSS
( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval = rtliGetLoggingInterval
( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; } else { loggingInterval =
sdiGetLoggingIntervals ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ;
datasetName = "" ; } accessor = rtwGetAccessor ( signalDescriptor ,
loggingInterval ) ; rtwAddR2Client ( accessor , signalDescriptor ,
slioCatalogue , datasetName , 1 ) ; bcuvylxhefc . o142ktwdad . SlioLTF =
accessor ; } } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwIsLoggingToFile ( slioCatalogue ) ) { { { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "ang vel mot" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "ang vel mot" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"HT05Model/Passenger Car/Electric Plant/Divide" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars ( "ang vel mot"
) ; sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; bcuvylxhefc . cbpif1banu . AQHandles
= sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "cf138497-ce45-4a5e-9c3d-3e1f3898cd56" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ; if (
bcuvylxhefc . cbpif1banu . AQHandles ) { sdiSetSignalSampleTimeString (
bcuvylxhefc . cbpif1banu . AQHandles , "Continuous" , 0.0 , ssGetTFinal ( rtS
) ) ; sdiSetRunStartTime ( bcuvylxhefc . cbpif1banu . AQHandles ,
ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings (
bcuvylxhefc . cbpif1banu . AQHandles , 1 , 0 ) ;
sdiAsyncRepoSetSignalExportName ( bcuvylxhefc . cbpif1banu . AQHandles ,
loggedName , origSigName , propName ) ; } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } } } bcuvylxhefc . cbpif1banu . SlioLTF = (
NULL ) ; { void * treeVector = ( NULL ) ; void * accessor = ( NULL ) ; const
void * signalDescriptor = ( NULL ) ; void * loggingInterval = ( NULL ) ; char
* datasetName = "tmp_raccel_logsout" ; void * slioCatalogue =
rt_slioCatalogue ( ) ? rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) :
sdiGetSlioCatalogue ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if (
slioCatalogue && rtwIsLoggingToFile ( slioCatalogue ) ) { treeVector =
rtwGetTreeVector ( ) ; { int_T sigDimsArray [ 1 ] = { 1 } ; rtwAddLeafNode (
0 , "ang vel mot" , "linear" , 0 , ( unsigned int * ) sigDimsArray , 1 ,
"double" , "" , "Continuous" , 0.0 , ssGetTFinal ( rtS ) , treeVector ) ; }
signalDescriptor = rtwGetSignalDescriptor ( treeVector , 1 , 1 , 0 , 1 ,
"ang vel mot" , "" , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"HT05Model/Passenger Car/Electric Plant/Divide" , 1 , 0 , slioCatalogue , (
NULL ) , 0 , ( NULL ) , 0 ) ; if ( ! rt_slioCatalogue ( ) ) {
sdiSlioIsLoggingSignal ( rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"HT05Model/Passenger Car/Electric Plant/Divide" , 1 , "ang vel mot" ) ; } if
( rtwLoggingOverride ( signalDescriptor , slioCatalogue ) ) { if (
ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval =
rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; }
else { loggingInterval = sdiGetLoggingIntervals ( rt_dataMapInfo . mmi .
InstanceMap . fullPath ) ; datasetName = "" ; } accessor = rtwGetAccessor (
signalDescriptor , loggingInterval ) ; rtwAddR2Client ( accessor ,
signalDescriptor , slioCatalogue , datasetName , 1 ) ; bcuvylxhefc .
cbpif1banu . SlioLTF = accessor ; } } } } ka5dospcnh ( & ( bcuvylxhefc .
iajxel3ezk . rtb ) , & ( bcuvylxhefc . iajxel3ezk . rtdw ) ) ; n5k0o3qutm ( &
( bcuvylxhefc . enbv0wioc4 . rtdw ) ) ; bcuvylxhefc . llz0iknlo0 = 0 ;
bcuvylxhefc . kc02azdlcj = false ; ssSetBlockStateForSolverChangedAtMajorStep
( rtS ) ; bcuvylxhefc . eo2oguksvj = false ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; MdlInitialize ( ) ;
MdlEnable ( ) ; } void MdlOutputs ( int_T tid ) { int_T iy ; real_T sigmaA [
4 ] ; real_T b_I [ 4 ] ; real_T z_data ; real_T z1_data ; real_T cbv1b3vtl5 ;
real_T bcl1b5rt4n ; real_T dxbnvj4sno [ 4 ] ; real_T d ; real_T nrauzgzuwg [
4 ] ; int32_T i ; real_T jvd5kozvur_idx_1 ; real_T sigmaB_idx_0 ; real_T
sigmaB_idx_1 ; real_T sigmaB_idx_2 ; real_T sigmaB_idx_3 ; static const
real_T d_p [ 170 ] = { 1.0 , 2.0 , 6.0 , 24.0 , 120.0 , 720.0 , 5040.0 ,
40320.0 , 362880.0 , 3.6288E+6 , 3.99168E+7 , 4.790016E+8 , 6.2270208E+9 ,
8.71782912E+10 , 1.307674368E+12 , 2.0922789888E+13 , 3.55687428096E+14 ,
6.402373705728E+15 , 1.21645100408832E+17 , 2.43290200817664E+18 ,
5.109094217170944E+19 , 1.1240007277776077E+21 , 2.5852016738884978E+22 ,
6.2044840173323941E+23 , 1.5511210043330986E+25 , 4.0329146112660565E+26 ,
1.0888869450418352E+28 , 3.0488834461171384E+29 , 8.8417619937397008E+30 ,
2.6525285981219103E+32 , 8.2228386541779224E+33 , 2.6313083693369352E+35 ,
8.6833176188118859E+36 , 2.9523279903960412E+38 , 1.0333147966386144E+40 ,
3.7199332678990118E+41 , 1.3763753091226343E+43 , 5.23022617466601E+44 ,
2.0397882081197442E+46 , 8.1591528324789768E+47 , 3.3452526613163803E+49 ,
1.4050061177528798E+51 , 6.0415263063373834E+52 , 2.6582715747884485E+54 ,
1.1962222086548019E+56 , 5.5026221598120885E+57 , 2.5862324151116818E+59 ,
1.2413915592536073E+61 , 6.0828186403426752E+62 , 3.0414093201713376E+64 ,
1.5511187532873822E+66 , 8.0658175170943877E+67 , 4.2748832840600255E+69 ,
2.3084369733924138E+71 , 1.2696403353658276E+73 , 7.1099858780486348E+74 ,
4.0526919504877221E+76 , 2.3505613312828789E+78 , 1.3868311854568986E+80 ,
8.3209871127413916E+81 , 5.0758021387722484E+83 , 3.1469973260387939E+85 ,
1.98260831540444E+87 , 1.2688693218588417E+89 , 8.2476505920824715E+90 ,
5.4434493907744307E+92 , 3.6471110918188683E+94 , 2.4800355424368305E+96 ,
1.711224524281413E+98 , 1.197857166996989E+100 , 8.5047858856786218E+101 ,
6.1234458376886077E+103 , 4.4701154615126834E+105 , 3.3078854415193856E+107 ,
2.4809140811395391E+109 , 1.8854947016660498E+111 , 1.4518309202828584E+113 ,
1.1324281178206295E+115 , 8.9461821307829729E+116 , 7.1569457046263779E+118 ,
5.7971260207473655E+120 , 4.75364333701284E+122 , 3.9455239697206569E+124 ,
3.314240134565352E+126 , 2.8171041143805494E+128 , 2.4227095383672724E+130 ,
2.1077572983795269E+132 , 1.8548264225739836E+134 , 1.6507955160908452E+136 ,
1.4857159644817607E+138 , 1.3520015276784023E+140 , 1.24384140546413E+142 ,
1.1567725070816409E+144 , 1.0873661566567424E+146 , 1.0329978488239052E+148 ,
9.916779348709491E+149 , 9.6192759682482062E+151 , 9.426890448883242E+153 ,
9.33262154439441E+155 , 9.33262154439441E+157 , 9.4259477598383536E+159 ,
9.6144667150351211E+161 , 9.9029007164861754E+163 , 1.0299016745145622E+166 ,
1.0813967582402903E+168 , 1.1462805637347078E+170 , 1.2265202031961373E+172 ,
1.3246418194518284E+174 , 1.4438595832024928E+176 , 1.5882455415227421E+178 ,
1.7629525510902437E+180 , 1.9745068572210728E+182 , 2.2311927486598123E+184 ,
2.5435597334721862E+186 , 2.9250936934930141E+188 , 3.3931086844518965E+190 ,
3.969937160808719E+192 , 4.6845258497542883E+194 , 5.5745857612076033E+196 ,
6.6895029134491239E+198 , 8.09429852527344E+200 , 9.8750442008335976E+202 ,
1.2146304367025325E+205 , 1.5061417415111404E+207 , 1.8826771768889254E+209 ,
2.3721732428800459E+211 , 3.0126600184576582E+213 , 3.8562048236258025E+215 ,
4.9745042224772855E+217 , 6.4668554892204716E+219 , 8.4715806908788174E+221 ,
1.1182486511960039E+224 , 1.4872707060906852E+226 , 1.9929427461615181E+228 ,
2.6904727073180495E+230 , 3.6590428819525472E+232 , 5.01288874827499E+234 ,
6.9177864726194859E+236 , 9.6157231969410859E+238 , 1.346201247571752E+241 ,
1.89814375907617E+243 , 2.6953641378881614E+245 , 3.8543707171800706E+247 ,
5.5502938327393013E+249 , 8.0479260574719866E+251 , 1.17499720439091E+254 ,
1.7272458904546376E+256 , 2.5563239178728637E+258 , 3.8089226376305671E+260 ,
5.7133839564458505E+262 , 8.6272097742332346E+264 , 1.3113358856834518E+267 ,
2.0063439050956811E+269 , 3.0897696138473489E+271 , 4.7891429014633912E+273 ,
7.47106292628289E+275 , 1.1729568794264138E+278 , 1.8532718694937338E+280 ,
2.9467022724950369E+282 , 4.714723635992059E+284 , 7.5907050539472148E+286 ,
1.2296942187394488E+289 , 2.0044015765453015E+291 , 3.2872185855342945E+293 ,
5.423910666131586E+295 , 9.0036917057784329E+297 , 1.5036165148649983E+300 ,
2.5260757449731969E+302 , 4.2690680090047027E+304 , 7.257415615307994E+306 }
; srClearBC ( bcuvylxhefc . gwhutwksvk ) ; srClearBC ( bcuvylxhefc .
ffrv3krqdc ) ; cbv1b3vtl5 = ssGetT ( rtS ) ; if ( ihnh5ag1lp . repeat_Value >
ihnh5ag1lp . Switch_Threshold ) { hfe00hbwscw . dn2ipr3mo1 =
muDoubleScalarMod ( cbv1b3vtl5 , ihnh5ag1lp . tFinal_Value ) ; } else {
hfe00hbwscw . dn2ipr3mo1 = cbv1b3vtl5 ; } hfe00hbwscw . e4yqhpgtcf =
look1_pbinlcapw ( hfe00hbwscw . dn2ipr3mo1 , ihnh5ag1lp .
uDLookupTable_bp01Data , ihnh5ag1lp . uDLookupTable_tableData , & bcuvylxhefc
. hrypfmrlkd , 400U ) ; hfe00hbwscw . kwter11yih = 0.0 ; hfe00hbwscw .
kwter11yih += ihnh5ag1lp . MotorCouplingDynamics_C * nltnw1e5gkl . i4qubohzc1
; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { hfe00hbwscw . cvgkryez0y =
bcuvylxhefc . k0zcask0cc [ bcuvylxhefc . ep2boc231g ] ; } DrivetrainEv ( & (
bcuvylxhefc . iajxel3ezk . rtm ) , & hfe00hbwscw . kwter11yih , & hfe00hbwscw
. cvgkryez0y , & ihnh5ag1lp . Constant2_Value , & ihnh5ag1lp .
Constant3_Value , & hfe00hbwscw . k2nvq1dfvz , & hfe00hbwscw . krfdbjpt0e , &
( bcuvylxhefc . iajxel3ezk . rtb ) , & ( bcuvylxhefc . iajxel3ezk . rtdw ) ,
& ( nltnw1e5gkl . hcwjqlhqcy ) , & ( bcuvylxhefc . iajxel3ezk . rtzce ) ) ;
hfe00hbwscw . bejosqgptz [ 0 ] = ihnh5ag1lp . mstomph_Gain * hfe00hbwscw .
e4yqhpgtcf ; hfe00hbwscw . bejosqgptz [ 1 ] = ihnh5ag1lp . mstomph_Gain *
hfe00hbwscw . k2nvq1dfvz ; if ( ssIsSampleHit ( rtS , 1 , 0 ) && (
bcuvylxhefc . piumrtffmp == 0 ) ) { bcuvylxhefc . ngtzwyl1pu [ 0 ] =
hfe00hbwscw . bejosqgptz [ 0 ] ; bcuvylxhefc . ngtzwyl1pu [ 1 ] = hfe00hbwscw
. bejosqgptz [ 1 ] ; } if ( ssIsSampleHit ( rtS , 5 , 0 ) ) { bcuvylxhefc .
piumrtffmp = 1 ; hfe00hbwscw . k0jcwtesdh [ 0 ] = bcuvylxhefc . ngtzwyl1pu [
0 ] ; hfe00hbwscw . k0jcwtesdh [ 1 ] = bcuvylxhefc . ngtzwyl1pu [ 1 ] ;
bcuvylxhefc . piumrtffmp = 0 ; } hfe00hbwscw . hawg1v30vs = ihnh5ag1lp .
radstoRPM_Gain * hfe00hbwscw . krfdbjpt0e ; if ( ssIsSampleHit ( rtS , 1 , 0
) ) { if ( bcuvylxhefc . oijmj1tdxd == 0 ) { bcuvylxhefc . e4gjlzj1lq =
hfe00hbwscw . hawg1v30vs ; } if ( bcuvylxhefc . anfmogqnpx == 0 ) {
bcuvylxhefc . i5uql30i2j = hfe00hbwscw . kwter11yih ; } } if ( ssIsSampleHit
( rtS , 5 , 0 ) ) { bcuvylxhefc . oijmj1tdxd = 1 ; hfe00hbwscw . awbv4lz2br =
bcuvylxhefc . e4gjlzj1lq ; bcuvylxhefc . oijmj1tdxd = 0 ; bcuvylxhefc .
anfmogqnpx = 1 ; hfe00hbwscw . cawpxxfynl = bcuvylxhefc . i5uql30i2j ;
bcuvylxhefc . anfmogqnpx = 0 ; } hfe00hbwscw . op2bbilkhu = 0.0 ; hfe00hbwscw
. op2bbilkhu += ihnh5ag1lp . BatteryDischargeDynamics_C * nltnw1e5gkl .
nxcnpybje3 ; BattEv ( & ( bcuvylxhefc . ondfxuidp3 . rtm ) , & hfe00hbwscw .
op2bbilkhu , & ihnh5ag1lp . Constant6_Value , & hfe00hbwscw . i4av10pedr , &
hfe00hbwscw . k5wjbiecdv , & ( bcuvylxhefc . ondfxuidp3 . rtb ) , & (
bcuvylxhefc . ondfxuidp3 . rtdw ) , & ( nltnw1e5gkl . fqvhaqjss0 ) ) ; if (
ssIsSampleHit ( rtS , 1 , 0 ) && ( bcuvylxhefc . jse5bdwgjj == 0 ) ) {
bcuvylxhefc . kap0odr3kj = hfe00hbwscw . i4av10pedr ; } if ( ssIsSampleHit (
rtS , 5 , 0 ) ) { bcuvylxhefc . jse5bdwgjj = 1 ; hfe00hbwscw . jcnijfpmie =
bcuvylxhefc . kap0odr3kj ; bcuvylxhefc . jse5bdwgjj = 0 ; } if (
ssIsSampleHit ( rtS , 2 , 0 ) ) { hfe00hbwscw . hs1nxcdsu1 = bcuvylxhefc .
klgv0izvyu [ bcuvylxhefc . fqundvylsh ] ; } MotGenEvDynamic ( & ( bcuvylxhefc
. enbv0wioc4 . rtm ) , & hfe00hbwscw . hs1nxcdsu1 , & hfe00hbwscw .
krfdbjpt0e , & hfe00hbwscw . k5wjbiecdv , & hfe00hbwscw . kpv1qapnbc , &
hfe00hbwscw . pb4y5y3noy , & ( bcuvylxhefc . enbv0wioc4 . rtb ) , & (
bcuvylxhefc . enbv0wioc4 . rtdw ) , & ( nltnw1e5gkl . b04e30byfs ) ) ; if (
ssIsSampleHit ( rtS , 1 , 0 ) && ( bcuvylxhefc . egwjbtmbyq == 0 ) ) {
bcuvylxhefc . hp5pufrajm = hfe00hbwscw . pb4y5y3noy ; } if ( ssIsSampleHit (
rtS , 5 , 0 ) ) { bcuvylxhefc . egwjbtmbyq = 1 ; hfe00hbwscw . kwlhepleti =
bcuvylxhefc . hp5pufrajm ; bcuvylxhefc . egwjbtmbyq = 0 ; } hfe00hbwscw .
egwqx4bk1t = nltnw1e5gkl . a1yytga2i4 ; hfe00hbwscw . jglg55uozd =
nltnw1e5gkl . d2vzwae4a0 ; hfe00hbwscw . bki5dqleao = ihnh5ag1lp .
m3toUSGal_Gain * hfe00hbwscw . jglg55uozd ; if ( ssIsMajorTimeStep ( rtS ) )
{ bcuvylxhefc . hn5nuy0lbc = hfe00hbwscw . bki5dqleao >= ihnh5ag1lp .
Saturation1_UpperSat ? 1 : hfe00hbwscw . bki5dqleao > ihnh5ag1lp .
Saturation1_LowerSat ? 0 : - 1 ; } hfe00hbwscw . jtp5gfufnu = ihnh5ag1lp .
mtomile_Gain * hfe00hbwscw . egwqx4bk1t / ( bcuvylxhefc . hn5nuy0lbc == 1 ?
ihnh5ag1lp . Saturation1_UpperSat : bcuvylxhefc . hn5nuy0lbc == - 1 ?
ihnh5ag1lp . Saturation1_LowerSat : hfe00hbwscw . bki5dqleao ) ; if (
ssIsSampleHit ( rtS , 1 , 0 ) && ( bcuvylxhefc . bsjrzyb4mr == 0 ) ) {
bcuvylxhefc . j1c3q5x2i4 = hfe00hbwscw . jtp5gfufnu ; } if ( ssIsSampleHit (
rtS , 5 , 0 ) ) { bcuvylxhefc . bsjrzyb4mr = 1 ; hfe00hbwscw . ajoldyqnvn =
bcuvylxhefc . j1c3q5x2i4 ; bcuvylxhefc . bsjrzyb4mr = 0 ; } hfe00hbwscw .
o035i4hwxg = hfe00hbwscw . k5wjbiecdv * hfe00hbwscw . pb4y5y3noy ;
hfe00hbwscw . pue040sedo = hfe00hbwscw . o035i4hwxg / ihnh5ag1lp .
wperkw_Value ; hfe00hbwscw . egun0lxqwh = hfe00hbwscw . pue040sedo /
ihnh5ag1lp . USEPAkwhUSgalequivalent_Value ; hfe00hbwscw . fssj4vhwqd =
hfe00hbwscw . egun0lxqwh / ihnh5ag1lp . sperh_Value ; hfe00hbwscw .
fqgurvz30p = hfe00hbwscw . k2nvq1dfvz * hfe00hbwscw . k2nvq1dfvz ;
hfe00hbwscw . jaqygtbwrp = ihnh5ag1lp . mto100Km_Gain * hfe00hbwscw .
egwqx4bk1t ; if ( ssIsMajorTimeStep ( rtS ) ) { bcuvylxhefc . nxsdzjpe5i =
hfe00hbwscw . jaqygtbwrp >= ihnh5ag1lp . Saturation_UpperSat ? 1 :
hfe00hbwscw . jaqygtbwrp > ihnh5ag1lp . Saturation_LowerSat ? 0 : - 1 ; if (
bcuvylxhefc . llz0iknlo0 != 0 ) { ssSetBlockStateForSolverChangedAtMajorStep
( rtS ) ; bcuvylxhefc . llz0iknlo0 = 0 ; } hfe00hbwscw . juedzmwz13 =
muDoubleScalarSqrt ( hfe00hbwscw . fqgurvz30p ) ; } else { if ( hfe00hbwscw .
fqgurvz30p < 0.0 ) { hfe00hbwscw . juedzmwz13 = - muDoubleScalarSqrt (
muDoubleScalarAbs ( hfe00hbwscw . fqgurvz30p ) ) ; } else { hfe00hbwscw .
juedzmwz13 = muDoubleScalarSqrt ( hfe00hbwscw . fqgurvz30p ) ; } if (
hfe00hbwscw . fqgurvz30p < 0.0 ) { bcuvylxhefc . llz0iknlo0 = 1 ; } }
hfe00hbwscw . kpjtu3yzip = ihnh5ag1lp . m3pergal_Gain * hfe00hbwscw .
fssj4vhwqd ; hfe00hbwscw . hd0j3gmmyn = nltnw1e5gkl . fulynuhbhe ;
hfe00hbwscw . ewcpkcxybh = hfe00hbwscw . hd0j3gmmyn - hfe00hbwscw .
lldsxsxwpp ; if ( hfe00hbwscw . bm52wmv1x5 ) { bcl1b5rt4n = 0.0 ; } else if (
hfe00hbwscw . ewcpkcxybh > ihnh5ag1lp . u1_UpperSat ) { bcl1b5rt4n =
ihnh5ag1lp . u1_UpperSat ; } else if ( hfe00hbwscw . ewcpkcxybh < ihnh5ag1lp
. u1_LowerSat ) { bcl1b5rt4n = ihnh5ag1lp . u1_LowerSat ; } else { bcl1b5rt4n
= hfe00hbwscw . ewcpkcxybh ; } if ( ssIsSampleHit ( rtS , 1 , 0 ) &&
ssIsMajorTimeStep ( rtS ) ) { if ( hfe00hbwscw . b1mzxh50u5 ) { if ( !
bcuvylxhefc . kc02azdlcj ) { if ( ssGetTaskTime ( rtS , 1 ) != ssGetTStart (
rtS ) ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } bcuvylxhefc
. kc02azdlcj = true ; } } else { if ( bcuvylxhefc . kc02azdlcj ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; bcuvylxhefc . kc02azdlcj
= false ; } } } if ( bcuvylxhefc . kc02azdlcj ) { hfe00hbwscw . l152uhfy44 =
bcl1b5rt4n ; if ( ssIsMajorTimeStep ( rtS ) ) { srUpdateBC ( bcuvylxhefc .
gwhutwksvk ) ; } } if ( hfe00hbwscw . l152uhfy44 > ihnh5ag1lp .
Saturation_UpperSat_ejlhkaxvm3 ) { hfe00hbwscw . jnfihtxxde = ihnh5ag1lp .
Saturation_UpperSat_ejlhkaxvm3 ; } else if ( hfe00hbwscw . l152uhfy44 <
ihnh5ag1lp . Saturation_LowerSat_jq5vbx40o3 ) { hfe00hbwscw . jnfihtxxde =
ihnh5ag1lp . Saturation_LowerSat_jq5vbx40o3 ; } else { hfe00hbwscw .
jnfihtxxde = hfe00hbwscw . l152uhfy44 ; } if ( hfe00hbwscw . chtbrnbren ) {
bcl1b5rt4n = 0.0 ; } else if ( hfe00hbwscw . ewcpkcxybh > ihnh5ag1lp .
u0_UpperSat ) { bcl1b5rt4n = - ihnh5ag1lp . u0_UpperSat ; } else if (
hfe00hbwscw . ewcpkcxybh < ihnh5ag1lp . u0_LowerSat ) { bcl1b5rt4n = -
ihnh5ag1lp . u0_LowerSat ; } else { bcl1b5rt4n = - hfe00hbwscw . ewcpkcxybh ;
} if ( ssIsSampleHit ( rtS , 1 , 0 ) && ssIsMajorTimeStep ( rtS ) ) { if (
hfe00hbwscw . lqeerwztoi ) { if ( ! bcuvylxhefc . eo2oguksvj ) { if (
ssGetTaskTime ( rtS , 1 ) != ssGetTStart ( rtS ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } bcuvylxhefc .
eo2oguksvj = true ; } } else { if ( bcuvylxhefc . eo2oguksvj ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; bcuvylxhefc . eo2oguksvj
= false ; } } } if ( bcuvylxhefc . eo2oguksvj ) { hfe00hbwscw . dxi5ejdpzr =
bcl1b5rt4n ; if ( ssIsMajorTimeStep ( rtS ) ) { srUpdateBC ( bcuvylxhefc .
ffrv3krqdc ) ; } } if ( hfe00hbwscw . dxi5ejdpzr > ihnh5ag1lp .
Saturation_UpperSat_n5cfzewtp3 ) { hfe00hbwscw . cmthjlvx0t = ihnh5ag1lp .
Saturation_UpperSat_n5cfzewtp3 ; } else if ( hfe00hbwscw . dxi5ejdpzr <
ihnh5ag1lp . Saturation_LowerSat_jdvecoiqp4 ) { hfe00hbwscw . cmthjlvx0t =
ihnh5ag1lp . Saturation_LowerSat_jdvecoiqp4 ; } else { hfe00hbwscw .
cmthjlvx0t = hfe00hbwscw . dxi5ejdpzr ; } if ( ssIsSampleHit ( rtS , 1 , 0 )
) { bcuvylxhefc . d2sayk0vr5 = ssGetTaskTime ( rtS , 1 ) ; bcuvylxhefc .
ojbxwztebs = bcuvylxhefc . d2sayk0vr5 - bcuvylxhefc . ggyum1qn3e ;
bcuvylxhefc . ggyum1qn3e = bcuvylxhefc . d2sayk0vr5 ; bcuvylxhefc .
hm0lgp00gr += bcuvylxhefc . ojbxwztebs ; bcuvylxhefc . itzcefxwhd = - 1 ; if
( bcuvylxhefc . dfwyqajqi3 == 0U ) { bcuvylxhefc . dfwyqajqi3 = 1U ;
bcuvylxhefc . hztxj1g4oa = 1U ; hfe00hbwscw . etuneoeubc = ihnh5ag1lp .
LongitudinalDriverModel_GearInit ; bcuvylxhefc . a2qtt2hfe5 = ihnh5ag1lp .
LongitudinalDriverModel_GearInit ; if ( ihnh5ag1lp .
LongitudinalDriverModel_GearInit < 0.0 ) { bcuvylxhefc . ln4xezh4u1 =
c4pv5v1ezr ; bcuvylxhefc . hm0lgp00gr = 0.0 ; hfe00hbwscw . etuneoeubc = -
1.0 ; } else if ( ihnh5ag1lp . LongitudinalDriverModel_GearInit == 0.0 ) {
bcuvylxhefc . ln4xezh4u1 = at3gdnua4p ; bcuvylxhefc . hm0lgp00gr = 0.0 ;
hfe00hbwscw . etuneoeubc = 0.0 ; } else { bcuvylxhefc . ln4xezh4u1 =
j1qgqsmrxi ; bcuvylxhefc . hm0lgp00gr = 0.0 ; } } else { switch ( bcuvylxhefc
. ln4xezh4u1 ) { case at3gdnua4p : if ( ( ( ssGetTaskTime ( rtS , 1 ) -
bcuvylxhefc . ggyum1qn3e ) + bcuvylxhefc . hm0lgp00gr >= ihnh5ag1lp .
LongitudinalDriverModel_tShift ) && ( ( hfe00hbwscw . e4yqhpgtcf > 0.0 ) && (
hfe00hbwscw . jnfihtxxde > 0.0 ) ) ) { bcuvylxhefc . a2qtt2hfe5 ++ ;
bcuvylxhefc . ln4xezh4u1 = j1qgqsmrxi ; bcuvylxhefc . hm0lgp00gr = 0.0 ;
hfe00hbwscw . etuneoeubc = bcuvylxhefc . a2qtt2hfe5 ; } else { if ( ( (
ssGetTaskTime ( rtS , 1 ) - bcuvylxhefc . ggyum1qn3e ) + bcuvylxhefc .
hm0lgp00gr >= ihnh5ag1lp . LongitudinalDriverModel_tShift ) && ( hfe00hbwscw
. e4yqhpgtcf < 0.0 ) ) { bcuvylxhefc . a2qtt2hfe5 -- ; bcuvylxhefc .
ln4xezh4u1 = c4pv5v1ezr ; bcuvylxhefc . hm0lgp00gr = 0.0 ; hfe00hbwscw .
etuneoeubc = - 1.0 ; } } break ; case j1qgqsmrxi : if ( ( ( ssGetTaskTime (
rtS , 1 ) - bcuvylxhefc . ggyum1qn3e ) + bcuvylxhefc . hm0lgp00gr >=
ihnh5ag1lp . LongitudinalDriverModel_tShift ) && ( ( ( hfe00hbwscw .
cmthjlvx0t >= 0.0 ) && ( hfe00hbwscw . k2nvq1dfvz <= 0.0 ) && ( hfe00hbwscw .
jnfihtxxde <= 0.0 ) ) || ( hfe00hbwscw . e4yqhpgtcf <= 0.0 ) ) ) {
bcuvylxhefc . a2qtt2hfe5 -- ; bcuvylxhefc . ln4xezh4u1 = at3gdnua4p ;
bcuvylxhefc . hm0lgp00gr = 0.0 ; hfe00hbwscw . etuneoeubc = 0.0 ; } break ;
default : if ( ( ( ssGetTaskTime ( rtS , 1 ) - bcuvylxhefc . ggyum1qn3e ) +
bcuvylxhefc . hm0lgp00gr >= ihnh5ag1lp . LongitudinalDriverModel_tShift ) &&
( hfe00hbwscw . e4yqhpgtcf >= 0.0 ) ) { bcuvylxhefc . a2qtt2hfe5 ++ ;
bcuvylxhefc . ln4xezh4u1 = at3gdnua4p ; bcuvylxhefc . hm0lgp00gr = 0.0 ;
hfe00hbwscw . etuneoeubc = 0.0 ; } break ; } } hfe00hbwscw . nmnvokqd32 = (
hfe00hbwscw . etuneoeubc > ihnh5ag1lp . Constant_Value_nhp3htkj21 ) ; } if (
( hfe00hbwscw . e4yqhpgtcf != ihnh5ag1lp . Constant_Value ) && hfe00hbwscw .
nmnvokqd32 ) { if ( hfe00hbwscw . etuneoeubc != 0.0 ) { hfe00hbwscw .
fx1tl3pc5j [ 0 ] = hfe00hbwscw . jnfihtxxde ; } else { hfe00hbwscw .
fx1tl3pc5j [ 0 ] = ihnh5ag1lp . Constant1_Value ; } hfe00hbwscw . fx1tl3pc5j
[ 1 ] = hfe00hbwscw . cmthjlvx0t ; } else if ( hfe00hbwscw . etuneoeubc !=
0.0 ) { hfe00hbwscw . fx1tl3pc5j [ 0 ] = hfe00hbwscw . cmthjlvx0t ;
hfe00hbwscw . fx1tl3pc5j [ 1 ] = hfe00hbwscw . jnfihtxxde ; } else {
hfe00hbwscw . fx1tl3pc5j [ 0 ] = ihnh5ag1lp . Constant_Value_fb5mg350bv ;
hfe00hbwscw . fx1tl3pc5j [ 1 ] = muDoubleScalarMax ( hfe00hbwscw . cmthjlvx0t
, hfe00hbwscw . jnfihtxxde ) ; } if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { if (
bcuvylxhefc . a5czhakwii == 0 ) { bcuvylxhefc . cptmanfsa1 = hfe00hbwscw .
fx1tl3pc5j [ 0 ] ; } if ( bcuvylxhefc . l1ffn0wiag == 0 ) { bcuvylxhefc .
j5bb1yym0w = hfe00hbwscw . fx1tl3pc5j [ 1 ] ; } } if ( ssIsSampleHit ( rtS ,
3 , 0 ) ) { bcuvylxhefc . a5czhakwii = 1 ; hfe00hbwscw . lfrzqxjyja =
bcuvylxhefc . cptmanfsa1 ; bcuvylxhefc . a5czhakwii = 0 ; } if (
ssIsSampleHit ( rtS , 1 , 0 ) && ( bcuvylxhefc . fiqovchppi == 0 ) ) {
bcuvylxhefc . nos2ft3sic = hfe00hbwscw . k2nvq1dfvz ; } if ( ssIsSampleHit (
rtS , 3 , 0 ) ) { bcuvylxhefc . l1ffn0wiag = 1 ; hfe00hbwscw . o5n5eexjon =
bcuvylxhefc . j5bb1yym0w ; bcuvylxhefc . l1ffn0wiag = 0 ; } if (
ssIsSampleHit ( rtS , 1 , 0 ) && ( bcuvylxhefc . oxgd34m1rt == 0 ) ) {
bcuvylxhefc . n3mkw34cn5 = hfe00hbwscw . i4av10pedr ; } if ( ssIsSampleHit (
rtS , 3 , 0 ) ) { bcuvylxhefc . fiqovchppi = 1 ; hfe00hbwscw . e51yutiqek =
bcuvylxhefc . nos2ft3sic ; bcuvylxhefc . fiqovchppi = 0 ; } if (
ssIsSampleHit ( rtS , 1 , 0 ) && ( bcuvylxhefc . i51uahy2gc == 0 ) ) {
bcuvylxhefc . h1tau0ecpq = hfe00hbwscw . o035i4hwxg ; } if ( ssIsSampleHit (
rtS , 3 , 0 ) ) { bcuvylxhefc . oxgd34m1rt = 1 ; hfe00hbwscw . fbfzjqwa5a =
bcuvylxhefc . n3mkw34cn5 ; bcuvylxhefc . oxgd34m1rt = 0 ; } if (
ssIsSampleHit ( rtS , 1 , 0 ) && ( bcuvylxhefc . jtthydvh1h == 0 ) ) {
bcuvylxhefc . kmrimj41ij = hfe00hbwscw . pb4y5y3noy ; } if ( ssIsSampleHit (
rtS , 3 , 0 ) ) { bcuvylxhefc . i51uahy2gc = 1 ; hfe00hbwscw . mkqparta3r =
bcuvylxhefc . h1tau0ecpq ; bcuvylxhefc . i51uahy2gc = 0 ; } if (
ssIsSampleHit ( rtS , 1 , 0 ) && ( bcuvylxhefc . kgr2bmvhtp == 0 ) ) {
bcuvylxhefc . kebrerroqx = hfe00hbwscw . krfdbjpt0e ; } if ( ssIsSampleHit (
rtS , 3 , 0 ) ) { bcuvylxhefc . jtthydvh1h = 1 ; hfe00hbwscw . a2zj1koo4k =
bcuvylxhefc . kmrimj41ij ; bcuvylxhefc . jtthydvh1h = 0 ; bcuvylxhefc .
kgr2bmvhtp = 1 ; hfe00hbwscw . ldaenjp42v = bcuvylxhefc . kebrerroqx ;
bcuvylxhefc . kgr2bmvhtp = 0 ; EvPowertrainController ( & hfe00hbwscw .
lfrzqxjyja , & hfe00hbwscw . o5n5eexjon , & hfe00hbwscw . e51yutiqek , &
hfe00hbwscw . fbfzjqwa5a , & hfe00hbwscw . ldaenjp42v , & hfe00hbwscw .
f53jjpuuxm , & hfe00hbwscw . hhj0p0jony , & ( bcuvylxhefc . alzb1lqr5t . rtb
) ) ; } if ( ssIsSampleHit ( rtS , 4 , 0 ) ) { hfe00hbwscw . fkmxmxweyx =
ssGetTaskTime ( rtS , 4 ) ; } hfe00hbwscw . j3cdx1rby1 = cbv1b3vtl5 -
hfe00hbwscw . fkmxmxweyx ; cbv1b3vtl5 = muDoubleScalarAbs ( hfe00hbwscw .
k2nvq1dfvz ) ; iy = 0 ; if ( cbv1b3vtl5 < 0.001 ) { iy = 1 ; } if ( 0 <= iy -
1 ) { z_data = cbv1b3vtl5 / 0.001 ; } if ( 0 <= iy - 1 ) { z1_data = z_data ;
} if ( 0 <= iy - 1 ) { z1_data = z_data * z_data ; } iy -- ; for ( i = 0 ; i
<= iy ; i ++ ) { z1_data = 0.002 / ( 3.0 - z1_data ) ; } if ( cbv1b3vtl5 <
0.001 ) { cbv1b3vtl5 = z1_data ; } iy = 0 ; if ( hfe00hbwscw . k2nvq1dfvz <
0.0 ) { iy = 1 ; } if ( 0 <= iy - 1 ) { z_data = - cbv1b3vtl5 ; } bcl1b5rt4n
= cbv1b3vtl5 ; if ( hfe00hbwscw . k2nvq1dfvz < 0.0 ) { bcl1b5rt4n = z_data ;
} if ( cbv1b3vtl5 > 5.0 ) { cbv1b3vtl5 = muDoubleScalarMax (
muDoubleScalarMin ( ihnh5ag1lp . LongitudinalDriverModel_tau , ihnh5ag1lp .
LongitudinalDriverModel_L / cbv1b3vtl5 ) , 0.001 ) ; } else { cbv1b3vtl5 =
ihnh5ag1lp . LongitudinalDriverModel_tau ; } dxbnvj4sno [ 0 ] = 0.0 ;
dxbnvj4sno [ 2 ] = 1.0 ; dxbnvj4sno [ 1 ] = - ( ( ihnh5ag1lp .
LongitudinalDriverModel_aR / bcl1b5rt4n + ihnh5ag1lp .
LongitudinalDriverModel_cR * hfe00hbwscw . k2nvq1dfvz ) * muDoubleScalarTanh
( hfe00hbwscw . k2nvq1dfvz ) + ihnh5ag1lp . LongitudinalDriverModel_bR ) /
ihnh5ag1lp . LongitudinalDriverModel_m ; dxbnvj4sno [ 3 ] = 0.0 ;
jvd5kozvur_idx_1 = ihnh5ag1lp . LongitudinalDriverModel_Kpt / ihnh5ag1lp .
LongitudinalDriverModel_m ; sigmaA [ 0 ] = 0.0 ; sigmaB_idx_0 = 0.0 ; sigmaA
[ 1 ] = 0.0 ; sigmaB_idx_1 = 0.0 ; sigmaA [ 2 ] = 0.0 ; sigmaB_idx_2 = 0.0 ;
sigmaA [ 3 ] = 0.0 ; sigmaB_idx_3 = 0.0 ; for ( iy = 0 ; iy < 15 ; iy ++ ) {
bcl1b5rt4n = muDoubleScalarPower ( cbv1b3vtl5 , ( real_T ) iy + 1.0 ) ;
mpower_TZKN3Egd ( dxbnvj4sno , ( real_T ) iy + 1.0 , b_I ) ; d = d_p [ iy + 1
] ; sigmaA [ 0 ] += b_I [ 0 ] * bcl1b5rt4n / d ; sigmaA [ 1 ] += b_I [ 1 ] *
bcl1b5rt4n / d ; sigmaA [ 2 ] += b_I [ 2 ] * bcl1b5rt4n / d ; sigmaA [ 3 ] +=
b_I [ 3 ] * bcl1b5rt4n / d ; bcl1b5rt4n = muDoubleScalarPower ( cbv1b3vtl5 ,
( real_T ) iy + 1.0 ) ; mpower_TZKN3Egd ( dxbnvj4sno , ( real_T ) iy + 1.0 ,
b_I ) ; sigmaB_idx_0 += b_I [ 0 ] * bcl1b5rt4n / d_p [ iy ] ; sigmaB_idx_1 +=
b_I [ 1 ] * bcl1b5rt4n / d_p [ iy ] ; sigmaB_idx_2 += b_I [ 2 ] * bcl1b5rt4n
/ d_p [ iy ] ; sigmaB_idx_3 += b_I [ 3 ] * bcl1b5rt4n / d_p [ iy ] ; }
cbv1b3vtl5 = ( ( sigmaA [ 0 ] + 1.0 ) * cbv1b3vtl5 + cbv1b3vtl5 * sigmaA [ 1
] ) * 0.0 + ( ( sigmaA [ 3 ] + 1.0 ) * cbv1b3vtl5 + cbv1b3vtl5 * sigmaA [ 2 ]
) * jvd5kozvur_idx_1 ; nrauzgzuwg [ 0 ] = 0.0 ; nrauzgzuwg [ 1 ] = dxbnvj4sno
[ 1 ] * 0.001 ; nrauzgzuwg [ 2 ] = 0.001 ; nrauzgzuwg [ 3 ] = 0.0 ;
expm_fk22GNna ( nrauzgzuwg , sigmaA ) ; nrauzgzuwg [ 0 ] = 0.0 ; nrauzgzuwg [
1 ] = dxbnvj4sno [ 1 ] * 0.0 ; nrauzgzuwg [ 2 ] = 0.0 ; nrauzgzuwg [ 3 ] =
0.0 ; expm_fk22GNna ( nrauzgzuwg , b_I ) ; nrauzgzuwg [ 0 ] = 0.0 ;
nrauzgzuwg [ 1 ] = dxbnvj4sno [ 1 ] * 0.001 ; nrauzgzuwg [ 2 ] = 0.001 ;
nrauzgzuwg [ 3 ] = 0.0 ; expm_fk22GNna ( nrauzgzuwg , dxbnvj4sno ) ;
hfe00hbwscw . hfrndgtdvk = ( ( ( b_I [ 0 ] * 0.0 + b_I [ 2 ] *
jvd5kozvur_idx_1 ) + ( dxbnvj4sno [ 0 ] * 0.0 + dxbnvj4sno [ 2 ] *
jvd5kozvur_idx_1 ) ) / 2.0 * 0.001 * hfe00hbwscw . ewcpkcxybh + ( sigmaA [ 0
] * hfe00hbwscw . k2nvq1dfvz + sigmaA [ 2 ] * 0.0 ) ) * ( ( sigmaB_idx_0 +
1.0 ) + sigmaB_idx_1 ) + ( ( ( b_I [ 1 ] * 0.0 + b_I [ 3 ] * jvd5kozvur_idx_1
) + ( dxbnvj4sno [ 1 ] * 0.0 + dxbnvj4sno [ 3 ] * jvd5kozvur_idx_1 ) ) / 2.0
* 0.001 * hfe00hbwscw . ewcpkcxybh + ( sigmaA [ 1 ] * hfe00hbwscw .
k2nvq1dfvz + sigmaA [ 3 ] * 0.0 ) ) * ( ( sigmaB_idx_3 + 1.0 ) + sigmaB_idx_2
) ; hfe00hbwscw . bekklopwz5 = hfe00hbwscw . ewcpkcxybh * cbv1b3vtl5 ;
hfe00hbwscw . gdkws0vsws = hfe00hbwscw . hfrndgtdvk + hfe00hbwscw .
bekklopwz5 ; hfe00hbwscw . dkyaehby1j = hfe00hbwscw . e4yqhpgtcf -
hfe00hbwscw . gdkws0vsws ; hfe00hbwscw . p50dphabzy = hfe00hbwscw .
dkyaehby1j / cbv1b3vtl5 ; hfe00hbwscw . feadjgjni4 = hfe00hbwscw . p50dphabzy
+ hfe00hbwscw . hd0j3gmmyn ; hfe00hbwscw . adqo2rpmqv = hfe00hbwscw .
feadjgjni4 - hfe00hbwscw . hd0j3gmmyn ; hfe00hbwscw . gb4x2xlbw3 = 1.0 /
ihnh5ag1lp . LongitudinalDriverModel_tau * 3.1415926535897931 * 2.0 *
hfe00hbwscw . adqo2rpmqv ; hfe00hbwscw . l511ehwbyg = hfe00hbwscw .
e4yqhpgtcf - hfe00hbwscw . k2nvq1dfvz ; hfe00hbwscw . d01a5ocxx2 =
hfe00hbwscw . l511ehwbyg * hfe00hbwscw . l511ehwbyg ; if ( ssIsSampleHit (
rtS , 2 , 0 ) ) { hfe00hbwscw . asokvlgnxe [ 0 ] = bcuvylxhefc . cnrnbvpn5m [
0 ] ; hfe00hbwscw . asokvlgnxe [ 1 ] = bcuvylxhefc . cnrnbvpn5m [ 1 ] ; } if
( hfe00hbwscw . l511ehwbyg > hfe00hbwscw . asokvlgnxe [ 0 ] ) { hfe00hbwscw .
kmgjdorlmx [ 0 ] = hfe00hbwscw . l511ehwbyg ; } else { hfe00hbwscw .
kmgjdorlmx [ 0 ] = hfe00hbwscw . asokvlgnxe [ 0 ] ; } if ( hfe00hbwscw .
l511ehwbyg < hfe00hbwscw . asokvlgnxe [ 1 ] ) { hfe00hbwscw . kmgjdorlmx [ 1
] = hfe00hbwscw . l511ehwbyg ; } else { hfe00hbwscw . kmgjdorlmx [ 1 ] =
hfe00hbwscw . asokvlgnxe [ 1 ] ; } if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { {
if ( ( bcuvylxhefc . o142ktwdad . AQHandles || bcuvylxhefc . o142ktwdad .
SlioLTF ) && ssGetLogOutput ( rtS ) ) { sdiSlioSdiWriteSignal ( bcuvylxhefc .
o142ktwdad . AQHandles , bcuvylxhefc . o142ktwdad . SlioLTF , 0 ,
ssGetTaskTime ( rtS , 1 ) , ( char * ) & hfe00hbwscw . k2nvq1dfvz + 0 ) ; } }
} hfe00hbwscw . kp4tq4fada = hfe00hbwscw . o035i4hwxg / hfe00hbwscw .
kwter11yih ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { { if ( ( bcuvylxhefc .
cbpif1banu . AQHandles || bcuvylxhefc . cbpif1banu . SlioLTF ) &&
ssGetLogOutput ( rtS ) ) { sdiSlioSdiWriteSignal ( bcuvylxhefc . cbpif1banu .
AQHandles , bcuvylxhefc . cbpif1banu . SlioLTF , 0 , ssGetTaskTime ( rtS , 1
) , ( char * ) & hfe00hbwscw . kp4tq4fada + 0 ) ; } } } UNUSED_PARAMETER (
tid ) ; } void MdlOutputsTID6 ( int_T tid ) { EvPowertrainControllerTID1 ( &
( bcuvylxhefc . alzb1lqr5t . rtb ) ) ; hfe00hbwscw . bm52wmv1x5 = false ;
hfe00hbwscw . b1mzxh50u5 = true ; hfe00hbwscw . chtbrnbren = false ;
hfe00hbwscw . lqeerwztoi = true ; hfe00hbwscw . lldsxsxwpp = ihnh5ag1lp .
LongitudinalDriverModel_g * ihnh5ag1lp . LongitudinalDriverModel_m *
ihnh5ag1lp . LongitudinalDriverModel_m / ihnh5ag1lp .
LongitudinalDriverModel_Kpt * 0.0 ; DrivetrainEvTID2 ( & ( bcuvylxhefc .
iajxel3ezk . rtb ) ) ; BattEvTID1 ( & ( bcuvylxhefc . ondfxuidp3 . rtb ) ) ;
MotGenEvDynamicTID3 ( & ( bcuvylxhefc . enbv0wioc4 . rtm ) , & ( bcuvylxhefc
. enbv0wioc4 . rtb ) , & ( bcuvylxhefc . enbv0wioc4 . rtdw ) ) ;
UNUSED_PARAMETER ( tid ) ; } void MdlUpdate ( int_T tid ) { if (
ssIsSampleHit ( rtS , 3 , 0 ) ) { bcuvylxhefc . k0zcask0cc [ bcuvylxhefc .
ep2boc231g == 0 ] = hfe00hbwscw . hhj0p0jony ; bcuvylxhefc . ep2boc231g = (
int8_T ) ( bcuvylxhefc . ep2boc231g == 0 ) ; } ekz3w3o33e ( & ( bcuvylxhefc .
iajxel3ezk . rtm ) , & ( bcuvylxhefc . iajxel3ezk . rtdw ) ) ; c0hgp3wnut ( &
( bcuvylxhefc . ondfxuidp3 . rtm ) , & ( bcuvylxhefc . ondfxuidp3 . rtb ) , &
( bcuvylxhefc . ondfxuidp3 . rtdw ) , & ( nltnw1e5gkl . fqvhaqjss0 ) ) ; if (
ssIsSampleHit ( rtS , 3 , 0 ) ) { bcuvylxhefc . klgv0izvyu [ bcuvylxhefc .
fqundvylsh == 0 ] = hfe00hbwscw . f53jjpuuxm ; bcuvylxhefc . fqundvylsh = (
int8_T ) ( bcuvylxhefc . fqundvylsh == 0 ) ; } lwglwij1vj ( & ( bcuvylxhefc .
enbv0wioc4 . rtm ) , & ( bcuvylxhefc . enbv0wioc4 . rtb ) , & ( bcuvylxhefc .
enbv0wioc4 . rtdw ) , & ( nltnw1e5gkl . b04e30byfs ) ) ; if ( ssIsSampleHit (
rtS , 2 , 0 ) ) { bcuvylxhefc . cnrnbvpn5m [ 0 ] = hfe00hbwscw . kmgjdorlmx [
0 ] ; bcuvylxhefc . cnrnbvpn5m [ 1 ] = hfe00hbwscw . kmgjdorlmx [ 1 ] ; }
UNUSED_PARAMETER ( tid ) ; } void MdlUpdateTID6 ( int_T tid ) {
UNUSED_PARAMETER ( tid ) ; } void MdlDerivatives ( void ) { lqmi0mm3ub *
_rtXdot ; _rtXdot = ( ( lqmi0mm3ub * ) ssGetdX ( rtS ) ) ; _rtXdot ->
i4qubohzc1 = 0.0 ; _rtXdot -> i4qubohzc1 += ihnh5ag1lp .
MotorCouplingDynamics_A * nltnw1e5gkl . i4qubohzc1 ; _rtXdot -> i4qubohzc1 +=
hfe00hbwscw . kpv1qapnbc ; a2spfqi5as ( & ( bcuvylxhefc . iajxel3ezk . rtb )
, & ( bcuvylxhefc . iajxel3ezk . rtdw ) , & ( nltnw1e5gkl . hcwjqlhqcy ) , &
( ( ( lqmi0mm3ub * ) ssGetdX ( rtS ) ) -> hcwjqlhqcy ) ) ; _rtXdot ->
nxcnpybje3 = 0.0 ; _rtXdot -> nxcnpybje3 += ihnh5ag1lp .
BatteryDischargeDynamics_A * nltnw1e5gkl . nxcnpybje3 ; _rtXdot -> nxcnpybje3
+= hfe00hbwscw . pb4y5y3noy ; pexk2pi1gg ( & ( bcuvylxhefc . ondfxuidp3 . rtb
) , & ( bcuvylxhefc . ondfxuidp3 . rtdw ) , & ( ( ( nokraiiwbv * )
ssGetContStateDisabled ( rtS ) ) -> fqvhaqjss0 ) , & ( ( ( lqmi0mm3ub * )
ssGetdX ( rtS ) ) -> fqvhaqjss0 ) ) ; mfy1r3luh1 ( & hfe00hbwscw . krfdbjpt0e
, & ( bcuvylxhefc . enbv0wioc4 . rtb ) , & ( bcuvylxhefc . enbv0wioc4 . rtdw
) , & ( ( ( nokraiiwbv * ) ssGetContStateDisabled ( rtS ) ) -> b04e30byfs ) ,
& ( ( ( lqmi0mm3ub * ) ssGetdX ( rtS ) ) -> b04e30byfs ) ) ; _rtXdot ->
a1yytga2i4 = hfe00hbwscw . juedzmwz13 ; _rtXdot -> d2vzwae4a0 = hfe00hbwscw .
kpjtu3yzip ; _rtXdot -> fulynuhbhe = hfe00hbwscw . gb4x2xlbw3 ; _rtXdot ->
hiwowua33s = hfe00hbwscw . d01a5ocxx2 ; } void MdlProjection ( void ) { }
void MdlZeroCrossings ( void ) { lm4x2ar2jt * _rtZCSV ; _rtZCSV = ( (
lm4x2ar2jt * ) ssGetSolverZcSignalVector ( rtS ) ) ; ehifyxeeav ( & (
bcuvylxhefc . iajxel3ezk . rtm ) , & ( bcuvylxhefc . iajxel3ezk . rtb ) , & (
bcuvylxhefc . iajxel3ezk . rtdw ) , & ( ( ( lm4x2ar2jt * )
ssGetSolverZcSignalVector ( rtS ) ) -> oexwb0vxno ) ) ; d3sayc4aih ( & (
bcuvylxhefc . ondfxuidp3 . rtb ) , & ( bcuvylxhefc . ondfxuidp3 . rtdw ) , &
( nltnw1e5gkl . fqvhaqjss0 ) , & ( ( ( lm4x2ar2jt * )
ssGetSolverZcSignalVector ( rtS ) ) -> g5hi1yixh2 ) ) ; cmnf4xtkyp ( &
hfe00hbwscw . k5wjbiecdv , & ( bcuvylxhefc . enbv0wioc4 . rtb ) , & (
bcuvylxhefc . enbv0wioc4 . rtdw ) , & ( nltnw1e5gkl . b04e30byfs ) , & ( ( (
lm4x2ar2jt * ) ssGetSolverZcSignalVector ( rtS ) ) -> hev2tqxdbw ) ) ;
_rtZCSV -> gppqg3jeps = hfe00hbwscw . bki5dqleao - ihnh5ag1lp .
Saturation1_UpperSat ; _rtZCSV -> ncwkbjsqae = hfe00hbwscw . bki5dqleao -
ihnh5ag1lp . Saturation1_LowerSat ; _rtZCSV -> duf13ep545 = hfe00hbwscw .
jaqygtbwrp - ihnh5ag1lp . Saturation_UpperSat ; _rtZCSV -> ewzov3eiem =
hfe00hbwscw . jaqygtbwrp - ihnh5ag1lp . Saturation_LowerSat ; _rtZCSV ->
o4s3wza3yv = hfe00hbwscw . j3cdx1rby1 - ihnh5ag1lp . HitCrossing_Offset ; }
void MdlTerminate ( void ) { lktaxgo5iz ( & ( bcuvylxhefc . alzb1lqr5t . rtm
) ) ; ekywbf3nku ( & ( bcuvylxhefc . iajxel3ezk . rtm ) ) ; m5uwyjpoin ( & (
bcuvylxhefc . ondfxuidp3 . rtm ) ) ; kh5ykjtmv0 ( & ( bcuvylxhefc .
enbv0wioc4 . rtm ) ) ; cmuw0kqmoe ( & ( bcuvylxhefc . iajxel3ezk . rtm ) , &
( bcuvylxhefc . iajxel3ezk . rtdw ) ) ; { if ( bcuvylxhefc . o142ktwdad .
AQHandles ) { sdiTerminateStreaming ( & bcuvylxhefc . o142ktwdad . AQHandles
) ; } if ( bcuvylxhefc . o142ktwdad . SlioLTF ) { rtwDestructAccessorPointer
( bcuvylxhefc . o142ktwdad . SlioLTF ) ; } } { if ( bcuvylxhefc . cbpif1banu
. AQHandles ) { sdiTerminateStreaming ( & bcuvylxhefc . cbpif1banu .
AQHandles ) ; } if ( bcuvylxhefc . cbpif1banu . SlioLTF ) {
rtwDestructAccessorPointer ( bcuvylxhefc . cbpif1banu . SlioLTF ) ; } } if (
rt_slioCatalogue ( ) != ( NULL ) ) { void * * slioCatalogueAddr =
rt_slioCatalogueAddr ( ) ; rtwSaveDatasetsToMatFile (
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) ,
rt_GetMatSigstreamLoggingFileName ( ) ) ; rtwTerminateSlioCatalogue (
slioCatalogueAddr ) ; * slioCatalogueAddr = NULL ; } } void
MdlInitializeSizes ( void ) { ssSetNumContStates ( rtS , 31 ) ;
ssSetNumPeriodicContStates ( rtS , 2 ) ; ssSetNumY ( rtS , 0 ) ; ssSetNumU (
rtS , 0 ) ; ssSetDirectFeedThrough ( rtS , 0 ) ; ssSetNumSampleTimes ( rtS ,
6 ) ; ssSetNumBlocks ( rtS , 132 ) ; ssSetNumBlockIO ( rtS , 70 ) ;
ssSetNumBlockParams ( rtS , 859 ) ; } void MdlInitializeSampleTimes ( void )
{ ssSetSampleTime ( rtS , 0 , 0.0 ) ; ssSetSampleTime ( rtS , 1 , 0.0 ) ;
ssSetSampleTime ( rtS , 2 , 5.0E-5 ) ; ssSetSampleTime ( rtS , 3 , 0.01 ) ;
ssSetSampleTime ( rtS , 4 , 0.05 ) ; ssSetSampleTime ( rtS , 5 , 0.1 ) ;
ssSetOffsetTime ( rtS , 0 , 0.0 ) ; ssSetOffsetTime ( rtS , 1 , 1.0 ) ;
ssSetOffsetTime ( rtS , 2 , 0.0 ) ; ssSetOffsetTime ( rtS , 3 , 0.0 ) ;
ssSetOffsetTime ( rtS , 4 , 0.0 ) ; ssSetOffsetTime ( rtS , 5 , 0.0 ) ; }
void raccel_set_checksum ( ) { ssSetChecksumVal ( rtS , 0 , 504722902U ) ;
ssSetChecksumVal ( rtS , 1 , 2250330730U ) ; ssSetChecksumVal ( rtS , 2 ,
2710263453U ) ; ssSetChecksumVal ( rtS , 3 , 1519803584U ) ; }
#if defined(_MSC_VER)
#pragma optimize( "", off )
#endif
SimStruct * raccel_register_model ( void ) { static struct _ssMdlInfo mdlInfo
; ssNonContDerivSigFeedingOutports *
mr_MotGenEvDynamic_13_3_0nonContOutputArray [ 2 ] = { ( NULL ) , ( NULL ) } ;
ssNonContDerivSigFeedingOutports mr_MotGenEvDynamic_13_3_0nonContDerivSig1 [
4 ] ; mr_MotGenEvDynamic_13_3_0nonContOutputArray [ 1 ] =
mr_MotGenEvDynamic_13_3_0nonContDerivSig1 ; ( void ) memset ( ( char * ) rtS
, 0 , sizeof ( SimStruct ) ) ; ( void ) memset ( ( char * ) & mdlInfo , 0 ,
sizeof ( struct _ssMdlInfo ) ) ; ssSetMdlInfoPtr ( rtS , & mdlInfo ) ; {
static time_T mdlPeriod [ NSAMPLE_TIMES ] ; static time_T mdlOffset [
NSAMPLE_TIMES ] ; static time_T mdlTaskTimes [ NSAMPLE_TIMES ] ; static int_T
mdlTsMap [ NSAMPLE_TIMES ] ; static int_T mdlSampleHits [ NSAMPLE_TIMES ] ;
static boolean_T mdlTNextWasAdjustedPtr [ NSAMPLE_TIMES ] ; static int_T
mdlPerTaskSampleHits [ NSAMPLE_TIMES * NSAMPLE_TIMES ] ; static time_T
mdlTimeOfNextSampleHit [ NSAMPLE_TIMES ] ; { int_T i ; for ( i = 0 ; i <
NSAMPLE_TIMES ; i ++ ) { mdlPeriod [ i ] = 0.0 ; mdlOffset [ i ] = 0.0 ;
mdlTaskTimes [ i ] = 0.0 ; mdlTsMap [ i ] = i ; mdlSampleHits [ i ] = 1 ; } }
ssSetSampleTimePtr ( rtS , & mdlPeriod [ 0 ] ) ; ssSetOffsetTimePtr ( rtS , &
mdlOffset [ 0 ] ) ; ssSetSampleTimeTaskIDPtr ( rtS , & mdlTsMap [ 0 ] ) ;
ssSetTPtr ( rtS , & mdlTaskTimes [ 0 ] ) ; ssSetSampleHitPtr ( rtS , &
mdlSampleHits [ 0 ] ) ; ssSetTNextWasAdjustedPtr ( rtS , &
mdlTNextWasAdjustedPtr [ 0 ] ) ; ssSetPerTaskSampleHitsPtr ( rtS , &
mdlPerTaskSampleHits [ 0 ] ) ; ssSetTimeOfNextSampleHitPtr ( rtS , &
mdlTimeOfNextSampleHit [ 0 ] ) ; } ssSetSolverMode ( rtS ,
SOLVER_MODE_SINGLETASKING ) ; { ssSetBlockIO ( rtS , ( ( void * ) &
hfe00hbwscw ) ) ; ( void ) memset ( ( ( void * ) & hfe00hbwscw ) , 0 , sizeof
( hfe00hbwsc ) ) ; } { real_T * x = ( real_T * ) & nltnw1e5gkl ;
ssSetContStates ( rtS , x ) ; ( void ) memset ( ( void * ) x , 0 , sizeof (
nltnw1e5gk ) ) ; } { void * dwork = ( void * ) & bcuvylxhefc ; ssSetRootDWork
( rtS , dwork ) ; ( void ) memset ( dwork , 0 , sizeof ( bcuvylxhef ) ) ; } {
static DataTypeTransInfo dtInfo ; ( void ) memset ( ( char_T * ) & dtInfo , 0
, sizeof ( dtInfo ) ) ; ssSetModelMappingInfo ( rtS , & dtInfo ) ; dtInfo .
numDataTypes = 18 ; dtInfo . dataTypeSizes = & rtDataTypeSizes [ 0 ] ; dtInfo
. dataTypeNames = & rtDataTypeNames [ 0 ] ; dtInfo . BTransTable = &
rtBTransTable ; dtInfo . PTransTable = & rtPTransTable ; dtInfo .
dataTypeInfoTable = rtDataTypeInfoTable ; } HT05Model_InitializeDataMapInfo (
) ; ssSetIsRapidAcceleratorActive ( rtS , true ) ; ssSetRootSS ( rtS , rtS )
; ssSetVersion ( rtS , SIMSTRUCT_VERSION_LEVEL2 ) ; ssSetModelName ( rtS ,
"HT05Model" ) ; ssSetPath ( rtS , "HT05Model" ) ; ssSetTStart ( rtS , 0.0 ) ;
ssSetTFinal ( rtS , 100.0 ) ; io04qbfqhk ( rtS , 3 , 0 , & ( bcuvylxhefc .
alzb1lqr5t . rtm ) , & ( bcuvylxhefc . alzb1lqr5t . rtb ) , NULL , 0 , & (
rt_dataMapInfoPtr -> mmi ) ,
"HT05Model/Controllers/Powertrain Control Module (PCM)" , 0 , - 1 ) ; {
char_T * tempStr = rtwCAPI_EncodePath (
"HT05Model/Controllers/Powertrain Control Module (PCM)" ) ;
rtwCAPI_UpdateFullPaths ( ( rtwCAPI_GetChildMMI ( & ( rt_dataMapInfoPtr ->
mmi ) , 0 ) ) , tempStr , 1 ) ; utFree ( tempStr ) ; } ktxb3gprz3 ( rtS , 0 ,
1 , 0 , & ( bcuvylxhefc . iajxel3ezk . rtm ) , & ( bcuvylxhefc . iajxel3ezk .
rtb ) , & ( bcuvylxhefc . iajxel3ezk . rtdw ) , & ( nltnw1e5gkl . hcwjqlhqcy
) , & ( bcuvylxhefc . iajxel3ezk . rtzce ) , NULL , 0 , & ( rt_dataMapInfoPtr
-> mmi ) , "HT05Model/Passenger Car/Drivetrain" , 1 , 1 ) ; { char_T *
tempStr = rtwCAPI_EncodePath ( "HT05Model/Passenger Car/Drivetrain" ) ;
rtwCAPI_UpdateFullPaths ( ( rtwCAPI_GetChildMMI ( & ( rt_dataMapInfoPtr ->
mmi ) , 1 ) ) , tempStr , 1 ) ; utFree ( tempStr ) ; } lst5ppimoh ( rtS , 0 ,
0 , & ( bcuvylxhefc . ondfxuidp3 . rtm ) , & ( bcuvylxhefc . ondfxuidp3 . rtb
) , & ( bcuvylxhefc . ondfxuidp3 . rtdw ) , & ( nltnw1e5gkl . fqvhaqjss0 ) ,
NULL , 0 , & ( rt_dataMapInfoPtr -> mmi ) ,
"HT05Model/Passenger Car/Electric Plant/Battery" , 2 , 23 ) ; { char_T *
tempStr = rtwCAPI_EncodePath (
"HT05Model/Passenger Car/Electric Plant/Battery" ) ; rtwCAPI_UpdateFullPaths
( ( rtwCAPI_GetChildMMI ( & ( rt_dataMapInfoPtr -> mmi ) , 2 ) ) , tempStr ,
1 ) ; utFree ( tempStr ) ; } cwmdpnrf2r ( rtS ,
mr_MotGenEvDynamic_13_3_0nonContOutputArray , 0 , 1 , 2 , 0 , & ( bcuvylxhefc
. enbv0wioc4 . rtm ) , & ( bcuvylxhefc . enbv0wioc4 . rtb ) , & ( bcuvylxhefc
. enbv0wioc4 . rtdw ) , & ( nltnw1e5gkl . b04e30byfs ) , NULL , 0 , & (
rt_dataMapInfoPtr -> mmi ) ,
"HT05Model/Passenger Car/Electric Plant/Motor/MotGenEvDynamic" , 3 , 24 ) ; {
char_T * tempStr = rtwCAPI_EncodePath (
"HT05Model/Passenger Car/Electric Plant/Motor/MotGenEvDynamic" ) ;
rtwCAPI_UpdateFullPaths ( ( rtwCAPI_GetChildMMI ( & ( rt_dataMapInfoPtr ->
mmi ) , 3 ) ) , tempStr , 1 ) ; utFree ( tempStr ) ; } { static RTWLogInfo
rt_DataLoggingInfo ; rt_DataLoggingInfo . loggingInterval = NULL ;
ssSetRTWLogInfo ( rtS , & rt_DataLoggingInfo ) ; } { rtliSetLogT (
ssGetRTWLogInfo ( rtS ) , "tout" ) ; rtliSetLogX ( ssGetRTWLogInfo ( rtS ) ,
"" ) ; rtliSetLogXFinal ( ssGetRTWLogInfo ( rtS ) , "" ) ;
rtliSetLogVarNameModifier ( ssGetRTWLogInfo ( rtS ) , "none" ) ;
rtliSetLogFormat ( ssGetRTWLogInfo ( rtS ) , 4 ) ; rtliSetLogMaxRows (
ssGetRTWLogInfo ( rtS ) , 0 ) ; rtliSetLogDecimation ( ssGetRTWLogInfo ( rtS
) , 1 ) ; rtliSetMMI ( ssGetRTWLogInfo ( rtS ) , & ( rt_dataMapInfoPtr -> mmi
) ) ; rtliSetLogY ( ssGetRTWLogInfo ( rtS ) , "" ) ; rtliSetLogYSignalInfo (
ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ; rtliSetLogYSignalPtrs (
ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ; } { static struct _ssStatesInfo2
statesInfo2 ; ssSetStatesInfo2 ( rtS , & statesInfo2 ) ; } { static
ssPeriodicStatesInfo periodicStatesInfo ; ssSetPeriodicStatesInfo ( rtS , &
periodicStatesInfo ) ; ssSetPeriodicContStateIndices ( rtS , ngqsle4aqnz ) ;
( void ) memset ( ( void * ) ngqsle4aqnz , 0 , 2 * sizeof ( int_T ) ) ;
ssSetPeriodicContStateRanges ( rtS , hpzwhjywixq ) ; ( void ) memset ( ( void
* ) hpzwhjywixq , 0 , 4 * sizeof ( real_T ) ) ; } { static
ssJacobianPerturbationBounds jacobianPerturbationBounds ;
ssSetJacobianPerturbationBounds ( rtS , & jacobianPerturbationBounds ) ; } {
static ssSolverInfo slvrInfo ; static boolean_T contStatesDisabled [ 31 ] ;
static real_T absTol [ 31 ] = { 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 } ; static uint8_T absTolControl [ 31 ] = { 0U , 0U , 0U , 0U
, 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U ,
0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U } ; static real_T
contStateJacPerturbBoundMinVec [ 31 ] ; static real_T
contStateJacPerturbBoundMaxVec [ 31 ] ; static uint8_T zcAttributes [ 19 ] =
{ ( 0x40 | ZC_EVENT_ALL_UP ) , ( 0x40 | ZC_EVENT_ALL_UP ) , ( ZC_EVENT_ALL )
, ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL_UP ) , ( ZC_EVENT_ALL_DN ) , (
ZC_EVENT_ALL ) , ( ZC_EVENT_ALL_UP ) , ( ZC_EVENT_ALL_DN ) , ( ZC_EVENT_ALL )
, ( ZC_EVENT_ALL_UP ) , ( ZC_EVENT_ALL_DN ) , ( ZC_EVENT_ALL ) , (
ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , (
ZC_EVENT_ALL ) , ( ZC_EVENT_ALL_DN ) } ; static uint8_T zcEvents [ 19 ] = { (
0x40 | ZC_EVENT_ALL_UP ) , ( 0x40 | ZC_EVENT_ALL_UP ) , ( 0x40 | ZC_EVENT_ALL
) , ( 0x40 | ZC_EVENT_ALL ) , ( 0x40 | ZC_EVENT_ALL_UP ) , ( 0x40 |
ZC_EVENT_ALL_DN ) , ( 0x40 | ZC_EVENT_ALL ) , ( 0x40 | ZC_EVENT_ALL_UP ) , (
0x40 | ZC_EVENT_ALL_DN ) , ( 0x40 | ZC_EVENT_ALL ) , ( 0x40 | ZC_EVENT_ALL_UP
) , ( 0x40 | ZC_EVENT_ALL_DN ) , ( 0x40 | ZC_EVENT_ALL ) , ( 0x40 |
ZC_EVENT_ALL ) , ( 0x40 | ZC_EVENT_ALL ) , ( 0x40 | ZC_EVENT_ALL ) , ( 0x40 |
ZC_EVENT_ALL ) , ( 0x40 | ZC_EVENT_ALL ) , ( 0x40 | ZC_EVENT_ALL_DN ) } ;
static ssNonContDerivSigInfo nonContDerivSigInfo [ 5 ] = { { 0 , ( NULL ) , (
NULL ) } , { 0 , ( NULL ) , ( NULL ) } , { 0 , ( NULL ) , ( NULL ) } , { 0 ,
( NULL ) , ( NULL ) } , { 1 * sizeof ( real_T ) , ( char * ) ( & hfe00hbwscw
. cvgkryez0y ) , ( NULL ) } } ; nonContDerivSigInfo [ 0 ] . sizeInBytes =
mr_MotGenEvDynamic_13_3_0nonContOutputArray [ 1 ] [ 0 ] . sizeInBytes ;
nonContDerivSigInfo [ 0 ] . pCurrVal = ( char * )
mr_MotGenEvDynamic_13_3_0nonContOutputArray [ 1 ] [ 0 ] . currVal ;
nonContDerivSigInfo [ 1 ] . sizeInBytes =
mr_MotGenEvDynamic_13_3_0nonContOutputArray [ 1 ] [ 1 ] . sizeInBytes ;
nonContDerivSigInfo [ 1 ] . pCurrVal = ( char * )
mr_MotGenEvDynamic_13_3_0nonContOutputArray [ 1 ] [ 1 ] . currVal ;
nonContDerivSigInfo [ 2 ] . sizeInBytes =
mr_MotGenEvDynamic_13_3_0nonContOutputArray [ 1 ] [ 2 ] . sizeInBytes ;
nonContDerivSigInfo [ 2 ] . pCurrVal = ( char * )
mr_MotGenEvDynamic_13_3_0nonContOutputArray [ 1 ] [ 2 ] . currVal ;
nonContDerivSigInfo [ 3 ] . sizeInBytes =
mr_MotGenEvDynamic_13_3_0nonContOutputArray [ 1 ] [ 3 ] . sizeInBytes ;
nonContDerivSigInfo [ 3 ] . pCurrVal = ( char * )
mr_MotGenEvDynamic_13_3_0nonContOutputArray [ 1 ] [ 3 ] . currVal ; { int i ;
for ( i = 0 ; i < 31 ; ++ i ) { contStateJacPerturbBoundMinVec [ i ] = 0 ;
contStateJacPerturbBoundMaxVec [ i ] = rtGetInf ( ) ; } } ssSetSolverRelTol (
rtS , 0.001 ) ; ssSetStepSize ( rtS , 0.0 ) ; ssSetMinStepSize ( rtS , 0.0 )
; ssSetMaxNumMinSteps ( rtS , - 1 ) ; ssSetMinStepViolatedError ( rtS , 0 ) ;
ssSetMaxStepSize ( rtS , 5.0E-5 ) ; ssSetSolverMaxOrder ( rtS , - 1 ) ;
ssSetSolverRefineFactor ( rtS , 1 ) ; ssSetOutputTimes ( rtS , ( NULL ) ) ;
ssSetNumOutputTimes ( rtS , 0 ) ; ssSetOutputTimesOnly ( rtS , 0 ) ;
ssSetOutputTimesIndex ( rtS , 0 ) ; ssSetZCCacheNeedsReset ( rtS , 1 ) ;
ssSetDerivCacheNeedsReset ( rtS , 0 ) ; ssSetNumNonContDerivSigInfos ( rtS ,
5 ) ; ssSetNonContDerivSigInfos ( rtS , nonContDerivSigInfo ) ;
ssSetSolverInfo ( rtS , & slvrInfo ) ; ssSetSolverName ( rtS , "ode23tb" ) ;
ssSetVariableStepSolver ( rtS , 1 ) ; ssSetSolverConsistencyChecking ( rtS ,
0 ) ; ssSetSolverAdaptiveZcDetection ( rtS , 1 ) ;
ssSetSolverRobustResetMethod ( rtS , 0 ) ; ssSetAbsTolVector ( rtS , absTol )
; ssSetAbsTolControlVector ( rtS , absTolControl ) ;
ssSetSolverAbsTol_Obsolete ( rtS , absTol ) ;
ssSetSolverAbsTolControl_Obsolete ( rtS , absTolControl ) ;
ssSetJacobianPerturbationBoundsMinVec ( rtS , contStateJacPerturbBoundMinVec
) ; ssSetJacobianPerturbationBoundsMaxVec ( rtS ,
contStateJacPerturbBoundMaxVec ) ; ssSetSolverStateProjection ( rtS , 0 ) ;
ssSetSolverMassMatrixType ( rtS , ( ssMatrixType ) 0 ) ;
ssSetSolverMassMatrixNzMax ( rtS , 0 ) ; ssSetModelOutputs ( rtS , MdlOutputs
) ; ssSetModelLogData ( rtS , rt_UpdateTXYLogVars ) ;
ssSetModelLogDataIfInInterval ( rtS , rt_UpdateTXXFYLogVars ) ;
ssSetModelUpdate ( rtS , MdlUpdate ) ; ssSetModelDerivatives ( rtS ,
MdlDerivatives ) ; ssSetSolverZcSignalAttrib ( rtS , zcAttributes ) ;
ssSetSolverZcEventsVector ( rtS , zcEvents ) ; ssSetSolverNumZcSignals ( rtS
, 19 ) ; ssSetModelZeroCrossings ( rtS , MdlZeroCrossings ) ;
ssSetSolverConsecutiveZCsStepRelTol ( rtS , 2.8421709430404007E-13 ) ;
ssSetSolverMaxConsecutiveZCs ( rtS , 1000 ) ; ssSetSolverConsecutiveZCsError
( rtS , 2 ) ; ssSetSolverMaskedZcDiagnostic ( rtS , 1 ) ;
ssSetSolverIgnoredZcDiagnostic ( rtS , 0 ) ; ssSetSolverZcThreshold ( rtS ,
0.001 ) ; ssSetSolverMaxConsecutiveMinStep ( rtS , 1 ) ;
ssSetSolverShapePreserveControl ( rtS , 2 ) ; ssSetTNextTid ( rtS , INT_MIN )
; ssSetTNext ( rtS , rtMinusInf ) ; ssSetSolverNeedsReset ( rtS ) ;
ssSetNumNonsampledZCs ( rtS , 17 ) ; ssSetContStateDisabled ( rtS ,
contStatesDisabled ) ; ssSetSolverMaxConsecutiveMinStep ( rtS , 1 ) ; }
ssSetChecksumVal ( rtS , 0 , 504722902U ) ; ssSetChecksumVal ( rtS , 1 ,
2250330730U ) ; ssSetChecksumVal ( rtS , 2 , 2710263453U ) ; ssSetChecksumVal
( rtS , 3 , 1519803584U ) ; { static const sysRanDType rtAlwaysEnabled =
SUBSYS_RAN_BC_ENABLE ; static RTWExtModeInfo rt_ExtModeInfo ; static const
sysRanDType * systemRan [ 14 ] ; gblRTWExtModeInfo = & rt_ExtModeInfo ;
ssSetRTWExtModeInfo ( rtS , & rt_ExtModeInfo ) ;
rteiSetSubSystemActiveVectorAddresses ( & rt_ExtModeInfo , systemRan ) ;
systemRan [ 0 ] = & rtAlwaysEnabled ; systemRan [ 1 ] = & rtAlwaysEnabled ;
systemRan [ 2 ] = & rtAlwaysEnabled ; systemRan [ 3 ] = & rtAlwaysEnabled ;
systemRan [ 4 ] = ( sysRanDType * ) & bcuvylxhefc . gwhutwksvk ; systemRan [
5 ] = & rtAlwaysEnabled ; systemRan [ 6 ] = & rtAlwaysEnabled ; systemRan [ 7
] = ( sysRanDType * ) & bcuvylxhefc . ffrv3krqdc ; systemRan [ 8 ] = &
rtAlwaysEnabled ; systemRan [ 9 ] = & rtAlwaysEnabled ; systemRan [ 10 ] = &
rtAlwaysEnabled ; systemRan [ 11 ] = & rtAlwaysEnabled ; systemRan [ 12 ] = &
rtAlwaysEnabled ; systemRan [ 13 ] = & rtAlwaysEnabled ;
rteiSetModelMappingInfoPtr ( ssGetRTWExtModeInfo ( rtS ) , &
ssGetModelMappingInfo ( rtS ) ) ; rteiSetChecksumsPtr ( ssGetRTWExtModeInfo (
rtS ) , ssGetChecksums ( rtS ) ) ; rteiSetTPtr ( ssGetRTWExtModeInfo ( rtS )
, ssGetTPtr ( rtS ) ) ; } ihnh5ag1lp . Saturation1_UpperSat = rtInf ;
ihnh5ag1lp . Saturation_UpperSat = rtInf ; return rtS ; }
#if defined(_MSC_VER)
#pragma optimize( "", on )
#endif
const int_T gblParameterTuningTid = 6 ; void MdlOutputsParameterSampleTime (
int_T tid ) { MdlOutputsTID6 ( tid ) ; }
