#include "BattEv_capi.h"
#include "BattEv.h"
#include "BattEv_private.h"
#include "look1_binlcapw.h"
#include "look2_binlcapw.h"
static RegMdlInfo rtMdlInfo_BattEv [ 43 ] = { { "lobjb0lvrdo" ,
MDL_INFO_NAME_MDLREF_DWORK , 0 , - 1 , ( void * ) "BattEv" } , { "o3ciyyrlrx"
, MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "BattEv" } , {
"op3keyawy1" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"BattEv" } , { "ebrgzbbeqm" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , (
void * ) "BattEv" } , { "fr5wy4tsqu" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "BattEv" } , { "khjrgybdwv" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "BattEv" } , {
"nvyvwtjtwa" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"BattEv" } , { "hkgv0zhr3w" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , (
void * ) "BattEv" } , { "lxynvqvfub" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "BattEv" } , { "ooufey2bcs" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "BattEv" } , {
"hi1l1hnyvj" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"BattEv" } , { "p4zwutbdqc" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , (
void * ) "BattEv" } , { "dmy10bqvs5" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "BattEv" } , { "nw51lwywlm" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "BattEv" } , {
"hsugof10pg" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"BattEv" } , { "m5uwyjpoin" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , (
void * ) "BattEv" } , { "dwrwbkg3u5" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "BattEv" } , { "d3sayc4aih" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "BattEv" } , {
"pexk2pi1gg" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"BattEv" } , { "c0hgp3wnut" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , (
void * ) "BattEv" } , { "havtbmuleg" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "BattEv" } , { "poo3kmg0ob" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "BattEv" } , {
"lst5ppimoh" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"BattEv" } , { "h2icdxptjx" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , (
void * ) "BattEv" } , { "e4onitgc0b" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "BattEv" } , { "BattEv" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , 0 , ( NULL ) } , { "ajlvomnaiz" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "BattEv" } , { "bjbjtykkxm" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "BattEv" } , {
"euywnbmp33" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"BattEv" } , { "mr_BattEv_GetSimStateDisallowedBlocks" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "BattEv" } , {
"mr_BattEv_extractBitFieldFromCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "BattEv" } , {
"mr_BattEv_cacheBitFieldToCellArrayWithOffset" , MDL_INFO_ID_MODEL_FCN_NAME ,
0 , - 1 , ( void * ) "BattEv" } , {
"mr_BattEv_restoreDataFromMxArrayWithOffset" , MDL_INFO_ID_MODEL_FCN_NAME , 0
, - 1 , ( void * ) "BattEv" } , { "mr_BattEv_cacheDataToMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "BattEv" } , {
"mr_BattEv_extractBitFieldFromMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1
, ( void * ) "BattEv" } , { "mr_BattEv_cacheBitFieldToMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "BattEv" } , {
"mr_BattEv_restoreDataFromMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , (
void * ) "BattEv" } , { "mr_BattEv_cacheDataAsMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "BattEv" } , {
"mr_BattEv_RegisterSimStateChecksum" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 ,
( void * ) "BattEv" } , { "mr_BattEv_SetDWork" , MDL_INFO_ID_MODEL_FCN_NAME ,
0 , - 1 , ( void * ) "BattEv" } , { "mr_BattEv_GetDWork" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "BattEv" } , { "BattEv.h" ,
MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( NULL ) } , { "BattEv.c" ,
MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( void * ) "BattEv" } } ; a2kiykjvrxh
a2kiykjvrx = { 18.0 , 18.0 , { 243.1 , 253.1 , 263.1 , 273.1 , 283.1 , 298.1
, 313.1 } , { 0.0 , 0.01 , 0.02 , 0.03 , 0.04 , 0.05 , 0.06 , 0.07 , 0.08 ,
0.09 , 0.1 , 0.11 , 0.12 , 0.13 , 0.14 , 0.15 , 0.16 , 0.17 , 0.18 , 0.19 ,
0.2 , 0.21 , 0.22 , 0.23 , 0.24 , 0.25 , 0.26 , 0.27 , 0.28 , 0.29 , 0.3 ,
0.31 , 0.32 , 0.33 , 0.34 , 0.35 , 0.36 , 0.37 , 0.38 , 0.39 , 0.4 , 0.41 ,
0.42 , 0.43 , 0.44 , 0.45 , 0.46 , 0.47 , 0.48 , 0.49 , 0.5 , 0.51 , 0.52 ,
0.53 , 0.54 , 0.55 , 0.56 , 0.57 , 0.58 , 0.59 , 0.6 , 0.61 , 0.62 , 0.63 ,
0.64 , 0.65 , 0.66 , 0.67 , 0.68 , 0.69 , 0.7 , 0.71 , 0.72 , 0.73 , 0.74 ,
0.75 , 0.76 , 0.77 , 0.78 , 0.79 , 0.8 , 0.81 , 0.82 , 0.83 , 0.84 , 0.85 ,
0.86 , 0.87 , 0.88 , 0.89 , 0.9 , 0.91 , 0.92 , 0.93 , 0.94 , 0.95 , 0.96 ,
0.97 , 0.98 , 0.99 , 1.0 } , { 0.0 , 0.2 , 0.4 , 0.6 , 0.8 , 1.0 } , { 2.8 ,
3.228 , 3.284 , 3.361 , 3.408 , 3.427 , 3.472 , 3.477 , 3.493 , 3.504 , 3.516
, 3.528 , 3.537 , 3.545 , 3.555 , 3.561 , 3.566 , 3.576 , 3.587 , 3.589 ,
3.594 , 3.6 , 3.608 , 3.61 , 3.616 , 3.619 , 3.626 , 3.632 , 3.637 , 3.64 ,
3.645 , 3.646 , 3.652 , 3.655 , 3.658 , 3.661 , 3.664 , 3.668 , 3.673 , 3.678
, 3.68 , 3.681 , 3.686 , 3.692 , 3.699 , 3.702 , 3.705 , 3.71 , 3.717 , 3.723
, 3.728 , 3.733 , 3.735 , 3.742 , 3.749 , 3.755 , 3.761 , 3.768 , 3.773 ,
3.78 , 3.791 , 3.798 , 3.798 , 3.814 , 3.818 , 3.825 , 3.841 , 3.846 , 3.855
, 3.863 , 3.877 , 3.885 , 3.894 , 3.907 , 3.919 , 3.926 , 3.935 , 3.944 ,
3.954 , 3.964 , 3.974 , 3.988 , 3.998 , 4.014 , 4.029 , 4.034 , 4.047 , 4.065
, 4.074 , 4.086 , 4.097 , 4.131 , 4.126 , 4.138 , 4.15 , 4.18 , 4.174 , 4.187
, 4.207 , 4.231 , 4.221 } , 1.0 , 72.0 , { 0.008846 , 0.006389 , 0.004364 ,
0.002031 , 0.001443 , 0.0005603 , 0.001028 , 0.009319 , 0.006554 , 0.004101 ,
0.002563 , 0.001825 , 0.0007192 , 0.001338 , 0.009027 , 0.005553 , 0.00406 ,
0.002532 , 0.001795 , 0.0006887 , 0.001 , 0.00847 , 0.005525 , 0.003452 ,
0.00246 , 0.001778 , 0.0007557 , 0.001536 , 0.01032 , 0.006043 , 0.003846 ,
0.002716 , 0.001924 , 0.0007355 , 0.001546 , 0.01314 , 0.007805 , 0.004517 ,
0.003047 , 0.002234 , 0.001014 , 0.002789 } , 0.0 , 100.0 , { 6U , 5U } } ;
void poo3kmg0ob ( euywnbmp33 * const n4jdqa0poy , dmy10bqvs5 * localDW ,
hkgv0zhr3w * localX ) { boolean_T tmp ; localDW -> c0lxguzdmo = 1 ; if (
rtmIsFirstInitCond ( n4jdqa0poy ) ) { localX -> hflmlajctv = 0.0 ; tmp =
slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp =
ssGetGlobalInitialStatesAvailable ( n4jdqa0poy -> _mdlRefSfcnS ) ; localDW ->
c0lxguzdmo = ! tmp ; } else { localDW -> c0lxguzdmo = 1 ; } } } void
havtbmuleg ( euywnbmp33 * const n4jdqa0poy , dmy10bqvs5 * localDW ,
hkgv0zhr3w * localX ) { boolean_T tmp ; localDW -> c0lxguzdmo = 1 ; if (
rtmIsFirstInitCond ( n4jdqa0poy ) ) { localX -> hflmlajctv = 0.0 ; tmp =
slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp =
ssGetGlobalInitialStatesAvailable ( n4jdqa0poy -> _mdlRefSfcnS ) ; localDW ->
c0lxguzdmo = ! tmp ; } else { localDW -> c0lxguzdmo = 1 ; } } } void BattEv (
euywnbmp33 * const n4jdqa0poy , const real_T * bgau4kdtsz , const real_T *
nend3jcwem , real_T * icwqjgxcm3 , real_T * jovjkqw4dc , nw51lwywlm * localB
, dmy10bqvs5 * localDW , hkgv0zhr3w * localX ) { real_T awwyaae3xe_p ; localB
-> cxft4ixm0k = - 1.0 / ( a2kiykjvrx . P_6 * 3600.0 ) * * bgau4kdtsz ; if (
localDW -> c0lxguzdmo != 0 ) { localX -> hflmlajctv = localB -> awwyaae3xe ;
} if ( rtmIsMajorTimeStep ( n4jdqa0poy ) ) { if ( localX -> hflmlajctv >=
a2kiykjvrx . P_1 ) { if ( localX -> hflmlajctv > a2kiykjvrx . P_1 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( n4jdqa0poy -> _mdlRefSfcnS ) ; }
localX -> hflmlajctv = a2kiykjvrx . P_1 ; } else { if ( localX -> hflmlajctv
<= a2kiykjvrx . P_9 ) { if ( localX -> hflmlajctv < a2kiykjvrx . P_9 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( n4jdqa0poy -> _mdlRefSfcnS ) ; }
localX -> hflmlajctv = a2kiykjvrx . P_9 ; } } } awwyaae3xe_p = localX ->
hflmlajctv / a2kiykjvrx . P_1 ; * jovjkqw4dc = ( look1_binlcapw (
awwyaae3xe_p , a2kiykjvrx . P_3 , a2kiykjvrx . P_5 , 100U ) - 1.0 /
a2kiykjvrx . P_6 * * bgau4kdtsz * look2_binlcapw ( * nend3jcwem ,
awwyaae3xe_p , a2kiykjvrx . P_2 , a2kiykjvrx . P_4 , a2kiykjvrx . P_8 ,
a2kiykjvrx . P_11 , 7U ) ) * a2kiykjvrx . P_7 ; * icwqjgxcm3 = a2kiykjvrx .
P_10 * awwyaae3xe_p ; } void BattEvTID1 ( nw51lwywlm * localB ) { if (
a2kiykjvrx . P_0 > a2kiykjvrx . P_1 ) { localB -> awwyaae3xe = a2kiykjvrx .
P_1 ; } else { localB -> awwyaae3xe = a2kiykjvrx . P_0 ; } } void c0hgp3wnut
( euywnbmp33 * const n4jdqa0poy , nw51lwywlm * localB , dmy10bqvs5 * localDW
, hkgv0zhr3w * localX ) { localDW -> c0lxguzdmo = 0 ; if ( localX ->
hflmlajctv == a2kiykjvrx . P_1 ) { switch ( localDW -> aq4rfpgnmi ) { case 3
: if ( localB -> cxft4ixm0k < 0.0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( n4jdqa0poy -> _mdlRefSfcnS ) ;
localDW -> aq4rfpgnmi = 1 ; } break ; case 1 : if ( localB -> cxft4ixm0k >=
0.0 ) { localDW -> aq4rfpgnmi = 3 ;
ssSetBlockStateForSolverChangedAtMajorStep ( n4jdqa0poy -> _mdlRefSfcnS ) ; }
break ; default : ssSetBlockStateForSolverChangedAtMajorStep ( n4jdqa0poy ->
_mdlRefSfcnS ) ; if ( localB -> cxft4ixm0k < 0.0 ) { localDW -> aq4rfpgnmi =
1 ; } else { localDW -> aq4rfpgnmi = 3 ; } break ; } } else if ( localX ->
hflmlajctv == a2kiykjvrx . P_9 ) { switch ( localDW -> aq4rfpgnmi ) { case 4
: if ( localB -> cxft4ixm0k > 0.0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( n4jdqa0poy -> _mdlRefSfcnS ) ;
localDW -> aq4rfpgnmi = 2 ; } break ; case 2 : if ( localB -> cxft4ixm0k <=
0.0 ) { localDW -> aq4rfpgnmi = 4 ;
ssSetBlockStateForSolverChangedAtMajorStep ( n4jdqa0poy -> _mdlRefSfcnS ) ; }
break ; default : ssSetBlockStateForSolverChangedAtMajorStep ( n4jdqa0poy ->
_mdlRefSfcnS ) ; if ( localB -> cxft4ixm0k > 0.0 ) { localDW -> aq4rfpgnmi =
2 ; } else { localDW -> aq4rfpgnmi = 4 ; } break ; } } else { localDW ->
aq4rfpgnmi = 0 ; } } void c0hgp3wnutTID1 ( void ) { } void pexk2pi1gg (
nw51lwywlm * localB , dmy10bqvs5 * localDW , khjrgybdwv * localXdis ,
nvyvwtjtwa * localXdot ) { if ( ( localDW -> aq4rfpgnmi != 3 ) && ( localDW
-> aq4rfpgnmi != 4 ) ) { localXdot -> hflmlajctv = localB -> cxft4ixm0k ;
localXdis -> hflmlajctv = false ; } else { localXdot -> hflmlajctv = 0.0 ;
localXdis -> hflmlajctv = ( ( localDW -> aq4rfpgnmi == 3 ) || ( localDW ->
aq4rfpgnmi == 4 ) || localXdis -> hflmlajctv ) ; } } void d3sayc4aih (
nw51lwywlm * localB , dmy10bqvs5 * localDW , hkgv0zhr3w * localX , o3ciyyrlrx
* localZCSV ) { if ( ( localDW -> aq4rfpgnmi == 1 ) && ( localX -> hflmlajctv
>= a2kiykjvrx . P_1 ) ) { localZCSV -> jlvu1k5feu = 0.0 ; } else { localZCSV
-> jlvu1k5feu = localX -> hflmlajctv - a2kiykjvrx . P_1 ; } if ( ( localDW ->
aq4rfpgnmi == 2 ) && ( localX -> hflmlajctv <= a2kiykjvrx . P_9 ) ) {
localZCSV -> dghrbykmv0 = 0.0 ; } else { localZCSV -> dghrbykmv0 = localX ->
hflmlajctv - a2kiykjvrx . P_9 ; } if ( ( localDW -> aq4rfpgnmi == 3 ) || (
localDW -> aq4rfpgnmi == 4 ) ) { localZCSV -> mknsjhdkfa = localB ->
cxft4ixm0k ; } else { localZCSV -> mknsjhdkfa = 0.0 ; } } void m5uwyjpoin (
euywnbmp33 * const n4jdqa0poy ) { if ( ! slIsRapidAcceleratorSimulating ( ) )
{ slmrRunPluginEvent ( n4jdqa0poy -> _mdlRefSfcnS , "BattEv" ,
"SIMSTATUS_TERMINATING_MODELREF_ACCEL_EVENT" ) ; } } void lst5ppimoh (
SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 , int_T mdlref_TID1 , euywnbmp33
* const n4jdqa0poy , nw51lwywlm * localB , dmy10bqvs5 * localDW , hkgv0zhr3w
* localX , void * sysRanPtr , int contextTid , rtwCAPI_ModelMappingInfo *
rt_ParentMMI , const char_T * rt_ChildPath , int_T rt_ChildMMIIdx , int_T
rt_CSTATEIdx ) { rt_InitInfAndNaN ( sizeof ( real_T ) ) ; ( void ) memset ( (
void * ) n4jdqa0poy , 0 , sizeof ( euywnbmp33 ) ) ; n4jdqa0poy -> Timing .
mdlref_GlobalTID [ 0 ] = mdlref_TID0 ; n4jdqa0poy -> Timing .
mdlref_GlobalTID [ 1 ] = mdlref_TID1 ; n4jdqa0poy -> _mdlRefSfcnS = (
_mdlRefSfcnS ) ; if ( ! slIsRapidAcceleratorSimulating ( ) ) {
slmrRunPluginEvent ( n4jdqa0poy -> _mdlRefSfcnS , "BattEv" ,
"START_OF_SIM_MODEL_MODELREF_ACCEL_EVENT" ) ; } { localB -> cxft4ixm0k = 0.0
; localB -> awwyaae3xe = 0.0 ; } ( void ) memset ( ( void * ) localDW , 0 ,
sizeof ( dmy10bqvs5 ) ) ; BattEv_InitializeDataMapInfo ( n4jdqa0poy , localDW
, localX , sysRanPtr , contextTid ) ; if ( ( rt_ParentMMI != ( NULL ) ) && (
rt_ChildPath != ( NULL ) ) ) { rtwCAPI_SetChildMMI ( * rt_ParentMMI ,
rt_ChildMMIIdx , & ( n4jdqa0poy -> DataMapInfo . mmi ) ) ; rtwCAPI_SetPath (
n4jdqa0poy -> DataMapInfo . mmi , rt_ChildPath ) ;
rtwCAPI_MMISetContStateStartIndex ( n4jdqa0poy -> DataMapInfo . mmi ,
rt_CSTATEIdx ) ; } } void mr_BattEv_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS ,
char_T * modelName , int_T * retVal ) { * retVal = 0 ; { boolean_T
regSubmodelsMdlinfo = false ; ssGetRegSubmodelsMdlinfo ( mdlRefSfcnS , &
regSubmodelsMdlinfo ) ; if ( regSubmodelsMdlinfo ) { } } * retVal = 0 ;
ssRegModelRefMdlInfo ( mdlRefSfcnS , modelName , rtMdlInfo_BattEv , 43 ) ; *
retVal = 1 ; } static void mr_BattEv_cacheDataAsMxArray ( mxArray * destArray
, mwIndex i , int j , const void * srcData , size_t numBytes ) ; static void
mr_BattEv_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int j ,
const void * srcData , size_t numBytes ) { mxArray * newArray =
mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes , mxUINT8_CLASS ,
mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , ( const uint8_T *
) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i , j , newArray )
; } static void mr_BattEv_restoreDataFromMxArray ( void * destData , const
mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ; static void
mr_BattEv_restoreDataFromMxArray ( void * destData , const mxArray * srcArray
, mwIndex i , int j , size_t numBytes ) { memcpy ( ( uint8_T * ) destData , (
const uint8_T * ) mxGetData ( mxGetFieldByNumber ( srcArray , i , j ) ) ,
numBytes ) ; } static void mr_BattEv_cacheBitFieldToMxArray ( mxArray *
destArray , mwIndex i , int j , uint_T bitVal ) ; static void
mr_BattEv_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i , int j ,
uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j ,
mxCreateDoubleScalar ( ( double ) bitVal ) ) ; } static uint_T
mr_BattEv_extractBitFieldFromMxArray ( const mxArray * srcArray , mwIndex i ,
int j , uint_T numBits ) ; static uint_T mr_BattEv_extractBitFieldFromMxArray
( const mxArray * srcArray , mwIndex i , int j , uint_T numBits ) { const
uint_T varVal = ( uint_T ) mxGetScalar ( mxGetFieldByNumber ( srcArray , i ,
j ) ) ; return varVal & ( ( 1u << numBits ) - 1u ) ; } static void
mr_BattEv_cacheDataToMxArrayWithOffset ( mxArray * destArray , mwIndex i ,
int j , mwIndex offset , const void * srcData , size_t numBytes ) ; static
void mr_BattEv_cacheDataToMxArrayWithOffset ( mxArray * destArray , mwIndex i
, int j , mwIndex offset , const void * srcData , size_t numBytes ) { uint8_T
* varData = ( uint8_T * ) mxGetData ( mxGetFieldByNumber ( destArray , i , j
) ) ; memcpy ( ( uint8_T * ) & varData [ offset * numBytes ] , ( const
uint8_T * ) srcData , numBytes ) ; } static void
mr_BattEv_restoreDataFromMxArrayWithOffset ( void * destData , const mxArray
* srcArray , mwIndex i , int j , mwIndex offset , size_t numBytes ) ; static
void mr_BattEv_restoreDataFromMxArrayWithOffset ( void * destData , const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t numBytes ) {
const uint8_T * varData = ( const uint8_T * ) mxGetData ( mxGetFieldByNumber
( srcArray , i , j ) ) ; memcpy ( ( uint8_T * ) destData , ( const uint8_T *
) & varData [ offset * numBytes ] , numBytes ) ; } static void
mr_BattEv_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray , mwIndex
i , int j , mwIndex offset , uint_T fieldVal ) ; static void
mr_BattEv_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray , mwIndex
i , int j , mwIndex offset , uint_T fieldVal ) { mxSetCell (
mxGetFieldByNumber ( destArray , i , j ) , offset , mxCreateDoubleScalar ( (
double ) fieldVal ) ) ; } static uint_T
mr_BattEv_extractBitFieldFromCellArrayWithOffset ( const mxArray * srcArray ,
mwIndex i , int j , mwIndex offset , uint_T numBits ) ; static uint_T
mr_BattEv_extractBitFieldFromCellArrayWithOffset ( const mxArray * srcArray ,
mwIndex i , int j , mwIndex offset , uint_T numBits ) { const uint_T fieldVal
= ( uint_T ) mxGetScalar ( mxGetCell ( mxGetFieldByNumber ( srcArray , i , j
) , offset ) ) ; return fieldVal & ( ( 1u << numBits ) - 1u ) ; } mxArray *
mr_BattEv_GetDWork ( const lobjb0lvrdo * mdlrefDW ) { static const char *
ssDWFieldNames [ 3 ] = { "rtb" , "rtdw" , "NULL->rtzce" , } ; mxArray * ssDW
= mxCreateStructMatrix ( 1 , 1 , 3 , ssDWFieldNames ) ;
mr_BattEv_cacheDataAsMxArray ( ssDW , 0 , 0 , & ( mdlrefDW -> rtb ) , sizeof
( mdlrefDW -> rtb ) ) ; { static const char * rtdwDataFieldNames [ 2 ] = {
"mdlrefDW->rtdw.c0lxguzdmo" , "mdlrefDW->rtdw.aq4rfpgnmi" , } ; mxArray *
rtdwData = mxCreateStructMatrix ( 1 , 1 , 2 , rtdwDataFieldNames ) ;
mr_BattEv_cacheDataAsMxArray ( rtdwData , 0 , 0 , & ( mdlrefDW -> rtdw .
c0lxguzdmo ) , sizeof ( mdlrefDW -> rtdw . c0lxguzdmo ) ) ;
mr_BattEv_cacheDataAsMxArray ( rtdwData , 0 , 1 , & ( mdlrefDW -> rtdw .
aq4rfpgnmi ) , sizeof ( mdlrefDW -> rtdw . aq4rfpgnmi ) ) ;
mxSetFieldByNumber ( ssDW , 0 , 1 , rtdwData ) ; } ( void ) mdlrefDW ; return
ssDW ; } void mr_BattEv_SetDWork ( lobjb0lvrdo * mdlrefDW , const mxArray *
ssDW ) { ( void ) ssDW ; ( void ) mdlrefDW ; mr_BattEv_restoreDataFromMxArray
( & ( mdlrefDW -> rtb ) , ssDW , 0 , 0 , sizeof ( mdlrefDW -> rtb ) ) ; {
const mxArray * rtdwData = mxGetFieldByNumber ( ssDW , 0 , 1 ) ;
mr_BattEv_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . c0lxguzdmo ) ,
rtdwData , 0 , 0 , sizeof ( mdlrefDW -> rtdw . c0lxguzdmo ) ) ;
mr_BattEv_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . aq4rfpgnmi ) ,
rtdwData , 0 , 1 , sizeof ( mdlrefDW -> rtdw . aq4rfpgnmi ) ) ; } } void
mr_BattEv_RegisterSimStateChecksum ( SimStruct * S ) { const uint32_T chksum
[ 4 ] = { 73731692U , 200672486U , 396141083U , 3643993749U , } ;
slmrModelRefRegisterSimStateChecksum ( S , "BattEv" , & chksum [ 0 ] ) ; }
mxArray * mr_BattEv_GetSimStateDisallowedBlocks ( ) { return NULL ; }
