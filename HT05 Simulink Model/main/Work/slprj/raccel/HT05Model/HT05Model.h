#ifndef RTW_HEADER_HT05Model_h_
#define RTW_HEADER_HT05Model_h_
#include <string.h>
#include <stddef.h>
#include "rtw_modelmap.h"
#ifndef HT05Model_COMMON_INCLUDES_
#define HT05Model_COMMON_INCLUDES_
#include <stdlib.h>
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "simtarget/slSimTgtSigstreamRTW.h"
#include "simtarget/slSimTgtSlioCoreRTW.h"
#include "simtarget/slSimTgtSlioClientsRTW.h"
#include "simtarget/slSimTgtSlioSdiRTW.h"
#include "rtwtypes.h"
#include "sigstream_rtw.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "raccel.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "rt_logging.h"
#include "dt_info.h"
#include "ext_work.h"
#endif
#include "HT05Model_types.h"
#include "multiword_types.h"
#include "model_reference_types.h"
#include "DrivetrainEv.h"
#include "BattEv.h"
#include "MotGenEvDynamic.h"
#include "EvPowertrainController.h"
#include "rtGetInf.h"
#include "mwmathutil.h"
#include "rt_defines.h"
#include "rt_nonfinite.h"
#define MODEL_NAME HT05Model
#define NSAMPLE_TIMES (7) 
#define NINPUTS (0)       
#define NOUTPUTS (0)     
#define NBLOCKIO (70) 
#define NUM_ZC_EVENTS (0) 
#ifndef NCSTATES
#define NCSTATES (31)   
#elif NCSTATES != 31
#error Invalid specification of NCSTATES defined in compiler command
#endif
#define UseMMIDataLogging    
#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm) (*rt_dataMapInfoPtr)
#endif
#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val) (rt_dataMapInfoPtr = &val)
#endif
#ifndef IN_RACCEL_MAIN
#endif
typedef struct { real_T dn2ipr3mo1 ; real_T e4yqhpgtcf ; real_T kwter11yih ;
real_T cvgkryez0y ; real_T k2nvq1dfvz ; real_T krfdbjpt0e ; real_T bejosqgptz
[ 2 ] ; real_T k0jcwtesdh [ 2 ] ; real_T hawg1v30vs ; real_T awbv4lz2br ;
real_T cawpxxfynl ; real_T op2bbilkhu ; real_T i4av10pedr ; real_T k5wjbiecdv
; real_T jcnijfpmie ; real_T hs1nxcdsu1 ; real_T kpv1qapnbc ; real_T
pb4y5y3noy ; real_T kwlhepleti ; real_T egwqx4bk1t ; real_T jglg55uozd ;
real_T bki5dqleao ; real_T jtp5gfufnu ; real_T ajoldyqnvn ; real_T o035i4hwxg
; real_T pue040sedo ; real_T egun0lxqwh ; real_T fssj4vhwqd ; real_T
fqgurvz30p ; real_T jaqygtbwrp ; real_T juedzmwz13 ; real_T kpjtu3yzip ;
real_T hd0j3gmmyn ; real_T ewcpkcxybh ; real_T jnfihtxxde ; real_T cmthjlvx0t
; real_T fx1tl3pc5j [ 2 ] ; real_T lfrzqxjyja ; real_T o5n5eexjon ; real_T
e51yutiqek ; real_T fbfzjqwa5a ; real_T mkqparta3r ; real_T a2zj1koo4k ;
real_T ldaenjp42v ; real_T f53jjpuuxm ; real_T hhj0p0jony ; real_T fkmxmxweyx
; real_T j3cdx1rby1 ; real_T hfrndgtdvk ; real_T bekklopwz5 ; real_T
gdkws0vsws ; real_T dkyaehby1j ; real_T p50dphabzy ; real_T feadjgjni4 ;
real_T adqo2rpmqv ; real_T gb4x2xlbw3 ; real_T l511ehwbyg ; real_T d01a5ocxx2
; real_T asokvlgnxe [ 2 ] ; real_T kmgjdorlmx [ 2 ] ; real_T kp4tq4fada ;
real_T lldsxsxwpp ; real_T etuneoeubc ; real_T dxi5ejdpzr ; real_T l152uhfy44
; boolean_T nmnvokqd32 ; boolean_T bm52wmv1x5 ; boolean_T b1mzxh50u5 ;
boolean_T chtbrnbren ; boolean_T lqeerwztoi ; } hfe00hbwsc ; typedef struct {
real_T cnrnbvpn5m [ 2 ] ; volatile real_T k0zcask0cc [ 2 ] ; volatile real_T
ngtzwyl1pu [ 2 ] ; volatile real_T e4gjlzj1lq ; volatile real_T i5uql30i2j ;
volatile real_T kap0odr3kj ; volatile real_T klgv0izvyu [ 2 ] ; volatile
real_T hp5pufrajm ; volatile real_T j1c3q5x2i4 ; volatile real_T cptmanfsa1 ;
volatile real_T j5bb1yym0w ; volatile real_T nos2ft3sic ; volatile real_T
n3mkw34cn5 ; volatile real_T h1tau0ecpq ; volatile real_T kmrimj41ij ;
volatile real_T kebrerroqx ; real_T a2qtt2hfe5 ; real_T hm0lgp00gr ; real_T
d2sayk0vr5 ; real_T ojbxwztebs ; real_T ggyum1qn3e ; struct { void *
LoggedData [ 6 ] ; } geedj4d40x ; struct { void * AQHandles ; void * SlioLTF
; } o142ktwdad ; struct { void * AQHandles ; void * SlioLTF ; } cbpif1banu ;
int32_T itzcefxwhd ; uint32_T hrypfmrlkd ; uint32_T ln4xezh4u1 ; int_T
hn5nuy0lbc ; int_T nxsdzjpe5i ; volatile int8_T ep2boc231g ; volatile int8_T
piumrtffmp ; volatile int8_T oijmj1tdxd ; volatile int8_T anfmogqnpx ;
volatile int8_T jse5bdwgjj ; volatile int8_T fqundvylsh ; volatile int8_T
egwjbtmbyq ; volatile int8_T bsjrzyb4mr ; int8_T llz0iknlo0 ; volatile int8_T
a5czhakwii ; volatile int8_T l1ffn0wiag ; volatile int8_T fiqovchppi ;
volatile int8_T oxgd34m1rt ; volatile int8_T i51uahy2gc ; volatile int8_T
jtthydvh1h ; volatile int8_T kgr2bmvhtp ; int8_T ffrv3krqdc ; int8_T
gwhutwksvk ; uint8_T dfwyqajqi3 ; uint8_T hztxj1g4oa ; boolean_T eo2oguksvj ;
boolean_T kc02azdlcj ; hmke5fx3tcj iajxel3ezk ; lobjb0lvrdo ondfxuidp3 ;
l0vfpqnnodc enbv0wioc4 ; pwecol01r52 alzb1lqr5t ; } bcuvylxhef ; typedef
struct { real_T i4qubohzc1 ; edp3webv0p hcwjqlhqcy ; real_T nxcnpybje3 ;
hkgv0zhr3w fqvhaqjss0 ; fsi3zxjdsv b04e30byfs ; real_T a1yytga2i4 ; real_T
d2vzwae4a0 ; real_T fulynuhbhe ; real_T hiwowua33s ; } nltnw1e5gk ; typedef
int_T ngqsle4aqn [ 2 ] ; typedef real_T hpzwhjywix [ 4 ] ; typedef struct {
real_T i4qubohzc1 ; cspbap1de4 hcwjqlhqcy ; real_T nxcnpybje3 ; nvyvwtjtwa
fqvhaqjss0 ; evfyajgoqu b04e30byfs ; real_T a1yytga2i4 ; real_T d2vzwae4a0 ;
real_T fulynuhbhe ; real_T hiwowua33s ; } lqmi0mm3ub ; typedef struct {
boolean_T i4qubohzc1 ; bbuzvmnhsa hcwjqlhqcy ; boolean_T nxcnpybje3 ;
khjrgybdwv fqvhaqjss0 ; a2tgpeokha b04e30byfs ; boolean_T a1yytga2i4 ;
boolean_T d2vzwae4a0 ; boolean_T fulynuhbhe ; boolean_T hiwowua33s ; }
nokraiiwbv ; typedef struct { real_T i4qubohzc1 ; nupxuy3etd hcwjqlhqcy ;
real_T nxcnpybje3 ; fr5wy4tsqu fqvhaqjss0 ; fjkqlf2nvp b04e30byfs ; real_T
a1yytga2i4 ; real_T d2vzwae4a0 ; real_T fulynuhbhe ; real_T hiwowua33s ; }
pjkfbqkena ; typedef struct { real_T i4qubohzc1 ; nupxuy3etd hcwjqlhqcy ;
real_T nxcnpybje3 ; fr5wy4tsqu fqvhaqjss0 ; fjkqlf2nvp b04e30byfs ; real_T
a1yytga2i4 ; real_T d2vzwae4a0 ; real_T fulynuhbhe ; real_T hiwowua33s ; }
lo4stvpw1e ; typedef struct { real_T i4qubohzc1 ; nupxuy3etd hcwjqlhqcy ;
real_T nxcnpybje3 ; fr5wy4tsqu fqvhaqjss0 ; fjkqlf2nvp b04e30byfs ; real_T
a1yytga2i4 ; real_T d2vzwae4a0 ; real_T fulynuhbhe ; real_T hiwowua33s ; }
d4h3rhbasw ; typedef struct { pmzuarg20b oexwb0vxno ; o3ciyyrlrx g5hi1yixh2 ;
f0can1sh3a hev2tqxdbw ; real_T gppqg3jeps ; real_T ncwkbjsqae ; real_T
duf13ep545 ; real_T ewzov3eiem ; real_T o4s3wza3yv ; } lm4x2ar2jt ; typedef
struct { rtwCAPI_ModelMappingInfo mmi ; rtwCAPI_ModelMappingInfo * childMMI [
4 ] ; } DataMapInfo ; struct ihnh5ag1lpc_ { real_T
LongitudinalDriverModel_GearInit ; real_T SignalHold_IC ; real_T
LongitudinalDriverModel_Kpt ; real_T LongitudinalDriverModel_L ; real_T
LongitudinalDriverModel_aR ; real_T LongitudinalDriverModel_bR ; real_T
LongitudinalDriverModel_cR ; real_T LongitudinalDriverModel_g ; real_T
LongitudinalDriverModel_m ; real_T LongitudinalDriverModel_tShift ; real_T
LongitudinalDriverModel_tau ; real_T u1_UpperSat ; real_T u1_LowerSat ;
real_T u0_UpperSat ; real_T u0_LowerSat ; real_T Constant_Value ; real_T
Constant_Value_nhp3htkj21 ; real_T Switch_Threshold ; real_T
uDLookupTable_tableData [ 401 ] ; real_T uDLookupTable_bp01Data [ 401 ] ;
real_T MotorCouplingDynamics_A ; real_T MotorCouplingDynamics_C ; real_T
RateTransition3_InitialCondition ; real_T mstomph_Gain ; real_T
radstoRPM_Gain ; real_T BatteryDischargeDynamics_A ; real_T
BatteryDischargeDynamics_C ; real_T RateTransition5_InitialCondition ; real_T
Integrator_IC ; real_T mtomile_Gain ; real_T Integrator1_IC ; real_T
m3toUSGal_Gain ; real_T Saturation1_UpperSat ; real_T Saturation1_LowerSat ;
real_T mto100Km_Gain ; real_T Saturation_UpperSat ; real_T
Saturation_LowerSat ; real_T m3pergal_Gain ; real_T Integrator1_IC_ajivek24xs
; real_T Saturation_UpperSat_ejlhkaxvm3 ; real_T
Saturation_LowerSat_jq5vbx40o3 ; real_T Saturation_UpperSat_n5cfzewtp3 ;
real_T Saturation_LowerSat_jdvecoiqp4 ; real_T HitCrossing_Offset ; real_T
Integrator2_IC ; real_T UnitDelay_InitialCondition [ 2 ] ; real_T
USEPAkwhUSgalequivalent_Value ; real_T sperh_Value ; real_T wperkw_Value ;
real_T repeat_Value ; real_T tFinal_Value ; real_T Constant2_Value ; real_T
Constant3_Value ; real_T Constant6_Value ; real_T Constant_Value_mg0ii2c5jx ;
real_T Constant_Value_lfd1si2n0l ; real_T Constant_Value_fb5mg350bv ; real_T
Constant1_Value ; } ; extern const char * RT_MEMORY_ALLOCATION_ERROR ; extern
hfe00hbwsc hfe00hbwscw ; extern nltnw1e5gk nltnw1e5gkl ; extern bcuvylxhef
bcuvylxhefc ; extern ihnh5ag1lpc ihnh5ag1lp ; extern const
rtwCAPI_ModelMappingStaticInfo * HT05Model_GetCAPIStaticMap ( void ) ; extern
SimStruct * const rtS ; extern const int_T gblNumToFiles ; extern const int_T
gblNumFrFiles ; extern const int_T gblNumFrWksBlocks ; extern rtInportTUtable
* gblInportTUtables ; extern const char * gblInportFileName ; extern const
int_T gblNumRootInportBlks ; extern const int_T gblNumModelInputs ; extern
const int_T gblInportDataTypeIdx [ ] ; extern const int_T gblInportDims [ ] ;
extern const int_T gblInportComplex [ ] ; extern const int_T
gblInportInterpoFlag [ ] ; extern const int_T gblInportContinuous [ ] ;
extern const int_T gblParameterTuningTid ; extern DataMapInfo *
rt_dataMapInfoPtr ; extern rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr ;
void MdlOutputs ( int_T tid ) ; void MdlOutputsParameterSampleTime ( int_T
tid ) ; void MdlUpdate ( int_T tid ) ; void MdlTerminate ( void ) ; void
MdlInitializeSizes ( void ) ; void MdlInitializeSampleTimes ( void ) ;
SimStruct * raccel_register_model ( void ) ;
#endif
