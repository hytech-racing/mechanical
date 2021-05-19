#ifndef RTW_HEADER_MotGenEvDynamic_h_
#define RTW_HEADER_MotGenEvDynamic_h_
#include <stddef.h>
#include <string.h>
#include "rtw_modelmap_simtarget.h"
#ifndef MotGenEvDynamic_COMMON_INCLUDES_
#define MotGenEvDynamic_COMMON_INCLUDES_
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "rtwtypes.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "simstruc.h"
#include "fixedpoint.h"
#endif
#include "MotGenEvDynamic_types.h"
#include "multiword_types.h"
#include "model_reference_types.h"
#include "mwmathutil.h"
#include "rt_nonfinite.h"
typedef struct { real_T itzfvuw4wx ; real_T ppknydtaqx ; real_T anzxqmfotw ;
real_T mhdlhk0c14 ; real_T llnxhrzq2o ; real_T iy2vl43zru ; real_T d4f2unf52i
; real_T g2rrchs5nk ; real_T n3svixcllx ; real_T pzram1ykgg ; real_T
awrvzcwb52 ; real_T lwpvkhuswg ; real_T oxiq1p2ad5 ; real_T hx1st4ql1x ;
real_T dmcxxglupf ; real_T dza0jh5oc0 ; real_T e5vi4snmv0 ; real_T hw3ausca5d
; real_T jnkn4uibnw ; real_T fvvsnpnedq ; real_T pnor5dxd5h ; real_T
psb2gwkboz ; real_T jmh12knqk4 ; real_T j4an1koocn ; real_T m4fgfho05f ;
real_T bvc4d3rafa ; real_T pdqqh31clo ; real_T j00saob3ud ; real_T f5vescf5ru
; real_T l1joaocm0k ; real_T bnhtuo4pzv ; real_T ancya45mmo ; real_T
fvwphmszym ; real_T hpq3zpwor5 ; real_T emqermn25v ; real_T cbuxsm4rne ;
real_T hddlzs2xkt ; real_T gnsidwdg2i ; boolean_T o552djtg1l ; } cx3bhokmct ;
typedef struct { real_T pdv153zdu5 ; real_T lmqwggutck ; real_T omrrdh0nvo ;
real_T gxkwygbb4g ; real_T hh4vgn0tkn ; real_T n1xqcq4unv ; struct { void *
AQHandles ; } brnt2ej5x1 ; struct { void * AQHandles ; } jckcnytr4c ; int_T
lf2zfdimpe ; int_T hjhxitxtn4 ; int_T juyze14tin ; int_T f4evhke5td ; int8_T
bfuoehqzsl ; int8_T i3e2kfzsoy ; int8_T kk4n2up2w1 ; int8_T bsszatmvjl ;
int8_T mekacwiae4 ; int8_T cmjt0zg4xt ; int8_T n0wi1kglhh ; int8_T ooikcgayh1
; int8_T o22jbjlb32 ; int8_T nvnt5k5wtu ; int8_T djzzdpaje3 ; int8_T
feypm5vhbq ; boolean_T j1mwihstyy ; } cloq5bin3y ; typedef struct { real_T
jjrb01sfag ; real_T lsis3mvtl3 ; real_T kqb0spkyga ; } fsi3zxjdsv ; typedef
int_T bvapovc3i4 [ 1 ] ; typedef real_T l0vfzfjs5d [ 2 ] ; typedef struct {
real_T jjrb01sfag ; real_T lsis3mvtl3 ; real_T kqb0spkyga ; } evfyajgoqu ;
typedef struct { boolean_T jjrb01sfag ; boolean_T lsis3mvtl3 ; boolean_T
kqb0spkyga ; } a2tgpeokha ; typedef struct { real_T jjrb01sfag ; real_T
lsis3mvtl3 ; real_T kqb0spkyga ; } fjkqlf2nvp ; typedef struct { real_T
jjrb01sfag ; real_T lsis3mvtl3 ; real_T kqb0spkyga ; } fw3b52wipm ; typedef
struct { real_T jjrb01sfag ; real_T lsis3mvtl3 ; real_T kqb0spkyga ; }
p1rrq1ih3i ; typedef struct { real_T dlemv12ixj ; real_T crlnvux0tw ; real_T
geommsvcm0 ; real_T a3nogxtorf ; real_T pinuq3ljyw ; real_T jmqldch1ql ;
real_T ea2uuggopo ; } f0can1sh3a ; struct hp0wdh0z5x5_ { real_T P_0 ; real_T
P_1 ; real_T P_2 ; real_T P_3 ; real_T P_4 [ 2 ] ; real_T P_5 ; real_T P_6 ;
real_T P_7 ; real_T P_8 ; real_T P_9 [ 6 ] ; real_T P_10 [ 10 ] ; real_T P_11
[ 10 ] ; real_T P_12 [ 2 ] ; real_T P_13 [ 3 ] ; real_T P_14 [ 10 ] ; real_T
P_15 ; real_T P_16 ; real_T P_17 [ 30 ] ; real_T P_18 ; real_T P_19 [ 5 ] ;
real_T P_20 ; real_T P_21 ; real_T P_22 ; real_T P_23 ; real_T P_24 ; real_T
P_25 ; real_T P_26 ; real_T P_27 ; real_T P_28 ; real_T P_29 ; real_T P_30 ;
real_T P_31 ; real_T P_32 ; real_T P_33 ; real_T P_36 ; real_T P_37 ; real_T
P_38 ; real_T P_39 ; real_T P_40 ; real_T P_41 ; real_T P_42 ; real_T P_43 ;
real_T P_44 ; real_T P_45 ; real_T P_46 ; real_T P_47 ; real_T P_48 ; real_T
P_49 ; real_T P_50 ; real_T P_51 ; real_T P_52 ; real_T P_53 ; real_T P_54 ;
real_T P_55 ; real_T P_56 ; real_T P_57 ; real_T P_58 ; real_T P_59 ; real_T
P_60 ; real_T P_61 ; real_T P_62 ; real_T P_63 ; real_T P_64 ; real_T P_65 [
120 ] ; real_T P_66 [ 10 ] ; real_T P_67 [ 12 ] ; real_T P_68 ; real_T P_69 ;
real_T P_70 ; real_T P_71 ; real_T P_72 ; real_T P_73 ; real_T P_74 ; real_T
P_75 ; real_T P_76 ; real_T P_77 ; real_T P_78 ; real_T P_79 ; real_T P_80 ;
real_T P_81 ; real_T P_82 ; real_T P_83 ; real_T P_84 ; real_T P_85 ; real_T
P_86 ; real_T P_87 ; real_T P_88 ; real_T P_89 ; real_T P_90 ; real_T P_91 ;
real_T P_92 ; real_T P_93 ; real_T P_94 ; real_T P_95 ; real_T P_96 ; real_T
P_97 ; real_T P_98 ; real_T P_99 ; real_T P_100 ; uint32_T P_101 [ 2 ] ;
uint32_T P_102 [ 2 ] ; } ; struct n4bpxhx2nv { struct SimStruct_tag *
_mdlRefSfcnS ; struct { real_T mr_nonContSig0 [ 1 ] ; real_T mr_nonContSig1 [
1 ] ; } NonContDerivMemory ; ssNonContDerivSigInfo nonContDerivSignal [ 2 ] ;
const rtTimingBridge * timingBridge ; struct { rtwCAPI_ModelMappingInfo mmi ;
rtwCAPI_ModelMapLoggingInstanceInfo mmiLogInstanceInfo ; void * dataAddress [
9 ] ; int32_T * vardimsAddress [ 9 ] ; RTWLoggingFcnPtr loggingPtrs [ 9 ] ;
sysRanDType * systemRan [ 10 ] ; int_T systemTid [ 10 ] ; } DataMapInfo ;
struct { int_T mdlref_GlobalTID [ 4 ] ; } Timing ; } ; typedef struct {
cx3bhokmct rtb ; cloq5bin3y rtdw ; mv4ga5jwa1 rtm ; } l0vfpqnnodc ; extern
void cwmdpnrf2r ( SimStruct * _mdlRefSfcnS , ssNonContDerivSigFeedingOutports
* * mr_nonContOutputArray , int_T mdlref_TID0 , int_T mdlref_TID1 , int_T
mdlref_TID2 , int_T mdlref_TID3 , mv4ga5jwa1 * const oczxsqne0n , cx3bhokmct
* localB , cloq5bin3y * localDW , fsi3zxjdsv * localX , void * sysRanPtr ,
int contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T *
rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ; extern void
mr_MotGenEvDynamic_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T *
modelName , int_T * retVal ) ; extern mxArray * mr_MotGenEvDynamic_GetDWork (
const l0vfpqnnodc * mdlrefDW ) ; extern void mr_MotGenEvDynamic_SetDWork (
l0vfpqnnodc * mdlrefDW , const mxArray * ssDW ) ; extern void
mr_MotGenEvDynamic_RegisterSimStateChecksum ( SimStruct * S ) ; extern
mxArray * mr_MotGenEvDynamic_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * MotGenEvDynamic_GetCAPIStaticMap ( void ) ;
extern void pv4vhh3fcm ( mv4ga5jwa1 * const oczxsqne0n , cloq5bin3y * localDW
) ; extern void dwpuxjpomb ( mv4ga5jwa1 * const oczxsqne0n , cx3bhokmct *
localB , cloq5bin3y * localDW , fsi3zxjdsv * localX ) ; extern void
fb4yyrugqd ( mv4ga5jwa1 * const oczxsqne0n , cloq5bin3y * localDW ,
fsi3zxjdsv * localX ) ; extern void dk15ta1msh ( mv4ga5jwa1 * const
oczxsqne0n , cloq5bin3y * localDW ) ; extern void n5k0o3qutm ( mv4ga5jwa1 *
const oczxsqne0n , cloq5bin3y * localDW ) ; extern void mfy1r3luh1 ( const
real_T * geawchg2qh , cx3bhokmct * localB , a2tgpeokha * localXdis ,
evfyajgoqu * localXdot ) ; extern void cmnf4xtkyp ( const real_T * cvcsdesmn4
, cx3bhokmct * localB , cloq5bin3y * localDW , fsi3zxjdsv * localX ,
f0can1sh3a * localZCSV ) ; extern void byych5oy3s ( mv4ga5jwa1 * const
oczxsqne0n , cloq5bin3y * localDW ) ; extern void lwglwij1vj ( mv4ga5jwa1 *
const oczxsqne0n , cx3bhokmct * localB , cloq5bin3y * localDW , a2tgpeokha *
localXdis ) ; extern void lwglwij1vjTID3 ( void ) ; extern void
MotGenEvDynamic ( mv4ga5jwa1 * const oczxsqne0n , const real_T * emppsgntig ,
const real_T * geawchg2qh , const real_T * cvcsdesmn4 , real_T * fnbywarnx2 ,
real_T * cg1dw5wgio , real_T * pjvsscaswy , cx3bhokmct * localB , cloq5bin3y
* localDW , fsi3zxjdsv * localX ) ; extern void MotGenEvDynamicTID3 (
mv4ga5jwa1 * const oczxsqne0n , cx3bhokmct * localB , cloq5bin3y * localDW )
; extern void kh5ykjtmv0 ( mv4ga5jwa1 * const oczxsqne0n ) ;
#endif
