#include "EvPowertrainController_capi.h"
#include "EvPowertrainController.h"
#include "EvPowertrainController_private.h"
#include "look1_binlcapw.h"
#include "look2_binlcapw.h"
static RegMdlInfo rtMdlInfo_EvPowertrainController [ 39 ] = { { "pwecol01r52"
, MDL_INFO_NAME_MDLREF_DWORK , 0 , - 1 , ( void * ) "EvPowertrainController"
} , { "m0wpkuzrqm" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EvPowertrainController" } , { "hopnyppy5w" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EvPowertrainController" } , { "kx3qh113vl" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EvPowertrainController" } , { "ilxsnq2q0g" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EvPowertrainController" } , { "cqreqezql0" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EvPowertrainController" } , { "bcgjlw03xh" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EvPowertrainController" } , { "otb4tbgm5c" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EvPowertrainController" } , { "dsayz4k2i0" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EvPowertrainController" } , { "oeyven44uw" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EvPowertrainController" } , { "keofue2nr5" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EvPowertrainController" } , { "nllmd53eto" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EvPowertrainController" } , { "eu5lctztg1" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EvPowertrainController" } , { "j43xi004pt" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EvPowertrainController" } , { "a3jh4ad2kz" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EvPowertrainController" } , { "lktaxgo5iz" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EvPowertrainController" } , { "ei5yvhlm0j" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EvPowertrainController" } , { "izmowyu5rx" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EvPowertrainController" } , { "io04qbfqhk" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EvPowertrainController" } , { "hrsc30l345" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EvPowertrainController" } , { "cdzncnh0i4" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EvPowertrainController" } , { "EvPowertrainController" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0 , ( NULL ) } , { "ls5wieseak" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EvPowertrainController" } , { "a50xwovlji" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EvPowertrainController" } , { "h5efmxf3a3" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EvPowertrainController" } , {
"mr_EvPowertrainController_GetSimStateDisallowedBlocks" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "EvPowertrainController" }
, { "mr_EvPowertrainController_extractBitFieldFromCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "EvPowertrainController" }
, { "mr_EvPowertrainController_cacheBitFieldToCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "EvPowertrainController" }
, { "mr_EvPowertrainController_restoreDataFromMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "EvPowertrainController" }
, { "mr_EvPowertrainController_cacheDataToMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "EvPowertrainController" }
, { "mr_EvPowertrainController_extractBitFieldFromMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "EvPowertrainController" }
, { "mr_EvPowertrainController_cacheBitFieldToMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "EvPowertrainController" }
, { "mr_EvPowertrainController_restoreDataFromMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "EvPowertrainController" }
, { "mr_EvPowertrainController_cacheDataAsMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "EvPowertrainController" }
, { "mr_EvPowertrainController_RegisterSimStateChecksum" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "EvPowertrainController" }
, { "mr_EvPowertrainController_SetDWork" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , -
1 , ( void * ) "EvPowertrainController" } , {
"mr_EvPowertrainController_GetDWork" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 ,
( void * ) "EvPowertrainController" } , { "EvPowertrainController.h" ,
MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( NULL ) } , { "EvPowertrainController.c"
, MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( void * ) "EvPowertrainController" } }
; kmsrr4v05yq kmsrr4v05y = { 0.0 , 2.0 , 2.0 , { 1.0 , 1.0 , 1.0 , 1.0 , 1.0
, 1.0 , 1.0 , 1.0 , 0.7 , 0.35 , 0.0 } , { 0.0 , 10.0 , 20.0 , 30.0 , 40.0 ,
50.0 , 60.0 , 70.0 , 80.0 , 90.0 , 100.0 } , { 0.0 , 1.0 } , { 2.2 , 4.5 } ,
9.5492965855137211 , { 280.0 , 280.0 , 280.0 , 280.0 , 254.6479089 ,
190.9859317 , 152.7887454 , 127.3239545 , 109.1348181 , 95.49296586 ,
84.88263632 , 76.39437268 } , { 0.0 , 1000.0 , 2000.0 , 2728.370453 , 3000.0
, 4000.0 , 5000.0 , 6000.0 , 7000.0 , 8000.0 , 9000.0 , 10000.0 } , - 1.0 ,
0.0 , 9.5492965855137211 , { 280.0 , 280.0 , 280.0 , 280.0 , 254.6479089 ,
190.9859317 , 152.7887454 , 127.3239545 , 109.1348181 , 95.49296586 ,
84.88263632 , 76.39437268 } , { 0.0 , 1000.0 , 2000.0 , 2728.370453 , 3000.0
, 4000.0 , 5000.0 , 6000.0 , 7000.0 , 8000.0 , 9000.0 , 10000.0 } , 1.0 , -
1.0 , 0.0 , { 0.0 , 0.35 , 0.7 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 ,
1.0 } , { 0.0 , 10.0 , 20.0 , 30.0 , 40.0 , 50.0 , 60.0 , 70.0 , 80.0 , 90.0
, 100.0 } , { 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 0.7 , 0.35 ,
0.0 } , { 0.0 , 10.0 , 20.0 , 30.0 , 40.0 , 50.0 , 60.0 , 70.0 , 80.0 , 90.0
, 100.0 } , 0.0 , 9.5492965855137211 , { 85.0 , 85.0 , 85.0 , 85.0 , 85.0 ,
85.0 , 85.0 , 85.0 , 85.0 , 85.0 , 85.0 , 85.0 , 85.0 , 85.0 , 85.0 , 85.0 ,
85.0 , 85.0 , 85.0 , 85.0 , 85.0 , 85.0 , 85.0 , 85.0 , 85.0 , 85.0 , 90.0 ,
92.0 , 92.0 , 93.0 , 93.0 , 93.0 , 93.0 , 93.0 , 93.0 , 90.0 , 85.0 , 85.0 ,
90.0 , 92.0 , 92.0 , 94.0 , 94.0 , 94.0 , 94.0 , 94.0 , 94.0 , 92.0 , 85.0 ,
85.0 , 90.0 , 92.0 , 93.0 , 94.0 , 94.0 , 94.0 , 95.0 , 95.0 , 94.0 , 93.0 ,
85.0 , 85.0 , 90.0 , 92.0 , 93.0 , 94.0 , 95.0 , 95.0 , 95.0 , 95.0 , 94.0 ,
93.0 , 85.0 , 85.0 , 90.0 , 92.0 , 93.0 , 94.0 , 95.0 , 95.0 , 95.0 , 95.0 ,
94.0 , 93.0 , 85.0 , 85.0 , 90.0 , 92.0 , 93.0 , 94.0 , 95.0 , 95.0 , 95.0 ,
95.0 , 94.0 , 93.0 , 85.0 , 85.0 , 90.0 , 92.0 , 92.0 , 94.0 , 95.0 , 95.0 ,
95.0 , 95.0 , 94.0 , 93.0 , 85.0 , 85.0 , 90.0 , 92.0 , 92.0 , 94.0 , 95.0 ,
95.0 , 95.0 , 95.0 , 94.0 , 93.0 , 85.0 , 85.0 , 88.0 , 92.0 , 92.0 , 94.0 ,
95.0 , 95.0 , 95.0 , 95.0 , 94.0 , 93.0 , 85.0 , 85.0 , 88.0 , 90.0 , 90.0 ,
94.0 , 95.0 , 95.0 , 95.0 , 95.0 , 94.0 , 93.0 , 85.0 , 85.0 , 88.0 , 90.0 ,
90.0 , 94.0 , 95.0 , 95.0 , 95.0 , 95.0 , 94.0 , 93.0 , 85.0 , 85.0 , 88.0 ,
90.0 , 90.0 , 94.0 , 95.0 , 95.0 , 95.0 , 95.0 , 94.0 , 93.0 , 85.0 , 85.0 ,
88.0 , 90.0 , 90.0 , 94.0 , 95.0 , 95.0 , 95.0 , 95.0 , 94.0 , 93.0 } , { 0.0
, 1000.0 , 2000.0 , 2728.370453 , 3000.0 , 4000.0 , 5000.0 , 6000.0 , 7000.0
, 8000.0 , 9000.0 , 10000.0 } , { 0.0 , 20.0 , 40.0 , 60.0 , 80.0 , 100.0 ,
120.0 , 140.0 , 160.0 , 180.0 , 200.0 , 220.0 , 240.0 , 260.0 , 280.0 } ,
0.01 , - 1.0 , 0.0 , 0.0 , 0.0 , 9.5492965855137211 , { 280.0 , 280.0 , 280.0
, 280.0 , 254.6479089 , 190.9859317 , 152.7887454 , 127.3239545 , 109.1348181
, 95.49296586 , 84.88263632 , 76.39437268 } , { 0.0 , 1000.0 , 2000.0 ,
2728.370453 , 3000.0 , 4000.0 , 5000.0 , 6000.0 , 7000.0 , 8000.0 , 9000.0 ,
10000.0 } , - 80000.0 , 80000.0 , 5.0E+6 , 1.0 , 0.0 , 1.0 , { 11U , 14U } }
; void EvPowertrainController ( const real_T * prupxtwaeb , const real_T *
jym0osvxgw , const real_T * mipgkbochp , const real_T * crcnsgdctu , const
real_T * kb3nkebj5c , real_T * j3hft4pgzt , real_T * ljajhg2mpa , j43xi004pt
* localB ) { real_T a0z0zpamhc ; real_T oje21gmldb ; real_T higl2pyeh3 ;
real_T n3gtkp0s1j ; real_T flbc1okxke ; real_T kb3nkebj5c_p ; if ( kmsrr4v05y
. P_39 > kmsrr4v05y . P_31 ) { kb3nkebj5c_p = kmsrr4v05y . P_38 ; } else {
kb3nkebj5c_p = * jym0osvxgw ; } * ljajhg2mpa = kb3nkebj5c_p * kmsrr4v05y .
P_37 ; if ( * prupxtwaeb > kmsrr4v05y . P_0 ) { a0z0zpamhc = look1_binlcapw (
kmsrr4v05y . P_12 * * kb3nkebj5c , kmsrr4v05y . P_14 , kmsrr4v05y . P_13 ,
11U ) * * prupxtwaeb ; } else { a0z0zpamhc = look1_binlcapw ( kmsrr4v05y .
P_7 * * kb3nkebj5c , kmsrr4v05y . P_9 , kmsrr4v05y . P_8 , 11U ) * (
look1_binlcapw ( * mipgkbochp , kmsrr4v05y . P_6 , kmsrr4v05y . P_5 , 1U ) *
look1_binlcapw ( * crcnsgdctu , kmsrr4v05y . P_4 , kmsrr4v05y . P_3 , 10U ) )
* kmsrr4v05y . P_10 * kmsrr4v05y . P_11 ; } if ( ! ( muDoubleScalarAbs ( *
kb3nkebj5c ) < kmsrr4v05y . P_1 ) ) { oje21gmldb = look1_binlcapw ( *
crcnsgdctu , kmsrr4v05y . P_19 , kmsrr4v05y . P_18 , 10U ) * kmsrr4v05y .
P_36 ; higl2pyeh3 = look1_binlcapw ( * crcnsgdctu , kmsrr4v05y . P_21 ,
kmsrr4v05y . P_20 , 10U ) * kmsrr4v05y . P_35 ; kb3nkebj5c_p = * kb3nkebj5c *
a0z0zpamhc ; if ( kb3nkebj5c_p >= kmsrr4v05y . P_22 ) { flbc1okxke =
kmsrr4v05y . P_16 ; } else { flbc1okxke = kmsrr4v05y . P_15 ; } n3gtkp0s1j =
look2_binlcapw ( muDoubleScalarAbs ( kmsrr4v05y . P_23 * * kb3nkebj5c ) ,
muDoubleScalarAbs ( a0z0zpamhc ) , kmsrr4v05y . P_25 , kmsrr4v05y . P_26 ,
kmsrr4v05y . P_24 , kmsrr4v05y . P_41 , 12U ) * kmsrr4v05y . P_27 ; if ( (
n3gtkp0s1j < 0.0 ) && ( flbc1okxke > muDoubleScalarFloor ( flbc1okxke ) ) ) {
flbc1okxke = - muDoubleScalarPower ( - n3gtkp0s1j , flbc1okxke ) ; } else {
flbc1okxke = muDoubleScalarPower ( n3gtkp0s1j , flbc1okxke ) ; } n3gtkp0s1j =
kb3nkebj5c_p * flbc1okxke ; if ( ( ! ( oje21gmldb - n3gtkp0s1j >= kmsrr4v05y
. P_29 ) ) || ( ! ( higl2pyeh3 - n3gtkp0s1j <= kmsrr4v05y . P_30 ) ) ) { if (
( * kb3nkebj5c >= - kmsrr4v05y . P_2 ) && ( * kb3nkebj5c <= kmsrr4v05y . P_2
) ) { if ( * kb3nkebj5c >= kmsrr4v05y . P_17 ) { kb3nkebj5c_p = kmsrr4v05y .
P_40 ; } else { kb3nkebj5c_p = localB -> g11mbzoj5e ; } a0z0zpamhc = 4.0 / (
3.0 - muDoubleScalarPower ( * kb3nkebj5c / 2.0 , 2.0 ) ) * kb3nkebj5c_p ; }
else { a0z0zpamhc = * kb3nkebj5c ; } if ( ! ( n3gtkp0s1j > oje21gmldb ) ) {
if ( n3gtkp0s1j < higl2pyeh3 ) { oje21gmldb = higl2pyeh3 ; } else {
oje21gmldb = n3gtkp0s1j ; } } a0z0zpamhc = oje21gmldb / flbc1okxke /
a0z0zpamhc ; } } oje21gmldb = look1_binlcapw ( kmsrr4v05y . P_32 * *
kb3nkebj5c , kmsrr4v05y . P_34 , kmsrr4v05y . P_33 , 11U ) ; if ( a0z0zpamhc
> oje21gmldb ) { * j3hft4pgzt = oje21gmldb ; } else { oje21gmldb *=
kmsrr4v05y . P_28 ; if ( a0z0zpamhc < oje21gmldb ) { * j3hft4pgzt =
oje21gmldb ; } else { * j3hft4pgzt = a0z0zpamhc ; } } } void
EvPowertrainControllerTID1 ( j43xi004pt * localB ) { localB -> g11mbzoj5e = -
kmsrr4v05y . P_40 ; } void lktaxgo5iz ( h5efmxf3a3 * const e4f4oaoqet ) { if
( ! slIsRapidAcceleratorSimulating ( ) ) { slmrRunPluginEvent ( e4f4oaoqet ->
_mdlRefSfcnS , "EvPowertrainController" ,
"SIMSTATUS_TERMINATING_MODELREF_ACCEL_EVENT" ) ; } } void io04qbfqhk (
SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 , int_T mdlref_TID1 , h5efmxf3a3
* const e4f4oaoqet , j43xi004pt * localB , void * sysRanPtr , int contextTid
, rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T * rt_ChildPath ,
int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) { rt_InitInfAndNaN ( sizeof (
real_T ) ) ; ( void ) memset ( ( void * ) e4f4oaoqet , 0 , sizeof (
h5efmxf3a3 ) ) ; e4f4oaoqet -> Timing . mdlref_GlobalTID [ 0 ] = mdlref_TID0
; e4f4oaoqet -> Timing . mdlref_GlobalTID [ 1 ] = mdlref_TID1 ; e4f4oaoqet ->
_mdlRefSfcnS = ( _mdlRefSfcnS ) ; if ( ! slIsRapidAcceleratorSimulating ( ) )
{ slmrRunPluginEvent ( e4f4oaoqet -> _mdlRefSfcnS , "EvPowertrainController"
, "START_OF_SIM_MODEL_MODELREF_ACCEL_EVENT" ) ; } { localB -> g11mbzoj5e =
0.0 ; } EvPowertrainController_InitializeDataMapInfo ( e4f4oaoqet , sysRanPtr
, contextTid ) ; if ( ( rt_ParentMMI != ( NULL ) ) && ( rt_ChildPath != (
NULL ) ) ) { rtwCAPI_SetChildMMI ( * rt_ParentMMI , rt_ChildMMIIdx , & (
e4f4oaoqet -> DataMapInfo . mmi ) ) ; rtwCAPI_SetPath ( e4f4oaoqet ->
DataMapInfo . mmi , rt_ChildPath ) ; rtwCAPI_MMISetContStateStartIndex (
e4f4oaoqet -> DataMapInfo . mmi , rt_CSTATEIdx ) ; } } void
mr_EvPowertrainController_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T *
modelName , int_T * retVal ) { * retVal = 0 ; { boolean_T regSubmodelsMdlinfo
= false ; ssGetRegSubmodelsMdlinfo ( mdlRefSfcnS , & regSubmodelsMdlinfo ) ;
if ( regSubmodelsMdlinfo ) { } } * retVal = 0 ; ssRegModelRefMdlInfo (
mdlRefSfcnS , modelName , rtMdlInfo_EvPowertrainController , 39 ) ; * retVal
= 1 ; } static void mr_EvPowertrainController_cacheDataAsMxArray ( mxArray *
destArray , mwIndex i , int j , const void * srcData , size_t numBytes ) ;
static void mr_EvPowertrainController_cacheDataAsMxArray ( mxArray *
destArray , mwIndex i , int j , const void * srcData , size_t numBytes ) {
mxArray * newArray = mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes ,
mxUINT8_CLASS , mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , (
const uint8_T * ) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i ,
j , newArray ) ; } static void
mr_EvPowertrainController_restoreDataFromMxArray ( void * destData , const
mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ; static void
mr_EvPowertrainController_restoreDataFromMxArray ( void * destData , const
mxArray * srcArray , mwIndex i , int j , size_t numBytes ) { memcpy ( (
uint8_T * ) destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber (
srcArray , i , j ) ) , numBytes ) ; } static void
mr_EvPowertrainController_cacheBitFieldToMxArray ( mxArray * destArray ,
mwIndex i , int j , uint_T bitVal ) ; static void
mr_EvPowertrainController_cacheBitFieldToMxArray ( mxArray * destArray ,
mwIndex i , int j , uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j
, mxCreateDoubleScalar ( ( double ) bitVal ) ) ; } static uint_T
mr_EvPowertrainController_extractBitFieldFromMxArray ( const mxArray *
srcArray , mwIndex i , int j , uint_T numBits ) ; static uint_T
mr_EvPowertrainController_extractBitFieldFromMxArray ( const mxArray *
srcArray , mwIndex i , int j , uint_T numBits ) { const uint_T varVal = (
uint_T ) mxGetScalar ( mxGetFieldByNumber ( srcArray , i , j ) ) ; return
varVal & ( ( 1u << numBits ) - 1u ) ; } static void
mr_EvPowertrainController_cacheDataToMxArrayWithOffset ( mxArray * destArray
, mwIndex i , int j , mwIndex offset , const void * srcData , size_t numBytes
) ; static void mr_EvPowertrainController_cacheDataToMxArrayWithOffset (
mxArray * destArray , mwIndex i , int j , mwIndex offset , const void *
srcData , size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_EvPowertrainController_restoreDataFromMxArrayWithOffset ( void *
destData , const mxArray * srcArray , mwIndex i , int j , mwIndex offset ,
size_t numBytes ) ; static void
mr_EvPowertrainController_restoreDataFromMxArrayWithOffset ( void * destData
, const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t
numBytes ) { const uint8_T * varData = ( const uint8_T * ) mxGetData (
mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T * ) destData ,
( const uint8_T * ) & varData [ offset * numBytes ] , numBytes ) ; } static
void mr_EvPowertrainController_cacheBitFieldToCellArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) ; static
void mr_EvPowertrainController_cacheBitFieldToCellArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) {
mxSetCell ( mxGetFieldByNumber ( destArray , i , j ) , offset ,
mxCreateDoubleScalar ( ( double ) fieldVal ) ) ; } static uint_T
mr_EvPowertrainController_extractBitFieldFromCellArrayWithOffset ( const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ;
static uint_T
mr_EvPowertrainController_extractBitFieldFromCellArrayWithOffset ( const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) {
const uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell (
mxGetFieldByNumber ( srcArray , i , j ) , offset ) ) ; return fieldVal & ( (
1u << numBits ) - 1u ) ; } mxArray * mr_EvPowertrainController_GetDWork (
const pwecol01r52 * mdlrefDW ) { static const char * ssDWFieldNames [ 3 ] = {
"rtb" , "NULL->rtdw" , "NULL->rtzce" , } ; mxArray * ssDW =
mxCreateStructMatrix ( 1 , 1 , 3 , ssDWFieldNames ) ;
mr_EvPowertrainController_cacheDataAsMxArray ( ssDW , 0 , 0 , & ( mdlrefDW ->
rtb ) , sizeof ( mdlrefDW -> rtb ) ) ; ( void ) mdlrefDW ; return ssDW ; }
void mr_EvPowertrainController_SetDWork ( pwecol01r52 * mdlrefDW , const
mxArray * ssDW ) { ( void ) ssDW ; ( void ) mdlrefDW ;
mr_EvPowertrainController_restoreDataFromMxArray ( & ( mdlrefDW -> rtb ) ,
ssDW , 0 , 0 , sizeof ( mdlrefDW -> rtb ) ) ; } void
mr_EvPowertrainController_RegisterSimStateChecksum ( SimStruct * S ) { const
uint32_T chksum [ 4 ] = { 1358477103U , 1356663776U , 3591474396U ,
514697971U , } ; slmrModelRefRegisterSimStateChecksum ( S ,
"EvPowertrainController" , & chksum [ 0 ] ) ; } mxArray *
mr_EvPowertrainController_GetSimStateDisallowedBlocks ( ) { return NULL ; }
