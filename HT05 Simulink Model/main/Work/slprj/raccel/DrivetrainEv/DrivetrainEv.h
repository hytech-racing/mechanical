#ifndef RTW_HEADER_DrivetrainEv_h_
#define RTW_HEADER_DrivetrainEv_h_
#include <string.h>
#include <stddef.h>
#include "rtw_modelmap.h"
#ifndef DrivetrainEv_COMMON_INCLUDES_
#define DrivetrainEv_COMMON_INCLUDES_
#include <stdlib.h>
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "rtwtypes.h"
#include "simtarget/slSimTgtSigstreamRTW.h"
#include "simtarget/slSimTgtSlioCoreRTW.h"
#include "simtarget/slSimTgtSlioClientsRTW.h"
#include "simtarget/slSimTgtSlioSdiRTW.h"
#include "sigstream_rtw.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "raccel.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "rt_logging.h"
#include "dt_info.h"
#include "ext_work.h"
#include "nesl_rtw_lti.h"
#endif
#include "DrivetrainEv_types.h"
#include "multiword_types.h"
#include "rtGetNaN.h"
#include "rt_nonfinite.h"
#include "rt_zcfcn.h"
#include "mwmathutil.h"
#include "rtGetInf.h"
#include "rt_defines.h"
#define MODEL_NAME DrivetrainEv
#define NSAMPLE_TIMES (3) 
#define NINPUTS (4)       
#define NOUTPUTS (2)     
#define NBLOCKIO (249) 
#define NUM_ZC_EVENTS (2) 
#ifndef NCSTATES
#define NCSTATES (22)   
#elif NCSTATES != 22
#error Invalid specification of NCSTATES defined in compiler command
#endif
#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm) (*rt_dataMapInfoPtr)
#endif
#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val) (rt_dataMapInfoPtr = &val)
#endif
#ifndef IN_RACCEL_MAIN
#endif
typedef struct { real_T hg0uepzdlr [ 3 ] ; real_T iftka2hl45 [ 9 ] ; real_T
iny0n31qca [ 9 ] ; real_T lsxufha4ar [ 3 ] ; } kvvoudj5tn ; typedef struct {
real_T a4qhmksov4 [ 5 ] ; real_T jp04hhuxax [ 16 ] ; real_T njnuel0xeb [ 24 ]
; real_T odbylawxnz ; real_T istsrpdzon ; } c0wju2q3cn ; typedef struct {
real_T amlomrh5pe ; real_T pko5zv0gxh ; real_T kvpcq24csf ; real_T grabw3r2s4
; real_T fqnbs42x2r ; real_T ocvy1l4023 ; real_T idh10nqjbu ; real_T
jahnvx3kqt ; real_T inrtpw2cx1 ; real_T m4gvzn05xv ; real_T m4kwqt0weh ;
real_T lgc5y05bba ; real_T jdin3zvg0f ; real_T eqiwbbwx2h ; real_T borgqrxodu
; boolean_T ejvkch2wis ; boolean_T legzb2sclz ; } am0zbcsot1 ; typedef struct
{ real_T dwlnal5cpf ; real_T d4m3dcxee3 ; real_T ipcup3puci ; void *
feltoykxxu ; void * oq0zjzu2fx ; int32_T kncpfxn0zs ; uint32_T k54dnhlmkd ;
boolean_T dhmxzbxrdi ; int8_T lypwhpzhjk ; int8_T k11upcr4nu ; int8_T
aoynv25rbl ; int8_T pb3tcu34d5 ; int8_T pji4wdzuww ; int8_T pe5tlefx4c ;
uint8_T frhewkvqk5 ; boolean_T molk5qdn4x ; } n2z3212kuo ; typedef struct {
real_T njpe3amuyf ; } n1qqd0unpi ; typedef struct { real_T njpe3amuyf ; }
cab15xgmjs ; typedef struct { boolean_T njpe3amuyf ; } hbvcxtbkzf ; typedef
struct { real_T njpe3amuyf ; } juj3zta1z2 ; typedef struct { real_T
njpe3amuyf ; } ef10icvw1n ; typedef struct { real_T njpe3amuyf ; } g35dpekgxk
; typedef struct { real_T cz0aqccxmh ; } ehtbhlzffh ; typedef struct {
am0zbcsot1 lkn4jcwpit ; } lf3kqxn440 ; typedef struct { n2z3212kuo lkn4jcwpit
; } jdnbwydxvk ; typedef struct { n1qqd0unpi lkn4jcwpit ; } ei2bzps4rs ;
typedef struct { cab15xgmjs lkn4jcwpit ; } hdorofoxdx ; typedef struct {
hbvcxtbkzf lkn4jcwpit ; } dkybmgt4ob ; typedef struct { juj3zta1z2 lkn4jcwpit
; } dyqem1hi1j ; typedef struct { ef10icvw1n lkn4jcwpit ; } ky4vs1ev3h ;
typedef struct { g35dpekgxk lkn4jcwpit ; } d0xwtvm5zk ; typedef struct {
ehtbhlzffh lkn4jcwpit ; } c5fixg3cuo ; typedef struct { lf3kqxn440 azxqoevuvc
; } mhkngtisvj ; typedef struct { jdnbwydxvk azxqoevuvc ; } m0b1rj1f3m ;
typedef struct { ei2bzps4rs azxqoevuvc ; } lopaynj0f0 ; typedef struct {
hdorofoxdx azxqoevuvc ; } ne5zdtnxds ; typedef struct { dkybmgt4ob azxqoevuvc
; } ivcyagmqtp ; typedef struct { dyqem1hi1j azxqoevuvc ; } jczrk5tqev ;
typedef struct { ky4vs1ev3h azxqoevuvc ; } cp1tkes2lt ; typedef struct {
d0xwtvm5zk azxqoevuvc ; } fiofkj2kci ; typedef struct { c5fixg3cuo azxqoevuvc
; } hx4oc15a5t ; typedef struct { real_T bvvs4fnpae [ 2 ] ; real_T hbvagjoehw
[ 2 ] ; real_T fl3w3jvdsi [ 3 ] ; real_T napknbkquk [ 2 ] ; real_T lmyq34sf0g
[ 2 ] ; real_T aufjnco1bm [ 2 ] ; real_T b4224qf4tv [ 3 ] ; real_T kv3osjbizo
; real_T gaek01rrr3 [ 3 ] ; real_T jhj3zz42j4 [ 3 ] ; real_T f2ueewkbjc [ 9 ]
; real_T dvzu21xwhx [ 9 ] ; real_T nctohqsvwh [ 3 ] ; real_T msa0c5sdpt [ 3 ]
; real_T oipqkobspt [ 9 ] ; real_T kaebigjgd4 [ 9 ] ; real_T he340y04vs [ 3 ]
; real_T ph0tpe5if5 [ 3 ] ; real_T oorww1wcg3 [ 2 ] ; real_T i5rrf0mxdx [ 2 ]
; real_T arhf0clxqd [ 2 ] ; real_T kpql35e3jx ; real_T ehplbjsl2s [ 3 ] ;
real_T pfxb5cp324 ; real_T cjf0g1m02r ; real_T lniie22aca ; real_T pgdiss5r2m
; real_T hf22yy5y1q ; real_T edhzlsgf2y ; real_T hvfsoaq5ld [ 3 ] ; real_T
js34n2lyrx [ 3 ] ; real_T audvaxq0d4 ; real_T ax0lh0rex0 ; real_T l4kkea5xp2
; real_T ey3jisgadc ; real_T gbtcjmplpx ; real_T lv1h0u3agv ; real_T
me2bqjjbgm [ 3 ] ; real_T bp5oyyiqlm [ 3 ] ; real_T mpypmsgyi1 [ 2 ] ; real_T
otz30dqwqs [ 2 ] ; real_T nairdbyqp1 [ 2 ] ; real_T hythrdl4q2 [ 2 ] ; real_T
o3id5sdn4p [ 2 ] ; real_T lwno5xammy [ 12 ] ; real_T a443qjuymv [ 4 ] ;
real_T hngolbfjxs [ 3 ] ; real_T hhx0yapiru [ 3 ] ; real_T kg2fpgf5gs ;
real_T bulmsnibdh [ 3 ] ; real_T oxzcy2p53x [ 3 ] ; real_T gt2zfa4a1s ;
real_T fti1lk5vjw [ 6 ] ; real_T o0omv4lhyr [ 3 ] ; real_T oge4pedyvk ;
real_T f1gv0k550c ; real_T dmus3c4xmj ; real_T ileilbufb2 ; real_T jg2roxx5bs
; real_T bw244p3q0q ; real_T bxpazjxklu ; real_T d34xk5ykmh ; real_T
ax54sddcaw ; real_T hqvukv2xsp ; real_T finh0wc4da ; real_T fc2wrfay4e ;
real_T oyc1al4h1w [ 3 ] ; real_T ip3nkmhbmh ; real_T fc21izfzx4 ; real_T
ia0ojskpxs ; real_T aaxsvkqai0 ; real_T mbn5ixhvjf ; real_T fjgrzm4gzz ;
real_T f12frx44r4 ; real_T ddppy23mxp ; real_T bserwztahf ; real_T earfrwf0hr
; real_T bep5golme5 ; real_T hlf1acubd5 ; real_T gmna1ac1wl ; real_T
b3mk52fmiw ; real_T ius1e2jprf ; real_T ew44hdju13 ; real_T nszyb3hol0 ;
real_T jfgqtvutxu ; real_T l3uikgbb3b [ 2 ] ; real_T obiqeibdxg ; real_T
in24fxjjbm ; real_T d4liyxsdf3 ; real_T hq340ksp50 [ 3 ] ; real_T dkru0kjfjp
[ 3 ] ; real_T hs03wuldth [ 3 ] ; real_T jiojizdhep ; real_T b2lhkjzml4 ;
real_T cisxqujvum [ 3 ] ; real_T lhlooh5fkc [ 6 ] ; real_T jc5lgzz344 [ 6 ] ;
real_T hhz4t34e2g [ 6 ] ; real_T gxnvrkca2h [ 3 ] ; real_T mptksaxj4h ;
real_T ksvzqk05tq ; real_T lqho4qf5m3 ; real_T j4zwcvum4v ; real_T c4paxuk0gc
[ 2 ] ; real_T iinnocqymd [ 2 ] ; real_T ek20uulqhd [ 2 ] ; real_T dcdu0sstq5
; real_T nkuvi2wir1 [ 3 ] ; real_T kfv1jnxdcb [ 3 ] ; real_T a34vsr4icm [ 3 ]
; real_T m5zcbblxpv ; real_T blbatpv3jn ; real_T kjjkugtces [ 2 ] ; real_T
afh4emj1nn [ 2 ] ; real_T ogvrkt53m0 [ 2 ] ; real_T c5hd41ef1x [ 3 ] ; real_T
ffh4nyfsmr [ 9 ] ; real_T l5akcup4jj [ 9 ] ; real_T mf1mzpm0t3 [ 3 ] ; real_T
byxw4oacat [ 3 ] ; real_T lb5dx4b3jk [ 2 ] ; real_T emlvbttdyz ; real_T
btryepb3lp ; real_T bf43kefmfh ; real_T pweyi4u1zx ; real_T nsglwteu5v ;
real_T fw0g4ey4fo ; real_T kdkxysqm0t ; real_T ew1reedbnv ; real_T cbr3oyt3lb
; real_T jxcgxst2is ; real_T l3kqf3ebdp ; real_T omo5i3z4hj ; real_T
adqsh2k4ic ; real_T nuqisryxie ; real_T n4ylimvkll ; real_T loxwvwrcia ;
real_T cztrdqhftf ; real_T ixk3hxcurq ; real_T fzgx2tufv1 ; real_T gsvjzha0ac
; real_T gnacurz3w5 ; real_T nlphchuiom ; real_T hj2blpaerv ; real_T
dmdfff1fpp ; real_T carktevnct [ 4 ] ; real_T izyfxqhqcz ; real_T ci1mx445b5
[ 2 ] ; real_T num3ib20gq [ 2 ] ; real_T iya5tp4cdn [ 2 ] ; real_T b1jodlhboe
; real_T bourbfwnuv [ 2 ] ; real_T dtdini0pef ; real_T cx0yxkcry4 [ 4 ] ;
real_T pufuucy0fb ; real_T lulkwzk1on ; real_T hd1scyomug ; real_T ao0tmcfamz
; real_T o3l2toprpn ; real_T otfutxs4mr ; real_T gz1skuswsk ; real_T
bkdlmlnojz ; real_T mqbrmoxrar ; real_T jcwtpqnasc ; real_T facust4yjk ;
real_T kiay1ycxcl ; real_T ky2l1btjfj ; real_T ndk4xlqpf1 ; real_T ogzwtt0uth
; real_T aav3ryaivc ; real_T mtxbvc4f5c ; real_T ewjyokkn1d ; real_T
fnrs5gvhc4 ; real_T gofcinmsl2 ; real_T awg4dtdgtn ; real_T jwoypvyz3y ;
real_T asa4c401qh ; real_T iwj2aio34h ; real_T jldjif2bkl [ 3 ] ; real_T
po32laksrz [ 3 ] ; real_T c1dlqtm02p [ 3 ] ; real_T npguaw4amt [ 3 ] ; real_T
mywr3gtqt3 ; real_T m5ku5csxya ; real_T ftuivg3ybn ; real_T hmfp21fvok ;
real_T knygbp5qud ; real_T ihgs3schr1 ; real_T dgob255otz ; real_T pigob0blb3
[ 2 ] ; real_T iw4ps3gqvq ; real_T jbv5m1xncl ; real_T hr50ll3oqj ; real_T
mnna5hwg3f ; real_T c5ixvkkdja ; real_T kptpbclfwk ; real_T pv2oncoizs ;
real_T ko2j33jveu [ 12 ] ; real_T jysmct5dke [ 3 ] ; real_T mcaqczbuom [ 4 ]
; real_T glnjftgoht [ 2 ] ; mhkngtisvj nt1qt43cpp [ 1 ] ; c0wju2q3cn
jlep0zzj4c ; mhkngtisvj g0qms2rrt2g [ 1 ] ; c0wju2q3cn kkrjlu4uvo ;
kvvoudj5tn lkkyw1qsdn [ 4 ] ; } B ; typedef struct { real_T l5oro1zbdt [ 2 ]
; real_T jswox1jizv ; real_T kpovkdto0q ; real_T ccv2xnvywn ; struct { void *
AQHandles ; void * SlioLTF ; } kd2ov54egg ; struct { void * AQHandles ; void
* SlioLTF ; } heooubpmub ; struct { void * AQHandles ; void * SlioLTF ; }
eyz2b5jfld ; int_T mika2fhpql ; int_T appmqjbhea ; int_T cmjpzycq5g ; int_T
jowjuwqghw ; int8_T oecqsnuhib ; int8_T kx1gvg3l0l ; int8_T bs2px0f0vf ;
m0b1rj1f3m nt1qt43cpp [ 1 ] ; m0b1rj1f3m g0qms2rrt2g [ 1 ] ; } DW ; typedef
struct { real_T ba0epd2aak [ 2 ] ; real_T pjatogehh1 [ 2 ] ; real_T
kvl2kwyztt [ 2 ] ; real_T acvsjhtzkf ; real_T i52yscusub ; real_T medyoqmr4n
; real_T bwpjg31mvz ; real_T op5vt3u10o ; real_T na1iog2zww ; real_T
am4llyrsos ; real_T o3s24wysvb ; real_T otqnbnfqsy ; real_T jwkok33c33 ;
real_T b4y025j20n [ 2 ] ; real_T bbmdxvj5g5 ; real_T co4qokm1pw ; lopaynj0f0
nt1qt43cpp [ 1 ] ; lopaynj0f0 g0qms2rrt2g [ 1 ] ; } X ; typedef int_T
PeriodicIndX [ 1 ] ; typedef real_T PeriodicRngX [ 2 ] ; typedef struct {
real_T ba0epd2aak [ 2 ] ; real_T pjatogehh1 [ 2 ] ; real_T kvl2kwyztt [ 2 ] ;
real_T acvsjhtzkf ; real_T i52yscusub ; real_T medyoqmr4n ; real_T bwpjg31mvz
; real_T op5vt3u10o ; real_T na1iog2zww ; real_T am4llyrsos ; real_T
o3s24wysvb ; real_T otqnbnfqsy ; real_T jwkok33c33 ; real_T b4y025j20n [ 2 ]
; real_T bbmdxvj5g5 ; real_T co4qokm1pw ; ne5zdtnxds nt1qt43cpp [ 1 ] ;
ne5zdtnxds g0qms2rrt2g [ 1 ] ; } XDot ; typedef struct { boolean_T ba0epd2aak
[ 2 ] ; boolean_T pjatogehh1 [ 2 ] ; boolean_T kvl2kwyztt [ 2 ] ; boolean_T
acvsjhtzkf ; boolean_T i52yscusub ; boolean_T medyoqmr4n ; boolean_T
bwpjg31mvz ; boolean_T op5vt3u10o ; boolean_T na1iog2zww ; boolean_T
am4llyrsos ; boolean_T o3s24wysvb ; boolean_T otqnbnfqsy ; boolean_T
jwkok33c33 ; boolean_T b4y025j20n [ 2 ] ; boolean_T bbmdxvj5g5 ; boolean_T
co4qokm1pw ; ivcyagmqtp nt1qt43cpp [ 1 ] ; ivcyagmqtp g0qms2rrt2g [ 1 ] ; }
XDis ; typedef struct { real_T ba0epd2aak [ 2 ] ; real_T pjatogehh1 [ 2 ] ;
real_T kvl2kwyztt [ 2 ] ; real_T acvsjhtzkf ; real_T i52yscusub ; real_T
medyoqmr4n ; real_T bwpjg31mvz ; real_T op5vt3u10o ; real_T na1iog2zww ;
real_T am4llyrsos ; real_T o3s24wysvb ; real_T otqnbnfqsy ; real_T jwkok33c33
; real_T b4y025j20n [ 2 ] ; real_T bbmdxvj5g5 ; real_T co4qokm1pw ;
jczrk5tqev nt1qt43cpp [ 1 ] ; jczrk5tqev g0qms2rrt2g [ 1 ] ; } CStateAbsTol ;
typedef struct { real_T ba0epd2aak [ 2 ] ; real_T pjatogehh1 [ 2 ] ; real_T
kvl2kwyztt [ 2 ] ; real_T acvsjhtzkf ; real_T i52yscusub ; real_T medyoqmr4n
; real_T bwpjg31mvz ; real_T op5vt3u10o ; real_T na1iog2zww ; real_T
am4llyrsos ; real_T o3s24wysvb ; real_T otqnbnfqsy ; real_T jwkok33c33 ;
real_T b4y025j20n [ 2 ] ; real_T bbmdxvj5g5 ; real_T co4qokm1pw ; cp1tkes2lt
nt1qt43cpp [ 1 ] ; cp1tkes2lt g0qms2rrt2g [ 1 ] ; } CXPtMin ; typedef struct
{ real_T ba0epd2aak [ 2 ] ; real_T pjatogehh1 [ 2 ] ; real_T kvl2kwyztt [ 2 ]
; real_T acvsjhtzkf ; real_T i52yscusub ; real_T medyoqmr4n ; real_T
bwpjg31mvz ; real_T op5vt3u10o ; real_T na1iog2zww ; real_T am4llyrsos ;
real_T o3s24wysvb ; real_T otqnbnfqsy ; real_T jwkok33c33 ; real_T b4y025j20n
[ 2 ] ; real_T bbmdxvj5g5 ; real_T co4qokm1pw ; fiofkj2kci nt1qt43cpp [ 1 ] ;
fiofkj2kci g0qms2rrt2g [ 1 ] ; } CXPtMax ; typedef struct { real_T ldhcxspj53
; real_T atvhf0xen4 ; hx4oc15a5t nt1qt43cpp [ 1 ] ; hx4oc15a5t g0qms2rrt2g [
1 ] ; } ZCV ; typedef struct { ZCSigState ic4ifxvbt2 ; ZCSigState kbw15xq343
; } PrevZCX ; typedef struct { real_T asu2rtubja ; real_T fyr11ojm40 ; real_T
ishqklku1k ; real_T li03xatuna ; } ExtU ; typedef struct { real_T cgennkzx51
; real_T lgntnbyfqe ; } ExtY ; typedef struct { rtwCAPI_ModelMappingInfo mmi
; } DataMapInfo ; struct kacv24icyg_ { real_T phi_Value ; real_T psi_Value ;
} ; struct ddkpbkrncn_ { real_T Constant_Value ; real_T locked_Value ; real_T
locked1_Value ; real_T locked2_Value ; real_T u_Gain ; boolean_T yn_Y0 ;
boolean_T yn_Y0_iz3dygeyuh ; boolean_T UnitDelay_InitialCondition ; boolean_T
CombinatorialLogic_table [ 8 ] ; } ; struct ka5x3wvdwx_ { ddkpbkrncn
lkn4jcwpit ; } ; struct czihtk1jhp_ { ka5x3wvdwx azxqoevuvc ; } ; struct P_ {
real_T Af ; real_T Cd ; real_T Cl ; real_T Cpm ; real_T FZMAX ; real_T FZMIN
; real_T FsbF [ 7 ] ; real_T FsbR [ 7 ] ; real_T FskF [ 6 ] ; real_T FskR [ 6
] ; real_T Iyy ; real_T Iyy_Whl ; real_T Jmotor ; real_T Lrel ; real_T Mass ;
real_T Pabs ; real_T Re ; real_T Rm ; real_T T ; real_T UNLOADED_RADIUS ;
real_T VXLOW ; real_T aMy ; real_T a_CG ; real_T alphaMy ; real_T b ; real_T
bMy ; real_T b_CG ; real_T betaMy ; real_T br ; real_T cMy ; real_T
disk_abore ; real_T domega_o ; real_T dzdotsF [ 7 ] ; real_T dzdotsR [ 7 ] ;
real_T dzsF [ 6 ] ; real_T dzsR [ 6 ] ; real_T g ; real_T h ; real_T k ;
real_T kappamax ; real_T lam_x ; real_T mu_kinetic ; real_T mu_static ;
real_T num_pads ; real_T omega_c ; real_T omega_o ; real_T omegao ; real_T
press ; real_T q_o ; real_T theta_o ; real_T theta_o_Veh ; real_T xdot_o ;
real_T zdot_o ; real_T DragForce_Cs [ 2 ] ; real_T DragForce_Cym [ 2 ] ;
real_T LimitedSlipDifferential_Fc ; real_T LimitedSlipDifferential_Jd ;
real_T LimitedSlipDifferential_Jw1 ; real_T LimitedSlipDifferential_Jw2 ;
real_T LimitedSlipDifferential_Ndiff ; real_T LimitedSlipDifferential_Ndisks
; real_T DragForce_R ; real_T HardPointCoordinateTransformFront_R_T2 ; real_T
HardPointCoordinateTransformRear_R_T2 ; real_T LimitedSlipDifferential_Reff ;
real_T RotationalInertia_b ; real_T LimitedSlipDifferential_bd ; real_T
DragForce_beta_w [ 2 ] ; real_T LimitedSlipDifferential_bw1 ; real_T
LimitedSlipDifferential_bw2 ; real_T LimitedSlipDifferential_dw [ 7 ] ;
real_T LimitedSlipDifferential_eta ; real_T uDOFBodyAxes_g ; real_T
LimitedSlipDifferential_muc [ 7 ] ; real_T LimitedSlipDifferential_omegaw1o ;
real_T LimitedSlipDifferential_omegaw2o ; real_T uDOFBodyAxes_pos_ini [ 2 ] ;
real_T LimitedSlipDifferential_tauC ; real_T div0protectabspoly_thresh ;
real_T uDOFBodyAxes_v_ini ; real_T LimitedSlipDifferential_shaftSwitchMask ;
real_T Integrator_IC ; real_T Theta_WrappedStateUpperValue ; real_T
Theta_WrappedStateLowerValue ; real_T NFNR_Gain [ 2 ] ; real_T uNF_Gain ;
real_T Integrator_IC_cnx1wxjvuo ; real_T Signconvention_Gain ; real_T
FrontBias_Gain ; real_T DisallowNegativeBrakeTorque_UpperSat ; real_T
DisallowNegativeBrakeTorque_LowerSat ; real_T uNR_Gain ; real_T
Memory_InitialCondition ; real_T Integrator_IC_ie22qiuarn ; real_T
Signconvention_Gain_i5iwgnmbdg ; real_T RearBias1_Gain ; real_T
DisallowNegativeBrakeTorque_UpperSat_nolqf4lzdx ; real_T
DisallowNegativeBrakeTorque_LowerSat_etj13r0dm4 ; real_T Crm_tableData [ 2 ]
; real_T Crm_bp01Data [ 2 ] ; real_T Switch_Threshold ; real_T
MatrixGain_Gain [ 4 ] ; real_T NFNRb_Gain [ 2 ] ; real_T NFNRk_Gain [ 2 ] ;
real_T Memory_InitialCondition_fzolzaguge ; real_T Integrator_UpperSat ;
real_T Integrator_LowerSat ; real_T Gain1_Gain ; real_T
Switch_Threshold_fkgz22tddd ; real_T Switch_Threshold_exzp10ezln ; real_T
Switch_Threshold_npanpsygul ; real_T Integrator_IC_lewcleyhsc ; real_T
Gain_Gain ; real_T FExtConstant_Value [ 3 ] ; real_T MExtConstant_Value [ 3 ]
; real_T Constant2_Value ; real_T Constant_Value ; real_T Constant1_Value ;
real_T Constant12_Value ; real_T Constant2_Value_gowhp30m5w ; real_T
Constant_Value_ful2bhsbsr ; real_T Constant4_Value [ 3 ] ; real_T
FxType_Value ; real_T Constant_Value_gwdg5epxbj ; real_T
Constant1_Value_dknu4stzhh ; real_T Constant7_Value ; real_T Constant6_Value
; real_T Constant2_Value_cz4ittyvrh [ 34 ] ; real_T Constant19_Value [ 3 ] ;
real_T Constant12_Value_proh0kgbum [ 3 ] ; real_T Constant14_Value [ 9 ] ;
real_T Constant5_Value ; real_T Constant2_Value_lwhwyyeuxk ; real_T
Constant16_Value ; real_T Constant7_Value_gxccvaxnbj ; real_T Constant9_Value
; real_T Constant11_Value ; real_T Constant10_Value ; real_T
Constant1_Value_ojyzymfvdf ; real_T Constant3_Value ; real_T
Constant19_Value_njgerszt24 [ 3 ] ; real_T Constant12_Value_p5hf31jr3e [ 3 ]
; real_T Constant14_Value_aba3ooix0p [ 9 ] ; real_T
Constant14_Value_i4532q1mpk ; real_T Constant1_Value_ct2oikhell ; real_T
Constant19_Value_a0uhprsrne ; real_T Constant2_Value_lut4znz5ox ; real_T
Constant3_Value_hfdzbleowk ; real_T Constant4_Value_f1kh5fqc5r ; real_T
Constant5_Value_cbkmzfhmey ; real_T Constant6_Value_prvgxkhyqy ; real_T
Constant7_Value_a4zujb3rpa ; real_T Constant8_Value ; real_T
Constant9_Value_fyveuupisu ; real_T Constant10_Value_md0t0tsexk ; real_T
Constant11_Value_c1g5k2falu ; real_T Constant16_Value_ngoog4lshw ; real_T
Constant17_Value ; real_T Constant13_Value ; real_T Constant15_Value ; real_T
Constant21_Value ; real_T Constant22_Value ; real_T Constant18_Value ; real_T
Constant20_Value ; real_T Constant24_Value ; real_T Constant23_Value ; real_T
rollType_Value ; real_T vertType_Value ; real_T TorqueConversion1_Gain ;
real_T FxType_Value_lufvzgmz0j ; real_T Constant_Value_jtawhtsysr ; real_T
Constant1_Value_fjaudrjhdl ; real_T Constant7_Value_pixa3rqdjd ; real_T
Constant6_Value_kedjcf23fy ; real_T Constant2_Value_ahxqsxq3tu [ 34 ] ;
real_T Constant19_Value_lqhzgejtie [ 3 ] ; real_T Constant12_Value_ekkzpqixof
[ 3 ] ; real_T Constant14_Value_bybhg4ohya [ 9 ] ; real_T
Constant5_Value_corjlakafh ; real_T Constant2_Value_gi1emdzvsk ; real_T
Constant16_Value_dfgzubkfqq ; real_T Constant7_Value_iuio0bhswj ; real_T
Constant9_Value_mqlbfqzvp4 ; real_T Constant11_Value_pauyoxiidd ; real_T
Constant10_Value_behsis2gkb ; real_T Constant1_Value_lozhj4hfg4 ; real_T
Constant3_Value_ixz2bdxktj ; real_T Constant19_Value_cjkss2p31v [ 3 ] ;
real_T Constant12_Value_jjodmq5x4f [ 3 ] ; real_T Constant14_Value_bmmxa54qsf
[ 9 ] ; real_T Constant14_Value_i4kwnrkv3h ; real_T
Constant1_Value_dn53nszxpb ; real_T Constant19_Value_osodq1xdbo ; real_T
Constant2_Value_lqgwunbbft ; real_T Constant3_Value_ngurra14in ; real_T
Constant4_Value_bbzkuzilzq ; real_T Constant5_Value_i4lm1emseb ; real_T
Constant6_Value_gemqs5gkeb ; real_T Constant7_Value_npz0eazso3 ; real_T
Constant8_Value_fvkoq4lt4g ; real_T Constant9_Value_dkanzsokxj ; real_T
Constant10_Value_datoxoevhn ; real_T Constant11_Value_pizwvw1rzs ; real_T
Constant16_Value_mk3andc4xt ; real_T Constant17_Value_fjpjpdrunn ; real_T
Constant13_Value_dwnk2235vn ; real_T Constant15_Value_flu5ou3ydx ; real_T
Constant21_Value_e0lxcbmexj ; real_T Constant22_Value_kpbolgth1z ; real_T
Constant18_Value_ngbpjrqfcn ; real_T Constant20_Value_hnrc5vlofu ; real_T
Constant24_Value_bf3qpd1yub ; real_T Constant23_Value_b0h5b3oyri ; real_T
rollType_Value_d4ppucsvxa ; real_T vertType_Value_cpqcctvc03 ; real_T
TorqueConversion1_Gain_d5kxwp3ghy ; real_T upi_Gain ; real_T
Constant_Value_iyvd2nipbn ; real_T Constant2_Value_evj0aohnzb ; real_T
Switch_Threshold_ndiyw3awdg ; real_T Constant_Value_nmlkfmyo3q ; real_T
Constant_Value_ggkgw5e4ms ; real_T Constant_Value_glbkitsq4x ; real_T
Constant_Value_cwq12cxfny ; real_T Constant1_Value_g2bu1bfzgh ; real_T
Switch_Threshold_cg5jpvuvn1 ; real_T Reset_Value ; real_T
Reset_Value_ltqw1krttf ; czihtk1jhp nt1qt43cpp ; czihtk1jhp g0qms2rrt2g ;
kacv24icyg lkkyw1qsdn ; } ; extern const char * RT_MEMORY_ALLOCATION_ERROR ;
extern B rtB ; extern X rtX ; extern DW rtDW ; extern PrevZCX rtPrevZCX ;
extern ExtU rtU ; extern ExtY rtY ; extern P rtP ; extern const
rtwCAPI_ModelMappingStaticInfo * DrivetrainEv_GetCAPIStaticMap ( void ) ;
extern SimStruct * const rtS ; extern const int_T gblNumToFiles ; extern
const int_T gblNumFrFiles ; extern const int_T gblNumFrWksBlocks ; extern
rtInportTUtable * gblInportTUtables ; extern const char * gblInportFileName ;
extern const int_T gblNumRootInportBlks ; extern const int_T
gblNumModelInputs ; extern const int_T gblInportDataTypeIdx [ ] ; extern
const int_T gblInportDims [ ] ; extern const int_T gblInportComplex [ ] ;
extern const int_T gblInportInterpoFlag [ ] ; extern const int_T
gblInportContinuous [ ] ; extern const int_T gblParameterTuningTid ; extern
DataMapInfo * rt_dataMapInfoPtr ; extern rtwCAPI_ModelMappingInfo *
rt_modelMapInfoPtr ; void MdlOutputs ( int_T tid ) ; void
MdlOutputsParameterSampleTime ( int_T tid ) ; void MdlUpdate ( int_T tid ) ;
void MdlTerminate ( void ) ; void MdlInitializeSizes ( void ) ; void
MdlInitializeSampleTimes ( void ) ; SimStruct * raccel_register_model ( void
) ;
#endif
