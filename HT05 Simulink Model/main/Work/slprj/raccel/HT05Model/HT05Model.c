#include "rt_logging_mmi.h"
#include "HT05Model_capi.h"
#include <math.h>
#include "HT05Model.h"
#include "HT05Model_private.h"
#include "HT05Model_dt.h"
extern void * CreateDiagnosticAsVoidPtr_wrapper ( const char * id , int nargs
, ... ) ; RTWExtModeInfo * gblRTWExtModeInfo = NULL ; void
raccelForceExtModeShutdown ( boolean_T extModeStartPktReceived ) { if ( !
extModeStartPktReceived ) { boolean_T stopRequested = false ;
rtExtModeWaitForStartPkt ( gblRTWExtModeInfo , 6 , & stopRequested ) ; }
rtExtModeShutdown ( 6 ) ; }
#include "slsv_diagnostic_codegen_c_api.h"
#include "slsa_sim_engine.h"
const int_T gblNumToFiles = 0 ; const int_T gblNumFrFiles = 0 ; const int_T
gblNumFrWksBlocks = 0 ;
#ifdef RSIM_WITH_SOLVER_MULTITASKING
boolean_T gbl_raccel_isMultitasking = 1 ;
#else
boolean_T gbl_raccel_isMultitasking = 0 ;
#endif
boolean_T gbl_raccel_tid01eq = 0 ; int_T gbl_raccel_NumST = 7 ; const char_T
* gbl_raccel_Version = "10.3 (R2021a) 14-Nov-2020" ; void
raccel_setup_MMIStateLog ( SimStruct * S ) {
#ifdef UseMMIDataLogging
rt_FillStateSigInfoFromMMI ( ssGetRTWLogInfo ( S ) , & ssGetErrorStatus ( S )
) ;
#else
UNUSED_PARAMETER ( S ) ;
#endif
} static DataMapInfo rt_dataMapInfo ; DataMapInfo * rt_dataMapInfoPtr = &
rt_dataMapInfo ; rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr = & (
rt_dataMapInfo . mmi ) ; const int_T gblNumRootInportBlks = 0 ; const int_T
gblNumModelInputs = 0 ; extern const char * gblInportFileName ; extern
rtInportTUtable * gblInportTUtables ; const int_T gblInportDataTypeIdx [ ] =
{ - 1 } ; const int_T gblInportDims [ ] = { - 1 } ; const int_T
gblInportComplex [ ] = { - 1 } ; const int_T gblInportInterpoFlag [ ] = { - 1
} ; const int_T gblInportContinuous [ ] = { - 1 } ; int_T enableFcnCallFlag [
] = { 1 , 1 , 1 , 1 , 1 , 1 , 1 } ; const char *
raccelLoadInputsAndAperiodicHitTimes ( SimStruct * S , const char *
inportFileName , int * matFileFormat ) { return rt_RAccelReadInportsMatFile (
S , inportFileName , matFileFormat ) ; }
#include "simstruc.h"
#include "fixedpoint.h"
#include "slsa_sim_engine.h"
#include "simtarget/slSimTgtSLExecSimBridge.h"
#include "expm_9DBYDrz1.h"
#include "look1_pbinlcapw.h"
#include "mpower_DSHl6Msh.h"
hfe00hbwsc hfe00hbwscw ; nltnw1e5gk nltnw1e5gkl ; bcuvylxhef bcuvylxhefc ;
ngqsle4aqn ngqsle4aqnz ; hpzwhjywix hpzwhjywixq ; static SimStruct model_S ;
SimStruct * const rtS = & model_S ; static void nnjeawvvy5 ( const real_T
a_data [ ] , const int32_T a_size [ 2 ] , real_T y_data [ ] , int32_T y_size
[ 2 ] ) ; static void hil0bbsstx ( real_T u , real_T * y , real_T * yabs ) ;
void duilatdtko ( real_T rtp_IC , fhqirp0zey * localB ) { localB ->
kifcmajf5q = rtp_IC ; } void cadi3e44op ( hrr1ocggec * localDW ) { localDW ->
dl3ftk2vvc = false ; } void d5bphz5bsi ( SimStruct * rtS_p , hrr1ocggec *
localDW ) { localDW -> dl3ftk2vvc = false ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS_p ) ; } void g31xp5tryr (
SimStruct * rtS_i , boolean_T np4yyi1lai , real_T kfqis0x3go , fhqirp0zey *
localB , hrr1ocggec * localDW ) { if ( ssIsSampleHit ( rtS_i , 1 , 0 ) &&
ssIsMajorTimeStep ( rtS_i ) ) { if ( np4yyi1lai ) { if ( ! localDW ->
dl3ftk2vvc ) { if ( ssGetTaskTime ( rtS_i , 1 ) != ssGetTStart ( rtS_i ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS_i ) ; } localDW ->
dl3ftk2vvc = true ; } } else if ( localDW -> dl3ftk2vvc ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS_i ) ; cadi3e44op ( localDW )
; } } if ( localDW -> dl3ftk2vvc ) { localB -> kifcmajf5q = kfqis0x3go ; if (
ssIsMajorTimeStep ( rtS_i ) ) { srUpdateBC ( localDW -> knuormdudr ) ; } } }
static void nnjeawvvy5 ( const real_T a_data [ ] , const int32_T a_size [ 2 ]
, real_T y_data [ ] , int32_T y_size [ 2 ] ) { y_size [ 0 ] = 1 ; y_size [ 1
] = a_size [ 1 ] ; if ( 0 <= ( int8_T ) a_size [ 1 ] - 1 ) { y_data [ 0 ] =
a_data [ 0 ] * a_data [ 0 ] ; } } static void hil0bbsstx ( real_T u , real_T
* y , real_T * yabs ) { real_T tmp_data ; real_T yabs_data ; int32_T tmp_size
[ 2 ] ; int32_T yabs_size [ 2 ] ; int32_T trueCount ; * yabs =
muDoubleScalarAbs ( u ) ; trueCount = 0 ; if ( * yabs < 0.001 ) { trueCount =
1 ; } yabs_size [ 0 ] = 1 ; yabs_size [ 1 ] = trueCount ; if ( 0 <= trueCount
- 1 ) { yabs_data = * yabs / 0.001 ; } if ( 0 <= trueCount - 1 ) { nnjeawvvy5
( & yabs_data , yabs_size , & tmp_data , tmp_size ) ; yabs_data = 0.002 / (
3.0 - tmp_data ) ; } if ( * yabs < 0.001 ) { * yabs = yabs_data ; } trueCount
= 0 ; if ( u < 0.0 ) { trueCount = 1 ; } if ( 0 <= trueCount - 1 ) {
yabs_data = - * yabs ; } * y = * yabs ; if ( u < 0.0 ) { * y = yabs_data ; }
} void MdlInitialize ( void ) { nltnw1e5gkl . i4qubohzc1 = 0.0 ; bcuvylxhefc
. k0zcask0cc [ 0 ] = ihnh5ag1lp . RateTransition3_InitialCondition ;
nltnw1e5gkl . nxcnpybje3 = 0.0 ; bcuvylxhefc . klgv0izvyu [ 0 ] = ihnh5ag1lp
. RateTransition5_InitialCondition ; nltnw1e5gkl . a1yytga2i4 = ihnh5ag1lp .
Integrator_IC ; nltnw1e5gkl . d2vzwae4a0 = ihnh5ag1lp . Integrator1_IC ;
nltnw1e5gkl . f5pdutbo4l = ihnh5ag1lp . Integrator1_IC_kyv4sp114t ;
nltnw1e5gkl . drev2pqloy = ihnh5ag1lp . Integrator2_IC ; nltnw1e5gkl .
fwf05bzu3h [ 0 ] = ihnh5ag1lp . Integrator_IC_c3j2xauzq0 ; bcuvylxhefc .
mrofomoj1z [ 0 ] = ihnh5ag1lp . UnitDelay_InitialCondition [ 0 ] ;
nltnw1e5gkl . fwf05bzu3h [ 1 ] = ihnh5ag1lp . Integrator_IC_c3j2xauzq0 ;
bcuvylxhefc . mrofomoj1z [ 1 ] = ihnh5ag1lp . UnitDelay_InitialCondition [ 1
] ; eqyc2wn3m1 ( & ( bcuvylxhefc . iajxel3ezk . rtm ) , & ( bcuvylxhefc .
iajxel3ezk . rtb ) , & ( bcuvylxhefc . iajxel3ezk . rtdw ) , & ( nltnw1e5gkl
. hcwjqlhqcy ) ) ; poo3kmg0ob ( & ( bcuvylxhefc . ondfxuidp3 . rtm ) , & (
bcuvylxhefc . ondfxuidp3 . rtdw ) , & ( nltnw1e5gkl . fqvhaqjss0 ) ) ;
dwpuxjpomb ( & ( bcuvylxhefc . enbv0wioc4 . rtm ) , & ( bcuvylxhefc .
enbv0wioc4 . rtb ) , & ( bcuvylxhefc . enbv0wioc4 . rtdw ) , & ( nltnw1e5gkl
. b04e30byfs ) ) ; duilatdtko ( ihnh5ag1lp . SignalHold_IC , & hfe00hbwscw .
g31xp5tryrk ) ; duilatdtko ( ihnh5ag1lp . SignalHold_IC_i4j3zendoc , &
hfe00hbwscw . ovj5vn4ci5 ) ; { int_T rootPeriodicContStateIndices [ 2 ] = { 7
, 27 } ; real_T rootPeriodicContStateRanges [ 4 ] = { - 3.1415926535897931 ,
3.1415926535897931 , - 3.1415926535897931 , 3.1415926535897931 } ; ( void )
memcpy ( ( void * ) ngqsle4aqnz , rootPeriodicContStateIndices , 2 * sizeof (
int_T ) ) ; ( void ) memcpy ( ( void * ) hpzwhjywixq ,
rootPeriodicContStateRanges , 4 * sizeof ( real_T ) ) ; } } void MdlStart (
void ) { { bool externalInputIsInDatasetFormat = false ; void *
pISigstreamManager = rt_GetISigstreamManager ( rtS ) ;
rtwISigstreamManagerGetInputIsInDatasetFormat ( pISigstreamManager , &
externalInputIsInDatasetFormat ) ; if ( externalInputIsInDatasetFormat ) { }
} simTgtPushModelBlockPath ( rtS , "HT05Model/Passenger Car/Drivetrain" ) ;
fzkpqsvdo4 ( & ( bcuvylxhefc . iajxel3ezk . rtm ) , & ( bcuvylxhefc .
iajxel3ezk . rtdw ) ) ; simTgtPopModelBlockPath ( rtS ,
"HT05Model/Passenger Car/Drivetrain" ) ; simTgtPushModelBlockPath ( rtS ,
"HT05Model/Passenger Car/Electric Plant/Motor/MotGenEvDynamic" ) ; pv4vhh3fcm
( & ( bcuvylxhefc . enbv0wioc4 . rtm ) , & ( bcuvylxhefc . enbv0wioc4 . rtdw
) ) ; simTgtPopModelBlockPath ( rtS ,
"HT05Model/Passenger Car/Electric Plant/Motor/MotGenEvDynamic" ) ; { { { {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"current theta" ) ; sdiLabelU origSigName = sdiGetLabelFromChars (
"current theta" ) ; sdiLabelU propName = sdiGetLabelFromChars ( "" ) ;
sdiLabelU blockPath = sdiGetLabelFromChars (
"HT05Model/Passenger Car/Drivetrain" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars (
"current theta" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims =
1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 3 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ;
bcuvylxhefc . dbduharpby . AQHandles = sdiAsyncRepoCreateAsyncioQueue ( hDT ,
& srcInfo , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"d677208b-7244-46db-b94c-ed92729c37c1" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "rad/s" ) ; if ( bcuvylxhefc . dbduharpby .
AQHandles ) { sdiSetSignalSampleTimeString ( bcuvylxhefc . dbduharpby .
AQHandles , "Continuous" , 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime (
bcuvylxhefc . dbduharpby . AQHandles , ssGetTaskTime ( rtS , 1 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( bcuvylxhefc . dbduharpby . AQHandles ,
1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( bcuvylxhefc . dbduharpby .
AQHandles , loggedName , origSigName , propName ) ; } sdiFreeLabel ( sigName
) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel
( propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } } } } { { { { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "MtrPwr" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "MtrPwr" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"HT05Model/Passenger Car/Electric Plant" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars ( "MtrPwr" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE ; int_T sigDimsArray [
2 ] = { 1 , 1 } ; sigDims . nDims = 2 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 4 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; bcuvylxhefc . dkmsy4vtjq . AQHandles
= sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "cd1b15c0-d7dd-4a6e-abee-d1163e5d1eb0" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ; if (
bcuvylxhefc . dkmsy4vtjq . AQHandles ) { sdiSetSignalSampleTimeString (
bcuvylxhefc . dkmsy4vtjq . AQHandles , "5e-05" , 5.0E-5 , ssGetTFinal ( rtS )
) ; sdiSetRunStartTime ( bcuvylxhefc . dkmsy4vtjq . AQHandles , ssGetTaskTime
( rtS , 2 ) ) ; sdiAsyncRepoSetSignalExportSettings ( bcuvylxhefc .
dkmsy4vtjq . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
bcuvylxhefc . dkmsy4vtjq . AQHandles , loggedName , origSigName , propName )
; } sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } } } } { { { {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"" ) ; sdiLabelU origSigName = sdiGetLabelFromChars ( "" ) ; sdiLabelU
propName = sdiGetLabelFromChars ( "xdot" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars ( "HT05Model/Passenger Car/Drivetrain Output/VehSpd" ) ;
sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "xdot" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims =
1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ;
bcuvylxhefc . o142ktwdad . AQHandles = sdiAsyncRepoCreateAsyncioQueue ( hDT ,
& srcInfo , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"572d87f8-0506-43c2-84bc-502ac3096101" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "m/s" ) ; if ( bcuvylxhefc . o142ktwdad .
AQHandles ) { sdiSetSignalSampleTimeString ( bcuvylxhefc . o142ktwdad .
AQHandles , "Continuous" , 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime (
bcuvylxhefc . o142ktwdad . AQHandles , ssGetTaskTime ( rtS , 1 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( bcuvylxhefc . o142ktwdad . AQHandles ,
1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( bcuvylxhefc . o142ktwdad .
AQHandles , loggedName , origSigName , propName ) ; } sdiFreeLabel ( sigName
) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel
( propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } } } } { { { { sdiSignalSourceInfoU srcInfo ;
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
sdiFreeLabel ( subPath ) ; } } } } } { { { { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "" ) ; sdiLabelU origSigName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU propName = sdiGetLabelFromChars ( ""
) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"HT05Model/Passenger Car/Electric Plant/MotTrqCmd" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars ( "" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE ; int_T sigDimsArray [
1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; bcuvylxhefc . ks1fvl1d0d . AQHandles
= sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "05987ebd-0124-4aac-93fe-e67b1f4cbc6b" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "N*m" ) ; if (
bcuvylxhefc . ks1fvl1d0d . AQHandles ) { sdiSetSignalSampleTimeString (
bcuvylxhefc . ks1fvl1d0d . AQHandles , "5e-05" , 5.0E-5 , ssGetTFinal ( rtS )
) ; sdiSetRunStartTime ( bcuvylxhefc . ks1fvl1d0d . AQHandles , ssGetTaskTime
( rtS , 2 ) ) ; sdiAsyncRepoSetSignalExportSettings ( bcuvylxhefc .
ks1fvl1d0d . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
bcuvylxhefc . ks1fvl1d0d . AQHandles , loggedName , origSigName , propName )
; } sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } } } } ka5dospcnh (
& ( bcuvylxhefc . iajxel3ezk . rtb ) , & ( bcuvylxhefc . iajxel3ezk . rtdw )
) ; n5k0o3qutm ( & ( bcuvylxhefc . enbv0wioc4 . rtm ) , & ( bcuvylxhefc .
enbv0wioc4 . rtdw ) ) ; bcuvylxhefc . llz0iknlo0 = 0 ; d5bphz5bsi ( rtS , &
bcuvylxhefc . g31xp5tryrk ) ; d5bphz5bsi ( rtS , & bcuvylxhefc . ovj5vn4ci5 )
; MdlInitialize ( ) ; } void MdlOutputs ( int_T tid ) { real_T fcivwyqusu ;
real_T dkjuqw3fqk ; real_T a [ 4 ] ; real_T e2se1yixbg [ 4 ] ; real_T
gjccknze4v [ 4 ] ; real_T sigmaA [ 4 ] ; real_T b2hxvw4yt1 ; real_T c ;
real_T jnb1m1brfj ; real_T pgifr0yxtl ; real_T prrfrytmqu_idx_1 ; real_T
sigmaB_idx_0 ; real_T sigmaB_idx_1 ; real_T sigmaB_idx_2 ; real_T
sigmaB_idx_3 ; int_T iy ; static const real_T c_p [ 170 ] = { 1.0 , 2.0 , 6.0
, 24.0 , 120.0 , 720.0 , 5040.0 , 40320.0 , 362880.0 , 3.6288E+6 , 3.99168E+7
, 4.790016E+8 , 6.2270208E+9 , 8.71782912E+10 , 1.307674368E+12 ,
2.0922789888E+13 , 3.55687428096E+14 , 6.402373705728E+15 ,
1.21645100408832E+17 , 2.43290200817664E+18 , 5.109094217170944E+19 ,
1.1240007277776077E+21 , 2.5852016738884978E+22 , 6.2044840173323941E+23 ,
1.5511210043330986E+25 , 4.0329146112660565E+26 , 1.0888869450418352E+28 ,
3.0488834461171384E+29 , 8.8417619937397008E+30 , 2.6525285981219103E+32 ,
8.2228386541779224E+33 , 2.6313083693369352E+35 , 8.6833176188118859E+36 ,
2.9523279903960412E+38 , 1.0333147966386144E+40 , 3.7199332678990118E+41 ,
1.3763753091226343E+43 , 5.23022617466601E+44 , 2.0397882081197442E+46 ,
8.1591528324789768E+47 , 3.3452526613163803E+49 , 1.4050061177528798E+51 ,
6.0415263063373834E+52 , 2.6582715747884485E+54 , 1.1962222086548019E+56 ,
5.5026221598120885E+57 , 2.5862324151116818E+59 , 1.2413915592536073E+61 ,
6.0828186403426752E+62 , 3.0414093201713376E+64 , 1.5511187532873822E+66 ,
8.0658175170943877E+67 , 4.2748832840600255E+69 , 2.3084369733924138E+71 ,
1.2696403353658276E+73 , 7.1099858780486348E+74 , 4.0526919504877221E+76 ,
2.3505613312828789E+78 , 1.3868311854568986E+80 , 8.3209871127413916E+81 ,
5.0758021387722484E+83 , 3.1469973260387939E+85 , 1.98260831540444E+87 ,
1.2688693218588417E+89 , 8.2476505920824715E+90 , 5.4434493907744307E+92 ,
3.6471110918188683E+94 , 2.4800355424368305E+96 , 1.711224524281413E+98 ,
1.197857166996989E+100 , 8.5047858856786218E+101 , 6.1234458376886077E+103 ,
4.4701154615126834E+105 , 3.3078854415193856E+107 , 2.4809140811395391E+109 ,
1.8854947016660498E+111 , 1.4518309202828584E+113 , 1.1324281178206295E+115 ,
8.9461821307829729E+116 , 7.1569457046263779E+118 , 5.7971260207473655E+120 ,
4.75364333701284E+122 , 3.9455239697206569E+124 , 3.314240134565352E+126 ,
2.8171041143805494E+128 , 2.4227095383672724E+130 , 2.1077572983795269E+132 ,
1.8548264225739836E+134 , 1.6507955160908452E+136 , 1.4857159644817607E+138 ,
1.3520015276784023E+140 , 1.24384140546413E+142 , 1.1567725070816409E+144 ,
1.0873661566567424E+146 , 1.0329978488239052E+148 , 9.916779348709491E+149 ,
9.6192759682482062E+151 , 9.426890448883242E+153 , 9.33262154439441E+155 ,
9.33262154439441E+157 , 9.4259477598383536E+159 , 9.6144667150351211E+161 ,
9.9029007164861754E+163 , 1.0299016745145622E+166 , 1.0813967582402903E+168 ,
1.1462805637347078E+170 , 1.2265202031961373E+172 , 1.3246418194518284E+174 ,
1.4438595832024928E+176 , 1.5882455415227421E+178 , 1.7629525510902437E+180 ,
1.9745068572210728E+182 , 2.2311927486598123E+184 , 2.5435597334721862E+186 ,
2.9250936934930141E+188 , 3.3931086844518965E+190 , 3.969937160808719E+192 ,
4.6845258497542883E+194 , 5.5745857612076033E+196 , 6.6895029134491239E+198 ,
8.09429852527344E+200 , 9.8750442008335976E+202 , 1.2146304367025325E+205 ,
1.5061417415111404E+207 , 1.8826771768889254E+209 , 2.3721732428800459E+211 ,
3.0126600184576582E+213 , 3.8562048236258025E+215 , 4.9745042224772855E+217 ,
6.4668554892204716E+219 , 8.4715806908788174E+221 , 1.1182486511960039E+224 ,
1.4872707060906852E+226 , 1.9929427461615181E+228 , 2.6904727073180495E+230 ,
3.6590428819525472E+232 , 5.01288874827499E+234 , 6.9177864726194859E+236 ,
9.6157231969410859E+238 , 1.346201247571752E+241 , 1.89814375907617E+243 ,
2.6953641378881614E+245 , 3.8543707171800706E+247 , 5.5502938327393013E+249 ,
8.0479260574719866E+251 , 1.17499720439091E+254 , 1.7272458904546376E+256 ,
2.5563239178728637E+258 , 3.8089226376305671E+260 , 5.7133839564458505E+262 ,
8.6272097742332346E+264 , 1.3113358856834518E+267 , 2.0063439050956811E+269 ,
3.0897696138473489E+271 , 4.7891429014633912E+273 , 7.47106292628289E+275 ,
1.1729568794264138E+278 , 1.8532718694937338E+280 , 2.9467022724950369E+282 ,
4.714723635992059E+284 , 7.5907050539472148E+286 , 1.2296942187394488E+289 ,
2.0044015765453015E+291 , 3.2872185855342945E+293 , 5.423910666131586E+295 ,
9.0036917057784329E+297 , 1.5036165148649983E+300 , 2.5260757449731969E+302 ,
4.2690680090047027E+304 , 7.257415615307994E+306 } ; srClearBC ( bcuvylxhefc
. g31xp5tryrk . knuormdudr ) ; jnb1m1brfj = ssGetT ( rtS ) ; if ( ihnh5ag1lp
. repeat_Value > ihnh5ag1lp . Switch_Threshold ) { hfe00hbwscw . etwgbqvkif =
muDoubleScalarMod ( jnb1m1brfj , ihnh5ag1lp . tFinal_Value ) ; } else {
hfe00hbwscw . etwgbqvkif = jnb1m1brfj ; } pgifr0yxtl = look1_pbinlcapw (
hfe00hbwscw . etwgbqvkif , ihnh5ag1lp . uDLookupTable_bp01Data , ihnh5ag1lp .
uDLookupTable_tableData , & bcuvylxhefc . odmqgoxpmf , 400U ) ; hfe00hbwscw .
kwter11yih = 0.0 ; hfe00hbwscw . kwter11yih += ihnh5ag1lp .
MotorCouplingDynamics_C * nltnw1e5gkl . i4qubohzc1 ; if ( ssIsSampleHit ( rtS
, 1 , 0 ) ) { hfe00hbwscw . cvgkryez0y = bcuvylxhefc . k0zcask0cc [
bcuvylxhefc . ep2boc231g ] ; } DrivetrainEv ( & ( bcuvylxhefc . iajxel3ezk .
rtm ) , & hfe00hbwscw . kwter11yih , & hfe00hbwscw . cvgkryez0y , &
ihnh5ag1lp . Constant2_Value , & ihnh5ag1lp . Constant3_Value , & hfe00hbwscw
. k2nvq1dfvz , & hfe00hbwscw . krfdbjpt0e , & hfe00hbwscw . hnqecwtek3 , &
hfe00hbwscw . gz5o4hus3a , & ( bcuvylxhefc . iajxel3ezk . rtb ) , & (
bcuvylxhefc . iajxel3ezk . rtdw ) , & ( nltnw1e5gkl . hcwjqlhqcy ) , & (
bcuvylxhefc . iajxel3ezk . rtzce ) ) ; hfe00hbwscw . nou3xfrkex [ 0 ] =
pgifr0yxtl ; hfe00hbwscw . nou3xfrkex [ 1 ] = hfe00hbwscw . k2nvq1dfvz ;
hfe00hbwscw . bejosqgptz [ 0 ] = ihnh5ag1lp . mstomph_Gain * hfe00hbwscw .
nou3xfrkex [ 0 ] ; hfe00hbwscw . bejosqgptz [ 1 ] = ihnh5ag1lp . mstomph_Gain
* hfe00hbwscw . nou3xfrkex [ 1 ] ; if ( ssIsSampleHit ( rtS , 1 , 0 ) && (
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
hfe00hbwscw . pb4y5y3noy , & hfe00hbwscw . gxpwwcihxi , & ( bcuvylxhefc .
enbv0wioc4 . rtb ) , & ( bcuvylxhefc . enbv0wioc4 . rtdw ) , & ( nltnw1e5gkl
. b04e30byfs ) ) ; if ( ssIsSampleHit ( rtS , 1 , 0 ) && ( bcuvylxhefc .
egwjbtmbyq == 0 ) ) { bcuvylxhefc . hp5pufrajm = hfe00hbwscw . pb4y5y3noy ; }
if ( ssIsSampleHit ( rtS , 5 , 0 ) ) { bcuvylxhefc . egwjbtmbyq = 1 ;
hfe00hbwscw . kwlhepleti = bcuvylxhefc . hp5pufrajm ; bcuvylxhefc .
egwjbtmbyq = 0 ; } hfe00hbwscw . egwqx4bk1t = nltnw1e5gkl . a1yytga2i4 ;
hfe00hbwscw . jglg55uozd = nltnw1e5gkl . d2vzwae4a0 ; hfe00hbwscw .
bki5dqleao = ihnh5ag1lp . m3toUSGal_Gain * hfe00hbwscw . jglg55uozd ; if (
ssIsMajorTimeStep ( rtS ) ) { bcuvylxhefc . hn5nuy0lbc = hfe00hbwscw .
bki5dqleao >= ihnh5ag1lp . Saturation1_UpperSat ? 1 : hfe00hbwscw .
bki5dqleao > ihnh5ag1lp . Saturation1_LowerSat ? 0 : - 1 ; } hfe00hbwscw .
jtp5gfufnu = ihnh5ag1lp . mtomile_Gain * hfe00hbwscw . egwqx4bk1t / (
bcuvylxhefc . hn5nuy0lbc == 1 ? ihnh5ag1lp . Saturation1_UpperSat :
bcuvylxhefc . hn5nuy0lbc == - 1 ? ihnh5ag1lp . Saturation1_LowerSat :
hfe00hbwscw . bki5dqleao ) ; if ( ssIsSampleHit ( rtS , 1 , 0 ) && (
bcuvylxhefc . bsjrzyb4mr == 0 ) ) { bcuvylxhefc . j1c3q5x2i4 = hfe00hbwscw .
jtp5gfufnu ; } if ( ssIsSampleHit ( rtS , 5 , 0 ) ) { bcuvylxhefc .
bsjrzyb4mr = 1 ; hfe00hbwscw . ajoldyqnvn = bcuvylxhefc . j1c3q5x2i4 ;
bcuvylxhefc . bsjrzyb4mr = 0 ; } hfe00hbwscw . gslrwelsee [ 0 ] = nltnw1e5gkl
. fwf05bzu3h [ 0 ] ; hfe00hbwscw . gslrwelsee [ 1 ] = nltnw1e5gkl .
fwf05bzu3h [ 1 ] ; hfe00hbwscw . o035i4hwxg = hfe00hbwscw . k5wjbiecdv *
hfe00hbwscw . pb4y5y3noy ; hfe00hbwscw . pue040sedo = hfe00hbwscw .
o035i4hwxg / ihnh5ag1lp . wperkw_Value ; hfe00hbwscw . egun0lxqwh =
hfe00hbwscw . pue040sedo / ihnh5ag1lp . USEPAkwhUSgalequivalent_Value ;
hfe00hbwscw . fssj4vhwqd = hfe00hbwscw . egun0lxqwh / ihnh5ag1lp .
sperh_Value ; hfe00hbwscw . fqgurvz30p = hfe00hbwscw . k2nvq1dfvz *
hfe00hbwscw . k2nvq1dfvz ; hfe00hbwscw . jaqygtbwrp = ihnh5ag1lp .
mto100Km_Gain * hfe00hbwscw . egwqx4bk1t ; if ( ssIsMajorTimeStep ( rtS ) ) {
bcuvylxhefc . nxsdzjpe5i = hfe00hbwscw . jaqygtbwrp >= ihnh5ag1lp .
Saturation_UpperSat ? 1 : hfe00hbwscw . jaqygtbwrp > ihnh5ag1lp .
Saturation_LowerSat ? 0 : - 1 ; if ( bcuvylxhefc . llz0iknlo0 != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; bcuvylxhefc . llz0iknlo0
= 0 ; } hfe00hbwscw . juedzmwz13 = muDoubleScalarSqrt ( hfe00hbwscw .
fqgurvz30p ) ; } else { if ( hfe00hbwscw . fqgurvz30p < 0.0 ) { hfe00hbwscw .
juedzmwz13 = - muDoubleScalarSqrt ( muDoubleScalarAbs ( hfe00hbwscw .
fqgurvz30p ) ) ; } else { hfe00hbwscw . juedzmwz13 = muDoubleScalarSqrt (
hfe00hbwscw . fqgurvz30p ) ; } if ( hfe00hbwscw . fqgurvz30p < 0.0 ) {
bcuvylxhefc . llz0iknlo0 = 1 ; } } hfe00hbwscw . kpjtu3yzip = ihnh5ag1lp .
m3pergal_Gain * hfe00hbwscw . fssj4vhwqd ; hfe00hbwscw . kmcqv24afd =
nltnw1e5gkl . f5pdutbo4l ; hfe00hbwscw . l1thberrgp = hfe00hbwscw .
kmcqv24afd - hfe00hbwscw . j3ea3swoth ; if ( hfe00hbwscw . aq22d4vedt ) {
b2hxvw4yt1 = 0.0 ; } else if ( hfe00hbwscw . l1thberrgp > ihnh5ag1lp .
u1_UpperSat ) { b2hxvw4yt1 = ihnh5ag1lp . u1_UpperSat ; } else if (
hfe00hbwscw . l1thberrgp < ihnh5ag1lp . u1_LowerSat ) { b2hxvw4yt1 =
ihnh5ag1lp . u1_LowerSat ; } else { b2hxvw4yt1 = hfe00hbwscw . l1thberrgp ; }
if ( b2hxvw4yt1 > ihnh5ag1lp . Saturation_UpperSat_bmv04wlgug ) { fcivwyqusu
= ihnh5ag1lp . Saturation_UpperSat_bmv04wlgug ; } else if ( b2hxvw4yt1 <
ihnh5ag1lp . Saturation_LowerSat_k4oqasoblp ) { fcivwyqusu = ihnh5ag1lp .
Saturation_LowerSat_k4oqasoblp ; } else { fcivwyqusu = b2hxvw4yt1 ; }
g31xp5tryr ( rtS , hfe00hbwscw . lr0af5qksa , fcivwyqusu , & hfe00hbwscw .
g31xp5tryrk , & bcuvylxhefc . g31xp5tryrk ) ; if ( ssIsSampleHit ( rtS , 1 ,
0 ) && ( bcuvylxhefc . a5czhakwii == 0 ) ) { bcuvylxhefc . cptmanfsa1 =
hfe00hbwscw . g31xp5tryrk . kifcmajf5q ; } if ( ssIsSampleHit ( rtS , 3 , 0 )
) { bcuvylxhefc . a5czhakwii = 1 ; hfe00hbwscw . lfrzqxjyja = bcuvylxhefc .
cptmanfsa1 ; bcuvylxhefc . a5czhakwii = 0 ; } if ( hfe00hbwscw . ottghukoth )
{ b2hxvw4yt1 = 0.0 ; } else if ( hfe00hbwscw . l1thberrgp > ihnh5ag1lp .
u0_UpperSat ) { b2hxvw4yt1 = - ihnh5ag1lp . u0_UpperSat ; } else if (
hfe00hbwscw . l1thberrgp < ihnh5ag1lp . u0_LowerSat ) { b2hxvw4yt1 = -
ihnh5ag1lp . u0_LowerSat ; } else { b2hxvw4yt1 = - hfe00hbwscw . l1thberrgp ;
} if ( b2hxvw4yt1 > ihnh5ag1lp . Saturation_UpperSat_ekydxm2ndj ) {
dkjuqw3fqk = ihnh5ag1lp . Saturation_UpperSat_ekydxm2ndj ; } else if (
b2hxvw4yt1 < ihnh5ag1lp . Saturation_LowerSat_ijnrsojihl ) { dkjuqw3fqk =
ihnh5ag1lp . Saturation_LowerSat_ijnrsojihl ; } else { dkjuqw3fqk =
b2hxvw4yt1 ; } g31xp5tryr ( rtS , hfe00hbwscw . drvm4uwfmo , dkjuqw3fqk , &
hfe00hbwscw . ovj5vn4ci5 , & bcuvylxhefc . ovj5vn4ci5 ) ; if ( ssIsSampleHit
( rtS , 1 , 0 ) ) { if ( bcuvylxhefc . l1ffn0wiag == 0 ) { bcuvylxhefc .
j5bb1yym0w = hfe00hbwscw . ovj5vn4ci5 . kifcmajf5q ; } if ( bcuvylxhefc .
fiqovchppi == 0 ) { bcuvylxhefc . nos2ft3sic = hfe00hbwscw . k2nvq1dfvz ; } }
if ( ssIsSampleHit ( rtS , 3 , 0 ) ) { bcuvylxhefc . l1ffn0wiag = 1 ;
hfe00hbwscw . o5n5eexjon = bcuvylxhefc . j5bb1yym0w ; bcuvylxhefc .
l1ffn0wiag = 0 ; } if ( ssIsSampleHit ( rtS , 1 , 0 ) && ( bcuvylxhefc .
oxgd34m1rt == 0 ) ) { bcuvylxhefc . n3mkw34cn5 = hfe00hbwscw . i4av10pedr ; }
if ( ssIsSampleHit ( rtS , 3 , 0 ) ) { bcuvylxhefc . fiqovchppi = 1 ;
hfe00hbwscw . e51yutiqek = bcuvylxhefc . nos2ft3sic ; bcuvylxhefc .
fiqovchppi = 0 ; } if ( ssIsSampleHit ( rtS , 1 , 0 ) && ( bcuvylxhefc .
i51uahy2gc == 0 ) ) { bcuvylxhefc . h1tau0ecpq = hfe00hbwscw . o035i4hwxg ; }
if ( ssIsSampleHit ( rtS , 3 , 0 ) ) { bcuvylxhefc . oxgd34m1rt = 1 ;
hfe00hbwscw . fbfzjqwa5a = bcuvylxhefc . n3mkw34cn5 ; bcuvylxhefc .
oxgd34m1rt = 0 ; } if ( ssIsSampleHit ( rtS , 1 , 0 ) && ( bcuvylxhefc .
jtthydvh1h == 0 ) ) { bcuvylxhefc . kmrimj41ij = hfe00hbwscw . pb4y5y3noy ; }
if ( ssIsSampleHit ( rtS , 3 , 0 ) ) { bcuvylxhefc . i51uahy2gc = 1 ;
hfe00hbwscw . mkqparta3r = bcuvylxhefc . h1tau0ecpq ; bcuvylxhefc .
i51uahy2gc = 0 ; } if ( ssIsSampleHit ( rtS , 1 , 0 ) && ( bcuvylxhefc .
kgr2bmvhtp == 0 ) ) { bcuvylxhefc . kebrerroqx = hfe00hbwscw . krfdbjpt0e ; }
if ( ssIsSampleHit ( rtS , 3 , 0 ) ) { bcuvylxhefc . jtthydvh1h = 1 ;
hfe00hbwscw . a2zj1koo4k = bcuvylxhefc . kmrimj41ij ; bcuvylxhefc .
jtthydvh1h = 0 ; bcuvylxhefc . kgr2bmvhtp = 1 ; hfe00hbwscw . ldaenjp42v =
bcuvylxhefc . kebrerroqx ; bcuvylxhefc . kgr2bmvhtp = 0 ;
EvPowertrainController ( & hfe00hbwscw . lfrzqxjyja , & hfe00hbwscw .
o5n5eexjon , & hfe00hbwscw . e51yutiqek , & hfe00hbwscw . fbfzjqwa5a , &
hfe00hbwscw . ldaenjp42v , & hfe00hbwscw . f53jjpuuxm , & hfe00hbwscw .
hhj0p0jony , & ( bcuvylxhefc . alzb1lqr5t . rtb ) ) ; } if ( ssIsSampleHit (
rtS , 4 , 0 ) ) { hfe00hbwscw . kftazr0hxl = ssGetTaskTime ( rtS , 4 ) ; }
hfe00hbwscw . ciswg50jx3 = jnb1m1brfj - hfe00hbwscw . kftazr0hxl ; hil0bbsstx
( hfe00hbwscw . k2nvq1dfvz , & b2hxvw4yt1 , & jnb1m1brfj ) ; if ( jnb1m1brfj
> 5.0 ) { jnb1m1brfj = muDoubleScalarMax ( muDoubleScalarMin ( ihnh5ag1lp .
LongitudinalDriver_tau , ihnh5ag1lp . LongitudinalDriver_L / jnb1m1brfj ) ,
0.001 ) ; } else { jnb1m1brfj = ihnh5ag1lp . LongitudinalDriver_tau ; }
gjccknze4v [ 0 ] = 0.0 ; gjccknze4v [ 2 ] = 1.0 ; gjccknze4v [ 1 ] = - ( (
ihnh5ag1lp . LongitudinalDriver_aR / b2hxvw4yt1 + ihnh5ag1lp .
LongitudinalDriver_cR * hfe00hbwscw . k2nvq1dfvz ) * muDoubleScalarTanh (
hfe00hbwscw . k2nvq1dfvz ) + ihnh5ag1lp . LongitudinalDriver_bR ) /
ihnh5ag1lp . LongitudinalDriver_m ; gjccknze4v [ 3 ] = 0.0 ; prrfrytmqu_idx_1
= ihnh5ag1lp . LongitudinalDriver_Kpt / ihnh5ag1lp . LongitudinalDriver_m ;
sigmaA [ 0 ] = 0.0 ; sigmaB_idx_0 = 0.0 ; sigmaA [ 1 ] = 0.0 ; sigmaB_idx_1 =
0.0 ; sigmaA [ 2 ] = 0.0 ; sigmaB_idx_2 = 0.0 ; sigmaA [ 3 ] = 0.0 ;
sigmaB_idx_3 = 0.0 ; for ( iy = 0 ; iy < 15 ; iy ++ ) { b2hxvw4yt1 =
muDoubleScalarPower ( jnb1m1brfj , ( real_T ) iy + 1.0 ) ; mpower_DSHl6Msh (
gjccknze4v , ( real_T ) iy + 1.0 , a ) ; c = c_p [ iy + 1 ] ; sigmaA [ 0 ] +=
a [ 0 ] * b2hxvw4yt1 / c ; sigmaA [ 1 ] += a [ 1 ] * b2hxvw4yt1 / c ; sigmaA
[ 2 ] += a [ 2 ] * b2hxvw4yt1 / c ; sigmaA [ 3 ] += a [ 3 ] * b2hxvw4yt1 / c
; b2hxvw4yt1 = muDoubleScalarPower ( jnb1m1brfj , ( real_T ) iy + 1.0 ) ;
mpower_DSHl6Msh ( gjccknze4v , ( real_T ) iy + 1.0 , a ) ; c = c_p [ iy ] ;
sigmaB_idx_0 += a [ 0 ] * b2hxvw4yt1 / c ; sigmaB_idx_1 += a [ 1 ] *
b2hxvw4yt1 / c ; sigmaB_idx_2 += a [ 2 ] * b2hxvw4yt1 / c ; sigmaB_idx_3 += a
[ 3 ] * b2hxvw4yt1 / c ; } jnb1m1brfj = ( ( sigmaA [ 0 ] + 1.0 ) * jnb1m1brfj
+ jnb1m1brfj * sigmaA [ 1 ] ) * 0.0 + ( ( sigmaA [ 3 ] + 1.0 ) * jnb1m1brfj +
jnb1m1brfj * sigmaA [ 2 ] ) * prrfrytmqu_idx_1 ; e2se1yixbg [ 0 ] = 0.0 ;
e2se1yixbg [ 1 ] = gjccknze4v [ 1 ] * 0.001 ; e2se1yixbg [ 2 ] = 0.001 ;
e2se1yixbg [ 3 ] = 0.0 ; expm_9DBYDrz1 ( e2se1yixbg , sigmaA ) ; e2se1yixbg [
0 ] = 0.0 ; e2se1yixbg [ 1 ] = gjccknze4v [ 1 ] * 0.0 ; e2se1yixbg [ 2 ] =
0.0 ; e2se1yixbg [ 3 ] = 0.0 ; expm_9DBYDrz1 ( e2se1yixbg , a ) ; e2se1yixbg
[ 0 ] = 0.0 ; e2se1yixbg [ 1 ] = gjccknze4v [ 1 ] * 0.001 ; e2se1yixbg [ 2 ]
= 0.001 ; e2se1yixbg [ 3 ] = 0.0 ; expm_9DBYDrz1 ( e2se1yixbg , gjccknze4v )
; hfe00hbwscw . dptryos4oj = ( ( ( a [ 0 ] * 0.0 + a [ 2 ] * prrfrytmqu_idx_1
) + ( gjccknze4v [ 0 ] * 0.0 + gjccknze4v [ 2 ] * prrfrytmqu_idx_1 ) ) / 2.0
* 0.001 * hfe00hbwscw . l1thberrgp + ( sigmaA [ 0 ] * hfe00hbwscw .
k2nvq1dfvz + sigmaA [ 2 ] * 0.0 ) ) * ( ( sigmaB_idx_0 + 1.0 ) + sigmaB_idx_1
) + ( ( ( a [ 1 ] * 0.0 + a [ 3 ] * prrfrytmqu_idx_1 ) + ( gjccknze4v [ 1 ] *
0.0 + gjccknze4v [ 3 ] * prrfrytmqu_idx_1 ) ) / 2.0 * 0.001 * hfe00hbwscw .
l1thberrgp + ( sigmaA [ 1 ] * hfe00hbwscw . k2nvq1dfvz + sigmaA [ 3 ] * 0.0 )
) * ( ( sigmaB_idx_3 + 1.0 ) + sigmaB_idx_2 ) ; hfe00hbwscw . hqkezymrab =
hfe00hbwscw . l1thberrgp * jnb1m1brfj ; hfe00hbwscw . gubzcq5ria =
hfe00hbwscw . dptryos4oj + hfe00hbwscw . hqkezymrab ; hfe00hbwscw .
dbbyin35a2 = pgifr0yxtl - hfe00hbwscw . gubzcq5ria ; hfe00hbwscw . mddysgelnk
= hfe00hbwscw . dbbyin35a2 / jnb1m1brfj ; hfe00hbwscw . gsta4lel3i =
hfe00hbwscw . mddysgelnk + hfe00hbwscw . kmcqv24afd ; hfe00hbwscw .
nmwnavsv0t = hfe00hbwscw . gsta4lel3i - hfe00hbwscw . kmcqv24afd ;
hfe00hbwscw . a5hkkkfjhl = 1.0 / ihnh5ag1lp . LongitudinalDriver_tau *
3.1415926535897931 * 2.0 * hfe00hbwscw . nmwnavsv0t ; hfe00hbwscw .
bruwu4miax = pgifr0yxtl - hfe00hbwscw . k2nvq1dfvz ; hfe00hbwscw . kpzjlc45u3
= hfe00hbwscw . bruwu4miax * hfe00hbwscw . bruwu4miax ; if ( ssIsSampleHit (
rtS , 2 , 0 ) ) { hfe00hbwscw . h104oeui3c [ 0 ] = bcuvylxhefc . mrofomoj1z [
0 ] ; hfe00hbwscw . h104oeui3c [ 1 ] = bcuvylxhefc . mrofomoj1z [ 1 ] ; } if
( hfe00hbwscw . bruwu4miax > hfe00hbwscw . h104oeui3c [ 0 ] ) { hfe00hbwscw .
f4ilyp355v [ 0 ] = hfe00hbwscw . bruwu4miax ; } else { hfe00hbwscw .
f4ilyp355v [ 0 ] = hfe00hbwscw . h104oeui3c [ 0 ] ; } if ( hfe00hbwscw .
bruwu4miax < hfe00hbwscw . h104oeui3c [ 1 ] ) { hfe00hbwscw . f4ilyp355v [ 1
] = hfe00hbwscw . bruwu4miax ; } else { hfe00hbwscw . f4ilyp355v [ 1 ] =
hfe00hbwscw . h104oeui3c [ 1 ] ; } if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { {
if ( bcuvylxhefc . dbduharpby . AQHandles && ssGetLogOutput ( rtS ) ) {
sdiWriteSignal ( bcuvylxhefc . dbduharpby . AQHandles , ssGetTaskTime ( rtS ,
1 ) , ( char * ) & hfe00hbwscw . gz5o4hus3a + 0 ) ; } } } if ( ssIsSampleHit
( rtS , 2 , 0 ) ) { { if ( bcuvylxhefc . dkmsy4vtjq . AQHandles &&
ssGetLogOutput ( rtS ) ) { sdiWriteSignal ( bcuvylxhefc . dkmsy4vtjq .
AQHandles , ssGetTaskTime ( rtS , 2 ) , ( char * ) & hfe00hbwscw . gxpwwcihxi
+ 0 ) ; } } } if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { { if ( bcuvylxhefc .
o142ktwdad . AQHandles && ssGetLogOutput ( rtS ) ) { sdiWriteSignal (
bcuvylxhefc . o142ktwdad . AQHandles , ssGetTaskTime ( rtS , 1 ) , ( char * )
& hfe00hbwscw . k2nvq1dfvz + 0 ) ; } } } hfe00hbwscw . kp4tq4fada =
hfe00hbwscw . o035i4hwxg / hfe00hbwscw . kwter11yih ; if ( ssIsSampleHit (
rtS , 1 , 0 ) ) { { if ( bcuvylxhefc . cbpif1banu . AQHandles &&
ssGetLogOutput ( rtS ) ) { sdiWriteSignal ( bcuvylxhefc . cbpif1banu .
AQHandles , ssGetTaskTime ( rtS , 1 ) , ( char * ) & hfe00hbwscw . kp4tq4fada
+ 0 ) ; } } } if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { { if ( bcuvylxhefc .
ks1fvl1d0d . AQHandles && ssGetLogOutput ( rtS ) ) { sdiWriteSignal (
bcuvylxhefc . ks1fvl1d0d . AQHandles , ssGetTaskTime ( rtS , 2 ) , ( char * )
& hfe00hbwscw . hs1nxcdsu1 + 0 ) ; } } } UNUSED_PARAMETER ( tid ) ; } void
MdlOutputsTID6 ( int_T tid ) { EvPowertrainControllerTID1 ( & ( bcuvylxhefc .
alzb1lqr5t . rtb ) ) ; hfe00hbwscw . aq22d4vedt = false ; hfe00hbwscw .
lr0af5qksa = true ; hfe00hbwscw . ottghukoth = false ; hfe00hbwscw .
drvm4uwfmo = true ; hfe00hbwscw . j3ea3swoth = ihnh5ag1lp .
LongitudinalDriver_g * ihnh5ag1lp . LongitudinalDriver_m * ihnh5ag1lp .
LongitudinalDriver_m / ihnh5ag1lp . LongitudinalDriver_Kpt * 0.0 ;
DrivetrainEvTID2 ( & ( bcuvylxhefc . iajxel3ezk . rtb ) ) ; BattEvTID1 ( & (
bcuvylxhefc . ondfxuidp3 . rtb ) ) ; MotGenEvDynamicTID3 ( & ( bcuvylxhefc .
enbv0wioc4 . rtm ) , & ( bcuvylxhefc . enbv0wioc4 . rtb ) , & ( bcuvylxhefc .
enbv0wioc4 . rtdw ) ) ; UNUSED_PARAMETER ( tid ) ; } void MdlUpdate ( int_T
tid ) { if ( ssIsSampleHit ( rtS , 3 , 0 ) ) { bcuvylxhefc . k0zcask0cc [
bcuvylxhefc . ep2boc231g == 0 ] = hfe00hbwscw . hhj0p0jony ; bcuvylxhefc .
ep2boc231g = ( int8_T ) ( bcuvylxhefc . ep2boc231g == 0 ) ; } ekz3w3o33e ( &
( bcuvylxhefc . iajxel3ezk . rtm ) , & ( bcuvylxhefc . iajxel3ezk . rtdw ) )
; c0hgp3wnut ( & ( bcuvylxhefc . ondfxuidp3 . rtdw ) ) ; if ( ssIsSampleHit (
rtS , 3 , 0 ) ) { bcuvylxhefc . klgv0izvyu [ bcuvylxhefc . fqundvylsh == 0 ]
= hfe00hbwscw . f53jjpuuxm ; bcuvylxhefc . fqundvylsh = ( int8_T ) (
bcuvylxhefc . fqundvylsh == 0 ) ; } lwglwij1vj ( & ( bcuvylxhefc . enbv0wioc4
. rtm ) , & ( bcuvylxhefc . enbv0wioc4 . rtb ) , & ( bcuvylxhefc . enbv0wioc4
. rtdw ) , & ( ( ( nokraiiwbv * ) ssGetContStateDisabled ( rtS ) ) ->
b04e30byfs ) ) ; if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { bcuvylxhefc .
mrofomoj1z [ 0 ] = hfe00hbwscw . f4ilyp355v [ 0 ] ; bcuvylxhefc . mrofomoj1z
[ 1 ] = hfe00hbwscw . f4ilyp355v [ 1 ] ; } UNUSED_PARAMETER ( tid ) ; } void
MdlUpdateTID6 ( int_T tid ) { UNUSED_PARAMETER ( tid ) ; } void
MdlDerivatives ( void ) { lqmi0mm3ub * _rtXdot ; _rtXdot = ( ( lqmi0mm3ub * )
ssGetdX ( rtS ) ) ; _rtXdot -> i4qubohzc1 = 0.0 ; _rtXdot -> i4qubohzc1 +=
ihnh5ag1lp . MotorCouplingDynamics_A * nltnw1e5gkl . i4qubohzc1 ; _rtXdot ->
i4qubohzc1 += hfe00hbwscw . kpv1qapnbc ; a2spfqi5as ( & ( bcuvylxhefc .
iajxel3ezk . rtb ) , & ( bcuvylxhefc . iajxel3ezk . rtdw ) , & ( nltnw1e5gkl
. hcwjqlhqcy ) , & ( ( ( lqmi0mm3ub * ) ssGetdX ( rtS ) ) -> hcwjqlhqcy ) ) ;
_rtXdot -> nxcnpybje3 = 0.0 ; _rtXdot -> nxcnpybje3 += ihnh5ag1lp .
BatteryDischargeDynamics_A * nltnw1e5gkl . nxcnpybje3 ; _rtXdot -> nxcnpybje3
+= hfe00hbwscw . pb4y5y3noy ; pexk2pi1gg ( & ( bcuvylxhefc . ondfxuidp3 . rtb
) , & ( nltnw1e5gkl . fqvhaqjss0 ) , & ( ( ( lqmi0mm3ub * ) ssGetdX ( rtS ) )
-> fqvhaqjss0 ) ) ; mfy1r3luh1 ( & hfe00hbwscw . krfdbjpt0e , & ( bcuvylxhefc
. enbv0wioc4 . rtb ) , & ( ( ( nokraiiwbv * ) ssGetContStateDisabled ( rtS )
) -> b04e30byfs ) , & ( ( ( lqmi0mm3ub * ) ssGetdX ( rtS ) ) -> b04e30byfs )
) ; _rtXdot -> a1yytga2i4 = hfe00hbwscw . juedzmwz13 ; _rtXdot -> d2vzwae4a0
= hfe00hbwscw . kpjtu3yzip ; _rtXdot -> fwf05bzu3h [ 0 ] = hfe00hbwscw .
nou3xfrkex [ 0 ] ; _rtXdot -> fwf05bzu3h [ 1 ] = hfe00hbwscw . nou3xfrkex [ 1
] ; _rtXdot -> f5pdutbo4l = hfe00hbwscw . a5hkkkfjhl ; _rtXdot -> drev2pqloy
= hfe00hbwscw . kpzjlc45u3 ; } void MdlProjection ( void ) { } void
MdlZeroCrossings ( void ) { lm4x2ar2jt * _rtZCSV ; _rtZCSV = ( ( lm4x2ar2jt *
) ssGetSolverZcSignalVector ( rtS ) ) ; cmnf4xtkyp ( & hfe00hbwscw .
k5wjbiecdv , & ( bcuvylxhefc . enbv0wioc4 . rtb ) , & ( bcuvylxhefc .
enbv0wioc4 . rtdw ) , & ( nltnw1e5gkl . b04e30byfs ) , & ( ( ( lm4x2ar2jt * )
ssGetSolverZcSignalVector ( rtS ) ) -> hev2tqxdbw ) ) ; _rtZCSV -> gppqg3jeps
= hfe00hbwscw . bki5dqleao - ihnh5ag1lp . Saturation1_UpperSat ; _rtZCSV ->
ncwkbjsqae = hfe00hbwscw . bki5dqleao - ihnh5ag1lp . Saturation1_LowerSat ;
_rtZCSV -> duf13ep545 = hfe00hbwscw . jaqygtbwrp - ihnh5ag1lp .
Saturation_UpperSat ; _rtZCSV -> ewzov3eiem = hfe00hbwscw . jaqygtbwrp -
ihnh5ag1lp . Saturation_LowerSat ; _rtZCSV -> pkdl1bjwj0 = hfe00hbwscw .
ciswg50jx3 - ihnh5ag1lp . HitCrossing_Offset ; } void MdlTerminate ( void ) {
lktaxgo5iz ( & ( bcuvylxhefc . alzb1lqr5t . rtm ) ) ; ekywbf3nku ( & (
bcuvylxhefc . iajxel3ezk . rtm ) ) ; m5uwyjpoin ( & ( bcuvylxhefc .
ondfxuidp3 . rtm ) ) ; kh5ykjtmv0 ( & ( bcuvylxhefc . enbv0wioc4 . rtm ) ) ;
cmuw0kqmoe ( & ( bcuvylxhefc . iajxel3ezk . rtm ) , & ( bcuvylxhefc .
iajxel3ezk . rtdw ) ) ; dk15ta1msh ( & ( bcuvylxhefc . enbv0wioc4 . rtm ) , &
( bcuvylxhefc . enbv0wioc4 . rtdw ) ) ; { if ( bcuvylxhefc . dbduharpby .
AQHandles ) { sdiTerminateStreaming ( & bcuvylxhefc . dbduharpby . AQHandles
) ; } } { if ( bcuvylxhefc . dkmsy4vtjq . AQHandles ) { sdiTerminateStreaming
( & bcuvylxhefc . dkmsy4vtjq . AQHandles ) ; } } { if ( bcuvylxhefc .
o142ktwdad . AQHandles ) { sdiTerminateStreaming ( & bcuvylxhefc . o142ktwdad
. AQHandles ) ; } } { if ( bcuvylxhefc . cbpif1banu . AQHandles ) {
sdiTerminateStreaming ( & bcuvylxhefc . cbpif1banu . AQHandles ) ; } } { if (
bcuvylxhefc . ks1fvl1d0d . AQHandles ) { sdiTerminateStreaming ( &
bcuvylxhefc . ks1fvl1d0d . AQHandles ) ; } } } static void
mr_HT05Model_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int j ,
const void * srcData , size_t numBytes ) ; static void
mr_HT05Model_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int j ,
const void * srcData , size_t numBytes ) { mxArray * newArray =
mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes , mxUINT8_CLASS ,
mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , ( const uint8_T *
) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i , j , newArray )
; } static void mr_HT05Model_restoreDataFromMxArray ( void * destData , const
mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ; static void
mr_HT05Model_restoreDataFromMxArray ( void * destData , const mxArray *
srcArray , mwIndex i , int j , size_t numBytes ) { memcpy ( ( uint8_T * )
destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber ( srcArray , i
, j ) ) , numBytes ) ; } static void mr_HT05Model_cacheBitFieldToMxArray (
mxArray * destArray , mwIndex i , int j , uint_T bitVal ) ; static void
mr_HT05Model_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i , int j
, uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j ,
mxCreateDoubleScalar ( ( double ) bitVal ) ) ; } static uint_T
mr_HT05Model_extractBitFieldFromMxArray ( const mxArray * srcArray , mwIndex
i , int j , uint_T numBits ) ; static uint_T
mr_HT05Model_extractBitFieldFromMxArray ( const mxArray * srcArray , mwIndex
i , int j , uint_T numBits ) { const uint_T varVal = ( uint_T ) mxGetScalar (
mxGetFieldByNumber ( srcArray , i , j ) ) ; return varVal & ( ( 1u << numBits
) - 1u ) ; } static void mr_HT05Model_cacheDataToMxArrayWithOffset ( mxArray
* destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) ; static void mr_HT05Model_cacheDataToMxArrayWithOffset (
mxArray * destArray , mwIndex i , int j , mwIndex offset , const void *
srcData , size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_HT05Model_restoreDataFromMxArrayWithOffset ( void * destData , const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t numBytes ) ;
static void mr_HT05Model_restoreDataFromMxArrayWithOffset ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t
numBytes ) { const uint8_T * varData = ( const uint8_T * ) mxGetData (
mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T * ) destData ,
( const uint8_T * ) & varData [ offset * numBytes ] , numBytes ) ; } static
void mr_HT05Model_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray ,
mwIndex i , int j , mwIndex offset , uint_T fieldVal ) ; static void
mr_HT05Model_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray ,
mwIndex i , int j , mwIndex offset , uint_T fieldVal ) { mxSetCell (
mxGetFieldByNumber ( destArray , i , j ) , offset , mxCreateDoubleScalar ( (
double ) fieldVal ) ) ; } static uint_T
mr_HT05Model_extractBitFieldFromCellArrayWithOffset ( const mxArray *
srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ; static
uint_T mr_HT05Model_extractBitFieldFromCellArrayWithOffset ( const mxArray *
srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) { const
uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell ( mxGetFieldByNumber (
srcArray , i , j ) , offset ) ) ; return fieldVal & ( ( 1u << numBits ) - 1u
) ; } mxArray * mr_HT05Model_GetDWork ( ) { static const char *
ssDWFieldNames [ 3 ] = { "hfe00hbwscw" , "bcuvylxhefc" , "NULL_PrevZCX" , } ;
mxArray * ssDW = mxCreateStructMatrix ( 1 , 1 , 3 , ssDWFieldNames ) ;
mr_HT05Model_cacheDataAsMxArray ( ssDW , 0 , 0 , ( const void * ) & (
hfe00hbwscw ) , sizeof ( hfe00hbwscw ) ) ; { static const char *
rtdwDataFieldNames [ 43 ] = { "bcuvylxhefc.iajxel3ezk" ,
"bcuvylxhefc.ondfxuidp3" , "bcuvylxhefc.enbv0wioc4" ,
"bcuvylxhefc.alzb1lqr5t" , "bcuvylxhefc.mrofomoj1z" ,
"bcuvylxhefc.k0zcask0cc" , "bcuvylxhefc.ngtzwyl1pu" ,
"bcuvylxhefc.e4gjlzj1lq" , "bcuvylxhefc.i5uql30i2j" ,
"bcuvylxhefc.kap0odr3kj" , "bcuvylxhefc.klgv0izvyu" ,
"bcuvylxhefc.hp5pufrajm" , "bcuvylxhefc.j1c3q5x2i4" ,
"bcuvylxhefc.cptmanfsa1" , "bcuvylxhefc.j5bb1yym0w" ,
"bcuvylxhefc.nos2ft3sic" , "bcuvylxhefc.n3mkw34cn5" ,
"bcuvylxhefc.h1tau0ecpq" , "bcuvylxhefc.kmrimj41ij" ,
"bcuvylxhefc.kebrerroqx" , "bcuvylxhefc.odmqgoxpmf" ,
"bcuvylxhefc.hn5nuy0lbc" , "bcuvylxhefc.nxsdzjpe5i" ,
"bcuvylxhefc.ep2boc231g" , "bcuvylxhefc.piumrtffmp" ,
"bcuvylxhefc.oijmj1tdxd" , "bcuvylxhefc.anfmogqnpx" ,
"bcuvylxhefc.jse5bdwgjj" , "bcuvylxhefc.fqundvylsh" ,
"bcuvylxhefc.egwjbtmbyq" , "bcuvylxhefc.bsjrzyb4mr" ,
"bcuvylxhefc.llz0iknlo0" , "bcuvylxhefc.a5czhakwii" ,
"bcuvylxhefc.l1ffn0wiag" , "bcuvylxhefc.fiqovchppi" ,
"bcuvylxhefc.oxgd34m1rt" , "bcuvylxhefc.i51uahy2gc" ,
"bcuvylxhefc.jtthydvh1h" , "bcuvylxhefc.kgr2bmvhtp" ,
"bcuvylxhefc.ovj5vn4ci5.knuormdudr" , "bcuvylxhefc.ovj5vn4ci5.dl3ftk2vvc" ,
"bcuvylxhefc.g31xp5tryrk.knuormdudr" , "bcuvylxhefc.g31xp5tryrk.dl3ftk2vvc" ,
} ; mxArray * rtdwData = mxCreateStructMatrix ( 1 , 1 , 43 ,
rtdwDataFieldNames ) ; { mxArray * varData = mr_DrivetrainEv_GetDWork ( & (
bcuvylxhefc . iajxel3ezk ) ) ; mxSetFieldByNumber ( rtdwData , 0 , 0 ,
varData ) ; } { mxArray * varData = mr_BattEv_GetDWork ( & ( bcuvylxhefc .
ondfxuidp3 ) ) ; mxSetFieldByNumber ( rtdwData , 0 , 1 , varData ) ; } {
mxArray * varData = mr_MotGenEvDynamic_GetDWork ( & ( bcuvylxhefc .
enbv0wioc4 ) ) ; mxSetFieldByNumber ( rtdwData , 0 , 2 , varData ) ; } {
mxArray * varData = mr_EvPowertrainController_GetDWork ( & ( bcuvylxhefc .
alzb1lqr5t ) ) ; mxSetFieldByNumber ( rtdwData , 0 , 3 , varData ) ; }
mr_HT05Model_cacheDataAsMxArray ( rtdwData , 0 , 4 , ( const void * ) & (
bcuvylxhefc . mrofomoj1z ) , sizeof ( bcuvylxhefc . mrofomoj1z ) ) ;
mr_HT05Model_cacheDataAsMxArray ( rtdwData , 0 , 5 , ( const void * ) & (
bcuvylxhefc . k0zcask0cc ) , sizeof ( bcuvylxhefc . k0zcask0cc ) ) ;
mr_HT05Model_cacheDataAsMxArray ( rtdwData , 0 , 6 , ( const void * ) & (
bcuvylxhefc . ngtzwyl1pu ) , sizeof ( bcuvylxhefc . ngtzwyl1pu ) ) ;
mr_HT05Model_cacheDataAsMxArray ( rtdwData , 0 , 7 , ( const void * ) & (
bcuvylxhefc . e4gjlzj1lq ) , sizeof ( bcuvylxhefc . e4gjlzj1lq ) ) ;
mr_HT05Model_cacheDataAsMxArray ( rtdwData , 0 , 8 , ( const void * ) & (
bcuvylxhefc . i5uql30i2j ) , sizeof ( bcuvylxhefc . i5uql30i2j ) ) ;
mr_HT05Model_cacheDataAsMxArray ( rtdwData , 0 , 9 , ( const void * ) & (
bcuvylxhefc . kap0odr3kj ) , sizeof ( bcuvylxhefc . kap0odr3kj ) ) ;
mr_HT05Model_cacheDataAsMxArray ( rtdwData , 0 , 10 , ( const void * ) & (
bcuvylxhefc . klgv0izvyu ) , sizeof ( bcuvylxhefc . klgv0izvyu ) ) ;
mr_HT05Model_cacheDataAsMxArray ( rtdwData , 0 , 11 , ( const void * ) & (
bcuvylxhefc . hp5pufrajm ) , sizeof ( bcuvylxhefc . hp5pufrajm ) ) ;
mr_HT05Model_cacheDataAsMxArray ( rtdwData , 0 , 12 , ( const void * ) & (
bcuvylxhefc . j1c3q5x2i4 ) , sizeof ( bcuvylxhefc . j1c3q5x2i4 ) ) ;
mr_HT05Model_cacheDataAsMxArray ( rtdwData , 0 , 13 , ( const void * ) & (
bcuvylxhefc . cptmanfsa1 ) , sizeof ( bcuvylxhefc . cptmanfsa1 ) ) ;
mr_HT05Model_cacheDataAsMxArray ( rtdwData , 0 , 14 , ( const void * ) & (
bcuvylxhefc . j5bb1yym0w ) , sizeof ( bcuvylxhefc . j5bb1yym0w ) ) ;
mr_HT05Model_cacheDataAsMxArray ( rtdwData , 0 , 15 , ( const void * ) & (
bcuvylxhefc . nos2ft3sic ) , sizeof ( bcuvylxhefc . nos2ft3sic ) ) ;
mr_HT05Model_cacheDataAsMxArray ( rtdwData , 0 , 16 , ( const void * ) & (
bcuvylxhefc . n3mkw34cn5 ) , sizeof ( bcuvylxhefc . n3mkw34cn5 ) ) ;
mr_HT05Model_cacheDataAsMxArray ( rtdwData , 0 , 17 , ( const void * ) & (
bcuvylxhefc . h1tau0ecpq ) , sizeof ( bcuvylxhefc . h1tau0ecpq ) ) ;
mr_HT05Model_cacheDataAsMxArray ( rtdwData , 0 , 18 , ( const void * ) & (
bcuvylxhefc . kmrimj41ij ) , sizeof ( bcuvylxhefc . kmrimj41ij ) ) ;
mr_HT05Model_cacheDataAsMxArray ( rtdwData , 0 , 19 , ( const void * ) & (
bcuvylxhefc . kebrerroqx ) , sizeof ( bcuvylxhefc . kebrerroqx ) ) ;
mr_HT05Model_cacheDataAsMxArray ( rtdwData , 0 , 20 , ( const void * ) & (
bcuvylxhefc . odmqgoxpmf ) , sizeof ( bcuvylxhefc . odmqgoxpmf ) ) ;
mr_HT05Model_cacheDataAsMxArray ( rtdwData , 0 , 21 , ( const void * ) & (
bcuvylxhefc . hn5nuy0lbc ) , sizeof ( bcuvylxhefc . hn5nuy0lbc ) ) ;
mr_HT05Model_cacheDataAsMxArray ( rtdwData , 0 , 22 , ( const void * ) & (
bcuvylxhefc . nxsdzjpe5i ) , sizeof ( bcuvylxhefc . nxsdzjpe5i ) ) ;
mr_HT05Model_cacheDataAsMxArray ( rtdwData , 0 , 23 , ( const void * ) & (
bcuvylxhefc . ep2boc231g ) , sizeof ( bcuvylxhefc . ep2boc231g ) ) ;
mr_HT05Model_cacheDataAsMxArray ( rtdwData , 0 , 24 , ( const void * ) & (
bcuvylxhefc . piumrtffmp ) , sizeof ( bcuvylxhefc . piumrtffmp ) ) ;
mr_HT05Model_cacheDataAsMxArray ( rtdwData , 0 , 25 , ( const void * ) & (
bcuvylxhefc . oijmj1tdxd ) , sizeof ( bcuvylxhefc . oijmj1tdxd ) ) ;
mr_HT05Model_cacheDataAsMxArray ( rtdwData , 0 , 26 , ( const void * ) & (
bcuvylxhefc . anfmogqnpx ) , sizeof ( bcuvylxhefc . anfmogqnpx ) ) ;
mr_HT05Model_cacheDataAsMxArray ( rtdwData , 0 , 27 , ( const void * ) & (
bcuvylxhefc . jse5bdwgjj ) , sizeof ( bcuvylxhefc . jse5bdwgjj ) ) ;
mr_HT05Model_cacheDataAsMxArray ( rtdwData , 0 , 28 , ( const void * ) & (
bcuvylxhefc . fqundvylsh ) , sizeof ( bcuvylxhefc . fqundvylsh ) ) ;
mr_HT05Model_cacheDataAsMxArray ( rtdwData , 0 , 29 , ( const void * ) & (
bcuvylxhefc . egwjbtmbyq ) , sizeof ( bcuvylxhefc . egwjbtmbyq ) ) ;
mr_HT05Model_cacheDataAsMxArray ( rtdwData , 0 , 30 , ( const void * ) & (
bcuvylxhefc . bsjrzyb4mr ) , sizeof ( bcuvylxhefc . bsjrzyb4mr ) ) ;
mr_HT05Model_cacheDataAsMxArray ( rtdwData , 0 , 31 , ( const void * ) & (
bcuvylxhefc . llz0iknlo0 ) , sizeof ( bcuvylxhefc . llz0iknlo0 ) ) ;
mr_HT05Model_cacheDataAsMxArray ( rtdwData , 0 , 32 , ( const void * ) & (
bcuvylxhefc . a5czhakwii ) , sizeof ( bcuvylxhefc . a5czhakwii ) ) ;
mr_HT05Model_cacheDataAsMxArray ( rtdwData , 0 , 33 , ( const void * ) & (
bcuvylxhefc . l1ffn0wiag ) , sizeof ( bcuvylxhefc . l1ffn0wiag ) ) ;
mr_HT05Model_cacheDataAsMxArray ( rtdwData , 0 , 34 , ( const void * ) & (
bcuvylxhefc . fiqovchppi ) , sizeof ( bcuvylxhefc . fiqovchppi ) ) ;
mr_HT05Model_cacheDataAsMxArray ( rtdwData , 0 , 35 , ( const void * ) & (
bcuvylxhefc . oxgd34m1rt ) , sizeof ( bcuvylxhefc . oxgd34m1rt ) ) ;
mr_HT05Model_cacheDataAsMxArray ( rtdwData , 0 , 36 , ( const void * ) & (
bcuvylxhefc . i51uahy2gc ) , sizeof ( bcuvylxhefc . i51uahy2gc ) ) ;
mr_HT05Model_cacheDataAsMxArray ( rtdwData , 0 , 37 , ( const void * ) & (
bcuvylxhefc . jtthydvh1h ) , sizeof ( bcuvylxhefc . jtthydvh1h ) ) ;
mr_HT05Model_cacheDataAsMxArray ( rtdwData , 0 , 38 , ( const void * ) & (
bcuvylxhefc . kgr2bmvhtp ) , sizeof ( bcuvylxhefc . kgr2bmvhtp ) ) ;
mr_HT05Model_cacheDataAsMxArray ( rtdwData , 0 , 39 , ( const void * ) & (
bcuvylxhefc . ovj5vn4ci5 . knuormdudr ) , sizeof ( bcuvylxhefc . ovj5vn4ci5 .
knuormdudr ) ) ; mr_HT05Model_cacheDataAsMxArray ( rtdwData , 0 , 40 , (
const void * ) & ( bcuvylxhefc . ovj5vn4ci5 . dl3ftk2vvc ) , sizeof (
bcuvylxhefc . ovj5vn4ci5 . dl3ftk2vvc ) ) ; mr_HT05Model_cacheDataAsMxArray (
rtdwData , 0 , 41 , ( const void * ) & ( bcuvylxhefc . g31xp5tryrk .
knuormdudr ) , sizeof ( bcuvylxhefc . g31xp5tryrk . knuormdudr ) ) ;
mr_HT05Model_cacheDataAsMxArray ( rtdwData , 0 , 42 , ( const void * ) & (
bcuvylxhefc . g31xp5tryrk . dl3ftk2vvc ) , sizeof ( bcuvylxhefc . g31xp5tryrk
. dl3ftk2vvc ) ) ; mxSetFieldByNumber ( ssDW , 0 , 1 , rtdwData ) ; } return
ssDW ; } void mr_HT05Model_SetDWork ( const mxArray * ssDW ) { ( void ) ssDW
; mr_HT05Model_restoreDataFromMxArray ( ( void * ) & ( hfe00hbwscw ) , ssDW ,
0 , 0 , sizeof ( hfe00hbwscw ) ) ; { const mxArray * rtdwData =
mxGetFieldByNumber ( ssDW , 0 , 1 ) ; mr_DrivetrainEv_SetDWork ( & (
bcuvylxhefc . iajxel3ezk ) , mxGetFieldByNumber ( rtdwData , 0 , 0 ) ) ;
mr_BattEv_SetDWork ( & ( bcuvylxhefc . ondfxuidp3 ) , mxGetFieldByNumber (
rtdwData , 0 , 1 ) ) ; mr_MotGenEvDynamic_SetDWork ( & ( bcuvylxhefc .
enbv0wioc4 ) , mxGetFieldByNumber ( rtdwData , 0 , 2 ) ) ;
mr_EvPowertrainController_SetDWork ( & ( bcuvylxhefc . alzb1lqr5t ) ,
mxGetFieldByNumber ( rtdwData , 0 , 3 ) ) ;
mr_HT05Model_restoreDataFromMxArray ( ( void * ) & ( bcuvylxhefc . mrofomoj1z
) , rtdwData , 0 , 4 , sizeof ( bcuvylxhefc . mrofomoj1z ) ) ;
mr_HT05Model_restoreDataFromMxArray ( ( void * ) & ( bcuvylxhefc . k0zcask0cc
) , rtdwData , 0 , 5 , sizeof ( bcuvylxhefc . k0zcask0cc ) ) ;
mr_HT05Model_restoreDataFromMxArray ( ( void * ) & ( bcuvylxhefc . ngtzwyl1pu
) , rtdwData , 0 , 6 , sizeof ( bcuvylxhefc . ngtzwyl1pu ) ) ;
mr_HT05Model_restoreDataFromMxArray ( ( void * ) & ( bcuvylxhefc . e4gjlzj1lq
) , rtdwData , 0 , 7 , sizeof ( bcuvylxhefc . e4gjlzj1lq ) ) ;
mr_HT05Model_restoreDataFromMxArray ( ( void * ) & ( bcuvylxhefc . i5uql30i2j
) , rtdwData , 0 , 8 , sizeof ( bcuvylxhefc . i5uql30i2j ) ) ;
mr_HT05Model_restoreDataFromMxArray ( ( void * ) & ( bcuvylxhefc . kap0odr3kj
) , rtdwData , 0 , 9 , sizeof ( bcuvylxhefc . kap0odr3kj ) ) ;
mr_HT05Model_restoreDataFromMxArray ( ( void * ) & ( bcuvylxhefc . klgv0izvyu
) , rtdwData , 0 , 10 , sizeof ( bcuvylxhefc . klgv0izvyu ) ) ;
mr_HT05Model_restoreDataFromMxArray ( ( void * ) & ( bcuvylxhefc . hp5pufrajm
) , rtdwData , 0 , 11 , sizeof ( bcuvylxhefc . hp5pufrajm ) ) ;
mr_HT05Model_restoreDataFromMxArray ( ( void * ) & ( bcuvylxhefc . j1c3q5x2i4
) , rtdwData , 0 , 12 , sizeof ( bcuvylxhefc . j1c3q5x2i4 ) ) ;
mr_HT05Model_restoreDataFromMxArray ( ( void * ) & ( bcuvylxhefc . cptmanfsa1
) , rtdwData , 0 , 13 , sizeof ( bcuvylxhefc . cptmanfsa1 ) ) ;
mr_HT05Model_restoreDataFromMxArray ( ( void * ) & ( bcuvylxhefc . j5bb1yym0w
) , rtdwData , 0 , 14 , sizeof ( bcuvylxhefc . j5bb1yym0w ) ) ;
mr_HT05Model_restoreDataFromMxArray ( ( void * ) & ( bcuvylxhefc . nos2ft3sic
) , rtdwData , 0 , 15 , sizeof ( bcuvylxhefc . nos2ft3sic ) ) ;
mr_HT05Model_restoreDataFromMxArray ( ( void * ) & ( bcuvylxhefc . n3mkw34cn5
) , rtdwData , 0 , 16 , sizeof ( bcuvylxhefc . n3mkw34cn5 ) ) ;
mr_HT05Model_restoreDataFromMxArray ( ( void * ) & ( bcuvylxhefc . h1tau0ecpq
) , rtdwData , 0 , 17 , sizeof ( bcuvylxhefc . h1tau0ecpq ) ) ;
mr_HT05Model_restoreDataFromMxArray ( ( void * ) & ( bcuvylxhefc . kmrimj41ij
) , rtdwData , 0 , 18 , sizeof ( bcuvylxhefc . kmrimj41ij ) ) ;
mr_HT05Model_restoreDataFromMxArray ( ( void * ) & ( bcuvylxhefc . kebrerroqx
) , rtdwData , 0 , 19 , sizeof ( bcuvylxhefc . kebrerroqx ) ) ;
mr_HT05Model_restoreDataFromMxArray ( ( void * ) & ( bcuvylxhefc . odmqgoxpmf
) , rtdwData , 0 , 20 , sizeof ( bcuvylxhefc . odmqgoxpmf ) ) ;
mr_HT05Model_restoreDataFromMxArray ( ( void * ) & ( bcuvylxhefc . hn5nuy0lbc
) , rtdwData , 0 , 21 , sizeof ( bcuvylxhefc . hn5nuy0lbc ) ) ;
mr_HT05Model_restoreDataFromMxArray ( ( void * ) & ( bcuvylxhefc . nxsdzjpe5i
) , rtdwData , 0 , 22 , sizeof ( bcuvylxhefc . nxsdzjpe5i ) ) ;
mr_HT05Model_restoreDataFromMxArray ( ( void * ) & ( bcuvylxhefc . ep2boc231g
) , rtdwData , 0 , 23 , sizeof ( bcuvylxhefc . ep2boc231g ) ) ;
mr_HT05Model_restoreDataFromMxArray ( ( void * ) & ( bcuvylxhefc . piumrtffmp
) , rtdwData , 0 , 24 , sizeof ( bcuvylxhefc . piumrtffmp ) ) ;
mr_HT05Model_restoreDataFromMxArray ( ( void * ) & ( bcuvylxhefc . oijmj1tdxd
) , rtdwData , 0 , 25 , sizeof ( bcuvylxhefc . oijmj1tdxd ) ) ;
mr_HT05Model_restoreDataFromMxArray ( ( void * ) & ( bcuvylxhefc . anfmogqnpx
) , rtdwData , 0 , 26 , sizeof ( bcuvylxhefc . anfmogqnpx ) ) ;
mr_HT05Model_restoreDataFromMxArray ( ( void * ) & ( bcuvylxhefc . jse5bdwgjj
) , rtdwData , 0 , 27 , sizeof ( bcuvylxhefc . jse5bdwgjj ) ) ;
mr_HT05Model_restoreDataFromMxArray ( ( void * ) & ( bcuvylxhefc . fqundvylsh
) , rtdwData , 0 , 28 , sizeof ( bcuvylxhefc . fqundvylsh ) ) ;
mr_HT05Model_restoreDataFromMxArray ( ( void * ) & ( bcuvylxhefc . egwjbtmbyq
) , rtdwData , 0 , 29 , sizeof ( bcuvylxhefc . egwjbtmbyq ) ) ;
mr_HT05Model_restoreDataFromMxArray ( ( void * ) & ( bcuvylxhefc . bsjrzyb4mr
) , rtdwData , 0 , 30 , sizeof ( bcuvylxhefc . bsjrzyb4mr ) ) ;
mr_HT05Model_restoreDataFromMxArray ( ( void * ) & ( bcuvylxhefc . llz0iknlo0
) , rtdwData , 0 , 31 , sizeof ( bcuvylxhefc . llz0iknlo0 ) ) ;
mr_HT05Model_restoreDataFromMxArray ( ( void * ) & ( bcuvylxhefc . a5czhakwii
) , rtdwData , 0 , 32 , sizeof ( bcuvylxhefc . a5czhakwii ) ) ;
mr_HT05Model_restoreDataFromMxArray ( ( void * ) & ( bcuvylxhefc . l1ffn0wiag
) , rtdwData , 0 , 33 , sizeof ( bcuvylxhefc . l1ffn0wiag ) ) ;
mr_HT05Model_restoreDataFromMxArray ( ( void * ) & ( bcuvylxhefc . fiqovchppi
) , rtdwData , 0 , 34 , sizeof ( bcuvylxhefc . fiqovchppi ) ) ;
mr_HT05Model_restoreDataFromMxArray ( ( void * ) & ( bcuvylxhefc . oxgd34m1rt
) , rtdwData , 0 , 35 , sizeof ( bcuvylxhefc . oxgd34m1rt ) ) ;
mr_HT05Model_restoreDataFromMxArray ( ( void * ) & ( bcuvylxhefc . i51uahy2gc
) , rtdwData , 0 , 36 , sizeof ( bcuvylxhefc . i51uahy2gc ) ) ;
mr_HT05Model_restoreDataFromMxArray ( ( void * ) & ( bcuvylxhefc . jtthydvh1h
) , rtdwData , 0 , 37 , sizeof ( bcuvylxhefc . jtthydvh1h ) ) ;
mr_HT05Model_restoreDataFromMxArray ( ( void * ) & ( bcuvylxhefc . kgr2bmvhtp
) , rtdwData , 0 , 38 , sizeof ( bcuvylxhefc . kgr2bmvhtp ) ) ;
mr_HT05Model_restoreDataFromMxArray ( ( void * ) & ( bcuvylxhefc . ovj5vn4ci5
. knuormdudr ) , rtdwData , 0 , 39 , sizeof ( bcuvylxhefc . ovj5vn4ci5 .
knuormdudr ) ) ; mr_HT05Model_restoreDataFromMxArray ( ( void * ) & (
bcuvylxhefc . ovj5vn4ci5 . dl3ftk2vvc ) , rtdwData , 0 , 40 , sizeof (
bcuvylxhefc . ovj5vn4ci5 . dl3ftk2vvc ) ) ;
mr_HT05Model_restoreDataFromMxArray ( ( void * ) & ( bcuvylxhefc .
g31xp5tryrk . knuormdudr ) , rtdwData , 0 , 41 , sizeof ( bcuvylxhefc .
g31xp5tryrk . knuormdudr ) ) ; mr_HT05Model_restoreDataFromMxArray ( ( void *
) & ( bcuvylxhefc . g31xp5tryrk . dl3ftk2vvc ) , rtdwData , 0 , 42 , sizeof (
bcuvylxhefc . g31xp5tryrk . dl3ftk2vvc ) ) ; } } mxArray *
mr_HT05Model_GetSimStateDisallowedBlocks ( ) { mxArray * data = NULL ;
mwIndex subs [ 2 ] , offset ; size_t numChildrenWithDisallowedBlocks = 0 ;
size_t numBlocks = 0 ; mxArray * disallowedBlocksInChild [ 4 ] ;
disallowedBlocksInChild [ 0 ] = mr_BattEv_GetSimStateDisallowedBlocks ( ) ;
disallowedBlocksInChild [ 1 ] = mr_DrivetrainEv_GetSimStateDisallowedBlocks (
) ; disallowedBlocksInChild [ 2 ] =
mr_EvPowertrainController_GetSimStateDisallowedBlocks ( ) ;
disallowedBlocksInChild [ 3 ] =
mr_MotGenEvDynamic_GetSimStateDisallowedBlocks ( ) ; { size_t i ; for ( i = 0
; i < 4 ; ++ i ) { mxArray * data_i = disallowedBlocksInChild [ i ] ; if (
NULL != data_i ) { if ( 0 == numChildrenWithDisallowedBlocks ++ ) { data =
data_i ; } numBlocks += mxGetM ( data_i ) ; } } } data = mxCreateCellMatrix (
numBlocks + 2 , 3 ) ; { static const char * blockType [ 2 ] = { "Scope" ,
"Scope" , } ; static const char * blockPath [ 2 ] = {
"HT05Model/Visualization/Performance and FE Scope" ,
"HT05Model/Visualization/Scope" , } ; static const int reason [ 2 ] = { 0 , 0
, } ; for ( subs [ 0 ] = 0 ; subs [ 0 ] < 2 ; ++ ( subs [ 0 ] ) ) { subs [ 1
] = 0 ; offset = mxCalcSingleSubscript ( data , 2 , subs ) ; mxSetCell ( data
, offset , mxCreateString ( blockType [ subs [ 0 ] ] ) ) ; subs [ 1 ] = 1 ;
offset = mxCalcSingleSubscript ( data , 2 , subs ) ; mxSetCell ( data ,
offset , mxCreateString ( blockPath [ subs [ 0 ] ] ) ) ; subs [ 1 ] = 2 ;
offset = mxCalcSingleSubscript ( data , 2 , subs ) ; mxSetCell ( data ,
offset , mxCreateDoubleScalar ( ( double ) reason [ subs [ 0 ] ] ) ) ; } } {
size_t i ; for ( i = 0 ; i < 4 ; ++ i ) { mxArray * data_i =
disallowedBlocksInChild [ i ] ; if ( NULL != data_i ) { mwIndex subs_i [ 2 ]
, offset_i ; const mwIndex numRows_i = ( mwIndex ) mxGetM ( data_i ) ; for (
subs_i [ 0 ] = 0 ; subs_i [ 0 ] < numRows_i ; ++ ( subs_i [ 0 ] ) ) { mwIndex
j ; for ( j = 0 ; j < 3 ; ++ j ) { mxArray * data_ij ; subs_i [ 1 ] = j ;
offset_i = mxCalcSingleSubscript ( data_i , 2 , subs_i ) ; data_ij =
mxGetCell ( data_i , offset_i ) ; data_ij = mxDuplicateArray ( data_ij ) ;
subs [ 1 ] = j ; offset = mxCalcSingleSubscript ( data , 2 , subs ) ;
mxSetCell ( data , offset , data_ij ) ; } ++ ( subs [ 0 ] ) ; }
mxDestroyArray ( data_i ) ; } } } return data ; } void MdlInitializeSizes (
void ) { ssSetNumContStates ( rtS , 35 ) ; ssSetNumPeriodicContStates ( rtS ,
2 ) ; ssSetNumY ( rtS , 0 ) ; ssSetNumU ( rtS , 0 ) ; ssSetDirectFeedThrough
( rtS , 0 ) ; ssSetNumSampleTimes ( rtS , 6 ) ; ssSetNumBlocks ( rtS , 120 )
; ssSetNumBlockIO ( rtS , 69 ) ; ssSetNumBlockParams ( rtS , 855 ) ; } void
MdlInitializeSampleTimes ( void ) { ssSetSampleTime ( rtS , 0 , 0.0 ) ;
ssSetSampleTime ( rtS , 1 , 0.0 ) ; ssSetSampleTime ( rtS , 2 , 5.0E-5 ) ;
ssSetSampleTime ( rtS , 3 , 0.01 ) ; ssSetSampleTime ( rtS , 4 , 0.05 ) ;
ssSetSampleTime ( rtS , 5 , 0.1 ) ; ssSetOffsetTime ( rtS , 0 , 0.0 ) ;
ssSetOffsetTime ( rtS , 1 , 1.0 ) ; ssSetOffsetTime ( rtS , 2 , 0.0 ) ;
ssSetOffsetTime ( rtS , 3 , 0.0 ) ; ssSetOffsetTime ( rtS , 4 , 0.0 ) ;
ssSetOffsetTime ( rtS , 5 , 0.0 ) ; } void raccel_set_checksum ( ) {
ssSetChecksumVal ( rtS , 0 , 3610673230U ) ; ssSetChecksumVal ( rtS , 1 ,
947650704U ) ; ssSetChecksumVal ( rtS , 2 , 2779343099U ) ; ssSetChecksumVal
( rtS , 3 , 416087025U ) ; }
#if defined(_MSC_VER)
#pragma optimize( "", off )
#endif
SimStruct * raccel_register_model ( ssExecutionInfo * executionInfo ) {
static struct _ssMdlInfo mdlInfo ; ssNonContDerivSigFeedingOutports *
mr_DrivetrainEv_8_1_0nonContOutputArray [ 4 ] = { ( NULL ) , ( NULL ) , (
NULL ) , ( NULL ) } ; ssNonContDerivSigFeedingOutports
mr_DrivetrainEv_8_1_0nonContDerivSig2 [ 4 ] ;
ssNonContDerivSigFeedingOutports mr_DrivetrainEv_8_1_0nonContDerivSig3 [ 2 ]
; ssNonContDerivSigFeedingOutports *
mr_MotGenEvDynamic_8_3_0nonContOutputArray [ 3 ] = { ( NULL ) , ( NULL ) , (
NULL ) } ; ssNonContDerivSigFeedingOutports
mr_MotGenEvDynamic_8_3_0nonContDerivSig1 [ 4 ] ;
mr_DrivetrainEv_8_1_0nonContOutputArray [ 2 ] =
mr_DrivetrainEv_8_1_0nonContDerivSig2 ;
mr_DrivetrainEv_8_1_0nonContOutputArray [ 3 ] =
mr_DrivetrainEv_8_1_0nonContDerivSig3 ;
mr_MotGenEvDynamic_8_3_0nonContOutputArray [ 1 ] =
mr_MotGenEvDynamic_8_3_0nonContDerivSig1 ; ( void ) memset ( ( char * ) rtS ,
0 , sizeof ( SimStruct ) ) ; ( void ) memset ( ( char * ) & mdlInfo , 0 ,
sizeof ( struct _ssMdlInfo ) ) ; ssSetMdlInfoPtr ( rtS , & mdlInfo ) ;
ssSetExecutionInfo ( rtS , executionInfo ) ; { static time_T mdlPeriod [
NSAMPLE_TIMES ] ; static time_T mdlOffset [ NSAMPLE_TIMES ] ; static time_T
mdlTaskTimes [ NSAMPLE_TIMES ] ; static int_T mdlTsMap [ NSAMPLE_TIMES ] ;
static int_T mdlSampleHits [ NSAMPLE_TIMES ] ; static boolean_T
mdlTNextWasAdjustedPtr [ NSAMPLE_TIMES ] ; static int_T mdlPerTaskSampleHits
[ NSAMPLE_TIMES * NSAMPLE_TIMES ] ; static time_T mdlTimeOfNextSampleHit [
NSAMPLE_TIMES ] ; { int_T i ; for ( i = 0 ; i < NSAMPLE_TIMES ; i ++ ) {
mdlPeriod [ i ] = 0.0 ; mdlOffset [ i ] = 0.0 ; mdlTaskTimes [ i ] = 0.0 ;
mdlTsMap [ i ] = i ; mdlSampleHits [ i ] = 1 ; } } ssSetSampleTimePtr ( rtS ,
& mdlPeriod [ 0 ] ) ; ssSetOffsetTimePtr ( rtS , & mdlOffset [ 0 ] ) ;
ssSetSampleTimeTaskIDPtr ( rtS , & mdlTsMap [ 0 ] ) ; ssSetTPtr ( rtS , &
mdlTaskTimes [ 0 ] ) ; ssSetSampleHitPtr ( rtS , & mdlSampleHits [ 0 ] ) ;
ssSetTNextWasAdjustedPtr ( rtS , & mdlTNextWasAdjustedPtr [ 0 ] ) ;
ssSetPerTaskSampleHitsPtr ( rtS , & mdlPerTaskSampleHits [ 0 ] ) ;
ssSetTimeOfNextSampleHitPtr ( rtS , & mdlTimeOfNextSampleHit [ 0 ] ) ; }
ssSetSolverMode ( rtS , SOLVER_MODE_SINGLETASKING ) ; { ssSetBlockIO ( rtS ,
( ( void * ) & hfe00hbwscw ) ) ; ( void ) memset ( ( ( void * ) & hfe00hbwscw
) , 0 , sizeof ( hfe00hbwsc ) ) ; } { real_T * x = ( real_T * ) & nltnw1e5gkl
; ssSetContStates ( rtS , x ) ; ( void ) memset ( ( void * ) x , 0 , sizeof (
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
ssSetTFinal ( rtS , 40.0 ) ; io04qbfqhk ( rtS , 3 , 0 , & ( bcuvylxhefc .
alzb1lqr5t . rtm ) , & ( bcuvylxhefc . alzb1lqr5t . rtb ) , NULL , 0 , & (
rt_dataMapInfoPtr -> mmi ) ,
"HT05Model/Controllers/Powertrain Control Module (PCM)" , 0 , - 1 ) ;
slsaCacheDWorkDataForSimTargetOP ( rtS , & ( bcuvylxhefc . alzb1lqr5t . rtm )
, sizeof ( bcuvylxhefc . alzb1lqr5t . rtm ) ) ; { char_T * tempStr =
rtwCAPI_EncodePath ( "HT05Model/Controllers/Powertrain Control Module (PCM)"
) ; rtwCAPI_UpdateFullPaths ( ( rtwCAPI_GetChildMMI ( & ( rt_dataMapInfoPtr
-> mmi ) , 0 ) ) , tempStr , 1 ) ; utFree ( tempStr ) ; } ktxb3gprz3 ( rtS ,
mr_DrivetrainEv_8_1_0nonContOutputArray , 0 , 1 , 0 , & ( bcuvylxhefc .
iajxel3ezk . rtm ) , & ( bcuvylxhefc . iajxel3ezk . rtb ) , & ( bcuvylxhefc .
iajxel3ezk . rtdw ) , & ( nltnw1e5gkl . hcwjqlhqcy ) , & ( bcuvylxhefc .
iajxel3ezk . rtzce ) , NULL , 0 , & ( rt_dataMapInfoPtr -> mmi ) ,
"HT05Model/Passenger Car/Drivetrain" , 1 , 1 ) ;
slsaCacheDWorkDataForSimTargetOP ( rtS , & ( bcuvylxhefc . iajxel3ezk . rtm )
, sizeof ( bcuvylxhefc . iajxel3ezk . rtm ) ) ; { char_T * tempStr =
rtwCAPI_EncodePath ( "HT05Model/Passenger Car/Drivetrain" ) ;
rtwCAPI_UpdateFullPaths ( ( rtwCAPI_GetChildMMI ( & ( rt_dataMapInfoPtr ->
mmi ) , 1 ) ) , tempStr , 1 ) ; utFree ( tempStr ) ; } lst5ppimoh ( rtS , 0 ,
0 , & ( bcuvylxhefc . ondfxuidp3 . rtm ) , & ( bcuvylxhefc . ondfxuidp3 . rtb
) , & ( bcuvylxhefc . ondfxuidp3 . rtdw ) , & ( nltnw1e5gkl . fqvhaqjss0 ) ,
NULL , 0 , & ( rt_dataMapInfoPtr -> mmi ) ,
"HT05Model/Passenger Car/Electric Plant/Battery" , 2 , 25 ) ;
slsaCacheDWorkDataForSimTargetOP ( rtS , & ( bcuvylxhefc . ondfxuidp3 . rtm )
, sizeof ( bcuvylxhefc . ondfxuidp3 . rtm ) ) ; { char_T * tempStr =
rtwCAPI_EncodePath ( "HT05Model/Passenger Car/Electric Plant/Battery" ) ;
rtwCAPI_UpdateFullPaths ( ( rtwCAPI_GetChildMMI ( & ( rt_dataMapInfoPtr ->
mmi ) , 2 ) ) , tempStr , 1 ) ; utFree ( tempStr ) ; } cwmdpnrf2r ( rtS ,
mr_MotGenEvDynamic_8_3_0nonContOutputArray , 0 , 1 , 2 , 0 , & ( bcuvylxhefc
. enbv0wioc4 . rtm ) , & ( bcuvylxhefc . enbv0wioc4 . rtb ) , & ( bcuvylxhefc
. enbv0wioc4 . rtdw ) , & ( nltnw1e5gkl . b04e30byfs ) , NULL , 0 , & (
rt_dataMapInfoPtr -> mmi ) ,
"HT05Model/Passenger Car/Electric Plant/Motor/MotGenEvDynamic" , 3 , 26 ) ;
slsaCacheDWorkDataForSimTargetOP ( rtS , & ( bcuvylxhefc . enbv0wioc4 . rtm )
, sizeof ( bcuvylxhefc . enbv0wioc4 . rtm ) ) ; { char_T * tempStr =
rtwCAPI_EncodePath (
"HT05Model/Passenger Car/Electric Plant/Motor/MotGenEvDynamic" ) ;
rtwCAPI_UpdateFullPaths ( ( rtwCAPI_GetChildMMI ( & ( rt_dataMapInfoPtr ->
mmi ) , 3 ) ) , tempStr , 1 ) ; utFree ( tempStr ) ; } { static RTWLogInfo
rt_DataLoggingInfo ; rt_DataLoggingInfo . loggingInterval = ( NULL ) ;
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
static ssSolverInfo slvrInfo ; static boolean_T contStatesDisabled [ 35 ] ;
static real_T absTol [ 35 ] = { 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 } ; static uint8_T
absTolControl [ 35 ] = { 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U
, 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U ,
0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U } ; static real_T
contStateJacPerturbBoundMinVec [ 35 ] ; static real_T
contStateJacPerturbBoundMaxVec [ 35 ] ; static uint8_T zcAttributes [ 14 ] =
{ ( 0x40 | ZC_EVENT_ALL_UP ) , ( 0x40 | ZC_EVENT_ALL_UP ) , ( ZC_EVENT_ALL_UP
) , ( ZC_EVENT_ALL_DN ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL_UP ) , (
ZC_EVENT_ALL_DN ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) ,
( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL_DN )
} ; static uint8_T zcEvents [ 14 ] = { ( 0x40 | ZC_EVENT_ALL_UP ) , ( 0x40 |
ZC_EVENT_ALL_UP ) , ( 0x40 | ZC_EVENT_ALL_UP ) , ( 0x40 | ZC_EVENT_ALL_DN ) ,
( 0x40 | ZC_EVENT_ALL ) , ( 0x40 | ZC_EVENT_ALL_UP ) , ( 0x40 |
ZC_EVENT_ALL_DN ) , ( 0x40 | ZC_EVENT_ALL ) , ( 0x40 | ZC_EVENT_ALL ) , (
0x40 | ZC_EVENT_ALL ) , ( 0x40 | ZC_EVENT_ALL ) , ( 0x40 | ZC_EVENT_ALL ) , (
0x40 | ZC_EVENT_ALL ) , ( 0x40 | ZC_EVENT_ALL_DN ) } ; static
ssNonContDerivSigInfo nonContDerivSigInfo [ 5 ] = { { 0 , ( NULL ) , ( NULL )
} , { 0 , ( NULL ) , ( NULL ) } , { 0 , ( NULL ) , ( NULL ) } , { 0 , ( NULL
) , ( NULL ) } , { 1 * sizeof ( real_T ) , ( char * ) ( & hfe00hbwscw .
cvgkryez0y ) , ( NULL ) } } ; nonContDerivSigInfo [ 0 ] . sizeInBytes =
mr_MotGenEvDynamic_8_3_0nonContOutputArray [ 1 ] [ 0 ] . sizeInBytes ;
nonContDerivSigInfo [ 0 ] . pCurrVal = ( char * )
mr_MotGenEvDynamic_8_3_0nonContOutputArray [ 1 ] [ 0 ] . currVal ;
nonContDerivSigInfo [ 1 ] . sizeInBytes =
mr_MotGenEvDynamic_8_3_0nonContOutputArray [ 1 ] [ 1 ] . sizeInBytes ;
nonContDerivSigInfo [ 1 ] . pCurrVal = ( char * )
mr_MotGenEvDynamic_8_3_0nonContOutputArray [ 1 ] [ 1 ] . currVal ;
nonContDerivSigInfo [ 2 ] . sizeInBytes =
mr_MotGenEvDynamic_8_3_0nonContOutputArray [ 1 ] [ 2 ] . sizeInBytes ;
nonContDerivSigInfo [ 2 ] . pCurrVal = ( char * )
mr_MotGenEvDynamic_8_3_0nonContOutputArray [ 1 ] [ 2 ] . currVal ;
nonContDerivSigInfo [ 3 ] . sizeInBytes =
mr_MotGenEvDynamic_8_3_0nonContOutputArray [ 1 ] [ 3 ] . sizeInBytes ;
nonContDerivSigInfo [ 3 ] . pCurrVal = ( char * )
mr_MotGenEvDynamic_8_3_0nonContOutputArray [ 1 ] [ 3 ] . currVal ; { int i ;
for ( i = 0 ; i < 35 ; ++ i ) { contStateJacPerturbBoundMinVec [ i ] = 0 ;
contStateJacPerturbBoundMaxVec [ i ] = rtGetInf ( ) ; } } ssSetSolverRelTol (
rtS , 0.001 ) ; ssSetStepSize ( rtS , 0.0 ) ; ssSetMinStepSize ( rtS , 0.0 )
; ssSetMaxNumMinSteps ( rtS , - 1 ) ; ssSetMinStepViolatedError ( rtS , 0 ) ;
ssSetMaxStepSize ( rtS , 5.0E-5 ) ; ssSetSolverMaxOrder ( rtS , - 1 ) ;
ssSetSolverRefineFactor ( rtS , 1 ) ; ssSetOutputTimes ( rtS , ( NULL ) ) ;
ssSetNumOutputTimes ( rtS , 0 ) ; ssSetOutputTimesOnly ( rtS , 0 ) ;
ssSetOutputTimesIndex ( rtS , 0 ) ; ssSetZCCacheNeedsReset ( rtS , 1 ) ;
ssSetDerivCacheNeedsReset ( rtS , 0 ) ; ssSetNumNonContDerivSigInfos ( rtS ,
5 ) ; ssSetNonContDerivSigInfos ( rtS , nonContDerivSigInfo ) ;
ssSetSolverInfo ( rtS , & slvrInfo ) ; ssSetSolverName ( rtS ,
"VariableStepAuto" ) ; ssSetVariableStepSolver ( rtS , 1 ) ;
ssSetSolverConsistencyChecking ( rtS , 0 ) ; ssSetSolverAdaptiveZcDetection (
rtS , 1 ) ; ssSetSolverRobustResetMethod ( rtS , 0 ) ; ssSetAbsTolVector (
rtS , absTol ) ; ssSetAbsTolControlVector ( rtS , absTolControl ) ;
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
, 14 ) ; ssSetModelZeroCrossings ( rtS , MdlZeroCrossings ) ;
ssSetSolverConsecutiveZCsStepRelTol ( rtS , 2.8421709430404007E-13 ) ;
ssSetSolverMaxConsecutiveZCs ( rtS , 1000 ) ; ssSetSolverConsecutiveZCsError
( rtS , 2 ) ; ssSetSolverMaskedZcDiagnostic ( rtS , 1 ) ;
ssSetSolverIgnoredZcDiagnostic ( rtS , 0 ) ; ssSetSolverZcThreshold ( rtS ,
0.001 ) ; ssSetSolverMaxConsecutiveMinStep ( rtS , 1 ) ;
ssSetSolverShapePreserveControl ( rtS , 2 ) ; ssSetTNextTid ( rtS , INT_MIN )
; ssSetTNext ( rtS , rtMinusInf ) ; ssSetSolverNeedsReset ( rtS ) ;
ssSetNumNonsampledZCs ( rtS , 12 ) ; ssSetContStateDisabled ( rtS ,
contStatesDisabled ) ; ssSetSolverMaxConsecutiveMinStep ( rtS , 1 ) ; }
ssSetChecksumVal ( rtS , 0 , 3610673230U ) ; ssSetChecksumVal ( rtS , 1 ,
947650704U ) ; ssSetChecksumVal ( rtS , 2 , 2779343099U ) ; ssSetChecksumVal
( rtS , 3 , 416087025U ) ; { static const sysRanDType rtAlwaysEnabled =
SUBSYS_RAN_BC_ENABLE ; static RTWExtModeInfo rt_ExtModeInfo ; static const
sysRanDType * systemRan [ 10 ] ; gblRTWExtModeInfo = & rt_ExtModeInfo ;
ssSetRTWExtModeInfo ( rtS , & rt_ExtModeInfo ) ;
rteiSetSubSystemActiveVectorAddresses ( & rt_ExtModeInfo , systemRan ) ;
systemRan [ 0 ] = & rtAlwaysEnabled ; systemRan [ 1 ] = & rtAlwaysEnabled ;
systemRan [ 2 ] = ( sysRanDType * ) & bcuvylxhefc . g31xp5tryrk . knuormdudr
; systemRan [ 3 ] = & rtAlwaysEnabled ; systemRan [ 4 ] = & rtAlwaysEnabled ;
systemRan [ 5 ] = ( sysRanDType * ) & bcuvylxhefc . ovj5vn4ci5 . knuormdudr ;
systemRan [ 6 ] = & rtAlwaysEnabled ; systemRan [ 7 ] = & rtAlwaysEnabled ;
systemRan [ 8 ] = & rtAlwaysEnabled ; systemRan [ 9 ] = & rtAlwaysEnabled ;
rteiSetModelMappingInfoPtr ( ssGetRTWExtModeInfo ( rtS ) , &
ssGetModelMappingInfo ( rtS ) ) ; rteiSetChecksumsPtr ( ssGetRTWExtModeInfo (
rtS ) , ssGetChecksums ( rtS ) ) ; rteiSetTPtr ( ssGetRTWExtModeInfo ( rtS )
, ssGetTPtr ( rtS ) ) ; } slsaDisallowedBlocksForSimTargetOP ( rtS ,
mr_HT05Model_GetSimStateDisallowedBlocks ) ; slsaGetWorkFcnForSimTargetOP (
rtS , mr_HT05Model_GetDWork ) ; slsaSetWorkFcnForSimTargetOP ( rtS ,
mr_HT05Model_SetDWork ) ; ihnh5ag1lp . Saturation1_UpperSat = rtInf ;
ihnh5ag1lp . Saturation_UpperSat = rtInf ; rt_RapidReadMatFileAndUpdateParams
( rtS ) ; if ( ssGetErrorStatus ( rtS ) ) { return rtS ; } return rtS ; }
#if defined(_MSC_VER)
#pragma optimize( "", on )
#endif
const int_T gblParameterTuningTid = 6 ; void MdlOutputsParameterSampleTime (
int_T tid ) { MdlOutputsTID6 ( tid ) ; }
