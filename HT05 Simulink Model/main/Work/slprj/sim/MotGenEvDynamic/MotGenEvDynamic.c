#include "MotGenEvDynamic_capi.h"
#include "MotGenEvDynamic.h"
#include "MotGenEvDynamic_private.h"
#include "look1_binlxpw.h"
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
2.2204460492503131E-16 , 1.0E+7 , - 1.0E+7 , 3.1415926535897931 , -
3.1415926535897931 , 1.0E+7 , - 1.0E+7 , - 0.5 , 0.8660254037844386 ,
0.66666666666666663 , - 0.33333333333333331 , - 0.33333333333333331 ,
0.57735026918962573 , - 0.57735026918962573 , - 0.5 , - 0.8660254037844386 ,
0.001 , 1.0 , 2.0 , 1.0 , 1.0 , 2.0 , 1.0 , 1.0 , 2.0 , 2.0 , 1.0 , 2.0 , 2.0
, 2.0 , { 4U , 5U } } ; void dwpuxjpomb ( mv4ga5jwa1 * const oczxsqne0n ,
cx3bhokmct * localB , cloq5bin3y * localDW , fsi3zxjdsv * localX ) {
boolean_T tmp ; localDW -> lf2zfdimpe = 1 ; if ( rtmIsFirstInitCond (
oczxsqne0n ) ) { localX -> jjrb01sfag = 0.0 ; tmp =
slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp =
ssGetGlobalInitialStatesAvailable ( oczxsqne0n -> _mdlRefSfcnS ) ; localDW ->
lf2zfdimpe = ! tmp ; } else { localDW -> lf2zfdimpe = 1 ; } localX ->
kqb0spkyga = 0.0 ; } localX -> lsis3mvtl3 = hp0wdh0z5x . P_18 ; localDW ->
hjhxitxtn4 = 1 ; if ( rtmIsFirstInitCond ( oczxsqne0n ) ) { tmp =
slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp =
ssGetGlobalInitialStatesAvailable ( oczxsqne0n -> _mdlRefSfcnS ) ; localDW ->
hjhxitxtn4 = ! tmp ; } else { localDW -> hjhxitxtn4 = 1 ; } } localDW ->
hh4vgn0tkn = hp0wdh0z5x . P_50 ; localDW -> n1xqcq4unv = hp0wdh0z5x . P_54 ;
localB -> bnhtuo4pzv = hp0wdh0z5x . P_32 ; localB -> ancya45mmo = hp0wdh0z5x
. P_33 ; localB -> jmh12knqk4 = hp0wdh0z5x . P_48 ; localB -> j4an1koocn =
hp0wdh0z5x . P_49 ; } void fb4yyrugqd ( mv4ga5jwa1 * const oczxsqne0n ,
cloq5bin3y * localDW , fsi3zxjdsv * localX ) { boolean_T tmp ; localDW ->
lf2zfdimpe = 1 ; if ( rtmIsFirstInitCond ( oczxsqne0n ) ) { localX ->
jjrb01sfag = 0.0 ; tmp = slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) {
tmp = ssGetGlobalInitialStatesAvailable ( oczxsqne0n -> _mdlRefSfcnS ) ;
localDW -> lf2zfdimpe = ! tmp ; } else { localDW -> lf2zfdimpe = 1 ; } localX
-> kqb0spkyga = 0.0 ; } localX -> lsis3mvtl3 = hp0wdh0z5x . P_18 ; localDW ->
hjhxitxtn4 = 1 ; if ( rtmIsFirstInitCond ( oczxsqne0n ) ) { tmp =
slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp =
ssGetGlobalInitialStatesAvailable ( oczxsqne0n -> _mdlRefSfcnS ) ; localDW ->
hjhxitxtn4 = ! tmp ; } else { localDW -> hjhxitxtn4 = 1 ; } } localDW ->
hh4vgn0tkn = hp0wdh0z5x . P_50 ; localDW -> n1xqcq4unv = hp0wdh0z5x . P_54 ;
} void byych5oy3s ( mv4ga5jwa1 * const oczxsqne0n , cloq5bin3y * localDW ) {
switch ( localDW -> bfuoehqzsl ) { case 0 :
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
; } void n5k0o3qutm ( cloq5bin3y * localDW ) { localDW -> i3e2kfzsoy = 0 ;
localDW -> nvnt5k5wtu = 0 ; localDW -> bsszatmvjl = 0 ; localDW -> mekacwiae4
= - 1 ; localDW -> cmjt0zg4xt = - 1 ; localDW -> bfuoehqzsl = - 1 ; } void
MotGenEvDynamic ( mv4ga5jwa1 * const oczxsqne0n , const real_T * emppsgntig ,
const real_T * geawchg2qh , const real_T * cvcsdesmn4 , real_T * fnbywarnx2 ,
real_T * cg1dw5wgio , cx3bhokmct * localB , cloq5bin3y * localDW , fsi3zxjdsv
* localX ) { real_T gcfwi3ao2o ; real_T nx40kxmidk ; real_T jedkbzvhbx ;
real_T ejpw5agfwl ; real_T elbbbc4hth ; real_T fuwbeu0mi2 ; real_T fexu2mpvzu
; real_T hytb3op1gy ; int8_T rtPrevAction ; int8_T rtAction ; real_T
jaabiiivdd ; real_T odjtfn3yxu ; real_T dermgh1t4t_p ; real_T oo0kzookhd_p ;
real_T kmumwkzfti_p ; real_T ir3b2qrvub_p ; real_T ldqlv3qn10_p ; real_T
pilju15sad_p ; int32_T u0 ; if ( localDW -> lf2zfdimpe != 0 ) { localX ->
jjrb01sfag = localB -> gswyltq2oj ; } if ( rtmIsMajorTimeStep ( oczxsqne0n )
) { if ( localX -> jjrb01sfag >= hp0wdh0z5x . P_65 ) { if ( localX ->
jjrb01sfag > hp0wdh0z5x . P_65 ) { ssSetBlockStateForSolverChangedAtMajorStep
( oczxsqne0n -> _mdlRefSfcnS ) ; } localX -> jjrb01sfag = hp0wdh0z5x . P_65 ;
} else { if ( localX -> jjrb01sfag <= hp0wdh0z5x . P_66 ) { if ( localX ->
jjrb01sfag < hp0wdh0z5x . P_66 ) { ssSetBlockStateForSolverChangedAtMajorStep
( oczxsqne0n -> _mdlRefSfcnS ) ; } localX -> jjrb01sfag = hp0wdh0z5x . P_66 ;
} } } dermgh1t4t_p = localX -> jjrb01sfag ; ir3b2qrvub_p = localX ->
lsis3mvtl3 ; muDoubleScalarSinCos ( hp0wdh0z5x . P_6 * localX -> lsis3mvtl3 ,
& gcfwi3ao2o , & nx40kxmidk ) ; oo0kzookhd_p = localX -> jjrb01sfag *
nx40kxmidk ; if ( localDW -> hjhxitxtn4 != 0 ) { localX -> kqb0spkyga =
localB -> dvl0jkf022_cl54gopm0x ; } if ( rtmIsMajorTimeStep ( oczxsqne0n ) )
{ if ( localX -> kqb0spkyga >= hp0wdh0z5x . P_69 ) { if ( localX ->
kqb0spkyga > hp0wdh0z5x . P_69 ) { ssSetBlockStateForSolverChangedAtMajorStep
( oczxsqne0n -> _mdlRefSfcnS ) ; } localX -> kqb0spkyga = hp0wdh0z5x . P_69 ;
} else { if ( localX -> kqb0spkyga <= hp0wdh0z5x . P_70 ) { if ( localX ->
kqb0spkyga < hp0wdh0z5x . P_70 ) { ssSetBlockStateForSolverChangedAtMajorStep
( oczxsqne0n -> _mdlRefSfcnS ) ; } localX -> kqb0spkyga = hp0wdh0z5x . P_70 ;
} } } kmumwkzfti_p = localX -> kqb0spkyga ; oo0kzookhd_p -= localX ->
kqb0spkyga * gcfwi3ao2o ; ldqlv3qn10_p = dermgh1t4t_p * gcfwi3ao2o + localX
-> kqb0spkyga * nx40kxmidk ; pilju15sad_p = hp0wdh0z5x . P_71 * oo0kzookhd_p
+ hp0wdh0z5x . P_72 * ldqlv3qn10_p ; if ( rtmIsMajorTimeStep ( oczxsqne0n )
&& rtmIsSampleHit ( oczxsqne0n , 2 , 0 ) ) { if ( rtmIsMajorTimeStep (
oczxsqne0n ) && rtmIsSampleHit ( oczxsqne0n , 2 , 0 ) ) { fuwbeu0mi2 = (
oo0kzookhd_p + pilju15sad_p ) * hp0wdh0z5x . P_42 ; ejpw5agfwl = ( hp0wdh0z5x
. P_40 * oo0kzookhd_p + hp0wdh0z5x . P_41 * pilju15sad_p ) + hp0wdh0z5x .
P_43 * fuwbeu0mi2 ; elbbbc4hth = hp0wdh0z5x . P_44 * pilju15sad_p +
hp0wdh0z5x . P_45 * fuwbeu0mi2 ; fexu2mpvzu = muDoubleScalarAbs ( *
emppsgntig ) ; jedkbzvhbx = hp0wdh0z5x . P_46 * * cvcsdesmn4 ; hytb3op1gy =
hp0wdh0z5x . P_7 * muDoubleScalarAbs ( * geawchg2qh ) ; fuwbeu0mi2 =
hp0wdh0z5x . P_47 * * emppsgntig ; jaabiiivdd = look1_binlxpw ( fexu2mpvzu ,
hp0wdh0z5x . P_10 , hp0wdh0z5x . P_11 , 9U ) ; odjtfn3yxu = look1_binlxpw (
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
hp0wdh0z5x . P_13 [ ( int32_T ) hp0wdh0z5x . P_23 - 1 ] ; } else { u0 = (
int32_T ) hp0wdh0z5x . P_23 ; if ( u0 > 3 ) { u0 = 3 ; } else { if ( u0 < 1 )
{ u0 = 1 ; } } localB -> bnhtuo4pzv = - hp0wdh0z5x . P_13 [ u0 - 1 ] ; }
localB -> ancya45mmo = hp0wdh0z5x . P_22 ; } srUpdateBC ( localDW ->
djzzdpaje3 ) ; } else { if ( 1 != rtPrevAction ) { if ( rtmGetTaskTime (
oczxsqne0n , 2 ) != rtmGetTStart ( oczxsqne0n ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( oczxsqne0n -> _mdlRefSfcnS ) ; }
} if ( rtmIsMajorTimeStep ( oczxsqne0n ) && rtmIsSampleHit ( oczxsqne0n , 2 ,
0 ) ) { localB -> bnhtuo4pzv = jedkbzvhbx ; jedkbzvhbx = localB -> gnsidwdg2i
- jedkbzvhbx * jedkbzvhbx ; if ( rtmIsMajorTimeStep ( oczxsqne0n ) ) { if (
localDW -> nvnt5k5wtu != 0 ) { ssSetBlockStateForSolverChangedAtMajorStep (
oczxsqne0n -> _mdlRefSfcnS ) ; localDW -> nvnt5k5wtu = 0 ; } localB ->
ancya45mmo = muDoubleScalarSqrt ( jedkbzvhbx ) ; } else if ( jedkbzvhbx < 0.0
) { localB -> ancya45mmo = - muDoubleScalarSqrt ( muDoubleScalarAbs (
jedkbzvhbx ) ) ; localDW -> nvnt5k5wtu = 1 ; } else { localB -> ancya45mmo =
muDoubleScalarSqrt ( jedkbzvhbx ) ; } } srUpdateBC ( localDW -> o22jbjlb32 )
; } rtPrevAction = localDW -> cmjt0zg4xt ; rtAction = ( int8_T ) ! ( ( (
hp0wdh0z5x . P_3 - hp0wdh0z5x . P_5 ) * localB -> bnhtuo4pzv + hp0wdh0z5x .
P_15 ) * localB -> ancya45mmo * ( 1.5 * hp0wdh0z5x . P_7 ) < fexu2mpvzu ) ;
localDW -> cmjt0zg4xt = rtAction ; if ( rtPrevAction != rtAction ) { switch (
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
muDoubleScalarSinCos ( hp0wdh0z5x . P_7 * ir3b2qrvub_p , & fexu2mpvzu , &
jedkbzvhbx ) ; ir3b2qrvub_p = ejpw5agfwl * jedkbzvhbx + elbbbc4hth *
fexu2mpvzu ; hytb3op1gy = hp0wdh0z5x . P_7 * * geawchg2qh ; ejpw5agfwl =
elbbbc4hth * jedkbzvhbx - ejpw5agfwl * fexu2mpvzu ; fuwbeu0mi2 = localB ->
j4an1koocn * muDoubleScalarTanh ( fuwbeu0mi2 ) - ejpw5agfwl ; elbbbc4hth =
localB -> jmh12knqk4 - ir3b2qrvub_p ; jaabiiivdd = hp0wdh0z5x . P_0 *
elbbbc4hth * hp0wdh0z5x . P_51 + localDW -> hh4vgn0tkn ; if ( jaabiiivdd >
hp0wdh0z5x . P_52 ) { localB -> m4fgfho05f = hp0wdh0z5x . P_52 ; } else if (
jaabiiivdd < hp0wdh0z5x . P_53 ) { localB -> m4fgfho05f = hp0wdh0z5x . P_53 ;
} else { localB -> m4fgfho05f = jaabiiivdd ; } jaabiiivdd = hp0wdh0z5x . P_0
* fuwbeu0mi2 * hp0wdh0z5x . P_55 + localDW -> n1xqcq4unv ; if ( jaabiiivdd >
hp0wdh0z5x . P_56 ) { localB -> bvc4d3rafa = hp0wdh0z5x . P_56 ; } else if (
jaabiiivdd < hp0wdh0z5x . P_57 ) { localB -> bvc4d3rafa = hp0wdh0z5x . P_57 ;
} else { localB -> bvc4d3rafa = jaabiiivdd ; } ejpw5agfwl = ( hp0wdh0z5x .
P_1 * elbbbc4hth + localDW -> hh4vgn0tkn ) - hp0wdh0z5x . P_5 * ejpw5agfwl *
hytb3op1gy ; fuwbeu0mi2 = ( hp0wdh0z5x . P_3 * ir3b2qrvub_p + hp0wdh0z5x .
P_15 ) * hytb3op1gy + ( hp0wdh0z5x . P_2 * fuwbeu0mi2 + localDW -> n1xqcq4unv
) ; localB -> pdqqh31clo = ejpw5agfwl * jedkbzvhbx - fuwbeu0mi2 * fexu2mpvzu
; ejpw5agfwl = ejpw5agfwl * fexu2mpvzu + fuwbeu0mi2 * jedkbzvhbx ; localB ->
j00saob3ud = hp0wdh0z5x . P_59 * localB -> pdqqh31clo + hp0wdh0z5x . P_60 *
ejpw5agfwl ; localB -> f5vescf5ru = hp0wdh0z5x . P_58 * localB -> pdqqh31clo
+ hp0wdh0z5x . P_61 * ejpw5agfwl ; } localB -> phpxvsznk2 = ( hp0wdh0z5x .
P_73 * localB -> pdqqh31clo + hp0wdh0z5x . P_74 * localB -> j00saob3ud ) +
hp0wdh0z5x . P_75 * localB -> f5vescf5ru ; localB -> dvl0jkf022 = hp0wdh0z5x
. P_76 * localB -> j00saob3ud + hp0wdh0z5x . P_77 * localB -> f5vescf5ru ; }
ejpw5agfwl = hp0wdh0z5x . P_6 * * geawchg2qh ; * fnbywarnx2 = ( dermgh1t4t_p
* kmumwkzfti_p * localB -> gr1c2pn232 + hp0wdh0z5x . P_16 * kmumwkzfti_p ) *
( 1.5 * hp0wdh0z5x . P_6 ) ; localB -> oloygxdfui = ( ( localB -> phpxvsznk2
* nx40kxmidk + localB -> dvl0jkf022 * gcfwi3ao2o ) / localB -> pilju15sad +
ejpw5agfwl * kmumwkzfti_p * localB -> eoauxnjvso / localB -> lc5in45uon ) -
dermgh1t4t_p * hp0wdh0z5x . P_8 / localB -> phpxvsznk2_mbvzarwird ; localB ->
av3pgj4xc5 = ( ( ( localB -> dvl0jkf022 * nx40kxmidk - localB -> phpxvsznk2 *
gcfwi3ao2o ) / localB -> pw5rfchzym - dermgh1t4t_p * ejpw5agfwl * localB ->
joluo3apal / localB -> do5qvp2gnl ) - ejpw5agfwl * hp0wdh0z5x . P_16 / localB
-> bfkwritqsm ) - kmumwkzfti_p * hp0wdh0z5x . P_8 / localB ->
oloygxdfui_kkiq3xxxve ; dermgh1t4t_p = hp0wdh0z5x . P_17 [ plook_u32d_evencka
( * fnbywarnx2 , hp0wdh0z5x . P_9 [ 0 ] , hp0wdh0z5x . P_9 [ 1 ] - hp0wdh0z5x
. P_9 [ 0 ] , 5U ) * 5U + plook_u32d_evencka ( * geawchg2qh , hp0wdh0z5x .
P_19 [ 0 ] , hp0wdh0z5x . P_19 [ 1 ] - hp0wdh0z5x . P_19 [ 0 ] , 4U ) ] ; if
( rtmIsMajorTimeStep ( oczxsqne0n ) && rtmIsSampleHit ( oczxsqne0n , 1 , 0 )
) { localB -> avllxxcnwp = hp0wdh0z5x . P_80 ; if ( rtmIsMajorTimeStep (
oczxsqne0n ) ) { localDW -> j1mwihstyy = ( * cvcsdesmn4 >= localB ->
avllxxcnwp ) ; } localB -> mv5ovv2sf2 = localDW -> j1mwihstyy ; } if ( localB
-> mv5ovv2sf2 ) { kmumwkzfti_p = * cvcsdesmn4 ; } else { kmumwkzfti_p =
localB -> avllxxcnwp ; } * cg1dw5wgio = ( ( ( ( hp0wdh0z5x . P_78 *
oo0kzookhd_p + hp0wdh0z5x . P_79 * ldqlv3qn10_p ) * localB -> f5vescf5ru + (
oo0kzookhd_p * localB -> pdqqh31clo + pilju15sad_p * localB -> j00saob3ud ) )
+ dermgh1t4t_p ) + dermgh1t4t_p ) / kmumwkzfti_p ; } void MotGenEvDynamicTID3
( mv4ga5jwa1 * const oczxsqne0n , cx3bhokmct * localB , cloq5bin3y * localDW
) { real_T guw45v2n5l ; real_T hcuep2at0d ; int32_T u0 ; if (
rtmIsMajorTimeStep ( oczxsqne0n ) ) { hcuep2at0d = hp0wdh0z5x . P_13 [ (
int32_T ) hp0wdh0z5x . P_62 - 1 ] ; } else { u0 = ( int32_T ) hp0wdh0z5x .
P_62 ; if ( u0 > 3 ) { u0 = 3 ; } else { if ( u0 < 1 ) { u0 = 1 ; } }
hcuep2at0d = hp0wdh0z5x . P_13 [ u0 - 1 ] ; } guw45v2n5l = hp0wdh0z5x . P_3 *
hcuep2at0d + hp0wdh0z5x . P_15 ; if ( rtmIsMajorTimeStep ( oczxsqne0n ) ) {
hcuep2at0d = hp0wdh0z5x . P_13 [ ( int32_T ) hp0wdh0z5x . P_63 - 1 ] ; } else
{ u0 = ( int32_T ) hp0wdh0z5x . P_63 ; if ( u0 > 3 ) { u0 = 3 ; } else { if (
u0 < 1 ) { u0 = 1 ; } } hcuep2at0d = hp0wdh0z5x . P_13 [ u0 - 1 ] ; }
hcuep2at0d *= hp0wdh0z5x . P_5 ; guw45v2n5l = guw45v2n5l * guw45v2n5l +
hcuep2at0d * hcuep2at0d ; if ( rtmIsMajorTimeStep ( oczxsqne0n ) ) { if (
localDW -> i3e2kfzsoy != 0 ) { ssSetBlockStateForSolverChangedAtMajorStep (
oczxsqne0n -> _mdlRefSfcnS ) ; localDW -> i3e2kfzsoy = 0 ; } hcuep2at0d =
muDoubleScalarSqrt ( guw45v2n5l ) ; localB -> fvwphmszym = - hp0wdh0z5x .
P_13 [ ( int32_T ) hp0wdh0z5x . P_36 - 1 ] ; guw45v2n5l = hp0wdh0z5x . P_13 [
( int32_T ) hp0wdh0z5x . P_39 - 1 ] ; } else { if ( guw45v2n5l < 0.0 ) {
hcuep2at0d = - muDoubleScalarSqrt ( muDoubleScalarAbs ( guw45v2n5l ) ) ;
localDW -> i3e2kfzsoy = 1 ; } else { hcuep2at0d = muDoubleScalarSqrt (
guw45v2n5l ) ; } u0 = ( int32_T ) hp0wdh0z5x . P_36 ; if ( u0 > 3 ) { u0 = 3
; } else { if ( u0 < 1 ) { u0 = 1 ; } } localB -> fvwphmszym = - hp0wdh0z5x .
P_13 [ u0 - 1 ] ; u0 = ( int32_T ) hp0wdh0z5x . P_39 ; if ( u0 > 3 ) { u0 = 3
; } else { if ( u0 < 1 ) { u0 = 1 ; } } guw45v2n5l = hp0wdh0z5x . P_13 [ u0 -
1 ] ; } localB -> l1joaocm0k = muDoubleScalarMax ( hcuep2at0d , hp0wdh0z5x .
P_64 ) ; hcuep2at0d = hp0wdh0z5x . P_5 * hp0wdh0z5x . P_5 ; localB ->
hpq3zpwor5 = hcuep2at0d * ( guw45v2n5l * guw45v2n5l ) + hp0wdh0z5x . P_15 *
hp0wdh0z5x . P_15 ; guw45v2n5l = hp0wdh0z5x . P_15 * hp0wdh0z5x . P_3 ;
localB -> emqermn25v = guw45v2n5l * guw45v2n5l ; guw45v2n5l = hp0wdh0z5x .
P_3 * hp0wdh0z5x . P_3 - hcuep2at0d ; localB -> cbuxsm4rne = guw45v2n5l ;
localB -> hddlzs2xkt = guw45v2n5l ; if ( rtmIsMajorTimeStep ( oczxsqne0n ) )
{ guw45v2n5l = hp0wdh0z5x . P_13 [ ( int32_T ) hp0wdh0z5x . P_26 - 1 ] ; }
else { u0 = ( int32_T ) hp0wdh0z5x . P_26 ; if ( u0 > 3 ) { u0 = 3 ; } else {
if ( u0 < 1 ) { u0 = 1 ; } } guw45v2n5l = hp0wdh0z5x . P_13 [ u0 - 1 ] ; }
localB -> gnsidwdg2i = guw45v2n5l * guw45v2n5l ; if ( rtmIsMajorTimeStep (
oczxsqne0n ) ) { hcuep2at0d = hp0wdh0z5x . P_4 [ ( int32_T ) hp0wdh0z5x .
P_81 - 1 ] ; guw45v2n5l = hp0wdh0z5x . P_4 [ ( int32_T ) hp0wdh0z5x . P_82 -
1 ] ; localB -> gswyltq2oj = hp0wdh0z5x . P_12 [ ( int32_T ) hp0wdh0z5x .
P_83 - 1 ] ; localB -> pilju15sad = hp0wdh0z5x . P_4 [ ( int32_T ) hp0wdh0z5x
. P_84 - 1 ] ; localB -> eoauxnjvso = hp0wdh0z5x . P_4 [ ( int32_T )
hp0wdh0z5x . P_85 - 1 ] ; localB -> lc5in45uon = hp0wdh0z5x . P_4 [ ( int32_T
) hp0wdh0z5x . P_86 - 1 ] ; localB -> phpxvsznk2_mbvzarwird = hp0wdh0z5x .
P_4 [ ( int32_T ) hp0wdh0z5x . P_87 - 1 ] ; localB -> dvl0jkf022_cl54gopm0x =
hp0wdh0z5x . P_12 [ ( int32_T ) hp0wdh0z5x . P_88 - 1 ] ; localB ->
pw5rfchzym = hp0wdh0z5x . P_4 [ ( int32_T ) hp0wdh0z5x . P_89 - 1 ] ; localB
-> joluo3apal = hp0wdh0z5x . P_4 [ ( int32_T ) hp0wdh0z5x . P_90 - 1 ] ;
localB -> do5qvp2gnl = hp0wdh0z5x . P_4 [ ( int32_T ) hp0wdh0z5x . P_91 - 1 ]
; localB -> bfkwritqsm = hp0wdh0z5x . P_4 [ ( int32_T ) hp0wdh0z5x . P_92 - 1
] ; localB -> oloygxdfui_kkiq3xxxve = hp0wdh0z5x . P_4 [ ( int32_T )
hp0wdh0z5x . P_93 - 1 ] ; } else { u0 = ( int32_T ) hp0wdh0z5x . P_81 ; if (
u0 > 2 ) { u0 = 2 ; } else { if ( u0 < 1 ) { u0 = 1 ; } } hcuep2at0d =
hp0wdh0z5x . P_4 [ u0 - 1 ] ; u0 = ( int32_T ) hp0wdh0z5x . P_82 ; if ( u0 >
2 ) { u0 = 2 ; } else { if ( u0 < 1 ) { u0 = 1 ; } } guw45v2n5l = hp0wdh0z5x
. P_4 [ u0 - 1 ] ; u0 = ( int32_T ) hp0wdh0z5x . P_83 ; if ( u0 > 2 ) { u0 =
2 ; } else { if ( u0 < 1 ) { u0 = 1 ; } } localB -> gswyltq2oj = hp0wdh0z5x .
P_12 [ u0 - 1 ] ; u0 = ( int32_T ) hp0wdh0z5x . P_84 ; if ( u0 > 2 ) { u0 = 2
; } else { if ( u0 < 1 ) { u0 = 1 ; } } localB -> pilju15sad = hp0wdh0z5x .
P_4 [ u0 - 1 ] ; u0 = ( int32_T ) hp0wdh0z5x . P_85 ; if ( u0 > 2 ) { u0 = 2
; } else { if ( u0 < 1 ) { u0 = 1 ; } } localB -> eoauxnjvso = hp0wdh0z5x .
P_4 [ u0 - 1 ] ; u0 = ( int32_T ) hp0wdh0z5x . P_86 ; if ( u0 > 2 ) { u0 = 2
; } else { if ( u0 < 1 ) { u0 = 1 ; } } localB -> lc5in45uon = hp0wdh0z5x .
P_4 [ u0 - 1 ] ; u0 = ( int32_T ) hp0wdh0z5x . P_87 ; if ( u0 > 2 ) { u0 = 2
; } else { if ( u0 < 1 ) { u0 = 1 ; } } localB -> phpxvsznk2_mbvzarwird =
hp0wdh0z5x . P_4 [ u0 - 1 ] ; u0 = ( int32_T ) hp0wdh0z5x . P_88 ; if ( u0 >
2 ) { u0 = 2 ; } else { if ( u0 < 1 ) { u0 = 1 ; } } localB ->
dvl0jkf022_cl54gopm0x = hp0wdh0z5x . P_12 [ u0 - 1 ] ; u0 = ( int32_T )
hp0wdh0z5x . P_89 ; if ( u0 > 2 ) { u0 = 2 ; } else { if ( u0 < 1 ) { u0 = 1
; } } localB -> pw5rfchzym = hp0wdh0z5x . P_4 [ u0 - 1 ] ; u0 = ( int32_T )
hp0wdh0z5x . P_90 ; if ( u0 > 2 ) { u0 = 2 ; } else { if ( u0 < 1 ) { u0 = 1
; } } localB -> joluo3apal = hp0wdh0z5x . P_4 [ u0 - 1 ] ; u0 = ( int32_T )
hp0wdh0z5x . P_91 ; if ( u0 > 2 ) { u0 = 2 ; } else { if ( u0 < 1 ) { u0 = 1
; } } localB -> do5qvp2gnl = hp0wdh0z5x . P_4 [ u0 - 1 ] ; u0 = ( int32_T )
hp0wdh0z5x . P_92 ; if ( u0 > 2 ) { u0 = 2 ; } else { if ( u0 < 1 ) { u0 = 1
; } } localB -> bfkwritqsm = hp0wdh0z5x . P_4 [ u0 - 1 ] ; u0 = ( int32_T )
hp0wdh0z5x . P_93 ; if ( u0 > 2 ) { u0 = 2 ; } else { if ( u0 < 1 ) { u0 = 1
; } } localB -> oloygxdfui_kkiq3xxxve = hp0wdh0z5x . P_4 [ u0 - 1 ] ; }
localB -> gr1c2pn232 = hcuep2at0d - guw45v2n5l ; } void lwglwij1vj (
mv4ga5jwa1 * const oczxsqne0n , cx3bhokmct * localB , cloq5bin3y * localDW ,
fsi3zxjdsv * localX ) { if ( rtmIsMajorTimeStep ( oczxsqne0n ) ) { if (
memcmp ( oczxsqne0n -> nonContDerivSignal [ 0 ] . pCurrVal , oczxsqne0n ->
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
ssSetSolverNeedsReset ( oczxsqne0n -> _mdlRefSfcnS ) ; } } localDW ->
lf2zfdimpe = 0 ; if ( localX -> jjrb01sfag == hp0wdh0z5x . P_65 ) { switch (
localDW -> juyze14tin ) { case 3 : if ( localB -> oloygxdfui < 0.0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( oczxsqne0n -> _mdlRefSfcnS ) ;
localDW -> juyze14tin = 1 ; } break ; case 1 : if ( localB -> oloygxdfui >=
0.0 ) { localDW -> juyze14tin = 3 ;
ssSetBlockStateForSolverChangedAtMajorStep ( oczxsqne0n -> _mdlRefSfcnS ) ; }
break ; default : ssSetBlockStateForSolverChangedAtMajorStep ( oczxsqne0n ->
_mdlRefSfcnS ) ; if ( localB -> oloygxdfui < 0.0 ) { localDW -> juyze14tin =
1 ; } else { localDW -> juyze14tin = 3 ; } break ; } } else if ( localX ->
jjrb01sfag == hp0wdh0z5x . P_66 ) { switch ( localDW -> juyze14tin ) { case 4
: if ( localB -> oloygxdfui > 0.0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( oczxsqne0n -> _mdlRefSfcnS ) ;
localDW -> juyze14tin = 2 ; } break ; case 2 : if ( localB -> oloygxdfui <=
0.0 ) { localDW -> juyze14tin = 4 ;
ssSetBlockStateForSolverChangedAtMajorStep ( oczxsqne0n -> _mdlRefSfcnS ) ; }
break ; default : ssSetBlockStateForSolverChangedAtMajorStep ( oczxsqne0n ->
_mdlRefSfcnS ) ; if ( localB -> oloygxdfui > 0.0 ) { localDW -> juyze14tin =
2 ; } else { localDW -> juyze14tin = 4 ; } break ; } } else { localDW ->
juyze14tin = 0 ; } localDW -> hjhxitxtn4 = 0 ; if ( localX -> kqb0spkyga ==
hp0wdh0z5x . P_69 ) { switch ( localDW -> f4evhke5td ) { case 3 : if ( localB
-> av3pgj4xc5 < 0.0 ) { ssSetBlockStateForSolverChangedAtMajorStep (
oczxsqne0n -> _mdlRefSfcnS ) ; localDW -> f4evhke5td = 1 ; } break ; case 1 :
if ( localB -> av3pgj4xc5 >= 0.0 ) { localDW -> f4evhke5td = 3 ;
ssSetBlockStateForSolverChangedAtMajorStep ( oczxsqne0n -> _mdlRefSfcnS ) ; }
break ; default : ssSetBlockStateForSolverChangedAtMajorStep ( oczxsqne0n ->
_mdlRefSfcnS ) ; if ( localB -> av3pgj4xc5 < 0.0 ) { localDW -> f4evhke5td =
1 ; } else { localDW -> f4evhke5td = 3 ; } break ; } } else if ( localX ->
kqb0spkyga == hp0wdh0z5x . P_70 ) { switch ( localDW -> f4evhke5td ) { case 4
: if ( localB -> av3pgj4xc5 > 0.0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( oczxsqne0n -> _mdlRefSfcnS ) ;
localDW -> f4evhke5td = 2 ; } break ; case 2 : if ( localB -> av3pgj4xc5 <=
0.0 ) { localDW -> f4evhke5td = 4 ;
ssSetBlockStateForSolverChangedAtMajorStep ( oczxsqne0n -> _mdlRefSfcnS ) ; }
break ; default : ssSetBlockStateForSolverChangedAtMajorStep ( oczxsqne0n ->
_mdlRefSfcnS ) ; if ( localB -> av3pgj4xc5 > 0.0 ) { localDW -> f4evhke5td =
2 ; } else { localDW -> f4evhke5td = 4 ; } break ; } } else { localDW ->
f4evhke5td = 0 ; } if ( ( rtmIsMajorTimeStep ( oczxsqne0n ) && rtmIsSampleHit
( oczxsqne0n , 2 , 0 ) ) && ( rtmIsMajorTimeStep ( oczxsqne0n ) &&
rtmIsSampleHit ( oczxsqne0n , 2 , 0 ) ) ) { localDW -> hh4vgn0tkn = localB ->
m4fgfho05f ; localDW -> n1xqcq4unv = localB -> bvc4d3rafa ; } } void
lwglwij1vjTID3 ( void ) { } void mfy1r3luh1 ( const real_T * geawchg2qh ,
cx3bhokmct * localB , cloq5bin3y * localDW , a2tgpeokha * localXdis ,
evfyajgoqu * localXdot ) { if ( ( localDW -> juyze14tin != 3 ) && ( localDW
-> juyze14tin != 4 ) ) { localXdot -> jjrb01sfag = localB -> oloygxdfui ;
localXdis -> jjrb01sfag = false ; } else { localXdot -> jjrb01sfag = 0.0 ;
localXdis -> jjrb01sfag = ( ( localDW -> juyze14tin == 3 ) || ( localDW ->
juyze14tin == 4 ) || localXdis -> jjrb01sfag ) ; } localXdot -> lsis3mvtl3 =
* geawchg2qh ; if ( ( localDW -> f4evhke5td != 3 ) && ( localDW -> f4evhke5td
!= 4 ) ) { localXdot -> kqb0spkyga = localB -> av3pgj4xc5 ; localXdis ->
kqb0spkyga = false ; } else { localXdot -> kqb0spkyga = 0.0 ; localXdis ->
kqb0spkyga = ( ( localDW -> f4evhke5td == 3 ) || ( localDW -> f4evhke5td == 4
) || localXdis -> kqb0spkyga ) ; } } void cmnf4xtkyp ( const real_T *
cvcsdesmn4 , cx3bhokmct * localB , cloq5bin3y * localDW , fsi3zxjdsv * localX
, f0can1sh3a * localZCSV ) { if ( ( localDW -> juyze14tin == 1 ) && ( localX
-> jjrb01sfag >= hp0wdh0z5x . P_65 ) ) { localZCSV -> dlemv12ixj = 0.0 ; }
else { localZCSV -> dlemv12ixj = localX -> jjrb01sfag - hp0wdh0z5x . P_65 ; }
if ( ( localDW -> juyze14tin == 2 ) && ( localX -> jjrb01sfag <= hp0wdh0z5x .
P_66 ) ) { localZCSV -> crlnvux0tw = 0.0 ; } else { localZCSV -> crlnvux0tw =
localX -> jjrb01sfag - hp0wdh0z5x . P_66 ; } if ( ( localDW -> juyze14tin ==
3 ) || ( localDW -> juyze14tin == 4 ) ) { localZCSV -> geommsvcm0 = localB ->
oloygxdfui ; } else { localZCSV -> geommsvcm0 = 0.0 ; } if ( ( localDW ->
f4evhke5td == 1 ) && ( localX -> kqb0spkyga >= hp0wdh0z5x . P_69 ) ) {
localZCSV -> a3nogxtorf = 0.0 ; } else { localZCSV -> a3nogxtorf = localX ->
kqb0spkyga - hp0wdh0z5x . P_69 ; } if ( ( localDW -> f4evhke5td == 2 ) && (
localX -> kqb0spkyga <= hp0wdh0z5x . P_70 ) ) { localZCSV -> pinuq3ljyw = 0.0
; } else { localZCSV -> pinuq3ljyw = localX -> kqb0spkyga - hp0wdh0z5x . P_70
; } if ( ( localDW -> f4evhke5td == 3 ) || ( localDW -> f4evhke5td == 4 ) ) {
localZCSV -> jmqldch1ql = localB -> av3pgj4xc5 ; } else { localZCSV ->
jmqldch1ql = 0.0 ; } localZCSV -> ea2uuggopo = * cvcsdesmn4 - localB ->
avllxxcnwp ; } void kh5ykjtmv0 ( mv4ga5jwa1 * const oczxsqne0n ) { if ( !
slIsRapidAcceleratorSimulating ( ) ) { slmrRunPluginEvent ( oczxsqne0n ->
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
) localB ) , 0 , sizeof ( cx3bhokmct ) ) ; { localB -> phpxvsznk2 = 0.0 ;
localB -> dvl0jkf022 = 0.0 ; localB -> oloygxdfui = 0.0 ; localB ->
av3pgj4xc5 = 0.0 ; localB -> avllxxcnwp = 0.0 ; localB -> gr1c2pn232 = 0.0 ;
localB -> gswyltq2oj = 0.0 ; localB -> pilju15sad = 0.0 ; localB ->
eoauxnjvso = 0.0 ; localB -> lc5in45uon = 0.0 ; localB ->
phpxvsznk2_mbvzarwird = 0.0 ; localB -> dvl0jkf022_cl54gopm0x = 0.0 ; localB
-> pw5rfchzym = 0.0 ; localB -> joluo3apal = 0.0 ; localB -> do5qvp2gnl = 0.0
; localB -> bfkwritqsm = 0.0 ; localB -> oloygxdfui_kkiq3xxxve = 0.0 ; localB
-> jmh12knqk4 = 0.0 ; localB -> j4an1koocn = 0.0 ; localB -> m4fgfho05f = 0.0
; localB -> bvc4d3rafa = 0.0 ; localB -> pdqqh31clo = 0.0 ; localB ->
j00saob3ud = 0.0 ; localB -> f5vescf5ru = 0.0 ; localB -> l1joaocm0k = 0.0 ;
localB -> bnhtuo4pzv = 0.0 ; localB -> ancya45mmo = 0.0 ; localB ->
fvwphmszym = 0.0 ; localB -> hpq3zpwor5 = 0.0 ; localB -> emqermn25v = 0.0 ;
localB -> cbuxsm4rne = 0.0 ; localB -> hddlzs2xkt = 0.0 ; localB ->
gnsidwdg2i = 0.0 ; } ( void ) memset ( ( void * ) localDW , 0 , sizeof (
cloq5bin3y ) ) ; localDW -> hh4vgn0tkn = 0.0 ; localDW -> n1xqcq4unv = 0.0 ;
MotGenEvDynamic_InitializeDataMapInfo ( oczxsqne0n , localDW , localX ,
sysRanPtr , contextTid ) ; if ( ( rt_ParentMMI != ( NULL ) ) && (
rt_ChildPath != ( NULL ) ) ) { rtwCAPI_SetChildMMI ( * rt_ParentMMI ,
rt_ChildMMIIdx , & ( oczxsqne0n -> DataMapInfo . mmi ) ) ; rtwCAPI_SetPath (
oczxsqne0n -> DataMapInfo . mmi , rt_ChildPath ) ;
rtwCAPI_MMISetContStateStartIndex ( oczxsqne0n -> DataMapInfo . mmi ,
rt_CSTATEIdx ) ; } oczxsqne0n -> nonContDerivSignal [ 0 ] . pPrevVal = (
char_T * ) oczxsqne0n -> NonContDerivMemory . mr_nonContSig0 ; oczxsqne0n ->
nonContDerivSignal [ 0 ] . sizeInBytes = ( 1 * sizeof ( real_T ) ) ;
oczxsqne0n -> nonContDerivSignal [ 0 ] . pCurrVal = ( char_T * ) ( & localB
-> dvl0jkf022 ) ; ; oczxsqne0n -> nonContDerivSignal [ 1 ] . pPrevVal = (
char_T * ) oczxsqne0n -> NonContDerivMemory . mr_nonContSig1 ; oczxsqne0n ->
nonContDerivSignal [ 1 ] . sizeInBytes = ( 1 * sizeof ( real_T ) ) ;
oczxsqne0n -> nonContDerivSignal [ 1 ] . pCurrVal = ( char_T * ) ( & localB
-> phpxvsznk2 ) ; ; if ( mr_nonContOutputArray [ 1 ] != ( NULL ) ) {
mr_nonContOutputArray [ 1 ] [ 0 ] . sizeInBytes = 1 * sizeof ( boolean_T ) ;
mr_nonContOutputArray [ 1 ] [ 0 ] . currVal = ( char_T * ) & localB ->
mv5ovv2sf2 ; mr_nonContOutputArray [ 1 ] [ 0 ] . next = & (
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
* rtdwDataFieldNames [ 19 ] = { "mdlrefDW->rtdw.hh4vgn0tkn" ,
"mdlrefDW->rtdw.n1xqcq4unv" , "mdlrefDW->rtdw.lf2zfdimpe" ,
"mdlrefDW->rtdw.hjhxitxtn4" , "mdlrefDW->rtdw.juyze14tin" ,
"mdlrefDW->rtdw.f4evhke5td" , "mdlrefDW->rtdw.bfuoehqzsl" ,
"mdlrefDW->rtdw.i3e2kfzsoy" , "mdlrefDW->rtdw.kk4n2up2w1" ,
"mdlrefDW->rtdw.bsszatmvjl" , "mdlrefDW->rtdw.mekacwiae4" ,
"mdlrefDW->rtdw.cmjt0zg4xt" , "mdlrefDW->rtdw.n0wi1kglhh" ,
"mdlrefDW->rtdw.ooikcgayh1" , "mdlrefDW->rtdw.o22jbjlb32" ,
"mdlrefDW->rtdw.nvnt5k5wtu" , "mdlrefDW->rtdw.djzzdpaje3" ,
"mdlrefDW->rtdw.feypm5vhbq" , "mdlrefDW->rtdw.j1mwihstyy" , } ; mxArray *
rtdwData = mxCreateStructMatrix ( 1 , 1 , 19 , rtdwDataFieldNames ) ;
mr_MotGenEvDynamic_cacheDataAsMxArray ( rtdwData , 0 , 0 , & ( mdlrefDW ->
rtdw . hh4vgn0tkn ) , sizeof ( mdlrefDW -> rtdw . hh4vgn0tkn ) ) ;
mr_MotGenEvDynamic_cacheDataAsMxArray ( rtdwData , 0 , 1 , & ( mdlrefDW ->
rtdw . n1xqcq4unv ) , sizeof ( mdlrefDW -> rtdw . n1xqcq4unv ) ) ;
mr_MotGenEvDynamic_cacheDataAsMxArray ( rtdwData , 0 , 2 , & ( mdlrefDW ->
rtdw . lf2zfdimpe ) , sizeof ( mdlrefDW -> rtdw . lf2zfdimpe ) ) ;
mr_MotGenEvDynamic_cacheDataAsMxArray ( rtdwData , 0 , 3 , & ( mdlrefDW ->
rtdw . hjhxitxtn4 ) , sizeof ( mdlrefDW -> rtdw . hjhxitxtn4 ) ) ;
mr_MotGenEvDynamic_cacheDataAsMxArray ( rtdwData , 0 , 4 , & ( mdlrefDW ->
rtdw . juyze14tin ) , sizeof ( mdlrefDW -> rtdw . juyze14tin ) ) ;
mr_MotGenEvDynamic_cacheDataAsMxArray ( rtdwData , 0 , 5 , & ( mdlrefDW ->
rtdw . f4evhke5td ) , sizeof ( mdlrefDW -> rtdw . f4evhke5td ) ) ;
mr_MotGenEvDynamic_cacheDataAsMxArray ( rtdwData , 0 , 6 , & ( mdlrefDW ->
rtdw . bfuoehqzsl ) , sizeof ( mdlrefDW -> rtdw . bfuoehqzsl ) ) ;
mr_MotGenEvDynamic_cacheDataAsMxArray ( rtdwData , 0 , 7 , & ( mdlrefDW ->
rtdw . i3e2kfzsoy ) , sizeof ( mdlrefDW -> rtdw . i3e2kfzsoy ) ) ;
mr_MotGenEvDynamic_cacheDataAsMxArray ( rtdwData , 0 , 8 , & ( mdlrefDW ->
rtdw . kk4n2up2w1 ) , sizeof ( mdlrefDW -> rtdw . kk4n2up2w1 ) ) ;
mr_MotGenEvDynamic_cacheDataAsMxArray ( rtdwData , 0 , 9 , & ( mdlrefDW ->
rtdw . bsszatmvjl ) , sizeof ( mdlrefDW -> rtdw . bsszatmvjl ) ) ;
mr_MotGenEvDynamic_cacheDataAsMxArray ( rtdwData , 0 , 10 , & ( mdlrefDW ->
rtdw . mekacwiae4 ) , sizeof ( mdlrefDW -> rtdw . mekacwiae4 ) ) ;
mr_MotGenEvDynamic_cacheDataAsMxArray ( rtdwData , 0 , 11 , & ( mdlrefDW ->
rtdw . cmjt0zg4xt ) , sizeof ( mdlrefDW -> rtdw . cmjt0zg4xt ) ) ;
mr_MotGenEvDynamic_cacheDataAsMxArray ( rtdwData , 0 , 12 , & ( mdlrefDW ->
rtdw . n0wi1kglhh ) , sizeof ( mdlrefDW -> rtdw . n0wi1kglhh ) ) ;
mr_MotGenEvDynamic_cacheDataAsMxArray ( rtdwData , 0 , 13 , & ( mdlrefDW ->
rtdw . ooikcgayh1 ) , sizeof ( mdlrefDW -> rtdw . ooikcgayh1 ) ) ;
mr_MotGenEvDynamic_cacheDataAsMxArray ( rtdwData , 0 , 14 , & ( mdlrefDW ->
rtdw . o22jbjlb32 ) , sizeof ( mdlrefDW -> rtdw . o22jbjlb32 ) ) ;
mr_MotGenEvDynamic_cacheDataAsMxArray ( rtdwData , 0 , 15 , & ( mdlrefDW ->
rtdw . nvnt5k5wtu ) , sizeof ( mdlrefDW -> rtdw . nvnt5k5wtu ) ) ;
mr_MotGenEvDynamic_cacheDataAsMxArray ( rtdwData , 0 , 16 , & ( mdlrefDW ->
rtdw . djzzdpaje3 ) , sizeof ( mdlrefDW -> rtdw . djzzdpaje3 ) ) ;
mr_MotGenEvDynamic_cacheDataAsMxArray ( rtdwData , 0 , 17 , & ( mdlrefDW ->
rtdw . feypm5vhbq ) , sizeof ( mdlrefDW -> rtdw . feypm5vhbq ) ) ;
mr_MotGenEvDynamic_cacheDataAsMxArray ( rtdwData , 0 , 18 , & ( mdlrefDW ->
rtdw . j1mwihstyy ) , sizeof ( mdlrefDW -> rtdw . j1mwihstyy ) ) ;
mxSetFieldByNumber ( ssDW , 0 , 1 , rtdwData ) ; } ( void ) mdlrefDW ; return
ssDW ; } void mr_MotGenEvDynamic_SetDWork ( l0vfpqnnodc * mdlrefDW , const
mxArray * ssDW ) { ( void ) ssDW ; ( void ) mdlrefDW ;
mr_MotGenEvDynamic_restoreDataFromMxArray ( & ( mdlrefDW -> rtb ) , ssDW , 0
, 0 , sizeof ( mdlrefDW -> rtb ) ) ; { const mxArray * rtdwData =
mxGetFieldByNumber ( ssDW , 0 , 1 ) ;
mr_MotGenEvDynamic_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . hh4vgn0tkn
) , rtdwData , 0 , 0 , sizeof ( mdlrefDW -> rtdw . hh4vgn0tkn ) ) ;
mr_MotGenEvDynamic_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . n1xqcq4unv
) , rtdwData , 0 , 1 , sizeof ( mdlrefDW -> rtdw . n1xqcq4unv ) ) ;
mr_MotGenEvDynamic_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . lf2zfdimpe
) , rtdwData , 0 , 2 , sizeof ( mdlrefDW -> rtdw . lf2zfdimpe ) ) ;
mr_MotGenEvDynamic_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . hjhxitxtn4
) , rtdwData , 0 , 3 , sizeof ( mdlrefDW -> rtdw . hjhxitxtn4 ) ) ;
mr_MotGenEvDynamic_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . juyze14tin
) , rtdwData , 0 , 4 , sizeof ( mdlrefDW -> rtdw . juyze14tin ) ) ;
mr_MotGenEvDynamic_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . f4evhke5td
) , rtdwData , 0 , 5 , sizeof ( mdlrefDW -> rtdw . f4evhke5td ) ) ;
mr_MotGenEvDynamic_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . bfuoehqzsl
) , rtdwData , 0 , 6 , sizeof ( mdlrefDW -> rtdw . bfuoehqzsl ) ) ;
mr_MotGenEvDynamic_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . i3e2kfzsoy
) , rtdwData , 0 , 7 , sizeof ( mdlrefDW -> rtdw . i3e2kfzsoy ) ) ;
mr_MotGenEvDynamic_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . kk4n2up2w1
) , rtdwData , 0 , 8 , sizeof ( mdlrefDW -> rtdw . kk4n2up2w1 ) ) ;
mr_MotGenEvDynamic_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . bsszatmvjl
) , rtdwData , 0 , 9 , sizeof ( mdlrefDW -> rtdw . bsszatmvjl ) ) ;
mr_MotGenEvDynamic_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . mekacwiae4
) , rtdwData , 0 , 10 , sizeof ( mdlrefDW -> rtdw . mekacwiae4 ) ) ;
mr_MotGenEvDynamic_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . cmjt0zg4xt
) , rtdwData , 0 , 11 , sizeof ( mdlrefDW -> rtdw . cmjt0zg4xt ) ) ;
mr_MotGenEvDynamic_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . n0wi1kglhh
) , rtdwData , 0 , 12 , sizeof ( mdlrefDW -> rtdw . n0wi1kglhh ) ) ;
mr_MotGenEvDynamic_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . ooikcgayh1
) , rtdwData , 0 , 13 , sizeof ( mdlrefDW -> rtdw . ooikcgayh1 ) ) ;
mr_MotGenEvDynamic_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . o22jbjlb32
) , rtdwData , 0 , 14 , sizeof ( mdlrefDW -> rtdw . o22jbjlb32 ) ) ;
mr_MotGenEvDynamic_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . nvnt5k5wtu
) , rtdwData , 0 , 15 , sizeof ( mdlrefDW -> rtdw . nvnt5k5wtu ) ) ;
mr_MotGenEvDynamic_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . djzzdpaje3
) , rtdwData , 0 , 16 , sizeof ( mdlrefDW -> rtdw . djzzdpaje3 ) ) ;
mr_MotGenEvDynamic_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . feypm5vhbq
) , rtdwData , 0 , 17 , sizeof ( mdlrefDW -> rtdw . feypm5vhbq ) ) ;
mr_MotGenEvDynamic_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . j1mwihstyy
) , rtdwData , 0 , 18 , sizeof ( mdlrefDW -> rtdw . j1mwihstyy ) ) ; } } void
mr_MotGenEvDynamic_RegisterSimStateChecksum ( SimStruct * S ) { const
uint32_T chksum [ 4 ] = { 1882449616U , 3576473159U , 1536128923U ,
2791104795U , } ; slmrModelRefRegisterSimStateChecksum ( S ,
"MotGenEvDynamic" , & chksum [ 0 ] ) ; } mxArray *
mr_MotGenEvDynamic_GetSimStateDisallowedBlocks ( ) { return NULL ; }
