#include "rt_logging_mmi.h"
#include "EvReferenceApplication_capi.h"
#include <math.h>
#include "EvReferenceApplication.h"
#include "EvReferenceApplication_private.h"
#include "EvReferenceApplication_dt.h"
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
"slprj\\raccel\\EvReferenceApplication\\EvReferenceApplication_Jpattern.mat"
; const int_T gblNumRootInportBlks = 0 ; const int_T gblNumModelInputs = 0 ;
extern rtInportTUtable * gblInportTUtables ; extern const char *
gblInportFileName ; extern void * gblAperiodicPartitionHitTimes ; const int_T
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
#define h3kbp2fw34 (1U)
#define lgbggzlwgj (2U)
#define lnwe4uhdes (3U)
cuhiq2he3x cuhiq2he3xv ; i344fcmwfc i344fcmwfc1 ; c4o1mv5dv4 c4o1mv5dv4m ;
jh4nyoq4g4 jh4nyoq4g4o ; giqt2tul5w giqt2tul5wr ; static SimStruct model_S ;
SimStruct * const rtS = & model_S ; void MdlInitialize ( void ) { i344fcmwfc1
. deyyyt5ypg = 0.0 ; giqt2tul5wr . inuzqqxqnu [ 0 ] = konn1m5pjf .
RateTransition3_InitialCondition ; i344fcmwfc1 . g14mueghy3 = 0.0 ;
giqt2tul5wr . mntoorellr [ 0 ] = konn1m5pjf .
RateTransition5_InitialCondition ; i344fcmwfc1 . p1updjpzin = konn1m5pjf .
Integrator_IC ; i344fcmwfc1 . p43idzm3kd = konn1m5pjf . Integrator1_IC ;
i344fcmwfc1 . piwaeu0cyd = konn1m5pjf . Integrator1_IC_ajivek24xs ;
i344fcmwfc1 . niplvsv1th = konn1m5pjf . Integrator2_IC ; giqt2tul5wr .
l4pn2msb3d [ 0 ] = konn1m5pjf . UnitDelay_InitialCondition [ 0 ] ;
giqt2tul5wr . l4pn2msb3d [ 1 ] = konn1m5pjf . UnitDelay_InitialCondition [ 1
] ; eqyc2wn3m1 ( & ( giqt2tul5wr . igqkoslatl . rtm ) , & ( giqt2tul5wr .
igqkoslatl . rtb ) , & ( giqt2tul5wr . igqkoslatl . rtdw ) , & ( i344fcmwfc1
. d5katehawv ) ) ; poo3kmg0ob ( & ( giqt2tul5wr . isvmsyyglk . rtm ) , & (
giqt2tul5wr . isvmsyyglk . rtdw ) , & ( i344fcmwfc1 . nq1lsnuhqu ) ) ;
dwpuxjpomb ( & ( giqt2tul5wr . ag4bz0o52w . rtm ) , & ( giqt2tul5wr .
ag4bz0o52w . rtb ) , & ( giqt2tul5wr . ag4bz0o52w . rtdw ) , & ( i344fcmwfc1
. bxhmcfdguc ) ) ; cuhiq2he3xv . bd2ndavyho = konn1m5pjf . SignalHold_IC ;
giqt2tul5wr . j5l3uscjdf = - 1 ; giqt2tul5wr . o23aklsczm = 0U ; giqt2tul5wr
. kn3tgruv1d = 0U ; giqt2tul5wr . ipsejbdjkv = 0.0 ; giqt2tul5wr . cjbl1xx1vv
= 0U ; giqt2tul5wr . iaae4xgy2r = 0.0 ; cuhiq2he3xv . o5bbi4nmva = 0.0 ;
giqt2tul5wr . kr24afjbvy = 0.0 ; giqt2tul5wr . mgyqdv05fz = 0.0 ; giqt2tul5wr
. hvilkifux1 = 0.0 ; { int_T rootPeriodicContStateIndices [ 2 ] = { 7 , 26 }
; real_T rootPeriodicContStateRanges [ 4 ] = { - 3.1415926535897931 ,
3.1415926535897931 , - 3.1415926535897931 , 3.1415926535897931 } ; ( void )
memcpy ( ( void * ) c4o1mv5dv4m , rootPeriodicContStateIndices , 2 * sizeof (
int_T ) ) ; ( void ) memcpy ( ( void * ) jh4nyoq4g4o ,
rootPeriodicContStateRanges , 4 * sizeof ( real_T ) ) ; } } void MdlEnable (
void ) { giqt2tul5wr . kr24afjbvy = ssGetTaskTime ( rtS , 1 ) ; giqt2tul5wr .
hvilkifux1 = giqt2tul5wr . kr24afjbvy ; } void MdlStart ( void ) { { void * *
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
externalInputIsInDatasetFormat ) { } } fzkpqsvdo4 ( & ( giqt2tul5wr .
igqkoslatl . rtm ) , & ( giqt2tul5wr . igqkoslatl . rtdw ) ) ; pv4vhh3fcm ( &
( giqt2tul5wr . ag4bz0o52w . rtm ) , & ( giqt2tul5wr . ag4bz0o52w . rtdw ) )
; { void * slioCatalogue = rt_slioCatalogue ( ) ? rtwGetPointerFromUniquePtr
( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue ( rt_dataMapInfo . mmi .
InstanceMap . fullPath ) ; if ( ! slioCatalogue || ! rtwIsLoggingToFile (
slioCatalogue ) ) { { { sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName =
sdiGetLabelFromChars ( "MotTrq" ) ; sdiLabelU origSigName =
sdiGetLabelFromChars ( "MotTrq" ) ; sdiLabelU propName = sdiGetLabelFromChars
( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"EvReferenceApplication/Passenger Car/Electric Plant/Motor Coupling Dynamics"
) ; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "MotTrq" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims =
1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ;
giqt2tul5wr . pvlwtgcy5f . AQHandles = sdiAsyncRepoCreateAsyncioQueue ( hDT ,
& srcInfo , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"5afde2d2-846d-4e9a-9649-d0b57b94fa18" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "N*m" ) ; if ( giqt2tul5wr . pvlwtgcy5f .
AQHandles ) { sdiSetSignalSampleTimeString ( giqt2tul5wr . pvlwtgcy5f .
AQHandles , "Continuous" , 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime (
giqt2tul5wr . pvlwtgcy5f . AQHandles , ssGetTaskTime ( rtS , 1 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( giqt2tul5wr . pvlwtgcy5f . AQHandles ,
1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( giqt2tul5wr . pvlwtgcy5f .
AQHandles , loggedName , origSigName , propName ) ; } sdiFreeLabel ( sigName
) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel
( propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } } } giqt2tul5wr . pvlwtgcy5f . SlioLTF = (
NULL ) ; { void * treeVector = ( NULL ) ; void * accessor = ( NULL ) ; const
void * signalDescriptor = ( NULL ) ; void * loggingInterval = ( NULL ) ; char
* datasetName = "tmp_raccel_logsout" ; void * slioCatalogue =
rt_slioCatalogue ( ) ? rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) :
sdiGetSlioCatalogue ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if (
slioCatalogue && rtwIsLoggingToFile ( slioCatalogue ) ) { treeVector =
rtwGetTreeVector ( ) ; { int_T sigDimsArray [ 1 ] = { 1 } ; rtwAddLeafNode (
0 , "MotTrq" , "linear" , 0 , ( unsigned int * ) sigDimsArray , 1 , "double"
, "N*m" , "Continuous" , 0.0 , ssGetTFinal ( rtS ) , treeVector ) ; }
signalDescriptor = rtwGetSignalDescriptor ( treeVector , 1 , 1 , 0 , 1 ,
"MotTrq" , "" , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"EvReferenceApplication/Passenger Car/Electric Plant/Motor Coupling Dynamics"
, 1 , 0 , slioCatalogue , ( NULL ) , 0 , ( NULL ) , 0 ) ; if ( !
rt_slioCatalogue ( ) ) { sdiSlioIsLoggingSignal ( rt_dataMapInfo . mmi .
InstanceMap . fullPath ,
"EvReferenceApplication/Passenger Car/Electric Plant/Motor Coupling Dynamics"
, 1 , "MotTrq" ) ; } if ( rtwLoggingOverride ( signalDescriptor ,
slioCatalogue ) ) { if ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) {
loggingInterval = rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo ->
rtwLogInfo ) ; } else { loggingInterval = sdiGetLoggingIntervals (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; datasetName = "" ; }
accessor = rtwGetAccessor ( signalDescriptor , loggingInterval ) ;
rtwAddR2Client ( accessor , signalDescriptor , slioCatalogue , datasetName ,
1 ) ; giqt2tul5wr . pvlwtgcy5f . SlioLTF = accessor ; } } } } ka5dospcnh ( &
( giqt2tul5wr . igqkoslatl . rtb ) , & ( giqt2tul5wr . igqkoslatl . rtdw ) )
; n5k0o3qutm ( & ( giqt2tul5wr . ag4bz0o52w . rtdw ) ) ; giqt2tul5wr .
osl3qr4gmy = 0 ; giqt2tul5wr . mc3fhmonso = false ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; giqt2tul5wr . j32evmbeac
= false ; ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; MdlInitialize
( ) ; MdlEnable ( ) ; } void MdlOutputs ( int_T tid ) { int_T iy ; real_T
sigmaA [ 4 ] ; real_T b_I [ 4 ] ; real_T z_data ; real_T z1_data ; real_T
cbv1b3vtl5 ; real_T bcl1b5rt4n ; real_T dxbnvj4sno [ 4 ] ; real_T d ; real_T
fr2hjxs0ne [ 4 ] ; int32_T i ; real_T hahkbmlkjo_idx_1 ; real_T sigmaB_idx_0
; real_T sigmaB_idx_1 ; real_T sigmaB_idx_2 ; real_T sigmaB_idx_3 ; static
const real_T d_p [ 170 ] = { 1.0 , 2.0 , 6.0 , 24.0 , 120.0 , 720.0 , 5040.0
, 40320.0 , 362880.0 , 3.6288E+6 , 3.99168E+7 , 4.790016E+8 , 6.2270208E+9 ,
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
; srClearBC ( giqt2tul5wr . iqmyanxtr1 ) ; srClearBC ( giqt2tul5wr .
jt1cbcvoyd ) ; cbv1b3vtl5 = ssGetT ( rtS ) ; if ( konn1m5pjf . repeat_Value >
konn1m5pjf . Switch_Threshold ) { cuhiq2he3xv . hjd5omgeuw =
muDoubleScalarMod ( cbv1b3vtl5 , konn1m5pjf . tFinal_Value ) ; } else {
cuhiq2he3xv . hjd5omgeuw = cbv1b3vtl5 ; } cuhiq2he3xv . cwygjkza2r =
look1_pbinlcapw ( cuhiq2he3xv . hjd5omgeuw , konn1m5pjf .
uDLookupTable_bp01Data , konn1m5pjf . uDLookupTable_tableData , & giqt2tul5wr
. mqtf040bbg , 2473U ) ; cuhiq2he3xv . bht55s5qq3 = 0.0 ; cuhiq2he3xv .
bht55s5qq3 += konn1m5pjf . MotorCouplingDynamics_C * i344fcmwfc1 . deyyyt5ypg
; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { cuhiq2he3xv . ixkrfe1hwl =
giqt2tul5wr . inuzqqxqnu [ giqt2tul5wr . fryzyq5tfx ] ; } DrivetrainEv ( & (
giqt2tul5wr . igqkoslatl . rtm ) , & cuhiq2he3xv . bht55s5qq3 , & cuhiq2he3xv
. ixkrfe1hwl , & konn1m5pjf . Constant2_Value , & konn1m5pjf .
Constant3_Value , & cuhiq2he3xv . lrkperxqkh , & cuhiq2he3xv . f32ubspqi4 , &
( giqt2tul5wr . igqkoslatl . rtb ) , & ( giqt2tul5wr . igqkoslatl . rtdw ) ,
& ( i344fcmwfc1 . d5katehawv ) , & ( giqt2tul5wr . igqkoslatl . rtzce ) ) ;
cuhiq2he3xv . m0tb3cmvqc [ 0 ] = konn1m5pjf . mstomph_Gain * cuhiq2he3xv .
cwygjkza2r ; cuhiq2he3xv . m0tb3cmvqc [ 1 ] = konn1m5pjf . mstomph_Gain *
cuhiq2he3xv . lrkperxqkh ; if ( ssIsSampleHit ( rtS , 1 , 0 ) && (
giqt2tul5wr . liwdzlex20 == 0 ) ) { giqt2tul5wr . gyxsg3hoeg [ 0 ] =
cuhiq2he3xv . m0tb3cmvqc [ 0 ] ; giqt2tul5wr . gyxsg3hoeg [ 1 ] = cuhiq2he3xv
. m0tb3cmvqc [ 1 ] ; } if ( ssIsSampleHit ( rtS , 4 , 0 ) ) { giqt2tul5wr .
liwdzlex20 = 1 ; cuhiq2he3xv . map0t5ix2o [ 0 ] = giqt2tul5wr . gyxsg3hoeg [
0 ] ; cuhiq2he3xv . map0t5ix2o [ 1 ] = giqt2tul5wr . gyxsg3hoeg [ 1 ] ;
giqt2tul5wr . liwdzlex20 = 0 ; } cuhiq2he3xv . fkf3rt5vqk = konn1m5pjf .
radstoRPM_Gain * cuhiq2he3xv . f32ubspqi4 ; if ( ssIsSampleHit ( rtS , 1 , 0
) ) { if ( giqt2tul5wr . fumd4zvnkk == 0 ) { giqt2tul5wr . cl5jwb0b3t =
cuhiq2he3xv . fkf3rt5vqk ; } if ( giqt2tul5wr . hgwywptnzf == 0 ) {
giqt2tul5wr . jayy2p4zdf = cuhiq2he3xv . bht55s5qq3 ; } } if ( ssIsSampleHit
( rtS , 4 , 0 ) ) { giqt2tul5wr . fumd4zvnkk = 1 ; cuhiq2he3xv . iqvbtbayt4 =
giqt2tul5wr . cl5jwb0b3t ; giqt2tul5wr . fumd4zvnkk = 0 ; giqt2tul5wr .
hgwywptnzf = 1 ; cuhiq2he3xv . g33we1ojyj = giqt2tul5wr . jayy2p4zdf ;
giqt2tul5wr . hgwywptnzf = 0 ; } cuhiq2he3xv . aam4cx4xp2 = 0.0 ; cuhiq2he3xv
. aam4cx4xp2 += konn1m5pjf . BatteryDischargeDynamics_C * i344fcmwfc1 .
g14mueghy3 ; BattEv ( & ( giqt2tul5wr . isvmsyyglk . rtm ) , & cuhiq2he3xv .
aam4cx4xp2 , & konn1m5pjf . Constant6_Value , & cuhiq2he3xv . gt2syxhd4c , &
cuhiq2he3xv . lxuceqt2ja , & ( giqt2tul5wr . isvmsyyglk . rtb ) , & (
giqt2tul5wr . isvmsyyglk . rtdw ) , & ( i344fcmwfc1 . nq1lsnuhqu ) ) ; if (
ssIsSampleHit ( rtS , 1 , 0 ) && ( giqt2tul5wr . l3wo0yhou2 == 0 ) ) {
giqt2tul5wr . cvspgr5it1 = cuhiq2he3xv . gt2syxhd4c ; } if ( ssIsSampleHit (
rtS , 4 , 0 ) ) { giqt2tul5wr . l3wo0yhou2 = 1 ; cuhiq2he3xv . f3xfryzo45 =
giqt2tul5wr . cvspgr5it1 ; giqt2tul5wr . l3wo0yhou2 = 0 ; } if (
ssIsSampleHit ( rtS , 2 , 0 ) ) { cuhiq2he3xv . i23fozl0mw = giqt2tul5wr .
mntoorellr [ giqt2tul5wr . jfct23tlbn ] ; } MotGenEvDynamic ( & ( giqt2tul5wr
. ag4bz0o52w . rtm ) , & cuhiq2he3xv . i23fozl0mw , & cuhiq2he3xv .
f32ubspqi4 , & cuhiq2he3xv . lxuceqt2ja , & cuhiq2he3xv . jxekas3gp2 , &
cuhiq2he3xv . h5wul2xtfx , & ( giqt2tul5wr . ag4bz0o52w . rtb ) , & (
giqt2tul5wr . ag4bz0o52w . rtdw ) , & ( i344fcmwfc1 . bxhmcfdguc ) ) ; if (
ssIsSampleHit ( rtS , 1 , 0 ) && ( giqt2tul5wr . mwgqdelv1f == 0 ) ) {
giqt2tul5wr . jsjjbflcse = cuhiq2he3xv . h5wul2xtfx ; } if ( ssIsSampleHit (
rtS , 4 , 0 ) ) { giqt2tul5wr . mwgqdelv1f = 1 ; cuhiq2he3xv . lwwxzl5qzf =
giqt2tul5wr . jsjjbflcse ; giqt2tul5wr . mwgqdelv1f = 0 ; } cuhiq2he3xv .
iojh51uf0y = i344fcmwfc1 . p1updjpzin ; cuhiq2he3xv . eqrqll4gp5 =
i344fcmwfc1 . p43idzm3kd ; cuhiq2he3xv . hshnxf4vn0 = konn1m5pjf .
m3toUSGal_Gain * cuhiq2he3xv . eqrqll4gp5 ; if ( ssIsMajorTimeStep ( rtS ) )
{ giqt2tul5wr . k2ai2ikwjg = cuhiq2he3xv . hshnxf4vn0 >= konn1m5pjf .
Saturation1_UpperSat ? 1 : cuhiq2he3xv . hshnxf4vn0 > konn1m5pjf .
Saturation1_LowerSat ? 0 : - 1 ; } cuhiq2he3xv . lcipcfvg1x = konn1m5pjf .
mtomile_Gain * cuhiq2he3xv . iojh51uf0y / ( giqt2tul5wr . k2ai2ikwjg == 1 ?
konn1m5pjf . Saturation1_UpperSat : giqt2tul5wr . k2ai2ikwjg == - 1 ?
konn1m5pjf . Saturation1_LowerSat : cuhiq2he3xv . hshnxf4vn0 ) ; if (
ssIsSampleHit ( rtS , 1 , 0 ) && ( giqt2tul5wr . kltct411us == 0 ) ) {
giqt2tul5wr . dzxddx5cen = cuhiq2he3xv . lcipcfvg1x ; } if ( ssIsSampleHit (
rtS , 4 , 0 ) ) { giqt2tul5wr . kltct411us = 1 ; cuhiq2he3xv . p53k4c5eze =
giqt2tul5wr . dzxddx5cen ; giqt2tul5wr . kltct411us = 0 ; } cuhiq2he3xv .
mfbcndbdnw = cuhiq2he3xv . lxuceqt2ja * cuhiq2he3xv . h5wul2xtfx ;
cuhiq2he3xv . cxitkzrhmf = cuhiq2he3xv . mfbcndbdnw / konn1m5pjf .
wperkw_Value ; cuhiq2he3xv . hvrssnnlxd = cuhiq2he3xv . cxitkzrhmf /
konn1m5pjf . USEPAkwhUSgalequivalent_Value ; cuhiq2he3xv . pdyyylm0jj =
cuhiq2he3xv . hvrssnnlxd / konn1m5pjf . sperh_Value ; cuhiq2he3xv .
igi0euk0rx = cuhiq2he3xv . lrkperxqkh * cuhiq2he3xv . lrkperxqkh ;
cuhiq2he3xv . jznbtj1tyh = konn1m5pjf . mto100Km_Gain * cuhiq2he3xv .
iojh51uf0y ; if ( ssIsMajorTimeStep ( rtS ) ) { giqt2tul5wr . njnayzb45j =
cuhiq2he3xv . jznbtj1tyh >= konn1m5pjf . Saturation_UpperSat ? 1 :
cuhiq2he3xv . jznbtj1tyh > konn1m5pjf . Saturation_LowerSat ? 0 : - 1 ; if (
giqt2tul5wr . osl3qr4gmy != 0 ) { ssSetBlockStateForSolverChangedAtMajorStep
( rtS ) ; giqt2tul5wr . osl3qr4gmy = 0 ; } cuhiq2he3xv . jhfdxylvg0 =
muDoubleScalarSqrt ( cuhiq2he3xv . igi0euk0rx ) ; } else { if ( cuhiq2he3xv .
igi0euk0rx < 0.0 ) { cuhiq2he3xv . jhfdxylvg0 = - muDoubleScalarSqrt (
muDoubleScalarAbs ( cuhiq2he3xv . igi0euk0rx ) ) ; } else { cuhiq2he3xv .
jhfdxylvg0 = muDoubleScalarSqrt ( cuhiq2he3xv . igi0euk0rx ) ; } if (
cuhiq2he3xv . igi0euk0rx < 0.0 ) { giqt2tul5wr . osl3qr4gmy = 1 ; } }
cuhiq2he3xv . glcchrtl4h = konn1m5pjf . m3pergal_Gain * cuhiq2he3xv .
pdyyylm0jj ; cuhiq2he3xv . kmsp0cd1e1 = i344fcmwfc1 . piwaeu0cyd ;
cuhiq2he3xv . fvfcqphwub = cuhiq2he3xv . kmsp0cd1e1 - cuhiq2he3xv .
imnt2v1zkq ; if ( cuhiq2he3xv . fjngm2jfcz ) { bcl1b5rt4n = 0.0 ; } else if (
cuhiq2he3xv . fvfcqphwub > konn1m5pjf . u1_UpperSat ) { bcl1b5rt4n =
konn1m5pjf . u1_UpperSat ; } else if ( cuhiq2he3xv . fvfcqphwub < konn1m5pjf
. u1_LowerSat ) { bcl1b5rt4n = konn1m5pjf . u1_LowerSat ; } else { bcl1b5rt4n
= cuhiq2he3xv . fvfcqphwub ; } if ( ssIsSampleHit ( rtS , 1 , 0 ) &&
ssIsMajorTimeStep ( rtS ) ) { if ( cuhiq2he3xv . ide52jc1xl ) { if ( !
giqt2tul5wr . mc3fhmonso ) { if ( ssGetTaskTime ( rtS , 1 ) != ssGetTStart (
rtS ) ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } giqt2tul5wr
. mc3fhmonso = true ; } } else { if ( giqt2tul5wr . mc3fhmonso ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; giqt2tul5wr . mc3fhmonso
= false ; } } } if ( giqt2tul5wr . mc3fhmonso ) { cuhiq2he3xv . bd2ndavyho =
bcl1b5rt4n ; if ( ssIsMajorTimeStep ( rtS ) ) { srUpdateBC ( giqt2tul5wr .
iqmyanxtr1 ) ; } } if ( cuhiq2he3xv . bd2ndavyho > konn1m5pjf .
Saturation_UpperSat_ejlhkaxvm3 ) { cuhiq2he3xv . akt4wnhg4a = konn1m5pjf .
Saturation_UpperSat_ejlhkaxvm3 ; } else if ( cuhiq2he3xv . bd2ndavyho <
konn1m5pjf . Saturation_LowerSat_jq5vbx40o3 ) { cuhiq2he3xv . akt4wnhg4a =
konn1m5pjf . Saturation_LowerSat_jq5vbx40o3 ; } else { cuhiq2he3xv .
akt4wnhg4a = cuhiq2he3xv . bd2ndavyho ; } if ( cuhiq2he3xv . by2opoctqb ) {
bcl1b5rt4n = 0.0 ; } else if ( cuhiq2he3xv . fvfcqphwub > konn1m5pjf .
u0_UpperSat ) { bcl1b5rt4n = - konn1m5pjf . u0_UpperSat ; } else if (
cuhiq2he3xv . fvfcqphwub < konn1m5pjf . u0_LowerSat ) { bcl1b5rt4n = -
konn1m5pjf . u0_LowerSat ; } else { bcl1b5rt4n = - cuhiq2he3xv . fvfcqphwub ;
} if ( ssIsSampleHit ( rtS , 1 , 0 ) && ssIsMajorTimeStep ( rtS ) ) { if (
cuhiq2he3xv . h4vbxbl4u1 ) { if ( ! giqt2tul5wr . j32evmbeac ) { if (
ssGetTaskTime ( rtS , 1 ) != ssGetTStart ( rtS ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } giqt2tul5wr .
j32evmbeac = true ; } } else { if ( giqt2tul5wr . j32evmbeac ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; giqt2tul5wr . j32evmbeac
= false ; } } } if ( giqt2tul5wr . j32evmbeac ) { cuhiq2he3xv . hdwnkycvte =
bcl1b5rt4n ; if ( ssIsMajorTimeStep ( rtS ) ) { srUpdateBC ( giqt2tul5wr .
jt1cbcvoyd ) ; } } if ( cuhiq2he3xv . hdwnkycvte > konn1m5pjf .
Saturation_UpperSat_n5cfzewtp3 ) { cuhiq2he3xv . dju2bvbvhc = konn1m5pjf .
Saturation_UpperSat_n5cfzewtp3 ; } else if ( cuhiq2he3xv . hdwnkycvte <
konn1m5pjf . Saturation_LowerSat_jdvecoiqp4 ) { cuhiq2he3xv . dju2bvbvhc =
konn1m5pjf . Saturation_LowerSat_jdvecoiqp4 ; } else { cuhiq2he3xv .
dju2bvbvhc = cuhiq2he3xv . hdwnkycvte ; } if ( ssIsSampleHit ( rtS , 1 , 0 )
) { giqt2tul5wr . kr24afjbvy = ssGetTaskTime ( rtS , 1 ) ; giqt2tul5wr .
mgyqdv05fz = giqt2tul5wr . kr24afjbvy - giqt2tul5wr . hvilkifux1 ;
giqt2tul5wr . hvilkifux1 = giqt2tul5wr . kr24afjbvy ; giqt2tul5wr .
ipsejbdjkv += giqt2tul5wr . mgyqdv05fz ; giqt2tul5wr . j5l3uscjdf = - 1 ; if
( giqt2tul5wr . cjbl1xx1vv == 0U ) { giqt2tul5wr . cjbl1xx1vv = 1U ;
giqt2tul5wr . o23aklsczm = 1U ; cuhiq2he3xv . o5bbi4nmva = konn1m5pjf .
LongitudinalDriverModel_GearInit ; giqt2tul5wr . iaae4xgy2r = konn1m5pjf .
LongitudinalDriverModel_GearInit ; if ( konn1m5pjf .
LongitudinalDriverModel_GearInit < 0.0 ) { giqt2tul5wr . kn3tgruv1d =
lnwe4uhdes ; giqt2tul5wr . ipsejbdjkv = 0.0 ; cuhiq2he3xv . o5bbi4nmva = -
1.0 ; } else if ( konn1m5pjf . LongitudinalDriverModel_GearInit == 0.0 ) {
giqt2tul5wr . kn3tgruv1d = h3kbp2fw34 ; giqt2tul5wr . ipsejbdjkv = 0.0 ;
cuhiq2he3xv . o5bbi4nmva = 0.0 ; } else { giqt2tul5wr . kn3tgruv1d =
lgbggzlwgj ; giqt2tul5wr . ipsejbdjkv = 0.0 ; } } else { switch ( giqt2tul5wr
. kn3tgruv1d ) { case h3kbp2fw34 : if ( ( ( ssGetTaskTime ( rtS , 1 ) -
giqt2tul5wr . hvilkifux1 ) + giqt2tul5wr . ipsejbdjkv >= konn1m5pjf .
LongitudinalDriverModel_tShift ) && ( ( cuhiq2he3xv . cwygjkza2r > 0.0 ) && (
cuhiq2he3xv . akt4wnhg4a > 0.0 ) ) ) { giqt2tul5wr . iaae4xgy2r ++ ;
giqt2tul5wr . kn3tgruv1d = lgbggzlwgj ; giqt2tul5wr . ipsejbdjkv = 0.0 ;
cuhiq2he3xv . o5bbi4nmva = giqt2tul5wr . iaae4xgy2r ; } else { if ( ( (
ssGetTaskTime ( rtS , 1 ) - giqt2tul5wr . hvilkifux1 ) + giqt2tul5wr .
ipsejbdjkv >= konn1m5pjf . LongitudinalDriverModel_tShift ) && ( cuhiq2he3xv
. cwygjkza2r < 0.0 ) ) { giqt2tul5wr . iaae4xgy2r -- ; giqt2tul5wr .
kn3tgruv1d = lnwe4uhdes ; giqt2tul5wr . ipsejbdjkv = 0.0 ; cuhiq2he3xv .
o5bbi4nmva = - 1.0 ; } } break ; case lgbggzlwgj : if ( ( ( ssGetTaskTime (
rtS , 1 ) - giqt2tul5wr . hvilkifux1 ) + giqt2tul5wr . ipsejbdjkv >=
konn1m5pjf . LongitudinalDriverModel_tShift ) && ( ( ( cuhiq2he3xv .
dju2bvbvhc >= 0.0 ) && ( cuhiq2he3xv . lrkperxqkh <= 0.0 ) && ( cuhiq2he3xv .
akt4wnhg4a <= 0.0 ) ) || ( cuhiq2he3xv . cwygjkza2r <= 0.0 ) ) ) {
giqt2tul5wr . iaae4xgy2r -- ; giqt2tul5wr . kn3tgruv1d = h3kbp2fw34 ;
giqt2tul5wr . ipsejbdjkv = 0.0 ; cuhiq2he3xv . o5bbi4nmva = 0.0 ; } break ;
default : if ( ( ( ssGetTaskTime ( rtS , 1 ) - giqt2tul5wr . hvilkifux1 ) +
giqt2tul5wr . ipsejbdjkv >= konn1m5pjf . LongitudinalDriverModel_tShift ) &&
( cuhiq2he3xv . cwygjkza2r >= 0.0 ) ) { giqt2tul5wr . iaae4xgy2r ++ ;
giqt2tul5wr . kn3tgruv1d = h3kbp2fw34 ; giqt2tul5wr . ipsejbdjkv = 0.0 ;
cuhiq2he3xv . o5bbi4nmva = 0.0 ; } break ; } } cuhiq2he3xv . l3da1b0tbm = (
cuhiq2he3xv . o5bbi4nmva > konn1m5pjf . Constant_Value_nhp3htkj21 ) ; } if (
( cuhiq2he3xv . cwygjkza2r != konn1m5pjf . Constant_Value ) && cuhiq2he3xv .
l3da1b0tbm ) { if ( cuhiq2he3xv . o5bbi4nmva != 0.0 ) { cuhiq2he3xv .
ab4upgrnrw [ 0 ] = cuhiq2he3xv . akt4wnhg4a ; } else { cuhiq2he3xv .
ab4upgrnrw [ 0 ] = konn1m5pjf . Constant1_Value ; } cuhiq2he3xv . ab4upgrnrw
[ 1 ] = cuhiq2he3xv . dju2bvbvhc ; } else if ( cuhiq2he3xv . o5bbi4nmva !=
0.0 ) { cuhiq2he3xv . ab4upgrnrw [ 0 ] = cuhiq2he3xv . dju2bvbvhc ;
cuhiq2he3xv . ab4upgrnrw [ 1 ] = cuhiq2he3xv . akt4wnhg4a ; } else {
cuhiq2he3xv . ab4upgrnrw [ 0 ] = konn1m5pjf . Constant_Value_fb5mg350bv ;
cuhiq2he3xv . ab4upgrnrw [ 1 ] = muDoubleScalarMax ( cuhiq2he3xv . dju2bvbvhc
, cuhiq2he3xv . akt4wnhg4a ) ; } if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { if (
giqt2tul5wr . im4sg3gugq == 0 ) { giqt2tul5wr . ie0iddjxra = cuhiq2he3xv .
ab4upgrnrw [ 0 ] ; } if ( giqt2tul5wr . fde5kmnnd2 == 0 ) { giqt2tul5wr .
cj4gapd3fs = cuhiq2he3xv . ab4upgrnrw [ 1 ] ; } } if ( ssIsSampleHit ( rtS ,
3 , 0 ) ) { giqt2tul5wr . im4sg3gugq = 1 ; cuhiq2he3xv . pkdo1hmzxy =
giqt2tul5wr . ie0iddjxra ; giqt2tul5wr . im4sg3gugq = 0 ; } if (
ssIsSampleHit ( rtS , 1 , 0 ) && ( giqt2tul5wr . jkb4mvplww == 0 ) ) {
giqt2tul5wr . okzsrfvbia = cuhiq2he3xv . lrkperxqkh ; } if ( ssIsSampleHit (
rtS , 3 , 0 ) ) { giqt2tul5wr . fde5kmnnd2 = 1 ; cuhiq2he3xv . ndktxclyhy =
giqt2tul5wr . cj4gapd3fs ; giqt2tul5wr . fde5kmnnd2 = 0 ; } if (
ssIsSampleHit ( rtS , 1 , 0 ) && ( giqt2tul5wr . idncfbsifc == 0 ) ) {
giqt2tul5wr . fdvg1z1mda = cuhiq2he3xv . gt2syxhd4c ; } if ( ssIsSampleHit (
rtS , 3 , 0 ) ) { giqt2tul5wr . jkb4mvplww = 1 ; cuhiq2he3xv . o1kmrtruhq =
giqt2tul5wr . okzsrfvbia ; giqt2tul5wr . jkb4mvplww = 0 ; } if (
ssIsSampleHit ( rtS , 1 , 0 ) && ( giqt2tul5wr . ogx3kqoxnw == 0 ) ) {
giqt2tul5wr . lqnixiqshl = cuhiq2he3xv . mfbcndbdnw ; } if ( ssIsSampleHit (
rtS , 3 , 0 ) ) { giqt2tul5wr . idncfbsifc = 1 ; cuhiq2he3xv . kun3jdfvr3 =
giqt2tul5wr . fdvg1z1mda ; giqt2tul5wr . idncfbsifc = 0 ; } if (
ssIsSampleHit ( rtS , 1 , 0 ) && ( giqt2tul5wr . fcscllrj1v == 0 ) ) {
giqt2tul5wr . maq5mhfrmp = cuhiq2he3xv . h5wul2xtfx ; } if ( ssIsSampleHit (
rtS , 3 , 0 ) ) { giqt2tul5wr . ogx3kqoxnw = 1 ; cuhiq2he3xv . ohau2brkru =
giqt2tul5wr . lqnixiqshl ; giqt2tul5wr . ogx3kqoxnw = 0 ; } if (
ssIsSampleHit ( rtS , 1 , 0 ) && ( giqt2tul5wr . ade3ahyo1e == 0 ) ) {
giqt2tul5wr . ahhxtrgluu = cuhiq2he3xv . f32ubspqi4 ; } if ( ssIsSampleHit (
rtS , 3 , 0 ) ) { giqt2tul5wr . fcscllrj1v = 1 ; cuhiq2he3xv . bxvt3tt5d3 =
giqt2tul5wr . maq5mhfrmp ; giqt2tul5wr . fcscllrj1v = 0 ; giqt2tul5wr .
ade3ahyo1e = 1 ; cuhiq2he3xv . o0nvkut2oz = giqt2tul5wr . ahhxtrgluu ;
giqt2tul5wr . ade3ahyo1e = 0 ; EvPowertrainController ( & cuhiq2he3xv .
pkdo1hmzxy , & cuhiq2he3xv . ndktxclyhy , & cuhiq2he3xv . o1kmrtruhq , &
cuhiq2he3xv . kun3jdfvr3 , & cuhiq2he3xv . o0nvkut2oz , & cuhiq2he3xv .
oigt4h5oa0 , & cuhiq2he3xv . eaez13ma04 , & ( giqt2tul5wr . ekun4ztdyk . rtb
) ) ; } if ( ssIsSampleHit ( rtS , 5 , 0 ) ) { cuhiq2he3xv . ncqjwkf1sm =
ssGetTaskTime ( rtS , 5 ) ; } cuhiq2he3xv . ft3zshehfj = cbv1b3vtl5 -
cuhiq2he3xv . ncqjwkf1sm ; cbv1b3vtl5 = muDoubleScalarAbs ( cuhiq2he3xv .
lrkperxqkh ) ; iy = 0 ; if ( cbv1b3vtl5 < 0.001 ) { iy = 1 ; } if ( 0 <= iy -
1 ) { z_data = cbv1b3vtl5 / 0.001 ; } if ( 0 <= iy - 1 ) { z1_data = z_data ;
} if ( 0 <= iy - 1 ) { z1_data = z_data * z_data ; } iy -- ; for ( i = 0 ; i
<= iy ; i ++ ) { z1_data = 0.002 / ( 3.0 - z1_data ) ; } if ( cbv1b3vtl5 <
0.001 ) { cbv1b3vtl5 = z1_data ; } iy = 0 ; if ( cuhiq2he3xv . lrkperxqkh <
0.0 ) { iy = 1 ; } if ( 0 <= iy - 1 ) { z_data = - cbv1b3vtl5 ; } bcl1b5rt4n
= cbv1b3vtl5 ; if ( cuhiq2he3xv . lrkperxqkh < 0.0 ) { bcl1b5rt4n = z_data ;
} if ( cbv1b3vtl5 > 5.0 ) { cbv1b3vtl5 = muDoubleScalarMax (
muDoubleScalarMin ( konn1m5pjf . LongitudinalDriverModel_tau , konn1m5pjf .
LongitudinalDriverModel_L / cbv1b3vtl5 ) , 0.001 ) ; } else { cbv1b3vtl5 =
konn1m5pjf . LongitudinalDriverModel_tau ; } dxbnvj4sno [ 0 ] = 0.0 ;
dxbnvj4sno [ 2 ] = 1.0 ; dxbnvj4sno [ 1 ] = - ( ( konn1m5pjf .
LongitudinalDriverModel_aR / bcl1b5rt4n + konn1m5pjf .
LongitudinalDriverModel_cR * cuhiq2he3xv . lrkperxqkh ) * muDoubleScalarTanh
( cuhiq2he3xv . lrkperxqkh ) + konn1m5pjf . LongitudinalDriverModel_bR ) /
konn1m5pjf . LongitudinalDriverModel_m ; dxbnvj4sno [ 3 ] = 0.0 ;
hahkbmlkjo_idx_1 = konn1m5pjf . LongitudinalDriverModel_Kpt / konn1m5pjf .
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
) * hahkbmlkjo_idx_1 ; fr2hjxs0ne [ 0 ] = 0.0 ; fr2hjxs0ne [ 1 ] = dxbnvj4sno
[ 1 ] * 0.001 ; fr2hjxs0ne [ 2 ] = 0.001 ; fr2hjxs0ne [ 3 ] = 0.0 ;
expm_fk22GNna ( fr2hjxs0ne , sigmaA ) ; fr2hjxs0ne [ 0 ] = 0.0 ; fr2hjxs0ne [
1 ] = dxbnvj4sno [ 1 ] * 0.0 ; fr2hjxs0ne [ 2 ] = 0.0 ; fr2hjxs0ne [ 3 ] =
0.0 ; expm_fk22GNna ( fr2hjxs0ne , b_I ) ; fr2hjxs0ne [ 0 ] = 0.0 ;
fr2hjxs0ne [ 1 ] = dxbnvj4sno [ 1 ] * 0.001 ; fr2hjxs0ne [ 2 ] = 0.001 ;
fr2hjxs0ne [ 3 ] = 0.0 ; expm_fk22GNna ( fr2hjxs0ne , dxbnvj4sno ) ;
cuhiq2he3xv . ceif11edac = ( ( ( b_I [ 0 ] * 0.0 + b_I [ 2 ] *
hahkbmlkjo_idx_1 ) + ( dxbnvj4sno [ 0 ] * 0.0 + dxbnvj4sno [ 2 ] *
hahkbmlkjo_idx_1 ) ) / 2.0 * 0.001 * cuhiq2he3xv . fvfcqphwub + ( sigmaA [ 0
] * cuhiq2he3xv . lrkperxqkh + sigmaA [ 2 ] * 0.0 ) ) * ( ( sigmaB_idx_0 +
1.0 ) + sigmaB_idx_1 ) + ( ( ( b_I [ 1 ] * 0.0 + b_I [ 3 ] * hahkbmlkjo_idx_1
) + ( dxbnvj4sno [ 1 ] * 0.0 + dxbnvj4sno [ 3 ] * hahkbmlkjo_idx_1 ) ) / 2.0
* 0.001 * cuhiq2he3xv . fvfcqphwub + ( sigmaA [ 1 ] * cuhiq2he3xv .
lrkperxqkh + sigmaA [ 3 ] * 0.0 ) ) * ( ( sigmaB_idx_3 + 1.0 ) + sigmaB_idx_2
) ; cuhiq2he3xv . b0xsyyulsa = cuhiq2he3xv . fvfcqphwub * cbv1b3vtl5 ;
cuhiq2he3xv . jcja03y2ta = cuhiq2he3xv . ceif11edac + cuhiq2he3xv .
b0xsyyulsa ; cuhiq2he3xv . eyxsiaqd30 = cuhiq2he3xv . cwygjkza2r -
cuhiq2he3xv . jcja03y2ta ; cuhiq2he3xv . klgwp0bl1e = cuhiq2he3xv .
eyxsiaqd30 / cbv1b3vtl5 ; cuhiq2he3xv . hyeok2w0lk = cuhiq2he3xv . klgwp0bl1e
+ cuhiq2he3xv . kmsp0cd1e1 ; cuhiq2he3xv . as3zb4xmb3 = cuhiq2he3xv .
hyeok2w0lk - cuhiq2he3xv . kmsp0cd1e1 ; cuhiq2he3xv . nxipfqo4ge = 1.0 /
konn1m5pjf . LongitudinalDriverModel_tau * 3.1415926535897931 * 2.0 *
cuhiq2he3xv . as3zb4xmb3 ; cuhiq2he3xv . bgyxx3obeb = cuhiq2he3xv .
cwygjkza2r - cuhiq2he3xv . lrkperxqkh ; cuhiq2he3xv . mapbxuiz5v =
cuhiq2he3xv . bgyxx3obeb * cuhiq2he3xv . bgyxx3obeb ; if ( ssIsSampleHit (
rtS , 2 , 0 ) ) { cuhiq2he3xv . kyoewhwiba [ 0 ] = giqt2tul5wr . l4pn2msb3d [
0 ] ; cuhiq2he3xv . kyoewhwiba [ 1 ] = giqt2tul5wr . l4pn2msb3d [ 1 ] ; } if
( cuhiq2he3xv . bgyxx3obeb > cuhiq2he3xv . kyoewhwiba [ 0 ] ) { cuhiq2he3xv .
kj51ocjbc3 [ 0 ] = cuhiq2he3xv . bgyxx3obeb ; } else { cuhiq2he3xv .
kj51ocjbc3 [ 0 ] = cuhiq2he3xv . kyoewhwiba [ 0 ] ; } if ( cuhiq2he3xv .
bgyxx3obeb < cuhiq2he3xv . kyoewhwiba [ 1 ] ) { cuhiq2he3xv . kj51ocjbc3 [ 1
] = cuhiq2he3xv . bgyxx3obeb ; } else { cuhiq2he3xv . kj51ocjbc3 [ 1 ] =
cuhiq2he3xv . kyoewhwiba [ 1 ] ; } if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { {
if ( ( giqt2tul5wr . pvlwtgcy5f . AQHandles || giqt2tul5wr . pvlwtgcy5f .
SlioLTF ) && ssGetLogOutput ( rtS ) ) { sdiSlioSdiWriteSignal ( giqt2tul5wr .
pvlwtgcy5f . AQHandles , giqt2tul5wr . pvlwtgcy5f . SlioLTF , 0 ,
ssGetTaskTime ( rtS , 1 ) , ( char * ) & cuhiq2he3xv . bht55s5qq3 + 0 ) ; } }
} UNUSED_PARAMETER ( tid ) ; } void MdlOutputsTID6 ( int_T tid ) {
EvPowertrainControllerTID1 ( & ( giqt2tul5wr . ekun4ztdyk . rtb ) ) ;
cuhiq2he3xv . fjngm2jfcz = false ; cuhiq2he3xv . ide52jc1xl = true ;
cuhiq2he3xv . by2opoctqb = false ; cuhiq2he3xv . h4vbxbl4u1 = true ;
cuhiq2he3xv . imnt2v1zkq = konn1m5pjf . LongitudinalDriverModel_g *
konn1m5pjf . LongitudinalDriverModel_m * konn1m5pjf .
LongitudinalDriverModel_m / konn1m5pjf . LongitudinalDriverModel_Kpt * 0.0 ;
DrivetrainEvTID2 ( & ( giqt2tul5wr . igqkoslatl . rtb ) ) ; BattEvTID1 ( & (
giqt2tul5wr . isvmsyyglk . rtb ) ) ; MotGenEvDynamicTID3 ( & ( giqt2tul5wr .
ag4bz0o52w . rtm ) , & ( giqt2tul5wr . ag4bz0o52w . rtb ) , & ( giqt2tul5wr .
ag4bz0o52w . rtdw ) ) ; UNUSED_PARAMETER ( tid ) ; } void MdlUpdate ( int_T
tid ) { if ( ssIsSampleHit ( rtS , 3 , 0 ) ) { giqt2tul5wr . inuzqqxqnu [
giqt2tul5wr . fryzyq5tfx == 0 ] = cuhiq2he3xv . eaez13ma04 ; giqt2tul5wr .
fryzyq5tfx = ( int8_T ) ( giqt2tul5wr . fryzyq5tfx == 0 ) ; } ekz3w3o33e ( &
( giqt2tul5wr . igqkoslatl . rtm ) , & ( giqt2tul5wr . igqkoslatl . rtdw ) )
; c0hgp3wnut ( & ( giqt2tul5wr . isvmsyyglk . rtm ) , & ( giqt2tul5wr .
isvmsyyglk . rtb ) , & ( giqt2tul5wr . isvmsyyglk . rtdw ) , & ( i344fcmwfc1
. nq1lsnuhqu ) ) ; if ( ssIsSampleHit ( rtS , 3 , 0 ) ) { giqt2tul5wr .
mntoorellr [ giqt2tul5wr . jfct23tlbn == 0 ] = cuhiq2he3xv . oigt4h5oa0 ;
giqt2tul5wr . jfct23tlbn = ( int8_T ) ( giqt2tul5wr . jfct23tlbn == 0 ) ; }
lwglwij1vj ( & ( giqt2tul5wr . ag4bz0o52w . rtm ) , & ( giqt2tul5wr .
ag4bz0o52w . rtb ) , & ( giqt2tul5wr . ag4bz0o52w . rtdw ) , & ( i344fcmwfc1
. bxhmcfdguc ) ) ; if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { giqt2tul5wr .
l4pn2msb3d [ 0 ] = cuhiq2he3xv . kj51ocjbc3 [ 0 ] ; giqt2tul5wr . l4pn2msb3d
[ 1 ] = cuhiq2he3xv . kj51ocjbc3 [ 1 ] ; } UNUSED_PARAMETER ( tid ) ; } void
MdlUpdateTID6 ( int_T tid ) { UNUSED_PARAMETER ( tid ) ; } void
MdlDerivatives ( void ) { jtt2nejjv2 * _rtXdot ; _rtXdot = ( ( jtt2nejjv2 * )
ssGetdX ( rtS ) ) ; _rtXdot -> deyyyt5ypg = 0.0 ; _rtXdot -> deyyyt5ypg +=
konn1m5pjf . MotorCouplingDynamics_A * i344fcmwfc1 . deyyyt5ypg ; _rtXdot ->
deyyyt5ypg += cuhiq2he3xv . jxekas3gp2 ; a2spfqi5as ( & ( giqt2tul5wr .
igqkoslatl . rtb ) , & ( giqt2tul5wr . igqkoslatl . rtdw ) , & ( i344fcmwfc1
. d5katehawv ) , & ( ( ( jtt2nejjv2 * ) ssGetdX ( rtS ) ) -> d5katehawv ) ) ;
_rtXdot -> g14mueghy3 = 0.0 ; _rtXdot -> g14mueghy3 += konn1m5pjf .
BatteryDischargeDynamics_A * i344fcmwfc1 . g14mueghy3 ; _rtXdot -> g14mueghy3
+= cuhiq2he3xv . h5wul2xtfx ; pexk2pi1gg ( & ( giqt2tul5wr . isvmsyyglk . rtb
) , & ( giqt2tul5wr . isvmsyyglk . rtdw ) , & ( ( ( esngraya3x * )
ssGetContStateDisabled ( rtS ) ) -> nq1lsnuhqu ) , & ( ( ( jtt2nejjv2 * )
ssGetdX ( rtS ) ) -> nq1lsnuhqu ) ) ; mfy1r3luh1 ( & cuhiq2he3xv . f32ubspqi4
, & ( giqt2tul5wr . ag4bz0o52w . rtb ) , & ( giqt2tul5wr . ag4bz0o52w . rtdw
) , & ( ( ( esngraya3x * ) ssGetContStateDisabled ( rtS ) ) -> bxhmcfdguc ) ,
& ( ( ( jtt2nejjv2 * ) ssGetdX ( rtS ) ) -> bxhmcfdguc ) ) ; _rtXdot ->
p1updjpzin = cuhiq2he3xv . jhfdxylvg0 ; _rtXdot -> p43idzm3kd = cuhiq2he3xv .
glcchrtl4h ; _rtXdot -> piwaeu0cyd = cuhiq2he3xv . nxipfqo4ge ; _rtXdot ->
niplvsv1th = cuhiq2he3xv . mapbxuiz5v ; } void MdlProjection ( void ) { }
void MdlZeroCrossings ( void ) { bg4wxy5yyz * _rtZCSV ; _rtZCSV = ( (
bg4wxy5yyz * ) ssGetSolverZcSignalVector ( rtS ) ) ; ehifyxeeav ( & (
giqt2tul5wr . igqkoslatl . rtm ) , & ( giqt2tul5wr . igqkoslatl . rtb ) , & (
giqt2tul5wr . igqkoslatl . rtdw ) , & ( ( ( bg4wxy5yyz * )
ssGetSolverZcSignalVector ( rtS ) ) -> jjd2t5uxgu ) ) ; d3sayc4aih ( & (
giqt2tul5wr . isvmsyyglk . rtb ) , & ( giqt2tul5wr . isvmsyyglk . rtdw ) , &
( i344fcmwfc1 . nq1lsnuhqu ) , & ( ( ( bg4wxy5yyz * )
ssGetSolverZcSignalVector ( rtS ) ) -> o2abdn4orc ) ) ; cmnf4xtkyp ( &
cuhiq2he3xv . lxuceqt2ja , & ( giqt2tul5wr . ag4bz0o52w . rtb ) , & (
giqt2tul5wr . ag4bz0o52w . rtdw ) , & ( i344fcmwfc1 . bxhmcfdguc ) , & ( ( (
bg4wxy5yyz * ) ssGetSolverZcSignalVector ( rtS ) ) -> bltnbiihzx ) ) ;
_rtZCSV -> knufuedcrt = cuhiq2he3xv . hshnxf4vn0 - konn1m5pjf .
Saturation1_UpperSat ; _rtZCSV -> fzw1exnxx4 = cuhiq2he3xv . hshnxf4vn0 -
konn1m5pjf . Saturation1_LowerSat ; _rtZCSV -> hzqdwglwsv = cuhiq2he3xv .
jznbtj1tyh - konn1m5pjf . Saturation_UpperSat ; _rtZCSV -> jurapz30jr =
cuhiq2he3xv . jznbtj1tyh - konn1m5pjf . Saturation_LowerSat ; _rtZCSV ->
bog1ebbuhh = cuhiq2he3xv . ft3zshehfj - konn1m5pjf . HitCrossing_Offset ; }
void MdlTerminate ( void ) { lktaxgo5iz ( & ( giqt2tul5wr . ekun4ztdyk . rtm
) ) ; ekywbf3nku ( & ( giqt2tul5wr . igqkoslatl . rtm ) ) ; m5uwyjpoin ( & (
giqt2tul5wr . isvmsyyglk . rtm ) ) ; kh5ykjtmv0 ( & ( giqt2tul5wr .
ag4bz0o52w . rtm ) ) ; cmuw0kqmoe ( & ( giqt2tul5wr . igqkoslatl . rtm ) , &
( giqt2tul5wr . igqkoslatl . rtdw ) ) ; dk15ta1msh ( & ( giqt2tul5wr .
ag4bz0o52w . rtm ) , & ( giqt2tul5wr . ag4bz0o52w . rtdw ) ) ; { if (
giqt2tul5wr . pvlwtgcy5f . AQHandles ) { sdiTerminateStreaming ( &
giqt2tul5wr . pvlwtgcy5f . AQHandles ) ; } if ( giqt2tul5wr . pvlwtgcy5f .
SlioLTF ) { rtwDestructAccessorPointer ( giqt2tul5wr . pvlwtgcy5f . SlioLTF )
; } } if ( rt_slioCatalogue ( ) != ( NULL ) ) { void * * slioCatalogueAddr =
rt_slioCatalogueAddr ( ) ; rtwSaveDatasetsToMatFile (
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) ,
rt_GetMatSigstreamLoggingFileName ( ) ) ; rtwTerminateSlioCatalogue (
slioCatalogueAddr ) ; * slioCatalogueAddr = NULL ; } } void
MdlInitializeSizes ( void ) { ssSetNumContStates ( rtS , 32 ) ;
ssSetNumPeriodicContStates ( rtS , 2 ) ; ssSetNumY ( rtS , 0 ) ; ssSetNumU (
rtS , 0 ) ; ssSetDirectFeedThrough ( rtS , 0 ) ; ssSetNumSampleTimes ( rtS ,
6 ) ; ssSetNumBlocks ( rtS , 130 ) ; ssSetNumBlockIO ( rtS , 69 ) ;
ssSetNumBlockParams ( rtS , 5005 ) ; } void MdlInitializeSampleTimes ( void )
{ ssSetSampleTime ( rtS , 0 , 0.0 ) ; ssSetSampleTime ( rtS , 1 , 0.0 ) ;
ssSetSampleTime ( rtS , 2 , 5.0E-5 ) ; ssSetSampleTime ( rtS , 3 , 0.01 ) ;
ssSetSampleTime ( rtS , 4 , 0.1 ) ; ssSetSampleTime ( rtS , 5 , 0.5 ) ;
ssSetOffsetTime ( rtS , 0 , 0.0 ) ; ssSetOffsetTime ( rtS , 1 , 1.0 ) ;
ssSetOffsetTime ( rtS , 2 , 0.0 ) ; ssSetOffsetTime ( rtS , 3 , 0.0 ) ;
ssSetOffsetTime ( rtS , 4 , 0.0 ) ; ssSetOffsetTime ( rtS , 5 , 0.0 ) ; }
void raccel_set_checksum ( ) { ssSetChecksumVal ( rtS , 0 , 335141954U ) ;
ssSetChecksumVal ( rtS , 1 , 1526359446U ) ; ssSetChecksumVal ( rtS , 2 ,
1863528200U ) ; ssSetChecksumVal ( rtS , 3 , 2630416121U ) ; }
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
cuhiq2he3xv ) ) ; ( void ) memset ( ( ( void * ) & cuhiq2he3xv ) , 0 , sizeof
( cuhiq2he3x ) ) ; } { real_T * x = ( real_T * ) & i344fcmwfc1 ;
ssSetContStates ( rtS , x ) ; ( void ) memset ( ( void * ) x , 0 , sizeof (
i344fcmwfc ) ) ; } { void * dwork = ( void * ) & giqt2tul5wr ; ssSetRootDWork
( rtS , dwork ) ; ( void ) memset ( dwork , 0 , sizeof ( giqt2tul5w ) ) ; } {
static DataTypeTransInfo dtInfo ; ( void ) memset ( ( char_T * ) & dtInfo , 0
, sizeof ( dtInfo ) ) ; ssSetModelMappingInfo ( rtS , & dtInfo ) ; dtInfo .
numDataTypes = 18 ; dtInfo . dataTypeSizes = & rtDataTypeSizes [ 0 ] ; dtInfo
. dataTypeNames = & rtDataTypeNames [ 0 ] ; dtInfo . BTransTable = &
rtBTransTable ; dtInfo . PTransTable = & rtPTransTable ; dtInfo .
dataTypeInfoTable = rtDataTypeInfoTable ; }
EvReferenceApplication_InitializeDataMapInfo ( ) ;
ssSetIsRapidAcceleratorActive ( rtS , true ) ; ssSetRootSS ( rtS , rtS ) ;
ssSetVersion ( rtS , SIMSTRUCT_VERSION_LEVEL2 ) ; ssSetModelName ( rtS ,
"EvReferenceApplication" ) ; ssSetPath ( rtS , "EvReferenceApplication" ) ;
ssSetTStart ( rtS , 0.0 ) ; ssSetTFinal ( rtS , 40.0 ) ; io04qbfqhk ( rtS , 3
, 0 , & ( giqt2tul5wr . ekun4ztdyk . rtm ) , & ( giqt2tul5wr . ekun4ztdyk .
rtb ) , NULL , 0 , & ( rt_dataMapInfoPtr -> mmi ) ,
"EvReferenceApplication/Controllers/Powertrain Control Module (PCM)" , 0 , -
1 ) ; { char_T * tempStr = rtwCAPI_EncodePath (
"EvReferenceApplication/Controllers/Powertrain Control Module (PCM)" ) ;
rtwCAPI_UpdateFullPaths ( ( rtwCAPI_GetChildMMI ( & ( rt_dataMapInfoPtr ->
mmi ) , 0 ) ) , tempStr , 1 ) ; utFree ( tempStr ) ; } ktxb3gprz3 ( rtS , 0 ,
1 , 0 , & ( giqt2tul5wr . igqkoslatl . rtm ) , & ( giqt2tul5wr . igqkoslatl .
rtb ) , & ( giqt2tul5wr . igqkoslatl . rtdw ) , & ( i344fcmwfc1 . d5katehawv
) , & ( giqt2tul5wr . igqkoslatl . rtzce ) , NULL , 0 , & ( rt_dataMapInfoPtr
-> mmi ) , "EvReferenceApplication/Passenger Car/Drivetrain" , 1 , 1 ) ; {
char_T * tempStr = rtwCAPI_EncodePath (
"EvReferenceApplication/Passenger Car/Drivetrain" ) ; rtwCAPI_UpdateFullPaths
( ( rtwCAPI_GetChildMMI ( & ( rt_dataMapInfoPtr -> mmi ) , 1 ) ) , tempStr ,
1 ) ; utFree ( tempStr ) ; } lst5ppimoh ( rtS , 0 , 0 , & ( giqt2tul5wr .
isvmsyyglk . rtm ) , & ( giqt2tul5wr . isvmsyyglk . rtb ) , & ( giqt2tul5wr .
isvmsyyglk . rtdw ) , & ( i344fcmwfc1 . nq1lsnuhqu ) , NULL , 0 , & (
rt_dataMapInfoPtr -> mmi ) ,
"EvReferenceApplication/Passenger Car/Electric Plant/Battery" , 2 , 24 ) ; {
char_T * tempStr = rtwCAPI_EncodePath (
"EvReferenceApplication/Passenger Car/Electric Plant/Battery" ) ;
rtwCAPI_UpdateFullPaths ( ( rtwCAPI_GetChildMMI ( & ( rt_dataMapInfoPtr ->
mmi ) , 2 ) ) , tempStr , 1 ) ; utFree ( tempStr ) ; } cwmdpnrf2r ( rtS ,
mr_MotGenEvDynamic_13_3_0nonContOutputArray , 0 , 1 , 2 , 0 , & ( giqt2tul5wr
. ag4bz0o52w . rtm ) , & ( giqt2tul5wr . ag4bz0o52w . rtb ) , & ( giqt2tul5wr
. ag4bz0o52w . rtdw ) , & ( i344fcmwfc1 . bxhmcfdguc ) , NULL , 0 , & (
rt_dataMapInfoPtr -> mmi ) ,
"EvReferenceApplication/Passenger Car/Electric Plant/Motor/MotGenEvDynamic" ,
3 , 25 ) ; { char_T * tempStr = rtwCAPI_EncodePath (
"EvReferenceApplication/Passenger Car/Electric Plant/Motor/MotGenEvDynamic" )
; rtwCAPI_UpdateFullPaths ( ( rtwCAPI_GetChildMMI ( & ( rt_dataMapInfoPtr ->
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
periodicStatesInfo ) ; ssSetPeriodicContStateIndices ( rtS , c4o1mv5dv4m ) ;
( void ) memset ( ( void * ) c4o1mv5dv4m , 0 , 2 * sizeof ( int_T ) ) ;
ssSetPeriodicContStateRanges ( rtS , jh4nyoq4g4o ) ; ( void ) memset ( ( void
* ) jh4nyoq4g4o , 0 , 4 * sizeof ( real_T ) ) ; } { static
ssJacobianPerturbationBounds jacobianPerturbationBounds ;
ssSetJacobianPerturbationBounds ( rtS , & jacobianPerturbationBounds ) ; } {
static ssSolverInfo slvrInfo ; static boolean_T contStatesDisabled [ 32 ] ;
static real_T absTol [ 32 ] = { 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 } ; static uint8_T absTolControl [ 32 ] = { 0U , 0U
, 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U ,
0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U } ;
static real_T contStateJacPerturbBoundMinVec [ 32 ] ; static real_T
contStateJacPerturbBoundMaxVec [ 32 ] ; static uint8_T zcAttributes [ 19 ] =
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
( NULL ) , ( NULL ) } , { 1 * sizeof ( real_T ) , ( char * ) ( & cuhiq2he3xv
. ixkrfe1hwl ) , ( NULL ) } } ; nonContDerivSigInfo [ 0 ] . sizeInBytes =
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
for ( i = 0 ; i < 32 ; ++ i ) { contStateJacPerturbBoundMinVec [ i ] = 0 ;
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
ssSetChecksumVal ( rtS , 0 , 335141954U ) ; ssSetChecksumVal ( rtS , 1 ,
1526359446U ) ; ssSetChecksumVal ( rtS , 2 , 1863528200U ) ; ssSetChecksumVal
( rtS , 3 , 2630416121U ) ; { static const sysRanDType rtAlwaysEnabled =
SUBSYS_RAN_BC_ENABLE ; static RTWExtModeInfo rt_ExtModeInfo ; static const
sysRanDType * systemRan [ 14 ] ; gblRTWExtModeInfo = & rt_ExtModeInfo ;
ssSetRTWExtModeInfo ( rtS , & rt_ExtModeInfo ) ;
rteiSetSubSystemActiveVectorAddresses ( & rt_ExtModeInfo , systemRan ) ;
systemRan [ 0 ] = & rtAlwaysEnabled ; systemRan [ 1 ] = & rtAlwaysEnabled ;
systemRan [ 2 ] = & rtAlwaysEnabled ; systemRan [ 3 ] = & rtAlwaysEnabled ;
systemRan [ 4 ] = ( sysRanDType * ) & giqt2tul5wr . iqmyanxtr1 ; systemRan [
5 ] = & rtAlwaysEnabled ; systemRan [ 6 ] = & rtAlwaysEnabled ; systemRan [ 7
] = ( sysRanDType * ) & giqt2tul5wr . jt1cbcvoyd ; systemRan [ 8 ] = &
rtAlwaysEnabled ; systemRan [ 9 ] = & rtAlwaysEnabled ; systemRan [ 10 ] = &
rtAlwaysEnabled ; systemRan [ 11 ] = & rtAlwaysEnabled ; systemRan [ 12 ] = &
rtAlwaysEnabled ; systemRan [ 13 ] = & rtAlwaysEnabled ;
rteiSetModelMappingInfoPtr ( ssGetRTWExtModeInfo ( rtS ) , &
ssGetModelMappingInfo ( rtS ) ) ; rteiSetChecksumsPtr ( ssGetRTWExtModeInfo (
rtS ) , ssGetChecksums ( rtS ) ) ; rteiSetTPtr ( ssGetRTWExtModeInfo ( rtS )
, ssGetTPtr ( rtS ) ) ; } konn1m5pjf . Saturation1_UpperSat = rtInf ;
konn1m5pjf . Saturation_UpperSat = rtInf ; return rtS ; }
#if defined(_MSC_VER)
#pragma optimize( "", on )
#endif
const int_T gblParameterTuningTid = 6 ; void MdlOutputsParameterSampleTime (
int_T tid ) { MdlOutputsTID6 ( tid ) ; }
