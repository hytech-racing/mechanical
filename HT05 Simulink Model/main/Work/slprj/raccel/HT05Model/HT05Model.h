#ifndef RTW_HEADER_HT05Model_h_
#define RTW_HEADER_HT05Model_h_
#include <string.h>
#include <stddef.h>
#include "rtw_modelmap_simtarget.h"
#ifndef HT05Model_COMMON_INCLUDES_
#define HT05Model_COMMON_INCLUDES_
#include <stdlib.h>
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "rtwtypes.h"
#include "zero_crossing_types.h"
#include "sigstream_rtw.h"
#include "simtarget/slSimTgtSigstreamRTW.h"
#include "simtarget/slSimTgtSlioCoreRTW.h"
#include "simtarget/slSimTgtSlioClientsRTW.h"
#include "simtarget/slSimTgtSlioSdiRTW.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "raccel.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "rt_logging_simtarget.h"
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
#define NBLOCKIO (69) 
#define NUM_ZC_EVENTS (0) 
#ifndef NCSTATES
#define NCSTATES (35)   
#elif NCSTATES != 35
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
typedef struct { real_T kifcmajf5q ; } fhqirp0zey ; typedef struct { int8_T
knuormdudr ; boolean_T dl3ftk2vvc ; } hrr1ocggec ; typedef struct { real_T
etwgbqvkif ; real_T kwter11yih ; real_T cvgkryez0y ; real_T k2nvq1dfvz ;
real_T krfdbjpt0e ; real_T hnqecwtek3 ; real_T gz5o4hus3a ; real_T nou3xfrkex
[ 2 ] ; real_T bejosqgptz [ 2 ] ; real_T k0jcwtesdh [ 2 ] ; real_T hawg1v30vs
; real_T awbv4lz2br ; real_T cawpxxfynl ; real_T op2bbilkhu ; real_T
i4av10pedr ; real_T k5wjbiecdv ; real_T jcnijfpmie ; real_T hs1nxcdsu1 ;
real_T kpv1qapnbc ; real_T pb4y5y3noy ; real_T gxpwwcihxi ; real_T kwlhepleti
; real_T egwqx4bk1t ; real_T jglg55uozd ; real_T bki5dqleao ; real_T
jtp5gfufnu ; real_T ajoldyqnvn ; real_T gslrwelsee [ 2 ] ; real_T o035i4hwxg
; real_T pue040sedo ; real_T egun0lxqwh ; real_T fssj4vhwqd ; real_T
fqgurvz30p ; real_T jaqygtbwrp ; real_T juedzmwz13 ; real_T kpjtu3yzip ;
real_T kmcqv24afd ; real_T l1thberrgp ; real_T lfrzqxjyja ; real_T o5n5eexjon
; real_T e51yutiqek ; real_T fbfzjqwa5a ; real_T mkqparta3r ; real_T
a2zj1koo4k ; real_T ldaenjp42v ; real_T f53jjpuuxm ; real_T hhj0p0jony ;
real_T kftazr0hxl ; real_T ciswg50jx3 ; real_T dptryos4oj ; real_T hqkezymrab
; real_T gubzcq5ria ; real_T dbbyin35a2 ; real_T mddysgelnk ; real_T
gsta4lel3i ; real_T nmwnavsv0t ; real_T a5hkkkfjhl ; real_T bruwu4miax ;
real_T kpzjlc45u3 ; real_T h104oeui3c [ 2 ] ; real_T f4ilyp355v [ 2 ] ;
real_T kp4tq4fada ; real_T j3ea3swoth ; boolean_T aq22d4vedt ; boolean_T
lr0af5qksa ; boolean_T ottghukoth ; boolean_T drvm4uwfmo ; fhqirp0zey
ovj5vn4ci5 ; fhqirp0zey g31xp5tryrk ; } hfe00hbwsc ; typedef struct { real_T
mrofomoj1z [ 2 ] ; volatile real_T k0zcask0cc [ 2 ] ; volatile real_T
ngtzwyl1pu [ 2 ] ; volatile real_T e4gjlzj1lq ; volatile real_T i5uql30i2j ;
volatile real_T kap0odr3kj ; volatile real_T klgv0izvyu [ 2 ] ; volatile
real_T hp5pufrajm ; volatile real_T j1c3q5x2i4 ; volatile real_T cptmanfsa1 ;
volatile real_T j5bb1yym0w ; volatile real_T nos2ft3sic ; volatile real_T
n3mkw34cn5 ; volatile real_T h1tau0ecpq ; volatile real_T kmrimj41ij ;
volatile real_T kebrerroqx ; struct { void * LoggedData [ 6 ] ; } geedj4d40x
; struct { void * LoggedData ; } akwmyi3elg ; struct { void * AQHandles ; }
dbduharpby ; struct { void * AQHandles ; } dkmsy4vtjq ; struct { void *
AQHandles ; } o142ktwdad ; struct { void * AQHandles ; } cbpif1banu ; struct
{ void * AQHandles ; } ks1fvl1d0d ; uint32_T odmqgoxpmf ; int_T hn5nuy0lbc ;
int_T nxsdzjpe5i ; volatile int8_T ep2boc231g ; volatile int8_T piumrtffmp ;
volatile int8_T oijmj1tdxd ; volatile int8_T anfmogqnpx ; volatile int8_T
jse5bdwgjj ; volatile int8_T fqundvylsh ; volatile int8_T egwjbtmbyq ;
volatile int8_T bsjrzyb4mr ; int8_T llz0iknlo0 ; volatile int8_T a5czhakwii ;
volatile int8_T l1ffn0wiag ; volatile int8_T fiqovchppi ; volatile int8_T
oxgd34m1rt ; volatile int8_T i51uahy2gc ; volatile int8_T jtthydvh1h ;
volatile int8_T kgr2bmvhtp ; hmke5fx3tcj iajxel3ezk ; lobjb0lvrdo ondfxuidp3
; l0vfpqnnodc enbv0wioc4 ; pwecol01r52 alzb1lqr5t ; hrr1ocggec ovj5vn4ci5 ;
hrr1ocggec g31xp5tryrk ; } bcuvylxhef ; typedef struct { real_T i4qubohzc1 ;
edp3webv0p hcwjqlhqcy ; real_T nxcnpybje3 ; hkgv0zhr3w fqvhaqjss0 ;
fsi3zxjdsv b04e30byfs ; real_T a1yytga2i4 ; real_T d2vzwae4a0 ; real_T
fwf05bzu3h [ 2 ] ; real_T f5pdutbo4l ; real_T drev2pqloy ; } nltnw1e5gk ;
typedef int_T ngqsle4aqn [ 2 ] ; typedef real_T hpzwhjywix [ 4 ] ; typedef
struct { real_T i4qubohzc1 ; cspbap1de4 hcwjqlhqcy ; real_T nxcnpybje3 ;
nvyvwtjtwa fqvhaqjss0 ; evfyajgoqu b04e30byfs ; real_T a1yytga2i4 ; real_T
d2vzwae4a0 ; real_T fwf05bzu3h [ 2 ] ; real_T f5pdutbo4l ; real_T drev2pqloy
; } lqmi0mm3ub ; typedef struct { boolean_T i4qubohzc1 ; bbuzvmnhsa
hcwjqlhqcy ; boolean_T nxcnpybje3 ; khjrgybdwv fqvhaqjss0 ; a2tgpeokha
b04e30byfs ; boolean_T a1yytga2i4 ; boolean_T d2vzwae4a0 ; boolean_T
fwf05bzu3h [ 2 ] ; boolean_T f5pdutbo4l ; boolean_T drev2pqloy ; } nokraiiwbv
; typedef struct { real_T i4qubohzc1 ; nupxuy3etd hcwjqlhqcy ; real_T
nxcnpybje3 ; fr5wy4tsqu fqvhaqjss0 ; fjkqlf2nvp b04e30byfs ; real_T
a1yytga2i4 ; real_T d2vzwae4a0 ; real_T fwf05bzu3h [ 2 ] ; real_T f5pdutbo4l
; real_T drev2pqloy ; } pjkfbqkena ; typedef struct { real_T i4qubohzc1 ;
aciiplviyd hcwjqlhqcy ; real_T nxcnpybje3 ; ebrgzbbeqm fqvhaqjss0 ;
fw3b52wipm b04e30byfs ; real_T a1yytga2i4 ; real_T d2vzwae4a0 ; real_T
fwf05bzu3h [ 2 ] ; real_T f5pdutbo4l ; real_T drev2pqloy ; } lo4stvpw1e ;
typedef struct { real_T i4qubohzc1 ; cphoervchx hcwjqlhqcy ; real_T
nxcnpybje3 ; op3keyawy1 fqvhaqjss0 ; p1rrq1ih3i b04e30byfs ; real_T
a1yytga2i4 ; real_T d2vzwae4a0 ; real_T fwf05bzu3h [ 2 ] ; real_T f5pdutbo4l
; real_T drev2pqloy ; } d4h3rhbasw ; typedef struct { pmzuarg20b oexwb0vxno ;
f0can1sh3a hev2tqxdbw ; real_T gppqg3jeps ; real_T ncwkbjsqae ; real_T
duf13ep545 ; real_T ewzov3eiem ; real_T pkdl1bjwj0 ; } lm4x2ar2jt ; typedef
struct { rtwCAPI_ModelMappingInfo mmi ; rtwCAPI_ModelMappingInfo * childMMI [
4 ] ; } DataMapInfo ; struct ihnh5ag1lpc_ { real_T SignalHold_IC ; real_T
SignalHold_IC_i4j3zendoc ; real_T LongitudinalDriver_Kpt ; real_T
LongitudinalDriver_L ; real_T LongitudinalDriver_aR ; real_T
LongitudinalDriver_bR ; real_T LongitudinalDriver_cR ; real_T
LongitudinalDriver_g ; real_T LongitudinalDriver_m ; real_T
LongitudinalDriver_tau ; real_T u1_UpperSat ; real_T u1_LowerSat ; real_T
u0_UpperSat ; real_T u0_LowerSat ; real_T Switch_Threshold ; real_T
uDLookupTable_tableData [ 401 ] ; real_T uDLookupTable_bp01Data [ 401 ] ;
real_T MotorCouplingDynamics_A ; real_T MotorCouplingDynamics_C ; real_T
RateTransition3_InitialCondition ; real_T mstomph_Gain ; real_T
radstoRPM_Gain ; real_T BatteryDischargeDynamics_A ; real_T
BatteryDischargeDynamics_C ; real_T RateTransition5_InitialCondition ; real_T
Integrator_IC ; real_T mtomile_Gain ; real_T Integrator1_IC ; real_T
m3toUSGal_Gain ; real_T Saturation1_UpperSat ; real_T Saturation1_LowerSat ;
real_T Integrator_IC_c3j2xauzq0 ; real_T mto100Km_Gain ; real_T
Saturation_UpperSat ; real_T Saturation_LowerSat ; real_T m3pergal_Gain ;
real_T Integrator1_IC_kyv4sp114t ; real_T Saturation_UpperSat_bmv04wlgug ;
real_T Saturation_LowerSat_k4oqasoblp ; real_T Saturation_UpperSat_ekydxm2ndj
; real_T Saturation_LowerSat_ijnrsojihl ; real_T HitCrossing_Offset ; real_T
Integrator2_IC ; real_T UnitDelay_InitialCondition [ 2 ] ; real_T
USEPAkwhUSgalequivalent_Value ; real_T sperh_Value ; real_T wperkw_Value ;
real_T repeat_Value ; real_T tFinal_Value ; real_T Constant2_Value ; real_T
Constant3_Value ; real_T Constant6_Value ; real_T Constant_Value ; real_T
Constant_Value_azk0zfkyc5 ; } ; extern const char *
RT_MEMORY_ALLOCATION_ERROR ; extern hfe00hbwsc hfe00hbwscw ; extern
nltnw1e5gk nltnw1e5gkl ; extern bcuvylxhef bcuvylxhefc ; extern ihnh5ag1lpc
ihnh5ag1lp ; extern mxArray * mr_HT05Model_GetDWork ( ) ; extern void
mr_HT05Model_SetDWork ( const mxArray * ssDW ) ; extern mxArray *
mr_HT05Model_GetSimStateDisallowedBlocks ( ) ; extern const
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
SimStruct * raccel_register_model ( ssExecutionInfo * executionInfo ) ;
#endif
