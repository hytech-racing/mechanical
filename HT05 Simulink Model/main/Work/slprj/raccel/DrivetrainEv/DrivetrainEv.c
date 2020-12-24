#include "rt_logging_mmi.h"
#include "DrivetrainEv_capi.h"
#include <math.h>
#include "DrivetrainEv.h"
#include "DrivetrainEv_private.h"
#include "DrivetrainEv_dt.h"
extern void * CreateDiagnosticAsVoidPtr_wrapper ( const char * id , int nargs
, ... ) ; RTWExtModeInfo * gblRTWExtModeInfo = NULL ; extern boolean_T
gblExtModeStartPktReceived ; void raccelForceExtModeShutdown ( ) { if ( !
gblExtModeStartPktReceived ) { boolean_T stopRequested = false ;
rtExtModeWaitForStartPkt ( gblRTWExtModeInfo , 2 , & stopRequested ) ; }
rtExtModeShutdown ( 2 ) ; }
#include "slsv_diagnostic_codegen_c_api.h"
const int_T gblNumToFiles = 0 ; const int_T gblNumFrFiles = 0 ; const int_T
gblNumFrWksBlocks = 0 ;
#ifdef RSIM_WITH_SOLVER_MULTITASKING
boolean_T gbl_raccel_isMultitasking = 1 ;
#else
boolean_T gbl_raccel_isMultitasking = 0 ;
#endif
boolean_T gbl_raccel_tid01eq = 0 ; int_T gbl_raccel_NumST = 3 ; const char_T
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
"slprj\\raccel\\DrivetrainEv\\DrivetrainEv_Jpattern.mat" ; const int_T
gblNumRootInportBlks = 4 ; const int_T gblNumModelInputs = 4 ; extern
rtInportTUtable * gblInportTUtables ; extern const char * gblInportFileName ;
extern void * gblAperiodicPartitionHitTimes ; const int_T
gblInportDataTypeIdx [ ] = { 0 , 0 , 0 , 0 } ; const int_T gblInportDims [ ]
= { 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 } ; const int_T gblInportComplex [ ] = { 0
, 0 , 0 , 0 } ; const int_T gblInportInterpoFlag [ ] = { 1 , 1 , 1 , 1 } ;
const int_T gblInportContinuous [ ] = { 1 , 1 , 1 , 1 } ; int_T
enableFcnCallFlag [ ] = { 1 , 1 , 1 } ; const char *
raccelLoadInputsAndAperiodicHitTimes ( const char * inportFileName , int *
matFileFormat ) { return rt_RapidReadInportsMatFile ( inportFileName ,
matFileFormat , 1 ) ; }
#include "simstruc.h"
#include "fixedpoint.h"
#define blq1nh0zaz (1U)
#define gpuwo1ast3 (-1)
#define nilaowcfrw (2U)
B rtB ; X rtX ; PeriodicIndX rtPeriodicIndX ; PeriodicRngX rtPeriodicRngX ;
DW rtDW ; PrevZCX rtPrevZCX ; ExtU rtU ; ExtY rtY ; static SimStruct model_S
; SimStruct * const rtS = & model_S ; static void gwok3d0ruu ( real_T rhoz ,
real_T omega , real_T * Re , real_T * Fz ) ; static void mvjvqmuujm ( const
real_T a_data [ ] , const int32_T a_size [ 2 ] , real_T y_data [ ] , int32_T
y_size [ 2 ] ) ; static real_T j1qa1se3ou ( real_T Re , real_T omega , real_T
Vx , real_T b_VXLOW , real_T b_kappamax ) ; static real_T mjmbixarxm ( real_T
kappa , real_T Fz , real_T D , real_T C , real_T B_p , real_T E , real_T
lam_mux , real_T b_FZMIN , real_T b_FZMAX ) ; static real_T dtgyzczfnp (
real_T kappa , real_T Vx , real_T Fz , real_T b_gamma , real_T LONGVL ,
real_T FNOMIN , real_T b_FZMIN , real_T b_FZMAX , real_T press , real_T
NOMPRES , real_T PRESMIN , real_T PRESMAX , real_T PCX1 , real_T PDX1 ,
real_T PDX2 , real_T PDX3 , real_T PEX1 , real_T PEX2 , real_T PEX3 , real_T
PEX4 , real_T PKX1 , real_T PKX2 , real_T PKX3 , real_T PHX1 , real_T PHX2 ,
real_T PVX1 , real_T PVX2 , real_T PPX1 , real_T PPX2 , real_T PPX3 , real_T
PPX4 , real_T lam_Fzo , real_T lam_muV , real_T lam_mux , real_T lam_Kxkappa
, real_T lam_Cx , real_T lam_Ex , real_T lam_Hx , real_T lam_Vx ) ; static
real_T i2hhjnlvxd ( real_T Fz , real_T omega , real_T Vx , real_T press ,
real_T QSY1 , real_T QSY2 , real_T QSY3 , real_T QSY7 , real_T QSY8 , real_T
UNLOADED_RADIUS , real_T b_FZMIN , real_T b_FZMAX , real_T PRESMIN , real_T
PRESMAX ) ; static real_T pu3nk3kclp ( real_T Fz , real_T omega , real_T Tamb
, real_T Fpl , real_T Cr , real_T Kt , real_T Tmeas , real_T Re , real_T
b_FZMIN , real_T b_FZMAX , real_T TMIN , real_T TMAX ) ; static real_T
cjaqhutk25 ( const real_T varargin_1 [ 3 ] , const real_T varargin_2 [ 3 ] ,
const real_T varargin_3 [ 9 ] , real_T varargin_4 , real_T varargin_5 ) ;
static boolean_T oiomm3sylu ( real_T Tout , real_T Tfmaxs , am0zbcsot1 *
localB , n2z3212kuo * localDW ) ; static boolean_T ks1g4ay2p3 ( real_T Tout ,
real_T Tfmaxs , am0zbcsot1 * localB , n2z3212kuo * localDW , ddkpbkrncn *
localP ) ; static void pxwjz4wpfg ( const real_T u [ 4 ] , real_T bw1 ,
real_T bd , real_T bw2 , real_T Ndiff , real_T shaftSwitch , real_T Jd ,
real_T Jw1 , real_T Jw2 , const real_T x [ 2 ] , real_T y [ 4 ] , real_T xdot
[ 2 ] ) ; real_T look1_binlxpw ( real_T u0 , const real_T bp0 [ ] , const
real_T table [ ] , uint32_T maxIndex ) { real_T frac ; uint32_T iRght ;
uint32_T iLeft ; uint32_T bpIdx ; if ( u0 <= bp0 [ 0U ] ) { iLeft = 0U ; frac
= ( u0 - bp0 [ 0U ] ) / ( bp0 [ 1U ] - bp0 [ 0U ] ) ; } else if ( u0 < bp0 [
maxIndex ] ) { bpIdx = maxIndex >> 1U ; iLeft = 0U ; iRght = maxIndex ; while
( iRght - iLeft > 1U ) { if ( u0 < bp0 [ bpIdx ] ) { iRght = bpIdx ; } else {
iLeft = bpIdx ; } bpIdx = ( iRght + iLeft ) >> 1U ; } frac = ( u0 - bp0 [
iLeft ] ) / ( bp0 [ iLeft + 1U ] - bp0 [ iLeft ] ) ; } else { iLeft =
maxIndex - 1U ; frac = ( u0 - bp0 [ maxIndex - 1U ] ) / ( bp0 [ maxIndex ] -
bp0 [ maxIndex - 1U ] ) ; } return ( table [ iLeft + 1U ] - table [ iLeft ] )
* frac + table [ iLeft ] ; } real_T look1_binlcpw ( real_T u0 , const real_T
bp0 [ ] , const real_T table [ ] , uint32_T maxIndex ) { real_T frac ;
uint32_T iRght ; uint32_T iLeft ; uint32_T bpIdx ; if ( u0 <= bp0 [ 0U ] ) {
iLeft = 0U ; frac = 0.0 ; } else if ( u0 < bp0 [ maxIndex ] ) { bpIdx =
maxIndex >> 1U ; iLeft = 0U ; iRght = maxIndex ; while ( iRght - iLeft > 1U )
{ if ( u0 < bp0 [ bpIdx ] ) { iRght = bpIdx ; } else { iLeft = bpIdx ; }
bpIdx = ( iRght + iLeft ) >> 1U ; } frac = ( u0 - bp0 [ iLeft ] ) / ( bp0 [
iLeft + 1U ] - bp0 [ iLeft ] ) ; } else { iLeft = maxIndex - 1U ; frac = 1.0
; } return ( table [ iLeft + 1U ] - table [ iLeft ] ) * frac + table [ iLeft
] ; } static void gwok3d0ruu ( real_T rhoz , real_T omega , real_T * Re ,
real_T * Fz ) { * Re = 0.0 * muDoubleScalarAbs ( omega ) + rhoz ; if ( * Re <
0.001 ) { * Re = 0.001 ; } * Fz = ( rtNaN ) ; } static void mvjvqmuujm (
const real_T a_data [ ] , const int32_T a_size [ 2 ] , real_T y_data [ ] ,
int32_T y_size [ 2 ] ) { real_T z1_data ; int32_T loop_ub ; y_size [ 1 ] = (
int8_T ) a_size [ 1 ] ; loop_ub = y_size [ 1 ] - 1 ; if ( 0 <= loop_ub ) {
memcpy ( & z1_data , & y_data [ 0 ] , ( loop_ub + 1 ) * sizeof ( real_T ) ) ;
} if ( 0 <= y_size [ 1 ] - 1 ) { z1_data = a_data [ 0 ] * a_data [ 0 ] ; }
y_size [ 0 ] = 1 ; loop_ub = y_size [ 1 ] - 1 ; if ( 0 <= loop_ub ) { memcpy
( & y_data [ 0 ] , & z1_data , ( loop_ub + 1 ) * sizeof ( real_T ) ) ; } }
static real_T j1qa1se3ou ( real_T Re , real_T omega , real_T Vx , real_T
b_VXLOW , real_T b_kappamax ) { real_T kappa ; real_T Vxpabs ; real_T b ;
int32_T b_trueCount ; real_T Vxpabs_data ; real_T tmp_data ; int32_T
Vxpabs_size [ 2 ] ; int32_T tmp_size [ 2 ] ; Vxpabs = muDoubleScalarAbs ( Vx
) ; b_trueCount = 0 ; if ( Vxpabs < b_VXLOW ) { b_trueCount = 1 ; }
Vxpabs_size [ 0 ] = 1 ; Vxpabs_size [ 1 ] = b_trueCount ; if ( 0 <=
b_trueCount - 1 ) { Vxpabs_data = Vxpabs / b_VXLOW ; } mvjvqmuujm ( &
Vxpabs_data , Vxpabs_size , & tmp_data , tmp_size ) ; if ( 0 <= b_trueCount -
1 ) { Vxpabs_data = 2.0 * b_VXLOW / ( 3.0 - tmp_data ) ; } if ( Vxpabs <
b_VXLOW ) { Vxpabs = Vxpabs_data ; } kappa = ( Re * omega - Vx ) / Vxpabs ; b
= kappa ; b_trueCount = 0 ; if ( kappa < - b_kappamax ) { b_trueCount = 1 ; }
if ( 0 <= b_trueCount - 1 ) { b = - b_kappamax ; } kappa = b ; if ( b >
b_kappamax ) { kappa = b_kappamax ; } return kappa ; } static real_T
mjmbixarxm ( real_T kappa , real_T Fz , real_T D , real_T C , real_T B_p ,
real_T E , real_T lam_mux , real_T b_FZMIN , real_T b_FZMAX ) { real_T
b_idx_0 ; b_idx_0 = Fz ; if ( Fz < b_FZMIN ) { b_idx_0 = b_FZMIN ; } if (
b_idx_0 > b_FZMAX ) { b_idx_0 = b_FZMAX ; } return muDoubleScalarSin (
muDoubleScalarAtan ( B_p * kappa - ( B_p * kappa - muDoubleScalarAtan ( B_p *
kappa ) ) * E ) * C ) * D * ( b_idx_0 * lam_mux ) ; } static real_T
dtgyzczfnp ( real_T kappa , real_T Vx , real_T Fz , real_T b_gamma , real_T
LONGVL , real_T FNOMIN , real_T b_FZMIN , real_T b_FZMAX , real_T press ,
real_T NOMPRES , real_T PRESMIN , real_T PRESMAX , real_T PCX1 , real_T PDX1
, real_T PDX2 , real_T PDX3 , real_T PEX1 , real_T PEX2 , real_T PEX3 ,
real_T PEX4 , real_T PKX1 , real_T PKX2 , real_T PKX3 , real_T PHX1 , real_T
PHX2 , real_T PVX1 , real_T PVX2 , real_T PPX1 , real_T PPX2 , real_T PPX3 ,
real_T PPX4 , real_T lam_Fzo , real_T lam_muV , real_T lam_mux , real_T
lam_Kxkappa , real_T lam_Cx , real_T lam_Ex , real_T lam_Hx , real_T lam_Vx )
{ real_T Fxo ; real_T dpi ; real_T dfz ; real_T kappa_x ; real_T Vsx ; real_T
Cx ; real_T unusedU0 ; int32_T trueCount ; real_T unusedU0_data ; real_T
tmp_data ; int32_T unusedU0_size [ 2 ] ; int32_T tmp_size [ 2 ] ; real_T
b_idx_0 ; real_T f_idx_0 ; real_T g_idx_0 ; real_T h_idx_0 ; b_idx_0 = Fz ;
if ( Fz < b_FZMIN ) { b_idx_0 = b_FZMIN ; } if ( b_idx_0 > b_FZMAX ) {
b_idx_0 = b_FZMAX ; } dpi = press ; if ( press < PRESMIN ) { dpi = PRESMIN ;
} if ( dpi > PRESMAX ) { dpi = PRESMAX ; } dpi = ( dpi - NOMPRES ) / NOMPRES
; dfz = ( b_idx_0 - FNOMIN * lam_Fzo ) / FNOMIN * lam_Fzo ; kappa_x = ( PHX2
* dfz + PHX1 ) * lam_Hx + kappa ; Vsx = - muDoubleScalarAbs ( Vx ) * kappa ;
Vsx = lam_mux / ( muDoubleScalarSqrt ( Vsx * Vsx ) * lam_muV / LONGVL + 1.0 )
; Cx = PCX1 * lam_Cx ; f_idx_0 = Cx ; if ( Cx < 0.0 ) { f_idx_0 = 0.0 ; } Cx
= ( ( PPX3 * dpi + 1.0 ) + dpi * dpi * PPX4 ) * ( PDX2 * dfz + PDX1 ) * ( 1.0
- b_gamma * b_gamma * PDX3 ) * Vsx * b_idx_0 ; g_idx_0 = Cx ; if ( Cx < 0.0 )
{ g_idx_0 = 0.0 ; } Cx = ( ( PEX2 * dfz + PEX1 ) + dfz * dfz * PEX3 ) * ( 1.0
- muDoubleScalarTanh ( 10.0 * kappa_x ) * PEX4 ) * lam_Ex ; h_idx_0 = Cx ; if
( Cx > 1.0 ) { h_idx_0 = 1.0 ; } Cx = f_idx_0 * g_idx_0 ; unusedU0 =
muDoubleScalarAbs ( Cx ) ; trueCount = 0 ; if ( unusedU0 < 0.1 ) { trueCount
= 1 ; } unusedU0_size [ 0 ] = 1 ; unusedU0_size [ 1 ] = trueCount ; if ( 0 <=
trueCount - 1 ) { unusedU0_data = unusedU0 / 0.1 ; } mvjvqmuujm ( &
unusedU0_data , unusedU0_size , & tmp_data , tmp_size ) ; if ( 0 <= trueCount
- 1 ) { unusedU0_data = 0.2 / ( 3.0 - tmp_data ) ; } if ( unusedU0 < 0.1 ) {
unusedU0 = unusedU0_data ; } trueCount = 0 ; if ( Cx < 0.0 ) { trueCount = 1
; } if ( 0 <= trueCount - 1 ) { unusedU0_data = - unusedU0 ; } if ( Cx < 0.0
) { unusedU0 = unusedU0_data ; } dpi = ( PKX2 * dfz + PKX1 ) * b_idx_0 *
muDoubleScalarExp ( PKX3 * dfz ) * ( ( PPX1 * dpi + 1.0 ) + dpi * dpi * PPX2
) * lam_Kxkappa / unusedU0 ; Fxo = muDoubleScalarSin ( muDoubleScalarAtan (
dpi * kappa_x - ( dpi * kappa_x - muDoubleScalarAtan ( dpi * kappa_x ) ) *
h_idx_0 ) * f_idx_0 ) * g_idx_0 + ( PVX2 * dfz + PVX1 ) * b_idx_0 * ( Vsx *
10.0 / ( 9.0 * Vsx + 1.0 ) ) * lam_Vx ; return Fxo ; } static real_T
i2hhjnlvxd ( real_T Fz , real_T omega , real_T Vx , real_T press , real_T
QSY1 , real_T QSY2 , real_T QSY3 , real_T QSY7 , real_T QSY8 , real_T
UNLOADED_RADIUS , real_T b_FZMIN , real_T b_FZMAX , real_T PRESMIN , real_T
PRESMAX ) { real_T b_idx_0 ; real_T d_idx_0 ; b_idx_0 = press ; if ( press <
PRESMIN ) { b_idx_0 = PRESMIN ; } if ( b_idx_0 > PRESMAX ) { b_idx_0 =
PRESMAX ; } d_idx_0 = Fz ; if ( Fz < b_FZMIN ) { d_idx_0 = b_FZMIN ; } if (
d_idx_0 > b_FZMAX ) { d_idx_0 = b_FZMAX ; } return ( ( QSY2 *
muDoubleScalarAbs ( Vx ) + QSY1 ) + Vx * Vx * QSY3 ) * ( muDoubleScalarTanh (
omega ) * UNLOADED_RADIUS ) * ( muDoubleScalarPower ( d_idx_0 , QSY7 ) *
muDoubleScalarPower ( b_idx_0 , QSY8 ) ) ; } static real_T pu3nk3kclp (
real_T Fz , real_T omega , real_T Tamb , real_T Fpl , real_T Cr , real_T Kt ,
real_T Tmeas , real_T Re , real_T b_FZMIN , real_T b_FZMAX , real_T TMIN ,
real_T TMAX ) { real_T b_idx_0 ; real_T d_idx_0 ; b_idx_0 = Tamb ; if ( Tamb
< TMIN ) { b_idx_0 = TMIN ; } if ( b_idx_0 > TMAX ) { b_idx_0 = TMAX ; }
d_idx_0 = Fz ; if ( Fz < b_FZMIN ) { d_idx_0 = b_FZMIN ; } if ( d_idx_0 >
b_FZMAX ) { d_idx_0 = b_FZMAX ; } return ( d_idx_0 * Cr * 0.001 / ( ( b_idx_0
- Tmeas ) * Kt + 1.0 ) + Fpl ) * ( muDoubleScalarTanh ( omega ) * Re ) ; }
static real_T cjaqhutk25 ( const real_T varargin_1 [ 3 ] , const real_T
varargin_2 [ 3 ] , const real_T varargin_3 [ 9 ] , real_T varargin_4 , real_T
varargin_5 ) { real_T Vq ; int32_T low_i ; int32_T low_ip1 ; real_T qx1 ;
real_T rx ; if ( ( varargin_4 >= varargin_1 [ 0 ] ) && ( varargin_4 <=
varargin_1 [ 2 ] ) && ( varargin_5 >= varargin_2 [ 0 ] ) && ( varargin_5 <=
varargin_2 [ 2 ] ) ) { low_i = 0 ; if ( varargin_4 >= varargin_1 [ 1 ] ) {
low_i = 1 ; } low_ip1 = 0 ; if ( varargin_5 >= varargin_2 [ 1 ] ) { low_ip1 =
1 ; } if ( varargin_4 == varargin_1 [ low_i ] ) { qx1 = varargin_3 [ 3 *
low_i + low_ip1 ] ; Vq = varargin_3 [ ( 3 * low_i + low_ip1 ) + 1 ] ; } else
if ( varargin_1 [ low_i + 1 ] == varargin_4 ) { qx1 = varargin_3 [ ( low_i +
1 ) * 3 + low_ip1 ] ; Vq = varargin_3 [ ( ( low_i + 1 ) * 3 + low_ip1 ) + 1 ]
; } else { rx = ( varargin_4 - varargin_1 [ low_i ] ) / ( varargin_1 [ low_i
+ 1 ] - varargin_1 [ low_i ] ) ; if ( varargin_3 [ ( low_i + 1 ) * 3 +
low_ip1 ] == varargin_3 [ 3 * low_i + low_ip1 ] ) { qx1 = varargin_3 [ 3 *
low_i + low_ip1 ] ; } else { qx1 = varargin_3 [ ( low_i + 1 ) * 3 + low_ip1 ]
* rx + varargin_3 [ 3 * low_i + low_ip1 ] * ( 1.0 - rx ) ; } if ( varargin_3
[ ( ( low_i + 1 ) * 3 + low_ip1 ) + 1 ] == varargin_3 [ ( 3 * low_i + low_ip1
) + 1 ] ) { Vq = varargin_3 [ ( 3 * low_i + low_ip1 ) + 1 ] ; } else { Vq =
varargin_3 [ ( ( low_i + 1 ) * 3 + low_ip1 ) + 1 ] * rx + varargin_3 [ ( 3 *
low_i + low_ip1 ) + 1 ] * ( 1.0 - rx ) ; } } if ( ( varargin_5 == varargin_2
[ low_ip1 ] ) || ( qx1 == Vq ) ) { Vq = qx1 ; } else { if ( ! ( varargin_2 [
low_ip1 + 1 ] == varargin_5 ) ) { rx = ( varargin_5 - varargin_2 [ low_ip1 ]
) / ( varargin_2 [ low_ip1 + 1 ] - varargin_2 [ low_ip1 ] ) ; Vq = ( 1.0 - rx
) * qx1 + rx * Vq ; } } } else { Vq = 0.0 ; } return Vq ; } void nsppivnex0 (
real_T odm2hgiib1 , real_T fxscru3kvk , real_T mng3zln5i0 , real_T hqqntlk5es
, real_T bhq15myzsj , real_T at1wsv2f40 , real_T ppwrrwtapf , real_T
loz4rtzk0e , real_T kke3h1g4g2 , const real_T bpesv4lpqj [ 34 ] , const
real_T madobvcucx [ 3 ] , const real_T p4h0uspsys [ 3 ] , const real_T
i41reczncs [ 9 ] , real_T fg2ldp4rcf , real_T dz5me33fqi , real_T kgamalhelh
, real_T hdseaelun5 , real_T nd3ngyhxgp , real_T lh2hgucjex , real_T
kkzdogou0s , real_T m1osuzrz0w , real_T bshuxfxgji , real_T lvedfc3ii3 ,
real_T ehkwazykdc , real_T hywig0e1ug , real_T kfywbdmjdk , real_T jb2vn2vocp
, real_T nrbhxtlpi4 , real_T csd55wpu3p , const real_T cuc1rp1nxp [ 3 ] ,
const real_T pvct1skjk1 [ 3 ] , const real_T ep3q1gd2fj [ 9 ] , real_T
kc2c5xlavo , real_T fiummmba2p , real_T hkox0gu5nc , real_T m1cc4gol0i ,
real_T cncgo3xjiu , real_T epoak5ygjw , real_T inhxmoimyh , real_T kecc0udpjs
, real_T cvm4iogg13 , real_T jdj4yzhjiq , real_T mc0454hujn , real_T
opeodzf2bw , real_T dw3esktble , real_T n2naarb5fc , real_T nefractz14 ,
real_T hesxounllf , real_T eru3x5r1kz , real_T go3tdqujxt , real_T clm45bgmmy
, real_T b2neagw2wg , real_T e01vjvakel , real_T dwtu1o4lj0 , real_T
km5d2khbo3 , real_T eiqwaanaix , real_T jxvjhvyksv , real_T fyqeym0h2p ,
real_T dc2yrbupde , c0wju2q3cn * localB , real_T rtp_FZMAX , real_T rtp_FZMIN
, real_T rtp_VXLOW , real_T rtp_kappamax ) { real_T Re ; real_T b_FzTire ;
real_T i41reczncs_p [ 9 ] ; int32_T i ; real_T b_idx_0 ; localB -> a4qhmksov4
[ 0 ] = bhq15myzsj ; localB -> a4qhmksov4 [ 1 ] = at1wsv2f40 ; localB ->
a4qhmksov4 [ 2 ] = ppwrrwtapf ; localB -> a4qhmksov4 [ 3 ] = loz4rtzk0e ;
localB -> a4qhmksov4 [ 4 ] = kke3h1g4g2 ; localB -> jp04hhuxax [ 0 ] =
fg2ldp4rcf ; localB -> jp04hhuxax [ 1 ] = dz5me33fqi ; localB -> jp04hhuxax [
2 ] = kgamalhelh ; localB -> jp04hhuxax [ 3 ] = hdseaelun5 ; localB ->
jp04hhuxax [ 4 ] = nd3ngyhxgp ; localB -> jp04hhuxax [ 5 ] = lh2hgucjex ;
localB -> jp04hhuxax [ 6 ] = kkzdogou0s ; localB -> jp04hhuxax [ 7 ] =
m1osuzrz0w ; localB -> jp04hhuxax [ 8 ] = bshuxfxgji ; localB -> jp04hhuxax [
9 ] = lvedfc3ii3 ; localB -> jp04hhuxax [ 10 ] = ehkwazykdc ; localB ->
jp04hhuxax [ 11 ] = hywig0e1ug ; localB -> jp04hhuxax [ 12 ] = kfywbdmjdk ;
localB -> jp04hhuxax [ 13 ] = jb2vn2vocp ; localB -> jp04hhuxax [ 14 ] =
nrbhxtlpi4 ; localB -> jp04hhuxax [ 15 ] = csd55wpu3p ; localB -> njnuel0xeb
[ 0 ] = fg2ldp4rcf ; localB -> njnuel0xeb [ 1 ] = fiummmba2p ; localB ->
njnuel0xeb [ 2 ] = hkox0gu5nc ; localB -> njnuel0xeb [ 3 ] = m1cc4gol0i ;
localB -> njnuel0xeb [ 4 ] = cncgo3xjiu ; localB -> njnuel0xeb [ 5 ] =
epoak5ygjw ; localB -> njnuel0xeb [ 6 ] = inhxmoimyh ; localB -> njnuel0xeb [
7 ] = kecc0udpjs ; localB -> njnuel0xeb [ 8 ] = cvm4iogg13 ; localB ->
njnuel0xeb [ 9 ] = jdj4yzhjiq ; localB -> njnuel0xeb [ 10 ] = mc0454hujn ;
localB -> njnuel0xeb [ 11 ] = opeodzf2bw ; localB -> njnuel0xeb [ 12 ] =
dw3esktble ; localB -> njnuel0xeb [ 13 ] = n2naarb5fc ; localB -> njnuel0xeb
[ 14 ] = nefractz14 ; localB -> njnuel0xeb [ 15 ] = hesxounllf ; localB ->
njnuel0xeb [ 16 ] = eru3x5r1kz ; localB -> njnuel0xeb [ 17 ] = go3tdqujxt ;
localB -> njnuel0xeb [ 18 ] = clm45bgmmy ; localB -> njnuel0xeb [ 19 ] =
b2neagw2wg ; localB -> njnuel0xeb [ 20 ] = e01vjvakel ; localB -> njnuel0xeb
[ 21 ] = dwtu1o4lj0 ; localB -> njnuel0xeb [ 22 ] = km5d2khbo3 ; localB ->
njnuel0xeb [ 23 ] = eiqwaanaix ; switch ( ( int32_T ) dc2yrbupde ) { case 0 :
Re = odm2hgiib1 ; break ; case 1 : gwok3d0ruu ( kc2c5xlavo , mng3zln5i0 , &
Re , & b_FzTire ) ; break ; case 2 : Re = odm2hgiib1 ; break ; default : Re =
odm2hgiib1 ; break ; } b_FzTire = j1qa1se3ou ( odm2hgiib1 , mng3zln5i0 ,
hqqntlk5es , rtp_VXLOW , rtp_kappamax ) ; switch ( ( int32_T ) jxvjhvyksv ) {
case 0 : b_FzTire = mjmbixarxm ( b_FzTire , fxscru3kvk , localB -> a4qhmksov4
[ 0 ] , localB -> a4qhmksov4 [ 1 ] , localB -> a4qhmksov4 [ 2 ] , localB ->
a4qhmksov4 [ 3 ] , localB -> a4qhmksov4 [ 4 ] , rtp_FZMIN , rtp_FZMAX ) ;
break ; case 2 : b_FzTire = dtgyzczfnp ( b_FzTire , hqqntlk5es , fxscru3kvk ,
bpesv4lpqj [ 0 ] , bpesv4lpqj [ 1 ] , bpesv4lpqj [ 2 ] , rtp_FZMIN ,
rtp_FZMAX , bpesv4lpqj [ 3 ] , bpesv4lpqj [ 4 ] , bpesv4lpqj [ 5 ] ,
bpesv4lpqj [ 6 ] , bpesv4lpqj [ 7 ] , bpesv4lpqj [ 8 ] , bpesv4lpqj [ 9 ] ,
bpesv4lpqj [ 10 ] , bpesv4lpqj [ 11 ] , bpesv4lpqj [ 12 ] , bpesv4lpqj [ 13 ]
, bpesv4lpqj [ 14 ] , bpesv4lpqj [ 15 ] , bpesv4lpqj [ 16 ] , bpesv4lpqj [ 17
] , bpesv4lpqj [ 18 ] , bpesv4lpqj [ 19 ] , bpesv4lpqj [ 20 ] , bpesv4lpqj [
21 ] , bpesv4lpqj [ 22 ] , bpesv4lpqj [ 23 ] , bpesv4lpqj [ 24 ] , bpesv4lpqj
[ 25 ] , bpesv4lpqj [ 26 ] , bpesv4lpqj [ 27 ] , bpesv4lpqj [ 28 ] ,
bpesv4lpqj [ 29 ] , bpesv4lpqj [ 30 ] , bpesv4lpqj [ 31 ] , bpesv4lpqj [ 32 ]
, bpesv4lpqj [ 33 ] ) ; break ; case 3 : b_idx_0 = fxscru3kvk ; if (
fxscru3kvk < rtp_FZMIN ) { b_idx_0 = rtp_FZMIN ; } if ( b_idx_0 > rtp_FZMAX )
{ b_idx_0 = rtp_FZMAX ; } for ( i = 0 ; i < 3 ; i ++ ) { i41reczncs_p [ 3 * i
] = i41reczncs [ i ] ; i41reczncs_p [ 3 * i + 1 ] = i41reczncs [ i + 3 ] ;
i41reczncs_p [ 3 * i + 2 ] = i41reczncs [ i + 6 ] ; } b_FzTire = cjaqhutk25 (
madobvcucx , p4h0uspsys , i41reczncs_p , b_FzTire , b_idx_0 ) * localB ->
a4qhmksov4 [ 4 ] ; break ; default : b_FzTire = 0.0 ; break ; } switch ( (
int32_T ) fyqeym0h2p ) { case 0 : localB -> istsrpdzon = 0.0 ; break ; case 1
: localB -> istsrpdzon = i2hhjnlvxd ( fxscru3kvk , mng3zln5i0 , hqqntlk5es ,
localB -> jp04hhuxax [ 0 ] , localB -> jp04hhuxax [ 3 ] , localB ->
jp04hhuxax [ 4 ] , localB -> jp04hhuxax [ 5 ] , localB -> jp04hhuxax [ 9 ] ,
localB -> jp04hhuxax [ 10 ] , Re , rtp_FZMIN , rtp_FZMAX , localB ->
jp04hhuxax [ 14 ] , localB -> jp04hhuxax [ 15 ] ) ; break ; case 2 : Re =
localB -> jp04hhuxax [ 0 ] ; if ( localB -> jp04hhuxax [ 0 ] < localB ->
jp04hhuxax [ 14 ] ) { Re = localB -> jp04hhuxax [ 14 ] ; } if ( Re > localB
-> jp04hhuxax [ 15 ] ) { Re = localB -> jp04hhuxax [ 15 ] ; } b_idx_0 =
fxscru3kvk ; if ( fxscru3kvk < 0.0 ) { b_idx_0 = 0.0 ; } if ( b_idx_0 >
rtp_FZMAX ) { b_idx_0 = rtp_FZMAX ; } localB -> istsrpdzon = ( ( ( ( localB
-> jp04hhuxax [ 4 ] * b_FzTire / localB -> jp04hhuxax [ 1 ] + localB ->
jp04hhuxax [ 3 ] ) + muDoubleScalarAbs ( hqqntlk5es / 16.7 ) * localB ->
jp04hhuxax [ 5 ] ) + muDoubleScalarPower ( hqqntlk5es / 16.7 , 4.0 ) * localB
-> jp04hhuxax [ 6 ] ) + ( localB -> jp04hhuxax [ 8 ] * b_idx_0 / localB ->
jp04hhuxax [ 1 ] + localB -> jp04hhuxax [ 7 ] ) * ( localB -> jp04hhuxax [ 11
] * localB -> jp04hhuxax [ 11 ] ) ) * ( muDoubleScalarTanh ( mng3zln5i0 ) *
b_idx_0 * localB -> jp04hhuxax [ 13 ] ) * ( muDoubleScalarPower ( b_idx_0 /
localB -> jp04hhuxax [ 1 ] , localB -> jp04hhuxax [ 9 ] ) *
muDoubleScalarPower ( Re / localB -> jp04hhuxax [ 2 ] , localB -> jp04hhuxax
[ 10 ] ) ) * localB -> jp04hhuxax [ 12 ] ; break ; case 3 : Re = fxscru3kvk ;
if ( fxscru3kvk < 0.0 ) { Re = 0.0 ; } if ( Re > rtp_FZMAX ) { Re = rtp_FZMAX
; } for ( i = 0 ; i < 3 ; i ++ ) { i41reczncs_p [ 3 * i ] = ep3q1gd2fj [ i ]
; i41reczncs_p [ 3 * i + 1 ] = ep3q1gd2fj [ i + 3 ] ; i41reczncs_p [ 3 * i +
2 ] = ep3q1gd2fj [ i + 6 ] ; } localB -> istsrpdzon = - ( muDoubleScalarTanh
( mng3zln5i0 ) * cjaqhutk25 ( cuc1rp1nxp , pvct1skjk1 , i41reczncs_p ,
hqqntlk5es , Re ) ) ; break ; case 4 : localB -> istsrpdzon = pu3nk3kclp (
fxscru3kvk , mng3zln5i0 , localB -> jp04hhuxax [ 0 ] , localB -> jp04hhuxax [
3 ] , localB -> jp04hhuxax [ 4 ] , localB -> jp04hhuxax [ 5 ] , localB ->
jp04hhuxax [ 6 ] , Re , rtp_FZMIN , rtp_FZMAX , localB -> jp04hhuxax [ 14 ] ,
localB -> jp04hhuxax [ 15 ] ) ; break ; default : localB -> istsrpdzon = 0.0
; break ; } localB -> odbylawxnz = b_FzTire ; } static boolean_T oiomm3sylu (
real_T Tout , real_T Tfmaxs , am0zbcsot1 * localB , n2z3212kuo * localDW ) {
localB -> amlomrh5pe = Tout ; localB -> pko5zv0gxh = Tfmaxs ; localB ->
legzb2sclz = ( muDoubleScalarAbs ( localB -> amlomrh5pe ) >= localB ->
pko5zv0gxh ) ; localDW -> pe5tlefx4c = 4 ; return localB -> legzb2sclz ; }
static boolean_T ks1g4ay2p3 ( real_T Tout , real_T Tfmaxs , am0zbcsot1 *
localB , n2z3212kuo * localDW , ddkpbkrncn * localP ) { localB -> kvpcq24csf
= Tout ; localB -> grabw3r2s4 = Tfmaxs ; localB -> ejvkch2wis = localP ->
CombinatorialLogic_table [ ( ( ( muDoubleScalarAbs ( ( ( 0.0 - localB ->
kvpcq24csf ) - localB -> borgqrxodu ) + localB -> borgqrxodu ) >= localB ->
grabw3r2s4 ) + ( ( uint32_T ) ( muDoubleScalarAbs ( - localB -> kvpcq24csf )
<= localB -> grabw3r2s4 ) << 1 ) ) << 1 ) + localDW -> dhmxzbxrdi ] ; localDW
-> dhmxzbxrdi = localB -> ejvkch2wis ; localDW -> pji4wdzuww = 4 ; return
localB -> ejvkch2wis ; } void pd0f2vfijo ( am0zbcsot1 * localB , n2z3212kuo *
localDW , ddkpbkrncn * localP , n1qqd0unpi * localX , real_T rtp_omegao ) {
localDW -> kncpfxn0zs = gpuwo1ast3 ; localDW -> frhewkvqk5 = 0U ; localDW ->
k54dnhlmkd = 0U ; localB -> fqnbs42x2r = 0.0 ; localB -> ocvy1l4023 = 0.0 ;
localB -> jahnvx3kqt = 0.0 ; localB -> idh10nqjbu = 0.0 ; localB ->
legzb2sclz = localP -> yn_Y0 ; localDW -> dhmxzbxrdi = localP ->
UnitDelay_InitialCondition ; localB -> ejvkch2wis = localP ->
yn_Y0_iz3dygeyuh ; localX -> njpe3amuyf = rtp_omegao ; } void fgglyqllwj (
am0zbcsot1 * localB ) { localB -> amlomrh5pe = 0.0 ; localB -> pko5zv0gxh =
0.0 ; localB -> kvpcq24csf = 0.0 ; localB -> grabw3r2s4 = 0.0 ; localB ->
fqnbs42x2r = 0.0 ; localB -> idh10nqjbu = 0.0 ; localB -> legzb2sclz = false
; localB -> ejvkch2wis = false ; localB -> borgqrxodu = 0.0 ; localB ->
inrtpw2cx1 = 0.0 ; localB -> m4gvzn05xv = 0.0 ; localB -> m4kwqt0weh = 0.0 ;
localB -> lgc5y05bba = 0.0 ; localB -> jahnvx3kqt = 0.0 ; localB ->
jdin3zvg0f = 0.0 ; localB -> eqiwbbwx2h = 0.0 ; localB -> ocvy1l4023 = 0.0 ;
} void dwxltv2xb0 ( SimStruct * rtS_c , real_T e10hu52zhk , real_T jb0oqwh15w
, real_T ogbgkrc3ov , am0zbcsot1 * localB , n2z3212kuo * localDW , ddkpbkrncn
* localP , n1qqd0unpi * localX , real_T rtp_omegao , real_T rtp_br , real_T
rtp_Iyy , real_T rtp_OmegaTol ) { if ( ssIsMajorTimeStep ( rtS_c ) ) {
localDW -> dwlnal5cpf = ssGetTaskTime ( rtS_c , 0 ) ; localDW -> molk5qdn4x =
false ; localDW -> kncpfxn0zs = gpuwo1ast3 ; if ( localDW -> frhewkvqk5 == 0U
) { localDW -> frhewkvqk5 = 1U ; localX -> njpe3amuyf = rtp_omegao ; localDW
-> molk5qdn4x = true ; localDW -> k54dnhlmkd = nilaowcfrw ; localB ->
inrtpw2cx1 = localX -> njpe3amuyf ; localB -> m4gvzn05xv = localP -> u_Gain *
localB -> inrtpw2cx1 ; localB -> m4kwqt0weh = ogbgkrc3ov * muDoubleScalarTanh
( localB -> m4gvzn05xv ) ; localB -> lgc5y05bba = rtp_br * localB ->
inrtpw2cx1 ; localB -> jahnvx3kqt = localB -> lgc5y05bba ; localB ->
fqnbs42x2r = localB -> inrtpw2cx1 ; localB -> jdin3zvg0f = ( localB ->
m4kwqt0weh - e10hu52zhk ) - localB -> lgc5y05bba ; localB -> eqiwbbwx2h = 1.0
/ rtp_Iyy * localB -> jdin3zvg0f ; localB -> ocvy1l4023 = localB ->
eqiwbbwx2h ; localB -> idh10nqjbu = localB -> jdin3zvg0f ; } else if (
localDW -> k54dnhlmkd == blq1nh0zaz ) { if ( oiomm3sylu ( e10hu52zhk ,
jb0oqwh15w , localB , localDW ) ) { localX -> njpe3amuyf = 0.0 ; localDW ->
molk5qdn4x = true ; localDW -> k54dnhlmkd = nilaowcfrw ; localB -> inrtpw2cx1
= localX -> njpe3amuyf ; localB -> m4gvzn05xv = localP -> u_Gain * localB ->
inrtpw2cx1 ; localB -> m4kwqt0weh = ogbgkrc3ov * muDoubleScalarTanh ( localB
-> m4gvzn05xv ) ; localB -> lgc5y05bba = rtp_br * localB -> inrtpw2cx1 ;
localB -> jahnvx3kqt = localB -> lgc5y05bba ; localB -> fqnbs42x2r = localB
-> inrtpw2cx1 ; localB -> jdin3zvg0f = ( localB -> m4kwqt0weh - e10hu52zhk )
- localB -> lgc5y05bba ; localB -> eqiwbbwx2h = 1.0 / rtp_Iyy * localB ->
jdin3zvg0f ; localB -> ocvy1l4023 = localB -> eqiwbbwx2h ; localB ->
idh10nqjbu = localB -> jdin3zvg0f ; } } else { if ( ks1g4ay2p3 ( e10hu52zhk ,
jb0oqwh15w , localB , localDW , localP ) && ( muDoubleScalarAbs ( localB ->
fqnbs42x2r ) <= rtp_OmegaTol ) ) { localDW -> molk5qdn4x = true ; localDW ->
k54dnhlmkd = blq1nh0zaz ; localB -> idh10nqjbu = - e10hu52zhk ; if (
ssIsSampleHit ( rtS_c , 1 , 0 ) ) { localB -> fqnbs42x2r = localP ->
locked_Value ; localB -> ocvy1l4023 = localP -> locked1_Value ; localB ->
jahnvx3kqt = localP -> locked2_Value ; } } } if ( localDW -> molk5qdn4x ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS_c ) ; } } if ( localDW ->
k54dnhlmkd == blq1nh0zaz ) { localB -> idh10nqjbu = - e10hu52zhk ; if (
ssIsSampleHit ( rtS_c , 1 , 0 ) ) { localB -> fqnbs42x2r = localP ->
locked_Value ; localB -> ocvy1l4023 = localP -> locked1_Value ; localB ->
jahnvx3kqt = localP -> locked2_Value ; } } else { localB -> inrtpw2cx1 =
localX -> njpe3amuyf ; localB -> m4gvzn05xv = localP -> u_Gain * localB ->
inrtpw2cx1 ; localB -> m4kwqt0weh = ogbgkrc3ov * muDoubleScalarTanh ( localB
-> m4gvzn05xv ) ; localB -> lgc5y05bba = rtp_br * localB -> inrtpw2cx1 ;
localB -> jahnvx3kqt = localB -> lgc5y05bba ; localB -> fqnbs42x2r = localB
-> inrtpw2cx1 ; localB -> jdin3zvg0f = ( localB -> m4kwqt0weh - e10hu52zhk )
- localB -> lgc5y05bba ; localB -> eqiwbbwx2h = 1.0 / rtp_Iyy * localB ->
jdin3zvg0f ; localB -> ocvy1l4023 = localB -> eqiwbbwx2h ; localB ->
idh10nqjbu = localB -> jdin3zvg0f ; } } void dwxltv2xb0TID2 ( am0zbcsot1 *
localB , ddkpbkrncn * localP , real_T rtp_br ) { localB -> borgqrxodu =
rtp_br * localP -> Constant_Value ; } void hd4rfm4a3x ( am0zbcsot1 * localB ,
n2z3212kuo * localDW , cab15xgmjs * localXdot ) { localXdot -> njpe3amuyf =
0.0 ; if ( localDW -> k54dnhlmkd == nilaowcfrw ) { localXdot -> njpe3amuyf =
localB -> eqiwbbwx2h ; } } void nvrysdlj44 ( SimStruct * rtS_c , real_T
e10hu52zhk , real_T jb0oqwh15w , am0zbcsot1 * localB , n2z3212kuo * localDW ,
ddkpbkrncn * localP , ehtbhlzffh * localZCSV , real_T rtp_OmegaTol ) { if (
localDW -> dwlnal5cpf == ssGetTaskTime ( rtS_c , 0 ) ) { localZCSV ->
cz0aqccxmh = - 1.0 ; } else { localDW -> molk5qdn4x = false ; if ( localDW ->
frhewkvqk5 == 0U ) { localDW -> molk5qdn4x = true ; } else if ( localDW ->
k54dnhlmkd == blq1nh0zaz ) { if ( oiomm3sylu ( e10hu52zhk , jb0oqwh15w ,
localB , localDW ) ) { localDW -> molk5qdn4x = true ; } } else { if (
ks1g4ay2p3 ( e10hu52zhk , jb0oqwh15w , localB , localDW , localP ) ) {
localDW -> molk5qdn4x = ( ( muDoubleScalarAbs ( localB -> fqnbs42x2r ) <=
rtp_OmegaTol ) || localDW -> molk5qdn4x ) ; } } if ( localDW -> molk5qdn4x )
{ localZCSV -> cz0aqccxmh = 1.0 ; } else { localZCSV -> cz0aqccxmh = - 1.0 ;
} } } void p4ux310hrw ( int32_T NumIters , mhkngtisvj localB [ 1 ] ,
m0b1rj1f3m localDW [ 1 ] , czihtk1jhp * localP , lopaynj0f0 localX [ 1 ] ,
real_T rtp_omegao ) { int32_T nghiedrihn ; for ( nghiedrihn = 0 ; nghiedrihn
< NumIters ; nghiedrihn ++ ) { pd0f2vfijo ( & localB [ nghiedrihn ] .
azxqoevuvc . lkn4jcwpit , & localDW [ nghiedrihn ] . azxqoevuvc . lkn4jcwpit
, & localP -> azxqoevuvc . lkn4jcwpit , & localX [ nghiedrihn ] . azxqoevuvc
. lkn4jcwpit , rtp_omegao ) ; } } void jes4nbajkf ( int32_T NumIters ,
mhkngtisvj localB [ 1 ] ) { int32_T nghiedrihn ; for ( nghiedrihn = 0 ;
nghiedrihn < NumIters ; nghiedrihn ++ ) { fgglyqllwj ( & localB [ nghiedrihn
] . azxqoevuvc . lkn4jcwpit ) ; } } void g0qms2rrt2 ( int32_T NumIters ,
SimStruct * rtS_m , const real_T * llytyuaau5 , const real_T * nc0zbqdiii ,
const real_T * lpy5f51vtc , real_T * d21x30jzox , mhkngtisvj localB [ 1 ] ,
m0b1rj1f3m localDW [ 1 ] , czihtk1jhp * localP , lopaynj0f0 localX [ 1 ] ,
real_T rtp_omegao , real_T rtp_br , real_T rtp_Iyy , real_T rtp_VXLOW ,
real_T rtp_Re ) { real_T gp1apsoobd ; real_T aymxeriopq ; real_T kcm4qo2zin ;
int32_T nghiedrihn ; for ( nghiedrihn = 0 ; nghiedrihn < NumIters ;
nghiedrihn ++ ) { gp1apsoobd = llytyuaau5 [ nghiedrihn ] ; aymxeriopq =
nc0zbqdiii [ nghiedrihn ] ; kcm4qo2zin = lpy5f51vtc [ nghiedrihn ] ;
dwxltv2xb0 ( rtS_m , gp1apsoobd , aymxeriopq , kcm4qo2zin , & localB [
nghiedrihn ] . azxqoevuvc . lkn4jcwpit , & localDW [ nghiedrihn ] .
azxqoevuvc . lkn4jcwpit , & localP -> azxqoevuvc . lkn4jcwpit , & localX [
nghiedrihn ] . azxqoevuvc . lkn4jcwpit , rtp_omegao , rtp_br , rtp_Iyy ,
rtp_VXLOW * rtp_Re * 0.0 ) ; d21x30jzox [ nghiedrihn ] = localB [ nghiedrihn
] . azxqoevuvc . lkn4jcwpit . fqnbs42x2r ; } } void g0qms2rrt2TID2 ( int32_T
NumIters , const real_T * llytyuaau5 , const real_T * nc0zbqdiii , const
real_T * lpy5f51vtc , mhkngtisvj localB [ 1 ] , czihtk1jhp * localP , real_T
rtp_br ) { real_T gp1apsoobd ; real_T aymxeriopq ; real_T kcm4qo2zin ;
int32_T nghiedrihn ; for ( nghiedrihn = 0 ; nghiedrihn < NumIters ;
nghiedrihn ++ ) { dwxltv2xb0TID2 ( & localB [ nghiedrihn ] . azxqoevuvc .
lkn4jcwpit , & localP -> azxqoevuvc . lkn4jcwpit , rtp_br ) ; gp1apsoobd =
llytyuaau5 [ nghiedrihn ] ; aymxeriopq = nc0zbqdiii [ nghiedrihn ] ;
kcm4qo2zin = lpy5f51vtc [ nghiedrihn ] ; } } void hctrfz05e3 ( int32_T
NumIters , const real_T * llytyuaau5 , const real_T * nc0zbqdiii , const
real_T * lpy5f51vtc , mhkngtisvj localB [ 1 ] , m0b1rj1f3m localDW [ 1 ] ,
ne5zdtnxds localXdot [ 1 ] ) { real_T gp1apsoobd ; real_T aymxeriopq ; real_T
kcm4qo2zin ; int32_T nghiedrihn ; for ( nghiedrihn = 0 ; nghiedrihn <
NumIters ; nghiedrihn ++ ) { gp1apsoobd = llytyuaau5 [ nghiedrihn ] ;
aymxeriopq = nc0zbqdiii [ nghiedrihn ] ; kcm4qo2zin = lpy5f51vtc [ nghiedrihn
] ; hd4rfm4a3x ( & localB [ nghiedrihn ] . azxqoevuvc . lkn4jcwpit , &
localDW [ nghiedrihn ] . azxqoevuvc . lkn4jcwpit , & localXdot [ nghiedrihn ]
. azxqoevuvc . lkn4jcwpit ) ; } } void a35kvcmsf0 ( int32_T NumIters ,
SimStruct * rtS_g , const real_T * llytyuaau5 , const real_T * nc0zbqdiii ,
const real_T * lpy5f51vtc , mhkngtisvj localB [ 1 ] , m0b1rj1f3m localDW [ 1
] , czihtk1jhp * localP , hx4oc15a5t localZCSV [ 1 ] , real_T rtp_VXLOW ,
real_T rtp_Re ) { real_T gp1apsoobd ; real_T aymxeriopq ; real_T kcm4qo2zin ;
int32_T nghiedrihn ; for ( nghiedrihn = 0 ; nghiedrihn < NumIters ;
nghiedrihn ++ ) { gp1apsoobd = llytyuaau5 [ nghiedrihn ] ; aymxeriopq =
nc0zbqdiii [ nghiedrihn ] ; kcm4qo2zin = lpy5f51vtc [ nghiedrihn ] ;
nvrysdlj44 ( rtS_g , gp1apsoobd , aymxeriopq , & localB [ nghiedrihn ] .
azxqoevuvc . lkn4jcwpit , & localDW [ nghiedrihn ] . azxqoevuvc . lkn4jcwpit
, & localP -> azxqoevuvc . lkn4jcwpit , & localZCSV [ nghiedrihn ] .
azxqoevuvc . lkn4jcwpit , rtp_VXLOW * rtp_Re * 0.0 ) ; } } static void
pxwjz4wpfg ( const real_T u [ 4 ] , real_T bw1 , real_T bd , real_T bw2 ,
real_T Ndiff , real_T shaftSwitch , real_T Jd , real_T Jw1 , real_T Jw2 ,
const real_T x [ 2 ] , real_T y [ 4 ] , real_T xdot [ 2 ] ) { real_T NbdTerm
; int32_T diffDir ; real_T term1 ; real_T term2 ; real_T invJ [ 4 ] ; real_T
diffDir_p [ 8 ] ; real_T invJ_p [ 8 ] ; real_T invJ_e [ 4 ] ; real_T invJ_i [
2 ] ; real_T invJ_m [ 2 ] ; real_T diffDir_e [ 8 ] ; int32_T i ; NbdTerm =
Ndiff * Ndiff * bd / 4.0 ; if ( shaftSwitch != 0.0 ) { diffDir = - 1 ; } else
{ diffDir = 1 ; } term1 = Ndiff * Ndiff * Jd ; term2 = ( 4.0 * Jw1 * Jw2 +
term1 * Jw1 ) + Jw2 * term1 ; invJ [ 0 ] = ( Jw2 * 4.0 + term1 ) / term2 ;
invJ [ 2 ] = - term1 / term2 ; invJ [ 1 ] = - term1 / term2 ; invJ [ 3 ] = (
Jw1 * 4.0 + term1 ) / term2 ; diffDir_p [ 0 ] = ( real_T ) diffDir / 2.0 *
Ndiff ; diffDir_p [ 2 ] = - 1.0 ; diffDir_p [ 4 ] = 0.0 ; diffDir_p [ 6 ] = -
0.5 ; diffDir_p [ 1 ] = ( real_T ) diffDir / 2.0 * Ndiff ; diffDir_p [ 3 ] =
0.0 ; diffDir_p [ 5 ] = - 1.0 ; diffDir_p [ 7 ] = 0.5 ; term1 = - ( bw1 +
NbdTerm ) ; term2 = - ( NbdTerm + bw2 ) ; diffDir_e [ 0 ] = ( real_T )
diffDir / 2.0 * Ndiff ; diffDir_e [ 4 ] = ( real_T ) diffDir / 2.0 * Ndiff ;
for ( diffDir = 0 ; diffDir < 2 ; diffDir ++ ) { for ( i = 0 ; i < 4 ; i ++ )
{ invJ_p [ diffDir + ( i << 1 ) ] = 0.0 ; invJ_p [ diffDir + ( i << 1 ) ] +=
diffDir_p [ i << 1 ] * invJ [ diffDir ] ; invJ_p [ diffDir + ( i << 1 ) ] +=
diffDir_p [ ( i << 1 ) + 1 ] * invJ [ diffDir + 2 ] ; } invJ_e [ diffDir ] =
0.0 ; invJ_e [ diffDir ] += invJ [ diffDir ] * term1 ; invJ_e [ diffDir ] +=
invJ [ diffDir + 2 ] * - NbdTerm ; invJ_e [ diffDir + 2 ] = 0.0 ; invJ_e [
diffDir + 2 ] += invJ [ diffDir ] * - NbdTerm ; invJ_e [ diffDir + 2 ] +=
invJ [ diffDir + 2 ] * term2 ; invJ_i [ diffDir ] = 0.0 ; invJ_i [ diffDir ]
+= invJ_p [ diffDir ] * u [ 0 ] ; invJ_i [ diffDir ] += invJ_p [ diffDir + 2
] * u [ 1 ] ; invJ_i [ diffDir ] += invJ_p [ diffDir + 4 ] * u [ 2 ] ; invJ_i
[ diffDir ] += invJ_p [ diffDir + 6 ] * u [ 3 ] ; invJ_m [ diffDir ] = 0.0 ;
invJ_m [ diffDir ] += invJ_e [ diffDir ] * x [ 0 ] ; invJ_m [ diffDir ] +=
invJ_e [ diffDir + 2 ] * x [ 1 ] ; xdot [ diffDir ] = invJ_i [ diffDir ] +
invJ_m [ diffDir ] ; diffDir_e [ ( diffDir << 2 ) + 1 ] = ( real_T ) diffDir
+ - 1.0 ; diffDir_e [ ( diffDir << 2 ) + 2 ] = 0.0 - ( real_T ) diffDir ;
diffDir_e [ ( diffDir << 2 ) + 3 ] = 0.5 - ( real_T ) diffDir ; } for (
diffDir = 0 ; diffDir < 4 ; diffDir ++ ) { NbdTerm = 0.0 * u [ 3 ] + ( 0.0 *
u [ 2 ] + ( 0.0 * u [ 1 ] + 0.0 * u [ 0 ] ) ) ; y [ diffDir ] = ( diffDir_e [
diffDir + 4 ] * x [ 1 ] + diffDir_e [ diffDir ] * x [ 0 ] ) + NbdTerm ; } }
void MdlInitialize ( void ) { boolean_T tmp ; rtDW . mika2fhpql = 1 ; if (
ssIsFirstInitCond ( rtS ) ) { rtX . ba0epd2aak [ 0 ] = 0.0 ; rtX . ba0epd2aak
[ 1 ] = 0.0 ; tmp = slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp =
ssGetGlobalInitialStatesAvailable ( rtS ) ; rtDW . mika2fhpql = ! tmp ; }
else { rtDW . mika2fhpql = 1 ; } rtX . bwpjg31mvz = 0.0 ; } rtX . pjatogehh1
[ 0 ] = rtP . Integrator_IC ; rtX . kvl2kwyztt [ 0 ] = rtP .
uDOFBodyAxes_pos_ini [ 0 ] ; rtX . pjatogehh1 [ 1 ] = rtP . Integrator_IC ;
rtX . kvl2kwyztt [ 1 ] = rtP . uDOFBodyAxes_pos_ini [ 1 ] ; rtX . acvsjhtzkf
= rtP . theta_o_Veh ; rtX . i52yscusub = rtP . q_o ; rtX . medyoqmr4n = rtP .
Integrator_IC_cnx1wxjvuo ; rtDW . kpovkdto0q = rtP . Memory_InitialCondition
; rtDW . appmqjbhea = 1 ; if ( ssIsFirstInitCond ( rtS ) ) { tmp =
slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp =
ssGetGlobalInitialStatesAvailable ( rtS ) ; rtDW . appmqjbhea = ! tmp ; }
else { rtDW . appmqjbhea = 1 ; } rtX . otqnbnfqsy = 0.0 ; } rtX . op5vt3u10o
= rtP . theta_o ; rtX . na1iog2zww = rtP . Integrator_IC_ie22qiuarn ; rtX .
am4llyrsos = rtP . xdot_o ; rtX . o3s24wysvb = rtP . omega_o ; rtDW .
ccv2xnvywn = rtP . Memory_InitialCondition_fzolzaguge ; rtDW . cmjpzycq5g = 1
; if ( ssIsFirstInitCond ( rtS ) ) { tmp = slIsRapidAcceleratorSimulating ( )
; if ( tmp ) { tmp = ssGetGlobalInitialStatesAvailable ( rtS ) ; rtDW .
cmjpzycq5g = ! tmp ; } else { rtDW . cmjpzycq5g = 1 ; } rtX . b4y025j20n [ 0
] = 0.0 ; rtX . b4y025j20n [ 1 ] = 0.0 ; } rtX . jwkok33c33 = rtP . theta_o ;
rtDW . jowjuwqghw = 1 ; if ( ssIsFirstInitCond ( rtS ) ) { tmp =
slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp =
ssGetGlobalInitialStatesAvailable ( rtS ) ; rtDW . jowjuwqghw = ! tmp ; }
else { rtDW . jowjuwqghw = 1 ; } } rtX . bbmdxvj5g5 = rtP .
Integrator_IC_lewcleyhsc ; p4ux310hrw ( 1 , rtB . g0qms2rrt2g , rtDW .
g0qms2rrt2g , & rtP . g0qms2rrt2g , rtX . g0qms2rrt2g , rtP . omegao ) ;
p4ux310hrw ( 1 , rtB . nt1qt43cpp , rtDW . nt1qt43cpp , & rtP . nt1qt43cpp ,
rtX . nt1qt43cpp , rtP . omegao ) ; { int_T rootPeriodicContStateIndices [ 1
] = { 6 } ; real_T rootPeriodicContStateRanges [ 2 ] = { - 3.1415926535897931
, 3.1415926535897931 } ; ( void ) memcpy ( ( void * ) rtPeriodicIndX ,
rootPeriodicContStateIndices , 1 * sizeof ( int_T ) ) ; ( void ) memcpy ( (
void * ) rtPeriodicRngX , rootPeriodicContStateRanges , 2 * sizeof ( real_T )
) ; } } void MdlStart ( void ) { int32_T kvwunpslmv ; { void * *
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
externalInputIsInDatasetFormat ) { rtwISigstreamManagerSetDestinationBase (
pISigstreamManager , 0 , & rtU . asu2rtubja ) ;
rtwISigstreamManagerSetDestinationBase ( pISigstreamManager , 1 , & rtU .
fyr11ojm40 ) ; rtwISigstreamManagerSetDestinationBase ( pISigstreamManager ,
2 , & rtU . ishqklku1k ) ; rtwISigstreamManagerSetDestinationBase (
pISigstreamManager , 3 , & rtU . li03xatuna ) ; } } { void * slioCatalogue =
rt_slioCatalogue ( ) ? rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) :
sdiGetSlioCatalogue ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if (
! slioCatalogue || ! rtwIsLoggingToFile ( slioCatalogue ) ) { { {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"xdot" ) ; sdiLabelU origSigName = sdiGetLabelFromChars ( "xdot" ) ;
sdiLabelU propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars ( "DrivetrainEv/VehSpd" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars ( "xdot" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . kd2ov54egg . AQHandles =
sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "a17b7cc5-d231-437e-95f6-0beedeff8b62" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "m/s" ) ; if (
rtDW . kd2ov54egg . AQHandles ) { sdiSetSignalSampleTimeString ( rtDW .
kd2ov54egg . AQHandles , "Continuous" , 0.0 , ssGetTFinal ( rtS ) ) ;
sdiSetRunStartTime ( rtDW . kd2ov54egg . AQHandles , ssGetTaskTime ( rtS , 1
) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW . kd2ov54egg . AQHandles , 1
, 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW . kd2ov54egg . AQHandles ,
loggedName , origSigName , propName ) ; sdiAsyncRepoSetSignalDomainType (
rtDW . kd2ov54egg . AQHandles , "outport" ) ;
sdiAsyncRepoSetSignalExportOrder ( rtDW . kd2ov54egg . AQHandles , 1 ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } } } rtDW .
kd2ov54egg . SlioLTF = ( NULL ) ; } { void * slioCatalogue = rt_slioCatalogue
( ) ? rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) :
sdiGetSlioCatalogue ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if (
! slioCatalogue || ! rtwIsLoggingToFile ( slioCatalogue ) ) { { {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"MotSpd" ) ; sdiLabelU origSigName = sdiGetLabelFromChars ( "MotSpd" ) ;
sdiLabelU propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars ( "DrivetrainEv/MotSpd" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars ( "MotSpd" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . heooubpmub . AQHandles =
sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "d66cce90-5059-49a8-a435-70ac205ab517" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "rad/s" ) ; if (
rtDW . heooubpmub . AQHandles ) { sdiSetSignalSampleTimeString ( rtDW .
heooubpmub . AQHandles , "Continuous" , 0.0 , ssGetTFinal ( rtS ) ) ;
sdiSetRunStartTime ( rtDW . heooubpmub . AQHandles , ssGetTaskTime ( rtS , 1
) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW . heooubpmub . AQHandles , 1
, 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW . heooubpmub . AQHandles ,
loggedName , origSigName , propName ) ; sdiAsyncRepoSetSignalDomainType (
rtDW . heooubpmub . AQHandles , "outport" ) ;
sdiAsyncRepoSetSignalExportOrder ( rtDW . heooubpmub . AQHandles , 2 ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } } } rtDW .
heooubpmub . SlioLTF = ( NULL ) ; } { void * slioCatalogue = rt_slioCatalogue
( ) ? rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) :
sdiGetSlioCatalogue ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if (
! slioCatalogue || ! rtwIsLoggingToFile ( slioCatalogue ) ) { { {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"Chain angular vel" ) ; sdiLabelU origSigName = sdiGetLabelFromChars (
"Chain angular vel" ) ; sdiLabelU propName = sdiGetLabelFromChars ( "" ) ;
sdiLabelU blockPath = sdiGetLabelFromChars (
"DrivetrainEv/PS-Simulink Converter" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars (
"Chain angular vel" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims =
1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. eyz2b5jfld . AQHandles = sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"ca74bc89-c91f-488c-b877-16302c91e68f" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "rad/s" ) ; if ( rtDW . eyz2b5jfld .
AQHandles ) { sdiSetSignalSampleTimeString ( rtDW . eyz2b5jfld . AQHandles ,
"Continuous" , 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime ( rtDW .
eyz2b5jfld . AQHandles , ssGetTaskTime ( rtS , 1 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( rtDW . eyz2b5jfld . AQHandles , 1 , 0 )
; sdiAsyncRepoSetSignalExportName ( rtDW . eyz2b5jfld . AQHandles ,
loggedName , origSigName , propName ) ; } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } } } rtDW . eyz2b5jfld . SlioLTF = ( NULL ) ; {
void * treeVector = ( NULL ) ; void * accessor = ( NULL ) ; const void *
signalDescriptor = ( NULL ) ; void * loggingInterval = ( NULL ) ; char *
datasetName = "tmp_raccel_logsout" ; void * slioCatalogue = rt_slioCatalogue
( ) ? rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) :
sdiGetSlioCatalogue ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if (
slioCatalogue && rtwIsLoggingToFile ( slioCatalogue ) ) { treeVector =
rtwGetTreeVector ( ) ; { int_T sigDimsArray [ 1 ] = { 1 } ; rtwAddLeafNode (
0 , "Chain angular vel" , "linear" , 0 , ( unsigned int * ) sigDimsArray , 1
, "double" , "rad/s" , "Continuous" , 0.0 , ssGetTFinal ( rtS ) , treeVector
) ; } signalDescriptor = rtwGetSignalDescriptor ( treeVector , 1 , 1 , 0 , 1
, "Chain angular vel" , "" , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"DrivetrainEv/PS-Simulink Converter" , 1 , 0 , slioCatalogue , ( NULL ) , 0 ,
( NULL ) , 0 ) ; if ( ! rt_slioCatalogue ( ) ) { sdiSlioIsLoggingSignal (
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"DrivetrainEv/PS-Simulink Converter" , 1 , "Chain angular vel" ) ; } if (
rtwLoggingOverride ( signalDescriptor , slioCatalogue ) ) { if ( ssGetRootSS
( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval = rtliGetLoggingInterval
( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; } else { loggingInterval =
sdiGetLoggingIntervals ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ;
datasetName = "" ; } accessor = rtwGetAccessor ( signalDescriptor ,
loggingInterval ) ; rtwAddR2Client ( accessor , signalDescriptor ,
slioCatalogue , datasetName , 1 ) ; rtDW . eyz2b5jfld . SlioLTF = accessor ;
} } } } for ( kvwunpslmv = 0 ; kvwunpslmv < 4 ; kvwunpslmv ++ ) { rtB .
lkkyw1qsdn [ kvwunpslmv ] . hg0uepzdlr [ 0 ] = 0.0 ; rtB . lkkyw1qsdn [
kvwunpslmv ] . hg0uepzdlr [ 1 ] = 0.0 ; rtB . lkkyw1qsdn [ kvwunpslmv ] .
hg0uepzdlr [ 2 ] = 0.0 ; memset ( & rtB . lkkyw1qsdn [ kvwunpslmv ] .
iftka2hl45 [ 0 ] , 0 , 9U * sizeof ( real_T ) ) ; memset ( & rtB . lkkyw1qsdn
[ kvwunpslmv ] . iny0n31qca [ 0 ] , 0 , 9U * sizeof ( real_T ) ) ; rtB .
lkkyw1qsdn [ kvwunpslmv ] . lsxufha4ar [ 0 ] = 0.0 ; rtB . lkkyw1qsdn [
kvwunpslmv ] . lsxufha4ar [ 1 ] = 0.0 ; rtB . lkkyw1qsdn [ kvwunpslmv ] .
lsxufha4ar [ 2 ] = 0.0 ; } jes4nbajkf ( 1 , rtB . g0qms2rrt2g ) ; jes4nbajkf
( 1 , rtB . nt1qt43cpp ) ; rtB . jbv5m1xncl = rtP . domega_o ; rtB .
hr50ll3oqj = rtP . domega_o ; rtDW . oecqsnuhib = 0 ; rtDW . kx1gvg3l0l = 0 ;
rtDW . bs2px0f0vf = 0 ; MdlInitialize ( ) ; } void MdlOutputs ( int_T tid ) {
int32_T kvwunpslmv ; boolean_T resetSolver ; ZCEventType zcEvent ; real_T x ;
PmRealVector xPr ; real_T u ; PmRealVector uPr ; NeuDiagnosticManager *
diagnosticManager ; NeuDiagnosticTree * diagnosticTree ; LtiIcParams icParams
; int_T ir [ 2 ] ; int_T jc [ 4 ] ; real_T mX [ 2 ] ; int_T jc_p [ 2 ] ;
real_T mX_p [ 3 ] ; int_T ir_p ; int_T jc_e [ 2 ] ; real_T mX_e ; int_T jc_i
[ 2 ] ; real_T mX_i ; int_T jc_m [ 2 ] ; int_T ir_e ; int_T jc_g [ 2 ] ;
real_T mX_m ; real_T mX_g ; real_T mX_j ; char * msg ; real_T unusedU1 [ 4 ]
; real_T a0wtai2ypj ; int32_T i ; real_T fu4ruxc5pq ; real_T ignslznau2_idx_0
; real_T ignslznau2_idx_2 ; real_T njuefsve0i_idx_0 ; real_T njuefsve0i_idx_1
; real_T njuefsve0i_idx_2 ; real_T ignslznau2_idx_1 ; if ( gblInportFileName
!= ( NULL ) ) { bool externalInputIsInDatasetFormat = false ; void *
pISigstreamManager = rt_GetISigstreamManager ( ) ;
rtwISigstreamManagerGetInputIsInDatasetFormat ( pISigstreamManager , &
externalInputIsInDatasetFormat ) ; if ( slIsRapidAcceleratorSimulating ( ) &&
externalInputIsInDatasetFormat ) { const int maxErrorBufferSize = 16384 ;
char errMsg [ 16384 ] ; bool bSetErrorStatus = false ; if ( 1 ) { { real_T
time = ssGetTaskTime ( rtS , 0 ) ; if ( !
rtwISigstreamManagerIsPeriodicFcnCall ( pISigstreamManager , 0 ) ) { int_T
sampleHit = 0U ; bSetErrorStatus = rtwISigstreamManagerInjectDataMultiRate (
pISigstreamManager , 0 , time , 1 , "<Root>/MotTrq" , "[t, u]" , & sampleHit
, errMsg , maxErrorBufferSize ) ; } } } if ( 1 ) { { real_T time =
ssGetTaskTime ( rtS , 0 ) ; if ( ! rtwISigstreamManagerIsPeriodicFcnCall (
pISigstreamManager , 1 ) ) { int_T sampleHit = 0U ; bSetErrorStatus =
rtwISigstreamManagerInjectDataMultiRate ( pISigstreamManager , 1 , time , 1 ,
"<Root>/BrakeReq" , "[t, u]" , & sampleHit , errMsg , maxErrorBufferSize ) ;
} } } if ( 1 ) { { real_T time = ssGetTaskTime ( rtS , 0 ) ; if ( !
rtwISigstreamManagerIsPeriodicFcnCall ( pISigstreamManager , 2 ) ) { int_T
sampleHit = 0U ; bSetErrorStatus = rtwISigstreamManagerInjectDataMultiRate (
pISigstreamManager , 2 , time , 1 , "<Root>/Grade" , "[t, u]" , & sampleHit ,
errMsg , maxErrorBufferSize ) ; } } } if ( 1 ) { { real_T time =
ssGetTaskTime ( rtS , 0 ) ; if ( ! rtwISigstreamManagerIsPeriodicFcnCall (
pISigstreamManager , 3 ) ) { int_T sampleHit = 0U ; bSetErrorStatus =
rtwISigstreamManagerInjectDataMultiRate ( pISigstreamManager , 3 , time , 1 ,
"<Root>/Wind Vel" , "[t, u]" , & sampleHit , errMsg , maxErrorBufferSize ) ;
} } } if ( bSetErrorStatus ) { ssSetErrorStatus ( rtS , errMsg ) ; return ; }
} else { int_T currTimeIdx ; int_T i ; if ( gblInportTUtables [ 0 ] .
nTimePoints > 0 ) { if ( 1 ) { { real_T time = ssGetTaskTime ( rtS , 0 ) ;
int k = 1 ; if ( gblInportTUtables [ 0 ] . nTimePoints == 1 ) { k = 0 ; }
currTimeIdx = rt_getTimeIdx ( gblInportTUtables [ 0 ] . time , time ,
gblInportTUtables [ 0 ] . nTimePoints , gblInportTUtables [ 0 ] . currTimeIdx
, 1 , 0 ) ; gblInportTUtables [ 0 ] . currTimeIdx = currTimeIdx ; for ( i = 0
; i < 1 ; i ++ ) { real_T * realPtr1 = ( real_T * ) gblInportTUtables [ 0 ] .
ur + i * gblInportTUtables [ 0 ] . nTimePoints + currTimeIdx ; real_T *
realPtr2 = realPtr1 + 1 * k ; ( void ) rt_Interpolate_Datatype ( realPtr1 ,
realPtr2 , & rtU . asu2rtubja , time , gblInportTUtables [ 0 ] . time [
currTimeIdx ] , gblInportTUtables [ 0 ] . time [ currTimeIdx + k ] ,
gblInportTUtables [ 0 ] . uDataType ) ; } } } } if ( gblInportTUtables [ 1 ]
. nTimePoints > 0 ) { if ( 1 ) { { real_T time = ssGetTaskTime ( rtS , 0 ) ;
int k = 1 ; if ( gblInportTUtables [ 1 ] . nTimePoints == 1 ) { k = 0 ; }
currTimeIdx = rt_getTimeIdx ( gblInportTUtables [ 1 ] . time , time ,
gblInportTUtables [ 1 ] . nTimePoints , gblInportTUtables [ 1 ] . currTimeIdx
, 1 , 0 ) ; gblInportTUtables [ 1 ] . currTimeIdx = currTimeIdx ; for ( i = 0
; i < 1 ; i ++ ) { real_T * realPtr1 = ( real_T * ) gblInportTUtables [ 1 ] .
ur + i * gblInportTUtables [ 1 ] . nTimePoints + currTimeIdx ; real_T *
realPtr2 = realPtr1 + 1 * k ; ( void ) rt_Interpolate_Datatype ( realPtr1 ,
realPtr2 , & rtU . fyr11ojm40 , time , gblInportTUtables [ 1 ] . time [
currTimeIdx ] , gblInportTUtables [ 1 ] . time [ currTimeIdx + k ] ,
gblInportTUtables [ 1 ] . uDataType ) ; } } } } if ( gblInportTUtables [ 2 ]
. nTimePoints > 0 ) { if ( 1 ) { { real_T time = ssGetTaskTime ( rtS , 0 ) ;
int k = 1 ; if ( gblInportTUtables [ 2 ] . nTimePoints == 1 ) { k = 0 ; }
currTimeIdx = rt_getTimeIdx ( gblInportTUtables [ 2 ] . time , time ,
gblInportTUtables [ 2 ] . nTimePoints , gblInportTUtables [ 2 ] . currTimeIdx
, 1 , 0 ) ; gblInportTUtables [ 2 ] . currTimeIdx = currTimeIdx ; for ( i = 0
; i < 1 ; i ++ ) { real_T * realPtr1 = ( real_T * ) gblInportTUtables [ 2 ] .
ur + i * gblInportTUtables [ 2 ] . nTimePoints + currTimeIdx ; real_T *
realPtr2 = realPtr1 + 1 * k ; ( void ) rt_Interpolate_Datatype ( realPtr1 ,
realPtr2 , & rtU . ishqklku1k , time , gblInportTUtables [ 2 ] . time [
currTimeIdx ] , gblInportTUtables [ 2 ] . time [ currTimeIdx + k ] ,
gblInportTUtables [ 2 ] . uDataType ) ; } } } } if ( gblInportTUtables [ 3 ]
. nTimePoints > 0 ) { if ( 1 ) { { real_T time = ssGetTaskTime ( rtS , 0 ) ;
int k = 1 ; if ( gblInportTUtables [ 3 ] . nTimePoints == 1 ) { k = 0 ; }
currTimeIdx = rt_getTimeIdx ( gblInportTUtables [ 3 ] . time , time ,
gblInportTUtables [ 3 ] . nTimePoints , gblInportTUtables [ 3 ] . currTimeIdx
, 1 , 0 ) ; gblInportTUtables [ 3 ] . currTimeIdx = currTimeIdx ; for ( i = 0
; i < 1 ; i ++ ) { real_T * realPtr1 = ( real_T * ) gblInportTUtables [ 3 ] .
ur + i * gblInportTUtables [ 3 ] . nTimePoints + currTimeIdx ; real_T *
realPtr2 = realPtr1 + 1 * k ; ( void ) rt_Interpolate_Datatype ( realPtr1 ,
realPtr2 , & rtU . li03xatuna , time , gblInportTUtables [ 3 ] . time [
currTimeIdx ] , gblInportTUtables [ 3 ] . time [ currTimeIdx + k ] ,
gblInportTUtables [ 3 ] . uDataType ) ; } } } } } } rtB . bvvs4fnpae [ 0 ] =
rtP . uDOFBodyAxes_v_ini * muDoubleScalarCos ( muDoubleScalarAtan2 ( rtP .
zdot_o , rtP . xdot_o ) ) ; rtB . bvvs4fnpae [ 1 ] = rtP . uDOFBodyAxes_v_ini
* muDoubleScalarSin ( muDoubleScalarAtan2 ( rtP . zdot_o , rtP . xdot_o ) ) ;
if ( rtDW . mika2fhpql != 0 ) { rtX . ba0epd2aak [ 0 ] = rtB . bvvs4fnpae [ 0
] ; rtX . ba0epd2aak [ 1 ] = rtB . bvvs4fnpae [ 1 ] ; } rtB . hbvagjoehw [ 0
] = rtX . ba0epd2aak [ 0 ] ; rtB . hbvagjoehw [ 1 ] = rtX . ba0epd2aak [ 1 ]
; rtB . fl3w3jvdsi [ 0 ] = rtB . hbvagjoehw [ 0 ] ; rtB . fl3w3jvdsi [ 1 ] =
0.0 ; rtB . fl3w3jvdsi [ 2 ] = rtB . hbvagjoehw [ 1 ] ; rtY . cgennkzx51 =
rtB . fl3w3jvdsi [ 0 ] ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { { if ( ( rtDW
. kd2ov54egg . AQHandles || rtDW . kd2ov54egg . SlioLTF ) && ssGetLogOutput (
rtS ) ) { sdiSlioSdiWriteSignal ( rtDW . kd2ov54egg . AQHandles , rtDW .
kd2ov54egg . SlioLTF , 0 , ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB .
fl3w3jvdsi [ 0 ] + 0 ) ; } } } rtB . lmyq34sf0g [ 0 ] = 0.0 ; rtB .
lmyq34sf0g [ 1 ] = 0.0 ; rtB . lwno5xammy [ 0 ] = - rtU . li03xatuna ; rtB .
lwno5xammy [ 1 ] = - 0.0 ; rtB . lwno5xammy [ 2 ] = - 0.0 ; rtB . lwno5xammy
[ 3 ] = 0.0 ; rtB . lwno5xammy [ 4 ] = 0.0 ; rtB . napknbkquk [ 0 ] = rtX .
pjatogehh1 [ 0 ] ; rtB . aufjnco1bm [ 0 ] = rtX . kvl2kwyztt [ 0 ] ; rtB .
napknbkquk [ 1 ] = rtX . pjatogehh1 [ 1 ] ; rtB . aufjnco1bm [ 1 ] = rtX .
kvl2kwyztt [ 1 ] ; rtB . b4224qf4tv [ 0 ] = rtB . aufjnco1bm [ 0 ] ; rtB .
b4224qf4tv [ 1 ] = 0.0 ; rtB . b4224qf4tv [ 2 ] = rtB . aufjnco1bm [ 1 ] ;
rtB . gaek01rrr3 [ 0 ] = 0.0 ; rtB . kv3osjbizo = rtX . acvsjhtzkf ; rtB .
gaek01rrr3 [ 1 ] = rtB . kv3osjbizo ; rtB . gaek01rrr3 [ 2 ] = 0.0 ; rtB .
jhj3zz42j4 [ 0 ] = rtP . Constant2_Value_gowhp30m5w ; rtB . jhj3zz42j4 [ 1 ]
= rtB . gaek01rrr3 [ 1 ] ; rtB . jhj3zz42j4 [ 2 ] = rtP . Constant1_Value ;
muDoubleScalarSinCos ( rtB . jhj3zz42j4 [ 0 ] , & njuefsve0i_idx_0 , &
ignslznau2_idx_0 ) ; muDoubleScalarSinCos ( rtB . jhj3zz42j4 [ 1 ] , &
njuefsve0i_idx_1 , & ignslznau2_idx_1 ) ; muDoubleScalarSinCos ( rtB .
jhj3zz42j4 [ 2 ] , & njuefsve0i_idx_2 , & ignslznau2_idx_2 ) ; rtB .
f2ueewkbjc [ 0 ] = ignslznau2_idx_1 * ignslznau2_idx_0 ; rtB . f2ueewkbjc [ 1
] = njuefsve0i_idx_2 * njuefsve0i_idx_1 * ignslznau2_idx_0 - ignslznau2_idx_2
* njuefsve0i_idx_0 ; rtB . f2ueewkbjc [ 2 ] = ignslznau2_idx_2 *
njuefsve0i_idx_1 * ignslznau2_idx_0 + njuefsve0i_idx_2 * njuefsve0i_idx_0 ;
rtB . f2ueewkbjc [ 3 ] = ignslznau2_idx_1 * njuefsve0i_idx_0 ; rtB .
f2ueewkbjc [ 4 ] = njuefsve0i_idx_2 * njuefsve0i_idx_1 * njuefsve0i_idx_0 +
ignslznau2_idx_2 * ignslznau2_idx_0 ; rtB . f2ueewkbjc [ 5 ] =
ignslznau2_idx_2 * njuefsve0i_idx_1 * njuefsve0i_idx_0 - njuefsve0i_idx_2 *
ignslznau2_idx_0 ; rtB . f2ueewkbjc [ 6 ] = - njuefsve0i_idx_1 ; rtB .
f2ueewkbjc [ 7 ] = njuefsve0i_idx_2 * ignslznau2_idx_1 ; rtB . f2ueewkbjc [ 8
] = ignslznau2_idx_2 * ignslznau2_idx_1 ; for ( i = 0 ; i < 3 ; i ++ ) { rtB
. dvzu21xwhx [ 3 * i ] = rtB . f2ueewkbjc [ i ] ; rtB . dvzu21xwhx [ 3 * i +
1 ] = rtB . f2ueewkbjc [ i + 3 ] ; rtB . dvzu21xwhx [ 3 * i + 2 ] = rtB .
f2ueewkbjc [ i + 6 ] ; } for ( i = 0 ; i < 3 ; i ++ ) { rtB . nctohqsvwh [ i
] = 0.0 ; rtB . nctohqsvwh [ i ] += rtB . dvzu21xwhx [ i ] * rtB . jldjif2bkl
[ 0 ] ; rtB . nctohqsvwh [ i ] += rtB . dvzu21xwhx [ i + 3 ] * rtB .
jldjif2bkl [ 1 ] ; rtB . nctohqsvwh [ i ] += rtB . dvzu21xwhx [ i + 6 ] * rtB
. jldjif2bkl [ 2 ] ; } rtB . msa0c5sdpt [ 0 ] = rtB . b4224qf4tv [ 0 ] + rtB
. nctohqsvwh [ 0 ] ; rtB . msa0c5sdpt [ 1 ] = rtP . Constant12_Value + rtB .
nctohqsvwh [ 1 ] ; rtB . msa0c5sdpt [ 2 ] = rtB . b4224qf4tv [ 2 ] + rtB .
nctohqsvwh [ 2 ] ; rtB . oorww1wcg3 [ 0 ] = rtB . msa0c5sdpt [ 2 ] ;
muDoubleScalarSinCos ( rtB . jhj3zz42j4 [ 0 ] , & ignslznau2_idx_0 , &
njuefsve0i_idx_0 ) ; muDoubleScalarSinCos ( rtB . jhj3zz42j4 [ 1 ] , &
ignslznau2_idx_1 , & njuefsve0i_idx_1 ) ; muDoubleScalarSinCos ( rtB .
jhj3zz42j4 [ 2 ] , & ignslznau2_idx_2 , & njuefsve0i_idx_2 ) ; rtB .
oipqkobspt [ 0 ] = njuefsve0i_idx_1 * njuefsve0i_idx_0 ; rtB . oipqkobspt [ 1
] = ignslznau2_idx_2 * ignslznau2_idx_1 * njuefsve0i_idx_0 - njuefsve0i_idx_2
* ignslznau2_idx_0 ; rtB . oipqkobspt [ 2 ] = njuefsve0i_idx_2 *
ignslznau2_idx_1 * njuefsve0i_idx_0 + ignslznau2_idx_2 * ignslznau2_idx_0 ;
rtB . oipqkobspt [ 3 ] = njuefsve0i_idx_1 * ignslznau2_idx_0 ; rtB .
oipqkobspt [ 4 ] = ignslznau2_idx_2 * ignslznau2_idx_1 * ignslznau2_idx_0 +
njuefsve0i_idx_2 * njuefsve0i_idx_0 ; rtB . oipqkobspt [ 5 ] =
njuefsve0i_idx_2 * ignslznau2_idx_1 * ignslznau2_idx_0 - ignslznau2_idx_2 *
njuefsve0i_idx_0 ; rtB . oipqkobspt [ 6 ] = - ignslznau2_idx_1 ; rtB .
oipqkobspt [ 7 ] = ignslznau2_idx_2 * njuefsve0i_idx_1 ; rtB . oipqkobspt [ 8
] = njuefsve0i_idx_2 * njuefsve0i_idx_1 ; for ( i = 0 ; i < 3 ; i ++ ) { rtB
. kaebigjgd4 [ 3 * i ] = rtB . oipqkobspt [ i ] ; rtB . kaebigjgd4 [ 3 * i +
1 ] = rtB . oipqkobspt [ i + 3 ] ; rtB . kaebigjgd4 [ 3 * i + 2 ] = rtB .
oipqkobspt [ i + 6 ] ; } for ( i = 0 ; i < 3 ; i ++ ) { rtB . he340y04vs [ i
] = 0.0 ; rtB . he340y04vs [ i ] += rtB . kaebigjgd4 [ i ] * rtB . po32laksrz
[ 0 ] ; rtB . he340y04vs [ i ] += rtB . kaebigjgd4 [ i + 3 ] * rtB .
po32laksrz [ 1 ] ; rtB . he340y04vs [ i ] += rtB . kaebigjgd4 [ i + 6 ] * rtB
. po32laksrz [ 2 ] ; } rtB . ph0tpe5if5 [ 0 ] = rtB . b4224qf4tv [ 0 ] + rtB
. he340y04vs [ 0 ] ; rtB . ph0tpe5if5 [ 1 ] = rtP . Constant12_Value + rtB .
he340y04vs [ 1 ] ; rtB . ph0tpe5if5 [ 2 ] = rtB . b4224qf4tv [ 2 ] + rtB .
he340y04vs [ 2 ] ; rtB . oorww1wcg3 [ 1 ] = rtB . ph0tpe5if5 [ 2 ] ; rtB .
i5rrf0mxdx [ 0 ] = rtB . oorww1wcg3 [ 0 ] - rtB . napknbkquk [ 0 ] ; rtB .
i5rrf0mxdx [ 1 ] = rtB . oorww1wcg3 [ 1 ] - rtB . napknbkquk [ 1 ] ; rtB .
arhf0clxqd [ 0 ] = look1_binlxpw ( rtB . i5rrf0mxdx [ 0 ] , rtP . dzsF , rtP
. FskF , 5U ) ; rtB . arhf0clxqd [ 1 ] = look1_binlxpw ( rtB . i5rrf0mxdx [ 1
] , rtP . dzsR , rtP . FskR , 5U ) ; rtB . ehplbjsl2s [ 0 ] = 0.0 ; rtB .
kpql35e3jx = rtX . i52yscusub ; rtB . ehplbjsl2s [ 1 ] = rtB . kpql35e3jx ;
rtB . ehplbjsl2s [ 2 ] = 0.0 ; rtB . pfxb5cp324 = rtB . ehplbjsl2s [ 1 ] *
rtB . jldjif2bkl [ 2 ] ; rtB . cjf0g1m02r = rtB . ehplbjsl2s [ 2 ] * rtB .
jldjif2bkl [ 0 ] ; rtB . lniie22aca = rtB . ehplbjsl2s [ 0 ] * rtB .
jldjif2bkl [ 1 ] ; rtB . pgdiss5r2m = rtB . ehplbjsl2s [ 2 ] * rtB .
jldjif2bkl [ 1 ] ; rtB . hf22yy5y1q = rtB . ehplbjsl2s [ 0 ] * rtB .
jldjif2bkl [ 2 ] ; rtB . edhzlsgf2y = rtB . ehplbjsl2s [ 1 ] * rtB .
jldjif2bkl [ 0 ] ; rtB . hvfsoaq5ld [ 0 ] = rtB . pfxb5cp324 - rtB .
pgdiss5r2m ; rtB . hvfsoaq5ld [ 1 ] = rtB . cjf0g1m02r - rtB . hf22yy5y1q ;
rtB . hvfsoaq5ld [ 2 ] = rtB . lniie22aca - rtB . edhzlsgf2y ; rtB .
audvaxq0d4 = rtB . ehplbjsl2s [ 1 ] * rtB . po32laksrz [ 2 ] ; rtB .
ax0lh0rex0 = rtB . ehplbjsl2s [ 2 ] * rtB . po32laksrz [ 0 ] ; rtB .
l4kkea5xp2 = rtB . ehplbjsl2s [ 0 ] * rtB . po32laksrz [ 1 ] ; rtB .
ey3jisgadc = rtB . ehplbjsl2s [ 2 ] * rtB . po32laksrz [ 1 ] ; rtB .
gbtcjmplpx = rtB . ehplbjsl2s [ 0 ] * rtB . po32laksrz [ 2 ] ; rtB .
lv1h0u3agv = rtB . ehplbjsl2s [ 1 ] * rtB . po32laksrz [ 0 ] ; rtB .
me2bqjjbgm [ 0 ] = rtB . audvaxq0d4 - rtB . ey3jisgadc ; rtB . me2bqjjbgm [ 1
] = rtB . ax0lh0rex0 - rtB . gbtcjmplpx ; rtB . me2bqjjbgm [ 2 ] = rtB .
l4kkea5xp2 - rtB . lv1h0u3agv ; rtB . js34n2lyrx [ 0 ] = rtB . hvfsoaq5ld [ 0
] + rtB . fl3w3jvdsi [ 0 ] ; rtB . bp5oyyiqlm [ 0 ] = rtB . me2bqjjbgm [ 0 ]
+ rtB . fl3w3jvdsi [ 0 ] ; rtB . js34n2lyrx [ 1 ] = rtB . hvfsoaq5ld [ 1 ] +
rtB . fl3w3jvdsi [ 1 ] ; rtB . bp5oyyiqlm [ 1 ] = rtB . me2bqjjbgm [ 1 ] +
rtB . fl3w3jvdsi [ 1 ] ; rtB . js34n2lyrx [ 2 ] = rtB . hvfsoaq5ld [ 2 ] +
rtB . fl3w3jvdsi [ 2 ] ; rtB . bp5oyyiqlm [ 2 ] = rtB . me2bqjjbgm [ 2 ] +
rtB . fl3w3jvdsi [ 2 ] ; rtB . mpypmsgyi1 [ 0 ] = rtB . js34n2lyrx [ 2 ] ;
rtB . mpypmsgyi1 [ 1 ] = rtB . bp5oyyiqlm [ 2 ] ; rtB . otz30dqwqs [ 0 ] =
rtB . mpypmsgyi1 [ 0 ] - rtB . lmyq34sf0g [ 0 ] ; rtB . otz30dqwqs [ 1 ] =
rtB . mpypmsgyi1 [ 1 ] - rtB . lmyq34sf0g [ 1 ] ; rtB . nairdbyqp1 [ 0 ] =
look1_binlxpw ( rtB . otz30dqwqs [ 0 ] , rtP . dzdotsF , rtP . FsbF , 6U ) ;
rtB . nairdbyqp1 [ 1 ] = look1_binlxpw ( rtB . otz30dqwqs [ 1 ] , rtP .
dzdotsR , rtP . FsbR , 6U ) ; rtB . hythrdl4q2 [ 0 ] = rtB . arhf0clxqd [ 0 ]
+ rtB . nairdbyqp1 [ 0 ] ; rtB . o3id5sdn4p [ 0 ] = rtP . NFNR_Gain [ 0 ] *
rtB . hythrdl4q2 [ 0 ] ; rtB . hythrdl4q2 [ 1 ] = rtB . arhf0clxqd [ 1 ] +
rtB . nairdbyqp1 [ 1 ] ; rtB . o3id5sdn4p [ 1 ] = rtP . NFNR_Gain [ 1 ] * rtB
. hythrdl4q2 [ 1 ] ; rtB . lwno5xammy [ 5 ] = rtB . o3id5sdn4p [ 0 ] ; rtB .
lwno5xammy [ 6 ] = 0.0 ; rtB . lwno5xammy [ 7 ] = 0.0 ; rtB . lwno5xammy [ 8
] = rtB . o3id5sdn4p [ 1 ] ; rtB . lwno5xammy [ 9 ] = rtB . npguaw4amt [ 0 ]
; rtB . lwno5xammy [ 10 ] = rtB . npguaw4amt [ 1 ] ; rtB . lwno5xammy [ 11 ]
= rtB . npguaw4amt [ 2 ] ; rtB . a443qjuymv [ 0 ] = - rtB . gaek01rrr3 [ 1 ]
; rtB . a443qjuymv [ 1 ] = - rtB . gaek01rrr3 [ 1 ] ; rtB . a443qjuymv [ 2 ]
= - rtB . gaek01rrr3 [ 1 ] ; a0wtai2ypj = 0.017453292519943295 * rtU .
ishqklku1k ; rtB . a443qjuymv [ 3 ] = - rtB . gaek01rrr3 [ 1 ] - a0wtai2ypj ;
for ( kvwunpslmv = 0 ; kvwunpslmv < 4 ; kvwunpslmv ++ ) { rtB . lkkyw1qsdn [
kvwunpslmv ] . hg0uepzdlr [ 0 ] = rtP . lkkyw1qsdn . psi_Value ; rtB .
lkkyw1qsdn [ kvwunpslmv ] . hg0uepzdlr [ 1 ] = rtB . a443qjuymv [ kvwunpslmv
] ; rtB . lkkyw1qsdn [ kvwunpslmv ] . hg0uepzdlr [ 2 ] = rtP . lkkyw1qsdn .
phi_Value ; muDoubleScalarSinCos ( rtB . lkkyw1qsdn [ kvwunpslmv ] .
hg0uepzdlr [ 0 ] , & ignslznau2_idx_0 , & njuefsve0i_idx_0 ) ;
muDoubleScalarSinCos ( rtB . lkkyw1qsdn [ kvwunpslmv ] . hg0uepzdlr [ 1 ] , &
ignslznau2_idx_1 , & njuefsve0i_idx_1 ) ; muDoubleScalarSinCos ( rtB .
lkkyw1qsdn [ kvwunpslmv ] . hg0uepzdlr [ 2 ] , & ignslznau2_idx_2 , &
njuefsve0i_idx_2 ) ; rtB . lkkyw1qsdn [ kvwunpslmv ] . iftka2hl45 [ 0 ] =
njuefsve0i_idx_1 * njuefsve0i_idx_0 ; rtB . lkkyw1qsdn [ kvwunpslmv ] .
iftka2hl45 [ 1 ] = ignslznau2_idx_2 * ignslznau2_idx_1 * njuefsve0i_idx_0 -
njuefsve0i_idx_2 * ignslznau2_idx_0 ; rtB . lkkyw1qsdn [ kvwunpslmv ] .
iftka2hl45 [ 2 ] = njuefsve0i_idx_2 * ignslznau2_idx_1 * njuefsve0i_idx_0 +
ignslznau2_idx_2 * ignslznau2_idx_0 ; rtB . lkkyw1qsdn [ kvwunpslmv ] .
iftka2hl45 [ 3 ] = njuefsve0i_idx_1 * ignslznau2_idx_0 ; rtB . lkkyw1qsdn [
kvwunpslmv ] . iftka2hl45 [ 4 ] = ignslznau2_idx_2 * ignslznau2_idx_1 *
ignslznau2_idx_0 + njuefsve0i_idx_2 * njuefsve0i_idx_0 ; rtB . lkkyw1qsdn [
kvwunpslmv ] . iftka2hl45 [ 5 ] = njuefsve0i_idx_2 * ignslznau2_idx_1 *
ignslznau2_idx_0 - ignslznau2_idx_2 * njuefsve0i_idx_0 ; rtB . lkkyw1qsdn [
kvwunpslmv ] . iftka2hl45 [ 6 ] = - ignslznau2_idx_1 ; rtB . lkkyw1qsdn [
kvwunpslmv ] . iftka2hl45 [ 7 ] = ignslznau2_idx_2 * njuefsve0i_idx_1 ; rtB .
lkkyw1qsdn [ kvwunpslmv ] . iftka2hl45 [ 8 ] = njuefsve0i_idx_2 *
njuefsve0i_idx_1 ; for ( i = 0 ; i < 3 ; i ++ ) { rtB . lkkyw1qsdn [
kvwunpslmv ] . iny0n31qca [ 3 * i ] = rtB . lkkyw1qsdn [ kvwunpslmv ] .
iftka2hl45 [ i ] ; rtB . lkkyw1qsdn [ kvwunpslmv ] . iny0n31qca [ 3 * i + 1 ]
= rtB . lkkyw1qsdn [ kvwunpslmv ] . iftka2hl45 [ i + 3 ] ; rtB . lkkyw1qsdn [
kvwunpslmv ] . iny0n31qca [ 3 * i + 2 ] = rtB . lkkyw1qsdn [ kvwunpslmv ] .
iftka2hl45 [ i + 6 ] ; } for ( i = 0 ; i < 3 ; i ++ ) { rtB . lkkyw1qsdn [
kvwunpslmv ] . lsxufha4ar [ i ] = 0.0 ; rtB . lkkyw1qsdn [ kvwunpslmv ] .
lsxufha4ar [ i ] += rtB . lwno5xammy [ 3 * kvwunpslmv ] * rtB . lkkyw1qsdn [
kvwunpslmv ] . iny0n31qca [ i ] ; rtB . lkkyw1qsdn [ kvwunpslmv ] .
lsxufha4ar [ i ] += rtB . lwno5xammy [ 3 * kvwunpslmv + 1 ] * rtB .
lkkyw1qsdn [ kvwunpslmv ] . iny0n31qca [ i + 3 ] ; rtB . lkkyw1qsdn [
kvwunpslmv ] . lsxufha4ar [ i ] += rtB . lwno5xammy [ 3 * kvwunpslmv + 2 ] *
rtB . lkkyw1qsdn [ kvwunpslmv ] . iny0n31qca [ i + 6 ] ; rtB . jysmct5dke [ i
] = rtB . lkkyw1qsdn [ kvwunpslmv ] . lsxufha4ar [ i ] ; rtB . ko2j33jveu [ i
+ 3 * kvwunpslmv ] = rtB . jysmct5dke [ i ] ; } } rtB . hngolbfjxs [ 0 ] =
rtB . ko2j33jveu [ 3 ] ; rtB . hhx0yapiru [ 0 ] = rtB . hngolbfjxs [ 0 ] ;
rtB . bulmsnibdh [ 0 ] = rtB . ko2j33jveu [ 6 ] ; rtB . oxzcy2p53x [ 0 ] =
rtB . bulmsnibdh [ 0 ] ; rtB . fti1lk5vjw [ 0 ] = rtB . hhx0yapiru [ 0 ] ;
rtB . fti1lk5vjw [ 3 ] = rtB . oxzcy2p53x [ 0 ] ; rtB . hngolbfjxs [ 1 ] =
rtB . ko2j33jveu [ 4 ] ; rtB . hhx0yapiru [ 1 ] = rtB . hngolbfjxs [ 1 ] ;
rtB . bulmsnibdh [ 1 ] = rtB . ko2j33jveu [ 7 ] ; rtB . oxzcy2p53x [ 1 ] =
rtB . bulmsnibdh [ 1 ] ; rtB . fti1lk5vjw [ 1 ] = rtB . hhx0yapiru [ 1 ] ;
rtB . fti1lk5vjw [ 4 ] = rtB . oxzcy2p53x [ 1 ] ; rtB . hngolbfjxs [ 2 ] =
rtB . ko2j33jveu [ 5 ] ; rtB . hhx0yapiru [ 2 ] = rtB . hngolbfjxs [ 2 ] ;
rtB . bulmsnibdh [ 2 ] = rtB . ko2j33jveu [ 8 ] ; rtB . oxzcy2p53x [ 2 ] =
rtB . bulmsnibdh [ 2 ] ; rtB . fti1lk5vjw [ 2 ] = rtB . hhx0yapiru [ 2 ] ;
rtB . fti1lk5vjw [ 5 ] = rtB . oxzcy2p53x [ 2 ] ; rtB . kg2fpgf5gs = rtP .
a_CG * rtB . hhx0yapiru [ 2 ] ; rtB . gt2zfa4a1s = rtP . b_CG * rtB .
oxzcy2p53x [ 2 ] ; rtB . o0omv4lhyr [ 0 ] = rtB . fti1lk5vjw [ 0 ] ; rtB .
o0omv4lhyr [ 1 ] = rtB . fti1lk5vjw [ 1 ] ; rtB . o0omv4lhyr [ 2 ] = rtB .
fti1lk5vjw [ 2 ] ; rtB . oge4pedyvk = ( rtB . o0omv4lhyr [ 0 ] * rtB .
o0omv4lhyr [ 0 ] + rtB . o0omv4lhyr [ 1 ] * rtB . o0omv4lhyr [ 1 ] ) + rtB .
o0omv4lhyr [ 2 ] * rtB . o0omv4lhyr [ 2 ] ; if ( ssIsMajorTimeStep ( rtS ) )
{ if ( rtDW . oecqsnuhib != 0 ) { ssSetBlockStateForSolverChangedAtMajorStep
( rtS ) ; rtDW . oecqsnuhib = 0 ; } njuefsve0i_idx_0 = muDoubleScalarSqrt (
rtB . oge4pedyvk ) ; } else { if ( rtB . oge4pedyvk < 0.0 ) {
njuefsve0i_idx_0 = - muDoubleScalarSqrt ( muDoubleScalarAbs ( rtB .
oge4pedyvk ) ) ; } else { njuefsve0i_idx_0 = muDoubleScalarSqrt ( rtB .
oge4pedyvk ) ; } if ( rtB . oge4pedyvk < 0.0 ) { rtDW . oecqsnuhib = 1 ; } }
rtB . f1gv0k550c = rtP . uNF_Gain * njuefsve0i_idx_0 ; rtB . dmus3c4xmj = rtX
. medyoqmr4n ; rtB . ileilbufb2 = rtB . dmus3c4xmj * rtB . m5ku5csxya ; rtB .
jg2roxx5bs = 0.0 - rtB . ileilbufb2 ; rtB . bw244p3q0q = rtP .
Signconvention_Gain * rtB . jg2roxx5bs ; rtB . bxpazjxklu = rtP .
FrontBias_Gain * rtU . fyr11ojm40 ; rtB . d34xk5ykmh = rtB . bxpazjxklu * rtB
. ftuivg3ybn * rtP . disk_abore * rtP . num_pads ; if ( rtB . d34xk5ykmh >
rtP . DisallowNegativeBrakeTorque_UpperSat ) { rtB . ax54sddcaw = rtP .
DisallowNegativeBrakeTorque_UpperSat ; } else if ( rtB . d34xk5ykmh < rtP .
DisallowNegativeBrakeTorque_LowerSat ) { rtB . ax54sddcaw = rtP .
DisallowNegativeBrakeTorque_LowerSat ; } else { rtB . ax54sddcaw = rtB .
d34xk5ykmh ; } rtB . hqvukv2xsp = rtP . Rm * rtP . mu_kinetic * rtB .
ax54sddcaw ; rtB . finh0wc4da = rtP . mu_static / rtP . mu_kinetic * rtB .
hqvukv2xsp ; g0qms2rrt2 ( 1 , rtS , & rtB . bw244p3q0q , & rtB . finh0wc4da ,
& rtB . hqvukv2xsp , & rtB . pv2oncoizs , rtB . g0qms2rrt2g , rtDW .
g0qms2rrt2g , & rtP . g0qms2rrt2g , rtX . g0qms2rrt2g , rtP . omegao , rtP .
br , rtP . Iyy_Whl , rtP . VXLOW , rtP . Re ) ; nsppivnex0 ( rtB . m5ku5csxya
, rtB . f1gv0k550c , rtB . pv2oncoizs , rtB . fl3w3jvdsi [ 0 ] , rtP .
Constant_Value_gwdg5epxbj , rtP . Constant1_Value_dknu4stzhh , rtP .
Constant7_Value , rtP . Constant6_Value , rtP . lam_x , rtP .
Constant2_Value_cz4ittyvrh , rtP . Constant19_Value , rtP .
Constant12_Value_proh0kgbum , rtP . Constant14_Value , rtP . press , rtP .
Constant5_Value , rtP . Constant2_Value_lwhwyyeuxk , rtP . aMy , rtP . bMy ,
rtP . cMy , rtP . Constant16_Value , rtP . Constant7_Value_gxccvaxnbj , rtP .
Constant9_Value , rtP . betaMy , rtP . alphaMy , rtP . Constant11_Value , rtP
. Constant10_Value , rtP . UNLOADED_RADIUS , rtP . Constant1_Value_ojyzymfvdf
, rtP . Constant3_Value , rtP . Constant19_Value_njgerszt24 , rtP .
Constant12_Value_p5hf31jr3e , rtP . Constant14_Value_aba3ooix0p , 0.0 , rtP .
Constant14_Value_i4532q1mpk , rtP . Constant1_Value_ct2oikhell , rtP .
Constant19_Value_a0uhprsrne , rtP . Constant2_Value_lut4znz5ox , rtP .
Constant3_Value_hfdzbleowk , rtP . Constant4_Value_f1kh5fqc5r , rtP .
Constant5_Value_cbkmzfhmey , rtP . Constant6_Value_prvgxkhyqy , rtP .
Constant7_Value_a4zujb3rpa , rtP . Constant8_Value , rtP .
Constant9_Value_fyveuupisu , rtP . Constant10_Value_md0t0tsexk , rtP .
Constant11_Value_c1g5k2falu , rtP . Constant16_Value_ngoog4lshw , rtP .
Constant17_Value , rtP . Constant13_Value , rtP . Constant15_Value , rtP .
Constant21_Value , rtP . Constant22_Value , rtP . Constant18_Value , rtP .
Constant20_Value , rtP . Constant24_Value , rtP . Constant23_Value , rtP .
FxType_Value , rtP . rollType_Value , rtP . vertType_Value , & rtB .
kkrjlu4uvo , rtP . FZMAX , rtP . FZMIN , rtP . VXLOW , rtP . kappamax ) ; rtB
. fc2wrfay4e = rtB . kkrjlu4uvo . odbylawxnz + rtB . kkrjlu4uvo . odbylawxnz
; rtB . l3uikgbb3b [ 0 ] = rtB . fc2wrfay4e ; rtB . oyc1al4h1w [ 0 ] = rtB .
fti1lk5vjw [ 3 ] ; rtB . oyc1al4h1w [ 1 ] = rtB . fti1lk5vjw [ 4 ] ; rtB .
oyc1al4h1w [ 2 ] = rtB . fti1lk5vjw [ 5 ] ; rtB . ip3nkmhbmh = ( rtB .
oyc1al4h1w [ 0 ] * rtB . oyc1al4h1w [ 0 ] + rtB . oyc1al4h1w [ 1 ] * rtB .
oyc1al4h1w [ 1 ] ) + rtB . oyc1al4h1w [ 2 ] * rtB . oyc1al4h1w [ 2 ] ; if (
ssIsMajorTimeStep ( rtS ) ) { if ( rtDW . kx1gvg3l0l != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; rtDW . kx1gvg3l0l = 0 ;
} njuefsve0i_idx_0 = muDoubleScalarSqrt ( rtB . ip3nkmhbmh ) ; } else { if (
rtB . ip3nkmhbmh < 0.0 ) { njuefsve0i_idx_0 = - muDoubleScalarSqrt (
muDoubleScalarAbs ( rtB . ip3nkmhbmh ) ) ; } else { njuefsve0i_idx_0 =
muDoubleScalarSqrt ( rtB . ip3nkmhbmh ) ; } if ( rtB . ip3nkmhbmh < 0.0 ) {
rtDW . kx1gvg3l0l = 1 ; } } rtB . fc21izfzx4 = rtP . uNR_Gain *
njuefsve0i_idx_0 ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { rtB . ia0ojskpxs =
rtDW . kpovkdto0q ; } if ( ssIsMajorTimeStep ( rtS ) ) { zcEvent = rt_ZCFcn (
RISING_ZERO_CROSSING , & rtPrevZCX . ic4ifxvbt2 , ( rtB . ia0ojskpxs ) ) ; if
( ( zcEvent != NO_ZCEVENT ) || ( rtDW . appmqjbhea != 0 ) ) { rtX .
bwpjg31mvz = rtB . jbv5m1xncl ; ssSetBlockStateForSolverChangedAtMajorStep (
rtS ) ; } } rtB . aaxsvkqai0 = rtX . bwpjg31mvz ; rtB . mbn5ixhvjf = rtP . b
* rtB . aaxsvkqai0 ; rtB . fjgrzm4gzz = rtX . op5vt3u10o ; rtB . f12frx44r4 =
rtP . k * rtB . fjgrzm4gzz ; rtB . ddppy23mxp = rtB . mbn5ixhvjf + rtB .
f12frx44r4 ; rtB . bserwztahf = rtX . na1iog2zww ; rtB . earfrwf0hr = rtB .
bserwztahf * rtB . hmfp21fvok ; rtB . bep5golme5 = rtB . ddppy23mxp - rtB .
earfrwf0hr ; rtB . hlf1acubd5 = rtP . Signconvention_Gain_i5iwgnmbdg * rtB .
bep5golme5 ; rtB . gmna1ac1wl = rtP . RearBias1_Gain * rtU . fyr11ojm40 ; rtB
. b3mk52fmiw = rtB . gmna1ac1wl * rtB . knygbp5qud * rtP . disk_abore * rtP .
num_pads ; if ( rtB . b3mk52fmiw > rtP .
DisallowNegativeBrakeTorque_UpperSat_nolqf4lzdx ) { rtB . ius1e2jprf = rtP .
DisallowNegativeBrakeTorque_UpperSat_nolqf4lzdx ; } else if ( rtB .
b3mk52fmiw < rtP . DisallowNegativeBrakeTorque_LowerSat_etj13r0dm4 ) { rtB .
ius1e2jprf = rtP . DisallowNegativeBrakeTorque_LowerSat_etj13r0dm4 ; } else {
rtB . ius1e2jprf = rtB . b3mk52fmiw ; } rtB . ew44hdju13 = rtP . Rm * rtP .
mu_kinetic * rtB . ius1e2jprf ; rtB . nszyb3hol0 = rtP . mu_static / rtP .
mu_kinetic * rtB . ew44hdju13 ; g0qms2rrt2 ( 1 , rtS , & rtB . hlf1acubd5 , &
rtB . nszyb3hol0 , & rtB . ew44hdju13 , & rtB . c5ixvkkdja , rtB . nt1qt43cpp
, rtDW . nt1qt43cpp , & rtP . nt1qt43cpp , rtX . nt1qt43cpp , rtP . omegao ,
rtP . br , rtP . Iyy_Whl , rtP . VXLOW , rtP . Re ) ; nsppivnex0 ( rtB .
hmfp21fvok , rtB . fc21izfzx4 , rtB . c5ixvkkdja , rtB . fl3w3jvdsi [ 0 ] ,
rtP . Constant_Value_jtawhtsysr , rtP . Constant1_Value_fjaudrjhdl , rtP .
Constant7_Value_pixa3rqdjd , rtP . Constant6_Value_kedjcf23fy , rtP . lam_x ,
rtP . Constant2_Value_ahxqsxq3tu , rtP . Constant19_Value_lqhzgejtie , rtP .
Constant12_Value_ekkzpqixof , rtP . Constant14_Value_bybhg4ohya , rtP . press
, rtP . Constant5_Value_corjlakafh , rtP . Constant2_Value_gi1emdzvsk , rtP .
aMy , rtP . bMy , rtP . cMy , rtP . Constant16_Value_dfgzubkfqq , rtP .
Constant7_Value_iuio0bhswj , rtP . Constant9_Value_mqlbfqzvp4 , rtP . betaMy
, rtP . alphaMy , rtP . Constant11_Value_pauyoxiidd , rtP .
Constant10_Value_behsis2gkb , rtP . UNLOADED_RADIUS , rtP .
Constant1_Value_lozhj4hfg4 , rtP . Constant3_Value_ixz2bdxktj , rtP .
Constant19_Value_cjkss2p31v , rtP . Constant12_Value_jjodmq5x4f , rtP .
Constant14_Value_bmmxa54qsf , 0.0 , rtP . Constant14_Value_i4kwnrkv3h , rtP .
Constant1_Value_dn53nszxpb , rtP . Constant19_Value_osodq1xdbo , rtP .
Constant2_Value_lqgwunbbft , rtP . Constant3_Value_ngurra14in , rtP .
Constant4_Value_bbzkuzilzq , rtP . Constant5_Value_i4lm1emseb , rtP .
Constant6_Value_gemqs5gkeb , rtP . Constant7_Value_npz0eazso3 , rtP .
Constant8_Value_fvkoq4lt4g , rtP . Constant9_Value_dkanzsokxj , rtP .
Constant10_Value_datoxoevhn , rtP . Constant11_Value_pizwvw1rzs , rtP .
Constant16_Value_mk3andc4xt , rtP . Constant17_Value_fjpjpdrunn , rtP .
Constant13_Value_dwnk2235vn , rtP . Constant15_Value_flu5ou3ydx , rtP .
Constant21_Value_e0lxcbmexj , rtP . Constant22_Value_kpbolgth1z , rtP .
Constant18_Value_ngbpjrqfcn , rtP . Constant20_Value_hnrc5vlofu , rtP .
Constant24_Value_bf3qpd1yub , rtP . Constant23_Value_b0h5b3oyri , rtP .
FxType_Value_lufvzgmz0j , rtP . rollType_Value_d4ppucsvxa , rtP .
vertType_Value_cpqcctvc03 , & rtB . jlep0zzj4c , rtP . FZMAX , rtP . FZMIN ,
rtP . VXLOW , rtP . kappamax ) ; rtB . jfgqtvutxu = rtB . jlep0zzj4c .
odbylawxnz + rtB . jlep0zzj4c . odbylawxnz ; rtB . l3uikgbb3b [ 1 ] = rtB .
jfgqtvutxu ; rtB . obiqeibdxg = rtB . l3uikgbb3b [ 0 ] + rtB . l3uikgbb3b [ 1
] ; rtB . in24fxjjbm = ( rtB . hhx0yapiru [ 0 ] + rtB . oxzcy2p53x [ 0 ] ) +
rtB . obiqeibdxg ; rtB . d4liyxsdf3 = rtP . h * rtB . in24fxjjbm ; rtB .
hq340ksp50 [ 0 ] = rtB . ko2j33jveu [ 0 ] ; rtB . dkru0kjfjp [ 0 ] = rtB .
fl3w3jvdsi [ 0 ] - rtB . hq340ksp50 [ 0 ] ; rtB . hs03wuldth [ 0 ] = rtB .
dkru0kjfjp [ 0 ] * rtB . dkru0kjfjp [ 0 ] ; rtB . hq340ksp50 [ 1 ] = rtB .
ko2j33jveu [ 1 ] ; rtB . dkru0kjfjp [ 1 ] = rtB . fl3w3jvdsi [ 1 ] - rtB .
hq340ksp50 [ 1 ] ; rtB . hs03wuldth [ 1 ] = rtB . dkru0kjfjp [ 1 ] * rtB .
dkru0kjfjp [ 1 ] ; rtB . hq340ksp50 [ 2 ] = rtB . ko2j33jveu [ 2 ] ; rtB .
dkru0kjfjp [ 2 ] = rtB . fl3w3jvdsi [ 2 ] - rtB . hq340ksp50 [ 2 ] ; rtB .
hs03wuldth [ 2 ] = rtB . dkru0kjfjp [ 2 ] * rtB . dkru0kjfjp [ 2 ] ; rtB .
jiojizdhep = ( rtB . hs03wuldth [ 0 ] + rtB . hs03wuldth [ 1 ] ) + rtB .
hs03wuldth [ 2 ] ; if ( ssIsMajorTimeStep ( rtS ) ) { if ( rtDW . bs2px0f0vf
!= 0 ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; rtDW .
bs2px0f0vf = 0 ; } njuefsve0i_idx_0 = muDoubleScalarSqrt ( rtB . jiojizdhep )
; } else { if ( rtB . jiojizdhep < 0.0 ) { njuefsve0i_idx_0 = -
muDoubleScalarSqrt ( muDoubleScalarAbs ( rtB . jiojizdhep ) ) ; } else {
njuefsve0i_idx_0 = muDoubleScalarSqrt ( rtB . jiojizdhep ) ; } if ( rtB .
jiojizdhep < 0.0 ) { rtDW . bs2px0f0vf = 1 ; } } rtB . b2lhkjzml4 =
njuefsve0i_idx_0 * njuefsve0i_idx_0 ; rtB . lhlooh5fkc [ 0 ] = rtP . Cd ;
njuefsve0i_idx_0 = muDoubleScalarAtan2 ( rtB . dkru0kjfjp [ 1 ] , rtB .
dkru0kjfjp [ 0 ] ) ; rtB . lhlooh5fkc [ 1 ] = look1_binlcpw (
njuefsve0i_idx_0 , rtP . DragForce_beta_w , rtP . DragForce_Cs , 1U ) ; rtB .
lhlooh5fkc [ 2 ] = rtP . Cl ; rtB . lhlooh5fkc [ 3 ] = look1_binlxpw (
njuefsve0i_idx_0 , rtP . Crm_bp01Data , rtP . Crm_tableData , 1U ) ; if ( rtB
. dkru0kjfjp [ 0 ] >= rtP . Switch_Threshold ) { rtB . cisxqujvum [ 0 ] = rtP
. Constant4_Value [ 0 ] ; } else { rtB . cisxqujvum [ 0 ] = rtB . c1dlqtm02p
[ 0 ] ; } if ( rtB . dkru0kjfjp [ 1 ] >= rtP . Switch_Threshold ) { rtB .
cisxqujvum [ 1 ] = rtP . Constant4_Value [ 1 ] ; } else { rtB . cisxqujvum [
1 ] = rtB . c1dlqtm02p [ 1 ] ; } if ( rtB . dkru0kjfjp [ 2 ] >= rtP .
Switch_Threshold ) { rtB . cisxqujvum [ 2 ] = rtP . Constant4_Value [ 2 ] ; }
else { rtB . cisxqujvum [ 2 ] = rtB . c1dlqtm02p [ 2 ] ; } rtB . lhlooh5fkc [
4 ] = rtB . cisxqujvum [ 0 ] * rtP . Cpm ; rtB . lhlooh5fkc [ 5 ] =
look1_binlxpw ( njuefsve0i_idx_0 , rtP . DragForce_beta_w , rtP .
DragForce_Cym , 1U ) ; njuefsve0i_idx_0 = 0.5 * rtP . Af * rtP . Pabs / rtP .
DragForce_R ; for ( i = 0 ; i < 6 ; i ++ ) { rtB . jc5lgzz344 [ i ] = rtB .
b2lhkjzml4 * rtB . lhlooh5fkc [ i ] / rtP . T ; rtB . hhz4t34e2g [ i ] =
njuefsve0i_idx_0 * rtB . jc5lgzz344 [ i ] ; } njuefsve0i_idx_0 = rtP . a_CG +
rtP . b_CG ; rtB . gxnvrkca2h [ 0 ] = rtB . hhz4t34e2g [ 3 ] *
njuefsve0i_idx_0 ; rtB . gxnvrkca2h [ 1 ] = rtB . hhz4t34e2g [ 4 ] *
njuefsve0i_idx_0 ; rtB . gxnvrkca2h [ 2 ] = rtB . hhz4t34e2g [ 5 ] *
njuefsve0i_idx_0 ; rtB . mptksaxj4h = ( ( ( rtB . kg2fpgf5gs - rtB .
gt2zfa4a1s ) + rtB . d4liyxsdf3 ) + rtB . gxnvrkca2h [ 1 ] ) + rtP .
MExtConstant_Value [ 1 ] ; rtB . ksvzqk05tq = rtP . Constant2_Value * rtB .
kpql35e3jx ; rtB . lqho4qf5m3 = rtB . mptksaxj4h - rtB . ksvzqk05tq ; rtB .
j4zwcvum4v = rtB . lqho4qf5m3 / rtP . Iyy ; muDoubleScalarSinCos ( rtB .
kv3osjbizo , & njuefsve0i_idx_0 , & ignslznau2_idx_0 ) ; rtB . c4paxuk0gc [ 0
] = - njuefsve0i_idx_0 * rtP . uDOFBodyAxes_g ; rtB . c4paxuk0gc [ 1 ] =
ignslznau2_idx_0 * rtP . uDOFBodyAxes_g ; rtB . iinnocqymd [ 0 ] = 0.0 ; rtB
. iinnocqymd [ 0 ] += rtP . MatrixGain_Gain [ 0 ] * rtB . hbvagjoehw [ 0 ] ;
rtB . iinnocqymd [ 0 ] += rtP . MatrixGain_Gain [ 2 ] * rtB . hbvagjoehw [ 1
] ; rtB . ek20uulqhd [ 0 ] = rtB . iinnocqymd [ 0 ] * rtB . kpql35e3jx ; rtB
. iinnocqymd [ 1 ] = 0.0 ; rtB . iinnocqymd [ 1 ] += rtP . MatrixGain_Gain [
1 ] * rtB . hbvagjoehw [ 0 ] ; rtB . iinnocqymd [ 1 ] += rtP .
MatrixGain_Gain [ 3 ] * rtB . hbvagjoehw [ 1 ] ; rtB . ek20uulqhd [ 1 ] = rtB
. iinnocqymd [ 1 ] * rtB . kpql35e3jx ; rtB . dcdu0sstq5 = rtB . fc2wrfay4e +
rtB . jfgqtvutxu ; rtB . nkuvi2wir1 [ 0 ] = rtB . hhx0yapiru [ 0 ] + rtB .
oxzcy2p53x [ 0 ] ; rtB . kfv1jnxdcb [ 0 ] = rtB . cisxqujvum [ 0 ] * rtB .
hhz4t34e2g [ 0 ] ; rtB . a34vsr4icm [ 0 ] = rtB . ko2j33jveu [ 9 ] ; rtB .
nkuvi2wir1 [ 1 ] = rtB . hhx0yapiru [ 1 ] + rtB . oxzcy2p53x [ 1 ] ; rtB .
kfv1jnxdcb [ 1 ] = rtB . cisxqujvum [ 1 ] * rtB . hhz4t34e2g [ 1 ] ; rtB .
a34vsr4icm [ 1 ] = rtB . ko2j33jveu [ 10 ] ; rtB . nkuvi2wir1 [ 2 ] = rtB .
hhx0yapiru [ 2 ] + rtB . oxzcy2p53x [ 2 ] ; rtB . kfv1jnxdcb [ 2 ] = rtB .
cisxqujvum [ 2 ] * rtB . hhz4t34e2g [ 2 ] ; rtB . a34vsr4icm [ 2 ] = rtB .
ko2j33jveu [ 11 ] ; rtB . m5zcbblxpv = ( ( ( rtB . dcdu0sstq5 + rtB .
nkuvi2wir1 [ 0 ] ) - rtB . kfv1jnxdcb [ 0 ] ) + rtB . a34vsr4icm [ 0 ] ) +
rtP . FExtConstant_Value [ 0 ] ; rtB . blbatpv3jn = ( ( rtB . kfv1jnxdcb [ 2
] - rtB . nkuvi2wir1 [ 2 ] ) + rtB . a34vsr4icm [ 2 ] ) + rtP .
FExtConstant_Value [ 2 ] ; rtB . kjjkugtces [ 0 ] = rtB . m5zcbblxpv / rtP .
Mass ; rtB . kjjkugtces [ 1 ] = rtB . blbatpv3jn / rtP . Mass ; rtB .
afh4emj1nn [ 0 ] = rtB . c4paxuk0gc [ 0 ] + rtB . kjjkugtces [ 0 ] ; rtB .
ogvrkt53m0 [ 0 ] = rtB . afh4emj1nn [ 0 ] + rtB . ek20uulqhd [ 0 ] ; rtB .
afh4emj1nn [ 1 ] = rtB . c4paxuk0gc [ 1 ] + rtB . kjjkugtces [ 1 ] ; rtB .
ogvrkt53m0 [ 1 ] = rtB . afh4emj1nn [ 1 ] + rtB . ek20uulqhd [ 1 ] ; rtB .
c5hd41ef1x [ 0 ] = rtP . Constant_Value ; rtB . c5hd41ef1x [ 1 ] = rtB .
kv3osjbizo ; rtB . c5hd41ef1x [ 2 ] = rtP . Constant_Value ;
muDoubleScalarSinCos ( rtB . c5hd41ef1x [ 0 ] , & ignslznau2_idx_0 , &
njuefsve0i_idx_0 ) ; muDoubleScalarSinCos ( rtB . c5hd41ef1x [ 1 ] , &
ignslznau2_idx_1 , & njuefsve0i_idx_1 ) ; muDoubleScalarSinCos ( rtB .
c5hd41ef1x [ 2 ] , & ignslznau2_idx_2 , & njuefsve0i_idx_2 ) ; rtB .
ffh4nyfsmr [ 0 ] = njuefsve0i_idx_1 * njuefsve0i_idx_0 ; rtB . ffh4nyfsmr [ 1
] = ignslznau2_idx_2 * ignslznau2_idx_1 * njuefsve0i_idx_0 - njuefsve0i_idx_2
* ignslznau2_idx_0 ; rtB . ffh4nyfsmr [ 2 ] = njuefsve0i_idx_2 *
ignslznau2_idx_1 * njuefsve0i_idx_0 + ignslznau2_idx_2 * ignslznau2_idx_0 ;
rtB . ffh4nyfsmr [ 3 ] = njuefsve0i_idx_1 * ignslznau2_idx_0 ; rtB .
ffh4nyfsmr [ 4 ] = ignslznau2_idx_2 * ignslznau2_idx_1 * ignslznau2_idx_0 +
njuefsve0i_idx_2 * njuefsve0i_idx_0 ; rtB . ffh4nyfsmr [ 5 ] =
njuefsve0i_idx_2 * ignslznau2_idx_1 * ignslznau2_idx_0 - ignslznau2_idx_2 *
njuefsve0i_idx_0 ; rtB . ffh4nyfsmr [ 6 ] = - ignslznau2_idx_1 ; rtB .
ffh4nyfsmr [ 7 ] = ignslznau2_idx_2 * njuefsve0i_idx_1 ; rtB . ffh4nyfsmr [ 8
] = njuefsve0i_idx_2 * njuefsve0i_idx_1 ; for ( i = 0 ; i < 3 ; i ++ ) { rtB
. l5akcup4jj [ 3 * i ] = rtB . ffh4nyfsmr [ i ] ; rtB . l5akcup4jj [ 3 * i +
1 ] = rtB . ffh4nyfsmr [ i + 3 ] ; rtB . l5akcup4jj [ 3 * i + 2 ] = rtB .
ffh4nyfsmr [ i + 6 ] ; } rtB . mf1mzpm0t3 [ 0 ] = rtB . hbvagjoehw [ 0 ] ;
rtB . mf1mzpm0t3 [ 1 ] = rtP . Constant_Value ; rtB . mf1mzpm0t3 [ 2 ] = rtB
. hbvagjoehw [ 1 ] ; for ( i = 0 ; i < 3 ; i ++ ) { rtB . byxw4oacat [ i ] =
0.0 ; rtB . byxw4oacat [ i ] += rtB . l5akcup4jj [ i ] * rtB . mf1mzpm0t3 [ 0
] ; rtB . byxw4oacat [ i ] += rtB . l5akcup4jj [ i + 3 ] * rtB . mf1mzpm0t3 [
1 ] ; rtB . byxw4oacat [ i ] += rtB . l5akcup4jj [ i + 6 ] * rtB . mf1mzpm0t3
[ 2 ] ; } rtB . lb5dx4b3jk [ 0 ] = rtB . byxw4oacat [ 0 ] ; rtB . lb5dx4b3jk
[ 1 ] = rtB . byxw4oacat [ 2 ] ; muDoubleScalarSinCos ( rtP .
Constant_Value_ful2bhsbsr , & fu4ruxc5pq , & njuefsve0i_idx_0 ) ;
muDoubleScalarSinCos ( a0wtai2ypj + rtB . gaek01rrr3 [ 1 ] , & fu4ruxc5pq , &
njuefsve0i_idx_1 ) ; muDoubleScalarSinCos ( rtP . Constant_Value_ful2bhsbsr ,
& fu4ruxc5pq , & njuefsve0i_idx_2 ) ; rtB . emlvbttdyz = rtX . o3s24wysvb ;
rtY . lgntnbyfqe = rtB . emlvbttdyz ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) {
{ if ( ( rtDW . heooubpmub . AQHandles || rtDW . heooubpmub . SlioLTF ) &&
ssGetLogOutput ( rtS ) ) { sdiSlioSdiWriteSignal ( rtDW . heooubpmub .
AQHandles , rtDW . heooubpmub . SlioLTF , 0 , ssGetTaskTime ( rtS , 1 ) , (
char * ) & rtB . emlvbttdyz + 0 ) ; } } rtB . btryepb3lp = rtDW . ccv2xnvywn
; } if ( ssIsMajorTimeStep ( rtS ) ) { zcEvent = rt_ZCFcn (
RISING_ZERO_CROSSING , & rtPrevZCX . kbw15xq343 , ( rtB . btryepb3lp ) ) ; if
( ( zcEvent != NO_ZCEVENT ) || ( rtDW . cmjpzycq5g != 0 ) ) { rtX .
otqnbnfqsy = rtB . hr50ll3oqj ; ssSetBlockStateForSolverChangedAtMajorStep (
rtS ) ; } } rtB . bf43kefmfh = rtX . otqnbnfqsy ; rtB . pweyi4u1zx = rtP . b
* rtB . bf43kefmfh ; rtB . nsglwteu5v = rtX . jwkok33c33 ; rtB . fw0g4ey4fo =
rtP . k * rtB . nsglwteu5v ; rtB . kdkxysqm0t = rtB . pweyi4u1zx + rtB .
fw0g4ey4fo ; rtB . ew1reedbnv = - rtP . RotationalInertia_b * rtB .
emlvbttdyz ; rtB . cbr3oyt3lb = ( rtU . asu2rtubja + - rtB . kdkxysqm0t ) +
rtB . ew1reedbnv ; rtB . jxcgxst2is = rtB . cbr3oyt3lb / rtB . mywr3gtqt3 ;
rtB . l3kqf3ebdp = rtB . kkrjlu4uvo . istsrpdzon / rtB . m5ku5csxya ; rtB .
omo5i3z4hj = rtB . kkrjlu4uvo . odbylawxnz + rtB . l3kqf3ebdp ; rtB .
adqsh2k4ic = rtB . pv2oncoizs * rtB . m5ku5csxya ; if ( ( rtB . adqsh2k4ic >=
- rtP . VXLOW ) && ( rtB . adqsh2k4ic <= rtP . VXLOW ) ) { rtB . nuqisryxie =
4.0 / ( 3.0 - muDoubleScalarPower ( rtB . adqsh2k4ic / 2.0 , 2.0 ) ) ; } else
{ rtB . kptpbclfwk = muDoubleScalarAbs ( rtB . adqsh2k4ic ) ; rtB .
nuqisryxie = rtB . kptpbclfwk ; } rtB . n4ylimvkll = rtB . nuqisryxie / rtP .
Lrel ; rtB . loxwvwrcia = rtB . omo5i3z4hj - rtB . dmus3c4xmj ; rtB .
cztrdqhftf = rtB . n4ylimvkll * rtB . loxwvwrcia ; rtB . ixk3hxcurq = rtB .
jlep0zzj4c . istsrpdzon / rtB . hmfp21fvok ; rtB . fzgx2tufv1 = rtB .
jlep0zzj4c . odbylawxnz + rtB . ixk3hxcurq ; rtB . gsvjzha0ac = rtB .
c5ixvkkdja * rtB . hmfp21fvok ; if ( ( rtB . gsvjzha0ac >= - rtP . VXLOW ) &&
( rtB . gsvjzha0ac <= rtP . VXLOW ) ) { rtB . gnacurz3w5 = 4.0 / ( 3.0 -
muDoubleScalarPower ( rtB . gsvjzha0ac / 2.0 , 2.0 ) ) ; } else { rtB .
mnna5hwg3f = muDoubleScalarAbs ( rtB . gsvjzha0ac ) ; rtB . gnacurz3w5 = rtB
. mnna5hwg3f ; } rtB . nlphchuiom = rtB . gnacurz3w5 / rtP . Lrel ; rtB .
hj2blpaerv = rtB . fzgx2tufv1 - rtB . bserwztahf ; rtB . dmdfff1fpp = rtB .
nlphchuiom * rtB . hj2blpaerv ; rtB . carktevnct [ 0 ] = rtB . emlvbttdyz ;
rtB . carktevnct [ 1 ] = 0.0 ; rtB . carktevnct [ 2 ] = 0.0 ; rtB .
carktevnct [ 3 ] = 0.0 ; rtB . izyfxqhqcz = 0.0 ; rtB . izyfxqhqcz += 2.0 *
rtB . carktevnct [ 0 ] ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { { if ( ( rtDW
. eyz2b5jfld . AQHandles || rtDW . eyz2b5jfld . SlioLTF ) && ssGetLogOutput (
rtS ) ) { sdiSlioSdiWriteSignal ( rtDW . eyz2b5jfld . AQHandles , rtDW .
eyz2b5jfld . SlioLTF , 0 , ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB .
izyfxqhqcz + 0 ) ; } } } if ( rtDW . jowjuwqghw != 0 ) { rtX . b4y025j20n [ 0
] = rtB . pigob0blb3 [ 0 ] ; rtX . b4y025j20n [ 1 ] = rtB . pigob0blb3 [ 1 ]
; } if ( rtX . b4y025j20n [ 0 ] >= rtP . Integrator_UpperSat ) { if ( rtX .
b4y025j20n [ 0 ] != rtP . Integrator_UpperSat ) { rtX . b4y025j20n [ 0 ] =
rtP . Integrator_UpperSat ; ssSetBlockStateForSolverChangedAtMajorStep ( rtS
) ; } } else { if ( ( rtX . b4y025j20n [ 0 ] <= rtP . Integrator_LowerSat )
&& ( rtX . b4y025j20n [ 0 ] != rtP . Integrator_LowerSat ) ) { rtX .
b4y025j20n [ 0 ] = rtP . Integrator_LowerSat ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } } if ( rtX .
b4y025j20n [ 1 ] >= rtP . Integrator_UpperSat ) { if ( rtX . b4y025j20n [ 1 ]
!= rtP . Integrator_UpperSat ) { rtX . b4y025j20n [ 1 ] = rtP .
Integrator_UpperSat ; ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; }
} else { if ( ( rtX . b4y025j20n [ 1 ] <= rtP . Integrator_LowerSat ) && (
rtX . b4y025j20n [ 1 ] != rtP . Integrator_LowerSat ) ) { rtX . b4y025j20n [
1 ] = rtP . Integrator_LowerSat ; ssSetBlockStateForSolverChangedAtMajorStep
( rtS ) ; } } njuefsve0i_idx_0 = rtP . LimitedSlipDifferential_Ndiff / 2.0 ;
rtB . ci1mx445b5 [ 0 ] = rtX . b4y025j20n [ 0 ] ; rtB . num3ib20gq [ 0 ] =
rtB . iw4ps3gqvq * rtB . ci1mx445b5 [ 0 ] ; rtB . iya5tp4cdn [ 0 ] =
njuefsve0i_idx_0 * rtB . num3ib20gq [ 0 ] ; rtB . ci1mx445b5 [ 1 ] = rtX .
b4y025j20n [ 1 ] ; rtB . num3ib20gq [ 1 ] = rtB . iw4ps3gqvq * rtB .
ci1mx445b5 [ 1 ] ; rtB . iya5tp4cdn [ 1 ] = njuefsve0i_idx_0 * rtB .
num3ib20gq [ 1 ] ; rtB . b1jodlhboe = rtB . iya5tp4cdn [ 0 ] + rtB .
iya5tp4cdn [ 1 ] ; rtB . cx0yxkcry4 [ 0 ] = rtB . b1jodlhboe ; rtB .
bourbfwnuv [ 0 ] = rtP . Gain1_Gain * rtB . ci1mx445b5 [ 0 ] ; rtB .
bourbfwnuv [ 1 ] = rtP . Gain1_Gain * rtB . ci1mx445b5 [ 1 ] ; rtB .
cx0yxkcry4 [ 1 ] = - rtB . ci1mx445b5 [ 0 ] ; rtB . cx0yxkcry4 [ 2 ] = - rtB
. ci1mx445b5 [ 1 ] ; rtB . dtdini0pef = rtB . bourbfwnuv [ 0 ] - rtB .
bourbfwnuv [ 1 ] ; rtB . cx0yxkcry4 [ 3 ] = rtB . dtdini0pef ; rtB .
pufuucy0fb = rtB . kdkxysqm0t * rtB . cx0yxkcry4 [ 0 ] ; if ( rtB .
pufuucy0fb > rtP . Switch_Threshold_fkgz22tddd ) { rtB . lulkwzk1on = rtP .
LimitedSlipDifferential_eta ; } else { rtB . lulkwzk1on = rtP .
Constant_Value_glbkitsq4x ; } rtB . hd1scyomug = rtB . lulkwzk1on * rtB .
kdkxysqm0t ; rtB . ao0tmcfamz = - rtB . ddppy23mxp * rtB . cx0yxkcry4 [ 1 ] ;
if ( rtB . ao0tmcfamz > rtP . Switch_Threshold_exzp10ezln ) { rtB .
o3l2toprpn = rtP . LimitedSlipDifferential_eta ; } else { rtB . o3l2toprpn =
rtP . Constant_Value_nmlkfmyo3q ; } rtB . otfutxs4mr = rtB . o3l2toprpn * -
rtB . ddppy23mxp ; rtB . gz1skuswsk = - rtB . ddppy23mxp * rtB . cx0yxkcry4 [
2 ] ; if ( rtB . gz1skuswsk > rtP . Switch_Threshold_npanpsygul ) { rtB .
bkdlmlnojz = rtP . LimitedSlipDifferential_eta ; } else { rtB . bkdlmlnojz =
rtP . Constant_Value_ggkgw5e4ms ; } rtB . mqbrmoxrar = rtB . bkdlmlnojz * -
rtB . ddppy23mxp ; rtB . jcwtpqnasc = rtX . bbmdxvj5g5 ; rtB . mcaqczbuom [ 0
] = rtB . hd1scyomug ; rtB . mcaqczbuom [ 1 ] = rtB . otfutxs4mr ; rtB .
mcaqczbuom [ 2 ] = rtB . mqbrmoxrar ; rtB . mcaqczbuom [ 3 ] = rtB .
jcwtpqnasc ; if ( rtP . LimitedSlipDifferential_shaftSwitchMask == 1.0 ) {
pxwjz4wpfg ( rtB . mcaqczbuom , rtP . LimitedSlipDifferential_bw1 , rtP .
LimitedSlipDifferential_bd , rtP . LimitedSlipDifferential_bw2 , rtP .
LimitedSlipDifferential_Ndiff , 1.0 , rtP . LimitedSlipDifferential_Jd , rtP
. LimitedSlipDifferential_Jw1 , rtP . LimitedSlipDifferential_Jw2 , rtB .
ci1mx445b5 , unusedU1 , rtB . glnjftgoht ) ; } else { pxwjz4wpfg ( rtB .
mcaqczbuom , rtP . LimitedSlipDifferential_bw1 , rtP .
LimitedSlipDifferential_bd , rtP . LimitedSlipDifferential_bw2 , rtP .
LimitedSlipDifferential_Ndiff , 0.0 , rtP . LimitedSlipDifferential_Jd , rtP
. LimitedSlipDifferential_Jw1 , rtP . LimitedSlipDifferential_Jw2 , rtB .
ci1mx445b5 , unusedU1 , rtB . glnjftgoht ) ; } rtB . facust4yjk = rtP .
Gain_Gain * rtB . dtdini0pef ; rtB . kiay1ycxcl = muDoubleScalarAbs ( rtB .
dtdini0pef ) ; rtB . ky2l1btjfj = rtP . LimitedSlipDifferential_Fc * rtP .
LimitedSlipDifferential_Ndisks * rtP . LimitedSlipDifferential_Reff *
muDoubleScalarTanh ( rtB . facust4yjk ) * look1_binlcpw ( rtB . kiay1ycxcl ,
rtP . LimitedSlipDifferential_dw , rtP . LimitedSlipDifferential_muc , 6U ) ;
rtB . ndk4xlqpf1 = rtB . ky2l1btjfj - rtB . jcwtpqnasc ; rtB . ogzwtt0uth =
rtB . ihgs3schr1 * rtB . ndk4xlqpf1 ; rtB . aav3ryaivc = - rtB . ci1mx445b5 [
0 ] - rtB . c5ixvkkdja ; if ( rtB . ia0ojskpxs != 0.0 ) { rtB . mtxbvc4f5c =
rtB . aaxsvkqai0 ; } else { rtB . mtxbvc4f5c = rtB . jbv5m1xncl ; } rtB .
ewjyokkn1d = rtB . aav3ryaivc - rtB . mtxbvc4f5c ; rtB . fnrs5gvhc4 = rtP .
omega_c * rtB . ewjyokkn1d ; rtB . gofcinmsl2 = rtB . emlvbttdyz - rtB .
b1jodlhboe ; if ( rtB . btryepb3lp != 0.0 ) { rtB . awg4dtdgtn = rtB .
bf43kefmfh ; } else { rtB . awg4dtdgtn = rtB . hr50ll3oqj ; } rtB .
jwoypvyz3y = rtB . gofcinmsl2 - rtB . awg4dtdgtn ; rtB . asa4c401qh = rtP .
omega_c * rtB . jwoypvyz3y ; x = rtX . co4qokm1pw ; if ( rtDW . jswox1jizv ==
0.0 ) { rtDW . jswox1jizv = 1.0 ; xPr . mN = 1 ; xPr . mX = & x ; u = rtB .
carktevnct [ 0 ] ; uPr . mN = 1 ; uPr . mX = & u ; diagnosticManager =
rtw_create_diagnostics ( ) ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; icParams .
mFirstSolve . mStatesPattern . mNumCol = 3 ; icParams . mFirstSolve .
mStatesPattern . mNumRow = 3 ; ir [ 0 ] = 1 ; ir [ 1 ] = 0 ; icParams .
mFirstSolve . mStatesPattern . mIr = & ir [ 0 ] ; jc [ 0 ] = 0 ; jc [ 1 ] = 1
; jc [ 2 ] = 2 ; jc [ 3 ] = 2 ; icParams . mFirstSolve . mStatesPattern . mJc
= & jc [ 0 ] ; icParams . mFirstSolve . mStatesPr . mN = 2 ; mX [ 0 ] = 1.0 ;
mX [ 1 ] = 1.0 ; icParams . mFirstSolve . mStatesPr . mX = & mX [ 0 ] ;
icParams . mFirstSolve . mInputsPattern . mNumCol = 1 ; icParams .
mFirstSolve . mInputsPattern . mNumRow = 3 ; jc_p [ 0 ] = 0 ; jc_p [ 1 ] = 0
; icParams . mFirstSolve . mInputsPattern . mJc = & jc_p [ 0 ] ; icParams .
mFirstSolve . mInputsPr . mN = 0 ; icParams . mFirstSolve . mConsts . mN = 3
; mX_p [ 0 ] = 0.0 ; mX_p [ 1 ] = 0.0 ; mX_p [ 2 ] = - 0.0 ; icParams .
mFirstSolve . mConsts . mX = & mX_p [ 0 ] ; icParams . mSecondSolve .
mStatesPattern . mNumCol = 1 ; icParams . mSecondSolve . mStatesPattern .
mNumRow = 1 ; ir_p = 0 ; icParams . mSecondSolve . mStatesPattern . mIr = &
ir_p ; jc_e [ 0 ] = 0 ; jc_e [ 1 ] = 1 ; icParams . mSecondSolve .
mStatesPattern . mJc = & jc_e [ 0 ] ; icParams . mSecondSolve . mStatesPr .
mN = 1 ; mX_e = 1.0 ; icParams . mSecondSolve . mStatesPr . mX = & mX_e ;
icParams . mSecondSolve . mInputsPattern . mNumCol = 1 ; icParams .
mSecondSolve . mInputsPattern . mNumRow = 1 ; jc_i [ 0 ] = 0 ; jc_i [ 1 ] = 0
; icParams . mSecondSolve . mInputsPattern . mJc = & jc_i [ 0 ] ; icParams .
mSecondSolve . mInputsPr . mN = 0 ; icParams . mSecondSolve . mConsts . mN =
1 ; mX_i = 0.0 ; icParams . mSecondSolve . mConsts . mX = & mX_i ; icParams .
mDcSolve . mAPattern . mNumCol = 1 ; icParams . mDcSolve . mAPattern .
mNumRow = 1 ; jc_m [ 0 ] = 0 ; jc_m [ 1 ] = 0 ; icParams . mDcSolve .
mAPattern . mJc = & jc_m [ 0 ] ; icParams . mDcSolve . mAPr . mN = 0 ;
icParams . mDcSolve . mBPattern . mNumCol = 1 ; icParams . mDcSolve .
mBPattern . mNumRow = 1 ; ir_e = 0 ; icParams . mDcSolve . mBPattern . mIr =
& ir_e ; jc_g [ 0 ] = 0 ; jc_g [ 1 ] = 1 ; icParams . mDcSolve . mBPattern .
mJc = & jc_g [ 0 ] ; icParams . mDcSolve . mBPr . mN = 1 ; mX_m = 2.0 ;
icParams . mDcSolve . mBPr . mX = & mX_m ; icParams . mDcSolve . mFa . mN = 1
; mX_g = 0.0 ; icParams . mDcSolve . mFa . mX = & mX_g ; icParams . mGuess .
mN = 1 ; mX_j = 0.0 ; icParams . mGuess . mX = & mX_j ; icParams . mResTol =
1.0E-9 ; icParams . mDoDC = false ; resetSolver = cgIcSolve ( & xPr , & uPr ,
& icParams , diagnosticManager ) ; if ( ! resetSolver ) { resetSolver =
error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( resetSolver ) { msg
= rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; }
} neu_destroy_diagnostic_manager ( diagnosticManager ) ; rtB . iwj2aio34h = x
; rtX . co4qokm1pw = x ; } else { rtB . iwj2aio34h = rtX . co4qokm1pw ; }
UNUSED_PARAMETER ( tid ) ; } void MdlOutputsTID2 ( int_T tid ) { rtB .
jldjif2bkl [ 0 ] = rtP . a_CG ; rtB . jldjif2bkl [ 1 ] = rtP .
HardPointCoordinateTransformFront_R_T2 ; rtB . jldjif2bkl [ 2 ] = rtP . h ;
rtB . po32laksrz [ 0 ] = - rtP . b_CG ; rtB . po32laksrz [ 1 ] = rtP .
HardPointCoordinateTransformRear_R_T2 ; rtB . po32laksrz [ 2 ] = rtP . h ;
rtB . c1dlqtm02p [ 0 ] = - rtP . Constant4_Value [ 0 ] ; rtB . c1dlqtm02p [ 1
] = - rtP . Constant4_Value [ 1 ] ; rtB . c1dlqtm02p [ 2 ] = - rtP .
Constant4_Value [ 2 ] ; rtB . npguaw4amt [ 0 ] = 0.0 ; rtB . npguaw4amt [ 1 ]
= 0.0 ; rtB . npguaw4amt [ 2 ] = rtP . Mass * rtP . g ; if ( ( rtP . Jmotor
>= - rtP . div0protectabspoly_thresh ) && ( rtP . Jmotor <= rtP .
div0protectabspoly_thresh ) ) { rtB . mywr3gtqt3 = 2.0E-6 / ( 3.0 -
muDoubleScalarPower ( rtP . Jmotor / 1.0e-6 , 2.0 ) ) ; } else { rtB .
mywr3gtqt3 = muDoubleScalarAbs ( rtP . Jmotor ) ; } rtB . m5ku5csxya = rtP .
Re ; rtB . ftuivg3ybn = rtP . TorqueConversion1_Gain * rtP . disk_abore ;
g0qms2rrt2TID2 ( 1 , & rtB . bw244p3q0q , & rtB . finh0wc4da , & rtB .
hqvukv2xsp , rtB . g0qms2rrt2g , & rtP . g0qms2rrt2g , rtP . br ) ; rtB .
hmfp21fvok = rtP . Re ; rtB . knygbp5qud = rtP .
TorqueConversion1_Gain_d5kxwp3ghy * rtP . disk_abore ; g0qms2rrt2TID2 ( 1 , &
rtB . hlf1acubd5 , & rtB . nszyb3hol0 , & rtB . ew44hdju13 , rtB . nt1qt43cpp
, & rtP . nt1qt43cpp , rtP . br ) ; rtB . ihgs3schr1 = 1.0 / rtP .
LimitedSlipDifferential_tauC * rtP . upi_Gain ; if ( rtP .
Constant_Value_iyvd2nipbn > rtP . Switch_Threshold_ndiyw3awdg ) { rtB .
dgob255otz = rtP . Constant2_Value_evj0aohnzb ; } else { rtB . dgob255otz = -
rtP . Constant2_Value_evj0aohnzb ; } rtB . pigob0blb3 [ 0 ] = rtP .
LimitedSlipDifferential_omegaw1o ; rtB . pigob0blb3 [ 1 ] = rtP .
LimitedSlipDifferential_omegaw2o ; if ( rtP . Constant_Value_cwq12cxfny > rtP
. Switch_Threshold_cg5jpvuvn1 ) { rtB . iw4ps3gqvq = rtP .
Constant1_Value_g2bu1bfzgh ; } else { rtB . iw4ps3gqvq = - rtP .
Constant1_Value_g2bu1bfzgh ; } rtB . jbv5m1xncl = rtP . domega_o ; rtB .
hr50ll3oqj = rtP . domega_o ; UNUSED_PARAMETER ( tid ) ; } void MdlUpdate (
int_T tid ) { rtDW . mika2fhpql = 0 ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) {
rtDW . kpovkdto0q = rtP . Reset_Value ; rtDW . ccv2xnvywn = rtP .
Reset_Value_ltqw1krttf ; } rtDW . appmqjbhea = 0 ; rtDW . cmjpzycq5g = 0 ;
rtDW . jowjuwqghw = 0 ; UNUSED_PARAMETER ( tid ) ; } void MdlUpdateTID2 (
int_T tid ) { UNUSED_PARAMETER ( tid ) ; } void MdlDerivatives ( void ) {
boolean_T lsat ; boolean_T usat ; XDot * _rtXdot ; _rtXdot = ( ( XDot * )
ssGetdX ( rtS ) ) ; _rtXdot -> ba0epd2aak [ 0 ] = rtB . ogvrkt53m0 [ 0 ] ;
_rtXdot -> pjatogehh1 [ 0 ] = rtB . lmyq34sf0g [ 0 ] ; _rtXdot -> kvl2kwyztt
[ 0 ] = rtB . lb5dx4b3jk [ 0 ] ; _rtXdot -> ba0epd2aak [ 1 ] = rtB .
ogvrkt53m0 [ 1 ] ; _rtXdot -> pjatogehh1 [ 1 ] = rtB . lmyq34sf0g [ 1 ] ;
_rtXdot -> kvl2kwyztt [ 1 ] = rtB . lb5dx4b3jk [ 1 ] ; _rtXdot -> acvsjhtzkf
= rtB . kpql35e3jx ; _rtXdot -> i52yscusub = rtB . j4zwcvum4v ; _rtXdot ->
medyoqmr4n = rtB . cztrdqhftf ; hctrfz05e3 ( 1 , & rtB . bw244p3q0q , & rtB .
finh0wc4da , & rtB . hqvukv2xsp , rtB . g0qms2rrt2g , rtDW . g0qms2rrt2g ,
_rtXdot -> g0qms2rrt2g ) ; _rtXdot -> bwpjg31mvz = rtB . fnrs5gvhc4 ; _rtXdot
-> op5vt3u10o = rtB . aav3ryaivc ; _rtXdot -> na1iog2zww = rtB . dmdfff1fpp ;
hctrfz05e3 ( 1 , & rtB . hlf1acubd5 , & rtB . nszyb3hol0 , & rtB . ew44hdju13
, rtB . nt1qt43cpp , rtDW . nt1qt43cpp , _rtXdot -> nt1qt43cpp ) ; _rtXdot ->
am4llyrsos = rtB . fl3w3jvdsi [ 0 ] ; _rtXdot -> o3s24wysvb = rtB .
jxcgxst2is ; _rtXdot -> otqnbnfqsy = rtB . asa4c401qh ; _rtXdot -> jwkok33c33
= rtB . gofcinmsl2 ; lsat = ( rtX . b4y025j20n [ 0 ] <= rtP .
Integrator_LowerSat ) ; usat = ( rtX . b4y025j20n [ 0 ] >= rtP .
Integrator_UpperSat ) ; if ( ( ( ! lsat ) && ( ! usat ) ) || ( lsat && ( rtB
. glnjftgoht [ 0 ] > 0.0 ) ) || ( usat && ( rtB . glnjftgoht [ 0 ] < 0.0 ) )
) { _rtXdot -> b4y025j20n [ 0 ] = rtB . glnjftgoht [ 0 ] ; } else { _rtXdot
-> b4y025j20n [ 0 ] = 0.0 ; } lsat = ( rtX . b4y025j20n [ 1 ] <= rtP .
Integrator_LowerSat ) ; usat = ( rtX . b4y025j20n [ 1 ] >= rtP .
Integrator_UpperSat ) ; if ( ( ( ! lsat ) && ( ! usat ) ) || ( lsat && ( rtB
. glnjftgoht [ 1 ] > 0.0 ) ) || ( usat && ( rtB . glnjftgoht [ 1 ] < 0.0 ) )
) { _rtXdot -> b4y025j20n [ 1 ] = rtB . glnjftgoht [ 1 ] ; } else { _rtXdot
-> b4y025j20n [ 1 ] = 0.0 ; } _rtXdot -> bbmdxvj5g5 = rtB . ogzwtt0uth ;
_rtXdot -> co4qokm1pw = 0.0 ; _rtXdot -> co4qokm1pw += 2.0 * rtB . carktevnct
[ 0 ] ; } void MdlProjection ( void ) { } void MdlZeroCrossings ( void ) {
ZCV * _rtZCSV ; _rtZCSV = ( ( ZCV * ) ssGetSolverZcSignalVector ( rtS ) ) ;
a35kvcmsf0 ( 1 , rtS , & rtB . bw244p3q0q , & rtB . finh0wc4da , & rtB .
hqvukv2xsp , rtB . g0qms2rrt2g , rtDW . g0qms2rrt2g , & rtP . g0qms2rrt2g ,
_rtZCSV -> g0qms2rrt2g , rtP . VXLOW , rtP . Re ) ; a35kvcmsf0 ( 1 , rtS , &
rtB . hlf1acubd5 , & rtB . nszyb3hol0 , & rtB . ew44hdju13 , rtB . nt1qt43cpp
, rtDW . nt1qt43cpp , & rtP . nt1qt43cpp , _rtZCSV -> nt1qt43cpp , rtP .
VXLOW , rtP . Re ) ; } void MdlTerminate ( void ) { { if ( rtDW . kd2ov54egg
. AQHandles ) { sdiTerminateStreaming ( & rtDW . kd2ov54egg . AQHandles ) ; }
if ( rtDW . kd2ov54egg . SlioLTF ) { rtwDestructAccessorPointer ( rtDW .
kd2ov54egg . SlioLTF ) ; } } { if ( rtDW . heooubpmub . AQHandles ) {
sdiTerminateStreaming ( & rtDW . heooubpmub . AQHandles ) ; } if ( rtDW .
heooubpmub . SlioLTF ) { rtwDestructAccessorPointer ( rtDW . heooubpmub .
SlioLTF ) ; } } { if ( rtDW . eyz2b5jfld . AQHandles ) {
sdiTerminateStreaming ( & rtDW . eyz2b5jfld . AQHandles ) ; } if ( rtDW .
eyz2b5jfld . SlioLTF ) { rtwDestructAccessorPointer ( rtDW . eyz2b5jfld .
SlioLTF ) ; } } if ( rt_slioCatalogue ( ) != ( NULL ) ) { void * *
slioCatalogueAddr = rt_slioCatalogueAddr ( ) ; rtwSaveDatasetsToMatFile (
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) ,
rt_GetMatSigstreamLoggingFileName ( ) ) ; rtwTerminateSlioCatalogue (
slioCatalogueAddr ) ; * slioCatalogueAddr = NULL ; } } void
MdlInitializeSizes ( void ) { ssSetNumContStates ( rtS , 22 ) ;
ssSetNumPeriodicContStates ( rtS , 1 ) ; ssSetNumY ( rtS , 2 ) ; ssSetNumU (
rtS , 4 ) ; ssSetDirectFeedThrough ( rtS , 1 ) ; ssSetNumSampleTimes ( rtS ,
2 ) ; ssSetNumBlocks ( rtS , 669 ) ; ssSetNumBlockIO ( rtS , 249 ) ;
ssSetNumBlockParams ( rtS , 450 ) ; } void MdlInitializeSampleTimes ( void )
{ ssSetSampleTime ( rtS , 0 , 0.0 ) ; ssSetSampleTime ( rtS , 1 , 0.0 ) ;
ssSetOffsetTime ( rtS , 0 , 0.0 ) ; ssSetOffsetTime ( rtS , 1 , 1.0 ) ; }
void raccel_set_checksum ( ) { ssSetChecksumVal ( rtS , 0 , 2619392151U ) ;
ssSetChecksumVal ( rtS , 1 , 320912082U ) ; ssSetChecksumVal ( rtS , 2 ,
503821592U ) ; ssSetChecksumVal ( rtS , 3 , 3124188914U ) ; }
#if defined(_MSC_VER)
#pragma optimize( "", off )
#endif
SimStruct * raccel_register_model ( void ) { static struct _ssMdlInfo mdlInfo
; ( void ) memset ( ( char * ) rtS , 0 , sizeof ( SimStruct ) ) ; ( void )
memset ( ( char * ) & mdlInfo , 0 , sizeof ( struct _ssMdlInfo ) ) ;
ssSetMdlInfoPtr ( rtS , & mdlInfo ) ; { static time_T mdlPeriod [
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
( ( void * ) & rtB ) ) ; ( void ) memset ( ( ( void * ) & rtB ) , 0 , sizeof
( B ) ) ; } { ssSetU ( rtS , ( ( void * ) & rtU ) ) ; ( void ) memset ( & rtU
, 0 , sizeof ( ExtU ) ) ; } { ssSetY ( rtS , & rtY ) ; ( void ) memset ( (
void * ) & rtY , 0 , sizeof ( ExtY ) ) ; } { real_T * x = ( real_T * ) & rtX
; ssSetContStates ( rtS , x ) ; ( void ) memset ( ( void * ) x , 0 , sizeof (
X ) ) ; } { void * dwork = ( void * ) & rtDW ; ssSetRootDWork ( rtS , dwork )
; ( void ) memset ( dwork , 0 , sizeof ( DW ) ) ; } { static
DataTypeTransInfo dtInfo ; ( void ) memset ( ( char_T * ) & dtInfo , 0 ,
sizeof ( dtInfo ) ) ; ssSetModelMappingInfo ( rtS , & dtInfo ) ; dtInfo .
numDataTypes = 14 ; dtInfo . dataTypeSizes = & rtDataTypeSizes [ 0 ] ; dtInfo
. dataTypeNames = & rtDataTypeNames [ 0 ] ; dtInfo . BTransTable = &
rtBTransTable ; dtInfo . PTransTable = & rtPTransTable ; dtInfo .
dataTypeInfoTable = rtDataTypeInfoTable ; }
DrivetrainEv_InitializeDataMapInfo ( ) ; ssSetIsRapidAcceleratorActive ( rtS
, true ) ; ssSetRootSS ( rtS , rtS ) ; ssSetVersion ( rtS ,
SIMSTRUCT_VERSION_LEVEL2 ) ; ssSetModelName ( rtS , "DrivetrainEv" ) ;
ssSetPath ( rtS , "DrivetrainEv" ) ; ssSetTStart ( rtS , 0.0 ) ; ssSetTFinal
( rtS , 2474.0 ) ; { static RTWLogInfo rt_DataLoggingInfo ;
rt_DataLoggingInfo . loggingInterval = NULL ; ssSetRTWLogInfo ( rtS , &
rt_DataLoggingInfo ) ; } { { static int_T rt_LoggedStateWidths [ ] = { 2 , 2
, 2 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 2 , 1 , 1 , 2 , 1 } ; static
int_T rt_LoggedStateNumDimensions [ ] = { 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 } ; static int_T rt_LoggedStateDimensions [
] = { 2 , 2 , 2 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 2 , 1 , 1 , 2 , 1 }
; static boolean_T rt_LoggedStateIsVarDims [ ] = { 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 } ; static BuiltInDTypeId
rt_LoggedStateDataTypeIds [ ] = { SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE } ; static int_T
rt_LoggedStateComplexSignals [ ] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 } ; static RTWPreprocessingFcnPtr
rt_LoggingStatePreprocessingFcnPtrs [ ] = { ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) } ; static const char_T * rt_LoggedStateLabels [ ] = { "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "Discrete" , "FirstOutput" } ; static const char_T *
rt_LoggedStateBlockNames [ ] = {
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/3DOF (Body Axes)/U,w"
, "DrivetrainEv/Vehicle/Integrator" ,
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/3DOF (Body Axes)/Position"
,
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/3DOF (Body Axes)/Theta"
,
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/3DOF (Body Axes)/q"
,
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Front 1/Wheel Module/relaxation/Cont LPF Dyn/Integrator"
,
 "DrivetrainEv/Differential and Compliance/Rear Wheel Drive/Rear Axle Compliance 1/Torsional Compliance Linear 2way/Torsional Compliance Linear/Cont LPF IC Dyn/Integrator"
,
 "DrivetrainEv/Differential and Compliance/Rear Wheel Drive/Rear Axle Compliance 1/Torsional Compliance Linear 2way/Torsional Compliance Linear/Integrator"
,
 "DrivetrainEv/Wheels and Brakes/Longitudinal Wheel - Rear 1/Wheel Module/relaxation/Cont LPF Dyn/Integrator"
,
 "DrivetrainEv/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Body Frame/Longitudinal 3DOF/Integrator3"
,
 "DrivetrainEv/Rotational Inertia/Rotational Inertia/Rotational Inertia External Input/Integrator"
,
 "DrivetrainEv/Driveshaft Compliance/Torsional Compliance Linear 2way/Torsional Compliance Linear/Cont LPF IC Dyn/Integrator"
,
 "DrivetrainEv/Driveshaft Compliance/Torsional Compliance Linear 2way/Torsional Compliance Linear/Integrator"
,
 "DrivetrainEv/Differential and Compliance/Rear Wheel Drive/Limited Slip Differential/Limited Slip Differential/Integrator"
,
 "DrivetrainEv/Differential and Compliance/Rear Wheel Drive/Limited Slip Differential/Limited Slip Differential/Clutch Response/Integrator"
, "DrivetrainEv/Ideal Rotational Motion Sensor" ,
"DrivetrainEv/Solver\nConfiguration1/EVAL_KEY/INPUT_1_1_1" ,
"DrivetrainEv/Solver\nConfiguration1/EVAL_KEY/LTI_STATE_1" } ; static const
char_T * rt_LoggedStateNames [ ] = { "" , "" , "" , "" , "" , "" , "" , "" ,
"" , "" , "" , "" , "" , "" , "" ,
"DrivetrainEv.Ideal_Rotational_Motion_Sensor.phi" , "Discrete" ,
"FirstOutput" } ; static boolean_T rt_LoggedStateCrossMdlRef [ ] = { 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 } ; static
RTWLogDataTypeConvert rt_RTWLogDataTypeConvert [ ] = { { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } } ; static RTWLogSignalInfo rt_LoggedStateSignalInfo = { 18 ,
rt_LoggedStateWidths , rt_LoggedStateNumDimensions , rt_LoggedStateDimensions
, rt_LoggedStateIsVarDims , ( NULL ) , ( NULL ) , rt_LoggedStateDataTypeIds ,
rt_LoggedStateComplexSignals , ( NULL ) , rt_LoggingStatePreprocessingFcnPtrs
, { rt_LoggedStateLabels } , ( NULL ) , ( NULL ) , ( NULL ) , {
rt_LoggedStateBlockNames } , { rt_LoggedStateNames } ,
rt_LoggedStateCrossMdlRef , rt_RTWLogDataTypeConvert } ; static void *
rt_LoggedStateSignalPtrs [ 18 ] ; rtliSetLogXSignalPtrs ( ssGetRTWLogInfo (
rtS ) , ( LogSignalPtrsType ) rt_LoggedStateSignalPtrs ) ;
rtliSetLogXSignalInfo ( ssGetRTWLogInfo ( rtS ) , & rt_LoggedStateSignalInfo
) ; rt_LoggedStateSignalPtrs [ 0 ] = ( void * ) & rtX . ba0epd2aak [ 0 ] ;
rt_LoggedStateSignalPtrs [ 1 ] = ( void * ) & rtX . pjatogehh1 [ 0 ] ;
rt_LoggedStateSignalPtrs [ 2 ] = ( void * ) & rtX . kvl2kwyztt [ 0 ] ;
rt_LoggedStateSignalPtrs [ 3 ] = ( void * ) & rtX . acvsjhtzkf ;
rt_LoggedStateSignalPtrs [ 4 ] = ( void * ) & rtX . i52yscusub ;
rt_LoggedStateSignalPtrs [ 5 ] = ( void * ) & rtX . medyoqmr4n ;
rt_LoggedStateSignalPtrs [ 6 ] = ( void * ) & rtX . bwpjg31mvz ;
rt_LoggedStateSignalPtrs [ 7 ] = ( void * ) & rtX . op5vt3u10o ;
rt_LoggedStateSignalPtrs [ 8 ] = ( void * ) & rtX . na1iog2zww ;
rt_LoggedStateSignalPtrs [ 9 ] = ( void * ) & rtX . am4llyrsos ;
rt_LoggedStateSignalPtrs [ 10 ] = ( void * ) & rtX . o3s24wysvb ;
rt_LoggedStateSignalPtrs [ 11 ] = ( void * ) & rtX . otqnbnfqsy ;
rt_LoggedStateSignalPtrs [ 12 ] = ( void * ) & rtX . jwkok33c33 ;
rt_LoggedStateSignalPtrs [ 13 ] = ( void * ) & rtX . b4y025j20n [ 0 ] ;
rt_LoggedStateSignalPtrs [ 14 ] = ( void * ) & rtX . bbmdxvj5g5 ;
rt_LoggedStateSignalPtrs [ 15 ] = ( void * ) & rtX . co4qokm1pw ;
rt_LoggedStateSignalPtrs [ 16 ] = ( void * ) rtDW . l5oro1zbdt ;
rt_LoggedStateSignalPtrs [ 17 ] = ( void * ) & rtDW . jswox1jizv ; }
rtliSetLogT ( ssGetRTWLogInfo ( rtS ) , "tout" ) ; rtliSetLogX (
ssGetRTWLogInfo ( rtS ) , "" ) ; rtliSetLogXFinal ( ssGetRTWLogInfo ( rtS ) ,
"" ) ; rtliSetLogVarNameModifier ( ssGetRTWLogInfo ( rtS ) , "none" ) ;
rtliSetLogFormat ( ssGetRTWLogInfo ( rtS ) , 4 ) ; rtliSetLogMaxRows (
ssGetRTWLogInfo ( rtS ) , 0 ) ; rtliSetLogDecimation ( ssGetRTWLogInfo ( rtS
) , 1 ) ; { static void * rt_LoggedOutputSignalPtrs [ ] = { & rtY .
cgennkzx51 , & rtY . lgntnbyfqe } ; rtliSetLogYSignalPtrs ( ssGetRTWLogInfo (
rtS ) , ( ( LogSignalPtrsType ) rt_LoggedOutputSignalPtrs ) ) ; } { static
int_T rt_LoggedOutputWidths [ ] = { 1 , 1 } ; static int_T
rt_LoggedOutputNumDimensions [ ] = { 1 , 1 } ; static int_T
rt_LoggedOutputDimensions [ ] = { 1 , 1 } ; static boolean_T
rt_LoggedOutputIsVarDims [ ] = { 0 , 0 } ; static void *
rt_LoggedCurrentSignalDimensions [ ] = { ( NULL ) , ( NULL ) } ; static int_T
rt_LoggedCurrentSignalDimensionsSize [ ] = { 4 , 4 } ; static BuiltInDTypeId
rt_LoggedOutputDataTypeIds [ ] = { SS_DOUBLE , SS_DOUBLE } ; static int_T
rt_LoggedOutputComplexSignals [ ] = { 0 , 0 } ; static RTWPreprocessingFcnPtr
rt_LoggingPreprocessingFcnPtrs [ ] = { ( NULL ) , ( NULL ) } ; static const
char_T * rt_LoggedOutputLabels [ ] = { "xdot" , "MotSpd" } ; static const
char_T * rt_LoggedOutputBlockNames [ ] = { "DrivetrainEv/VehSpd" ,
"DrivetrainEv/MotSpd" } ; static RTWLogDataTypeConvert
rt_RTWLogDataTypeConvert [ ] = { { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 ,
1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } }
; static RTWLogSignalInfo rt_LoggedOutputSignalInfo [ ] = { { 2 ,
rt_LoggedOutputWidths , rt_LoggedOutputNumDimensions ,
rt_LoggedOutputDimensions , rt_LoggedOutputIsVarDims ,
rt_LoggedCurrentSignalDimensions , rt_LoggedCurrentSignalDimensionsSize ,
rt_LoggedOutputDataTypeIds , rt_LoggedOutputComplexSignals , ( NULL ) ,
rt_LoggingPreprocessingFcnPtrs , { rt_LoggedOutputLabels } , ( NULL ) , (
NULL ) , ( NULL ) , { rt_LoggedOutputBlockNames } , { ( NULL ) } , ( NULL ) ,
rt_RTWLogDataTypeConvert } } ; rtliSetLogYSignalInfo ( ssGetRTWLogInfo ( rtS
) , rt_LoggedOutputSignalInfo ) ; rt_LoggedCurrentSignalDimensions [ 0 ] = &
rt_LoggedOutputWidths [ 0 ] ; rt_LoggedCurrentSignalDimensions [ 1 ] = &
rt_LoggedOutputWidths [ 1 ] ; } rtliSetLogY ( ssGetRTWLogInfo ( rtS ) ,
"yout" ) ; } { static struct _ssStatesInfo2 statesInfo2 ; ssSetStatesInfo2 (
rtS , & statesInfo2 ) ; } { static ssPeriodicStatesInfo periodicStatesInfo ;
ssSetPeriodicStatesInfo ( rtS , & periodicStatesInfo ) ;
ssSetPeriodicContStateIndices ( rtS , rtPeriodicIndX ) ; ( void ) memset ( (
void * ) rtPeriodicIndX , 0 , 1 * sizeof ( int_T ) ) ;
ssSetPeriodicContStateRanges ( rtS , rtPeriodicRngX ) ; ( void ) memset ( (
void * ) rtPeriodicRngX , 0 , 2 * sizeof ( real_T ) ) ; } { static
ssJacobianPerturbationBounds jacobianPerturbationBounds ;
ssSetJacobianPerturbationBounds ( rtS , & jacobianPerturbationBounds ) ; } {
static ssSolverInfo slvrInfo ; static boolean_T contStatesDisabled [ 22 ] ;
static real_T absTol [ 22 ] = { 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 } ; static uint8_T absTolControl [ 22 ] = { 0U , 0U , 0U , 0U , 0U ,
0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U
, 0U } ; static real_T contStateJacPerturbBoundMinVec [ 22 ] ; static real_T
contStateJacPerturbBoundMaxVec [ 22 ] ; static uint8_T zcAttributes [ 4 ] = {
( 0xc0 | ZC_EVENT_ALL_UP ) , ( 0xc0 | ZC_EVENT_ALL_UP ) , ( ZC_EVENT_ALL ) ,
( ZC_EVENT_ALL ) } ; static uint8_T zcEvents [ 4 ] = { ( 0x40 |
ZC_EVENT_ALL_UP ) , ( 0x40 | ZC_EVENT_ALL_UP ) , ( 0x40 | ZC_EVENT_ALL ) , (
0x40 | ZC_EVENT_ALL ) } ; static ssNonContDerivSigInfo nonContDerivSigInfo [
6 ] = { { 1 * sizeof ( real_T ) , ( char * ) ( & rtB . btryepb3lp ) , ( NULL
) } , { 1 * sizeof ( real_T ) , ( char * ) ( & rtB . ia0ojskpxs ) , ( NULL )
} , { 1 * sizeof ( boolean_T ) , ( char * ) ( & rtB . nt1qt43cpp [ 0 ] .
azxqoevuvc . lkn4jcwpit . legzb2sclz ) , ( NULL ) } , { 1 * sizeof (
boolean_T ) , ( char * ) ( & rtB . nt1qt43cpp [ 0 ] . azxqoevuvc . lkn4jcwpit
. ejvkch2wis ) , ( NULL ) } , { 1 * sizeof ( boolean_T ) , ( char * ) ( & rtB
. g0qms2rrt2g [ 0 ] . azxqoevuvc . lkn4jcwpit . legzb2sclz ) , ( NULL ) } , {
1 * sizeof ( boolean_T ) , ( char * ) ( & rtB . g0qms2rrt2g [ 0 ] .
azxqoevuvc . lkn4jcwpit . ejvkch2wis ) , ( NULL ) } } ; { int i ; for ( i = 0
; i < 22 ; ++ i ) { contStateJacPerturbBoundMinVec [ i ] = 0 ;
contStateJacPerturbBoundMaxVec [ i ] = rtGetInf ( ) ; } } ssSetSolverRelTol (
rtS , 0.001 ) ; ssSetStepSize ( rtS , 0.0 ) ; ssSetMinStepSize ( rtS , 0.0 )
; ssSetMaxNumMinSteps ( rtS , - 1 ) ; ssSetMinStepViolatedError ( rtS , 0 ) ;
ssSetMaxStepSize ( rtS , 49.480000000000004 ) ; ssSetSolverMaxOrder ( rtS , -
1 ) ; ssSetSolverRefineFactor ( rtS , 1 ) ; ssSetOutputTimes ( rtS , ( NULL )
) ; ssSetNumOutputTimes ( rtS , 0 ) ; ssSetOutputTimesOnly ( rtS , 0 ) ;
ssSetOutputTimesIndex ( rtS , 0 ) ; ssSetZCCacheNeedsReset ( rtS , 1 ) ;
ssSetDerivCacheNeedsReset ( rtS , 0 ) ; ssSetNumNonContDerivSigInfos ( rtS ,
6 ) ; ssSetNonContDerivSigInfos ( rtS , nonContDerivSigInfo ) ;
ssSetSolverInfo ( rtS , & slvrInfo ) ; ssSetSolverName ( rtS ,
"VariableStepAuto" ) ; ssSetVariableStepSolver ( rtS , 1 ) ;
ssSetSolverConsistencyChecking ( rtS , 0 ) ; ssSetSolverAdaptiveZcDetection (
rtS , 0 ) ; ssSetSolverRobustResetMethod ( rtS , 0 ) ; ssSetAbsTolVector (
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
, 4 ) ; ssSetModelZeroCrossings ( rtS , MdlZeroCrossings ) ;
ssSetSolverConsecutiveZCsStepRelTol ( rtS , 2.8421709430404007E-13 ) ;
ssSetSolverMaxConsecutiveZCs ( rtS , 1000 ) ; ssSetSolverConsecutiveZCsError
( rtS , 2 ) ; ssSetSolverMaskedZcDiagnostic ( rtS , 1 ) ;
ssSetSolverIgnoredZcDiagnostic ( rtS , 1 ) ; ssSetSolverMaxConsecutiveMinStep
( rtS , 1 ) ; ssSetSolverShapePreserveControl ( rtS , 2 ) ; ssSetTNextTid (
rtS , INT_MIN ) ; ssSetTNext ( rtS , rtMinusInf ) ; ssSetSolverNeedsReset (
rtS ) ; ssSetNumNonsampledZCs ( rtS , 2 ) ; ssSetContStateDisabled ( rtS ,
contStatesDisabled ) ; ssSetSolverMaxConsecutiveMinStep ( rtS , 1 ) ; } {
ZCSigState * zc = ( ZCSigState * ) & rtPrevZCX ; ssSetPrevZCSigState ( rtS ,
zc ) ; } { rtPrevZCX . ic4ifxvbt2 = UNINITIALIZED_ZCSIG ; rtPrevZCX .
kbw15xq343 = UNINITIALIZED_ZCSIG ; } ssSetChecksumVal ( rtS , 0 , 2619392151U
) ; ssSetChecksumVal ( rtS , 1 , 320912082U ) ; ssSetChecksumVal ( rtS , 2 ,
503821592U ) ; ssSetChecksumVal ( rtS , 3 , 3124188914U ) ; { static const
sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE ; static RTWExtModeInfo
rt_ExtModeInfo ; static const sysRanDType * systemRan [ 24 ] ;
gblRTWExtModeInfo = & rt_ExtModeInfo ; ssSetRTWExtModeInfo ( rtS , &
rt_ExtModeInfo ) ; rteiSetSubSystemActiveVectorAddresses ( & rt_ExtModeInfo ,
systemRan ) ; systemRan [ 0 ] = & rtAlwaysEnabled ; systemRan [ 1 ] = &
rtAlwaysEnabled ; systemRan [ 2 ] = & rtAlwaysEnabled ; systemRan [ 3 ] = &
rtAlwaysEnabled ; systemRan [ 4 ] = & rtAlwaysEnabled ; systemRan [ 5 ] = (
sysRanDType * ) & rtDW . g0qms2rrt2g [ 0 ] . azxqoevuvc . lkn4jcwpit .
pb3tcu34d5 ; systemRan [ 6 ] = ( sysRanDType * ) & rtDW . g0qms2rrt2g [ 0 ] .
azxqoevuvc . lkn4jcwpit . aoynv25rbl ; systemRan [ 7 ] = ( sysRanDType * ) &
rtDW . g0qms2rrt2g [ 0 ] . azxqoevuvc . lkn4jcwpit . pji4wdzuww ; systemRan [
8 ] = ( sysRanDType * ) & rtDW . g0qms2rrt2g [ 0 ] . azxqoevuvc . lkn4jcwpit
. pe5tlefx4c ; systemRan [ 9 ] = & rtAlwaysEnabled ; systemRan [ 10 ] = &
rtAlwaysEnabled ; systemRan [ 11 ] = & rtAlwaysEnabled ; systemRan [ 12 ] = &
rtAlwaysEnabled ; systemRan [ 13 ] = & rtAlwaysEnabled ; systemRan [ 14 ] = &
rtAlwaysEnabled ; systemRan [ 15 ] = ( sysRanDType * ) & rtDW . nt1qt43cpp [
0 ] . azxqoevuvc . lkn4jcwpit . pb3tcu34d5 ; systemRan [ 16 ] = ( sysRanDType
* ) & rtDW . nt1qt43cpp [ 0 ] . azxqoevuvc . lkn4jcwpit . aoynv25rbl ;
systemRan [ 17 ] = ( sysRanDType * ) & rtDW . nt1qt43cpp [ 0 ] . azxqoevuvc .
lkn4jcwpit . pji4wdzuww ; systemRan [ 18 ] = ( sysRanDType * ) & rtDW .
nt1qt43cpp [ 0 ] . azxqoevuvc . lkn4jcwpit . pe5tlefx4c ; systemRan [ 19 ] =
& rtAlwaysEnabled ; systemRan [ 20 ] = & rtAlwaysEnabled ; systemRan [ 21 ] =
& rtAlwaysEnabled ; systemRan [ 22 ] = & rtAlwaysEnabled ; systemRan [ 23 ] =
& rtAlwaysEnabled ; rteiSetModelMappingInfoPtr ( ssGetRTWExtModeInfo ( rtS )
, & ssGetModelMappingInfo ( rtS ) ) ; rteiSetChecksumsPtr (
ssGetRTWExtModeInfo ( rtS ) , ssGetChecksums ( rtS ) ) ; rteiSetTPtr (
ssGetRTWExtModeInfo ( rtS ) , ssGetTPtr ( rtS ) ) ; } rtP .
DisallowNegativeBrakeTorque_UpperSat = rtInf ; rtP .
DisallowNegativeBrakeTorque_UpperSat_nolqf4lzdx = rtInf ; return rtS ; }
#if defined(_MSC_VER)
#pragma optimize( "", on )
#endif
const int_T gblParameterTuningTid = 2 ; void MdlOutputsParameterSampleTime (
int_T tid ) { MdlOutputsTID2 ( tid ) ; }
