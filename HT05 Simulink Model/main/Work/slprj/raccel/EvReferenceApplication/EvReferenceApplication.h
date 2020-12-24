#ifndef RTW_HEADER_EvReferenceApplication_h_
#define RTW_HEADER_EvReferenceApplication_h_
#include <string.h>
#include <stddef.h>
#include "rtw_modelmap.h"
#ifndef EvReferenceApplication_COMMON_INCLUDES_
#define EvReferenceApplication_COMMON_INCLUDES_
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
#include "EvReferenceApplication_types.h"
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
#define MODEL_NAME EvReferenceApplication
#define NSAMPLE_TIMES (7) 
#define NINPUTS (0)       
#define NOUTPUTS (0)     
#define NBLOCKIO (69) 
#define NUM_ZC_EVENTS (0) 
#ifndef NCSTATES
#define NCSTATES (32)   
#elif NCSTATES != 32
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
typedef struct { real_T hjd5omgeuw ; real_T cwygjkza2r ; real_T bht55s5qq3 ;
real_T ixkrfe1hwl ; real_T lrkperxqkh ; real_T f32ubspqi4 ; real_T m0tb3cmvqc
[ 2 ] ; real_T map0t5ix2o [ 2 ] ; real_T fkf3rt5vqk ; real_T iqvbtbayt4 ;
real_T g33we1ojyj ; real_T aam4cx4xp2 ; real_T gt2syxhd4c ; real_T lxuceqt2ja
; real_T f3xfryzo45 ; real_T i23fozl0mw ; real_T jxekas3gp2 ; real_T
h5wul2xtfx ; real_T lwwxzl5qzf ; real_T iojh51uf0y ; real_T eqrqll4gp5 ;
real_T hshnxf4vn0 ; real_T lcipcfvg1x ; real_T p53k4c5eze ; real_T mfbcndbdnw
; real_T cxitkzrhmf ; real_T hvrssnnlxd ; real_T pdyyylm0jj ; real_T
igi0euk0rx ; real_T jznbtj1tyh ; real_T jhfdxylvg0 ; real_T glcchrtl4h ;
real_T kmsp0cd1e1 ; real_T fvfcqphwub ; real_T akt4wnhg4a ; real_T dju2bvbvhc
; real_T ab4upgrnrw [ 2 ] ; real_T pkdo1hmzxy ; real_T ndktxclyhy ; real_T
o1kmrtruhq ; real_T kun3jdfvr3 ; real_T ohau2brkru ; real_T bxvt3tt5d3 ;
real_T o0nvkut2oz ; real_T oigt4h5oa0 ; real_T eaez13ma04 ; real_T ncqjwkf1sm
; real_T ft3zshehfj ; real_T ceif11edac ; real_T b0xsyyulsa ; real_T
jcja03y2ta ; real_T eyxsiaqd30 ; real_T klgwp0bl1e ; real_T hyeok2w0lk ;
real_T as3zb4xmb3 ; real_T nxipfqo4ge ; real_T bgyxx3obeb ; real_T mapbxuiz5v
; real_T kyoewhwiba [ 2 ] ; real_T kj51ocjbc3 [ 2 ] ; real_T imnt2v1zkq ;
real_T o5bbi4nmva ; real_T hdwnkycvte ; real_T bd2ndavyho ; boolean_T
l3da1b0tbm ; boolean_T fjngm2jfcz ; boolean_T ide52jc1xl ; boolean_T
by2opoctqb ; boolean_T h4vbxbl4u1 ; } cuhiq2he3x ; typedef struct { real_T
l4pn2msb3d [ 2 ] ; volatile real_T inuzqqxqnu [ 2 ] ; volatile real_T
gyxsg3hoeg [ 2 ] ; volatile real_T cl5jwb0b3t ; volatile real_T jayy2p4zdf ;
volatile real_T cvspgr5it1 ; volatile real_T mntoorellr [ 2 ] ; volatile
real_T jsjjbflcse ; volatile real_T dzxddx5cen ; volatile real_T ie0iddjxra ;
volatile real_T cj4gapd3fs ; volatile real_T okzsrfvbia ; volatile real_T
fdvg1z1mda ; volatile real_T lqnixiqshl ; volatile real_T maq5mhfrmp ;
volatile real_T ahhxtrgluu ; real_T iaae4xgy2r ; real_T ipsejbdjkv ; real_T
kr24afjbvy ; real_T mgyqdv05fz ; real_T hvilkifux1 ; struct { void *
LoggedData [ 6 ] ; } hp0aqxmuww ; struct { void * AQHandles ; void * SlioLTF
; } pvlwtgcy5f ; int32_T j5l3uscjdf ; uint32_T mqtf040bbg ; uint32_T
kn3tgruv1d ; int_T k2ai2ikwjg ; int_T njnayzb45j ; volatile int8_T fryzyq5tfx
; volatile int8_T liwdzlex20 ; volatile int8_T fumd4zvnkk ; volatile int8_T
hgwywptnzf ; volatile int8_T l3wo0yhou2 ; volatile int8_T jfct23tlbn ;
volatile int8_T mwgqdelv1f ; volatile int8_T kltct411us ; int8_T osl3qr4gmy ;
volatile int8_T im4sg3gugq ; volatile int8_T fde5kmnnd2 ; volatile int8_T
jkb4mvplww ; volatile int8_T idncfbsifc ; volatile int8_T ogx3kqoxnw ;
volatile int8_T fcscllrj1v ; volatile int8_T ade3ahyo1e ; int8_T jt1cbcvoyd ;
int8_T iqmyanxtr1 ; uint8_T cjbl1xx1vv ; uint8_T o23aklsczm ; boolean_T
j32evmbeac ; boolean_T mc3fhmonso ; hmke5fx3tcj igqkoslatl ; lobjb0lvrdo
isvmsyyglk ; l0vfpqnnodc ag4bz0o52w ; pwecol01r52 ekun4ztdyk ; } giqt2tul5w ;
typedef struct { real_T deyyyt5ypg ; edp3webv0p d5katehawv ; real_T
g14mueghy3 ; hkgv0zhr3w nq1lsnuhqu ; fsi3zxjdsv bxhmcfdguc ; real_T
p1updjpzin ; real_T p43idzm3kd ; real_T piwaeu0cyd ; real_T niplvsv1th ; }
i344fcmwfc ; typedef int_T c4o1mv5dv4 [ 2 ] ; typedef real_T jh4nyoq4g4 [ 4 ]
; typedef struct { real_T deyyyt5ypg ; cspbap1de4 d5katehawv ; real_T
g14mueghy3 ; nvyvwtjtwa nq1lsnuhqu ; evfyajgoqu bxhmcfdguc ; real_T
p1updjpzin ; real_T p43idzm3kd ; real_T piwaeu0cyd ; real_T niplvsv1th ; }
jtt2nejjv2 ; typedef struct { boolean_T deyyyt5ypg ; bbuzvmnhsa d5katehawv ;
boolean_T g14mueghy3 ; khjrgybdwv nq1lsnuhqu ; a2tgpeokha bxhmcfdguc ;
boolean_T p1updjpzin ; boolean_T p43idzm3kd ; boolean_T piwaeu0cyd ;
boolean_T niplvsv1th ; } esngraya3x ; typedef struct { real_T deyyyt5ypg ;
nupxuy3etd d5katehawv ; real_T g14mueghy3 ; fr5wy4tsqu nq1lsnuhqu ;
fjkqlf2nvp bxhmcfdguc ; real_T p1updjpzin ; real_T p43idzm3kd ; real_T
piwaeu0cyd ; real_T niplvsv1th ; } ii5v51btxn ; typedef struct { real_T
deyyyt5ypg ; nupxuy3etd d5katehawv ; real_T g14mueghy3 ; fr5wy4tsqu
nq1lsnuhqu ; fjkqlf2nvp bxhmcfdguc ; real_T p1updjpzin ; real_T p43idzm3kd ;
real_T piwaeu0cyd ; real_T niplvsv1th ; } kewnzdoseq ; typedef struct {
real_T deyyyt5ypg ; nupxuy3etd d5katehawv ; real_T g14mueghy3 ; fr5wy4tsqu
nq1lsnuhqu ; fjkqlf2nvp bxhmcfdguc ; real_T p1updjpzin ; real_T p43idzm3kd ;
real_T piwaeu0cyd ; real_T niplvsv1th ; } h4kbxz4s23 ; typedef struct {
pmzuarg20b jjd2t5uxgu ; o3ciyyrlrx o2abdn4orc ; f0can1sh3a bltnbiihzx ;
real_T knufuedcrt ; real_T fzw1exnxx4 ; real_T hzqdwglwsv ; real_T jurapz30jr
; real_T bog1ebbuhh ; } bg4wxy5yyz ; typedef struct {
rtwCAPI_ModelMappingInfo mmi ; rtwCAPI_ModelMappingInfo * childMMI [ 4 ] ; }
DataMapInfo ; struct konn1m5pjfe_ { real_T LongitudinalDriverModel_GearInit ;
real_T SignalHold_IC ; real_T LongitudinalDriverModel_Kpt ; real_T
LongitudinalDriverModel_L ; real_T LongitudinalDriverModel_aR ; real_T
LongitudinalDriverModel_bR ; real_T LongitudinalDriverModel_cR ; real_T
LongitudinalDriverModel_g ; real_T LongitudinalDriverModel_m ; real_T
LongitudinalDriverModel_tShift ; real_T LongitudinalDriverModel_tau ; real_T
u1_UpperSat ; real_T u1_LowerSat ; real_T u0_UpperSat ; real_T u0_LowerSat ;
real_T Constant_Value ; real_T Constant_Value_nhp3htkj21 ; real_T
Switch_Threshold ; real_T uDLookupTable_tableData [ 2474 ] ; real_T
uDLookupTable_bp01Data [ 2474 ] ; real_T MotorCouplingDynamics_A ; real_T
MotorCouplingDynamics_C ; real_T RateTransition3_InitialCondition ; real_T
mstomph_Gain ; real_T radstoRPM_Gain ; real_T BatteryDischargeDynamics_A ;
real_T BatteryDischargeDynamics_C ; real_T RateTransition5_InitialCondition ;
real_T Integrator_IC ; real_T mtomile_Gain ; real_T Integrator1_IC ; real_T
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
cuhiq2he3x cuhiq2he3xv ; extern i344fcmwfc i344fcmwfc1 ; extern giqt2tul5w
giqt2tul5wr ; extern konn1m5pjfe konn1m5pjf ; extern const
rtwCAPI_ModelMappingStaticInfo * EvReferenceApplication_GetCAPIStaticMap (
void ) ; extern SimStruct * const rtS ; extern const int_T gblNumToFiles ;
extern const int_T gblNumFrFiles ; extern const int_T gblNumFrWksBlocks ;
extern rtInportTUtable * gblInportTUtables ; extern const char *
gblInportFileName ; extern const int_T gblNumRootInportBlks ; extern const
int_T gblNumModelInputs ; extern const int_T gblInportDataTypeIdx [ ] ;
extern const int_T gblInportDims [ ] ; extern const int_T gblInportComplex [
] ; extern const int_T gblInportInterpoFlag [ ] ; extern const int_T
gblInportContinuous [ ] ; extern const int_T gblParameterTuningTid ; extern
DataMapInfo * rt_dataMapInfoPtr ; extern rtwCAPI_ModelMappingInfo *
rt_modelMapInfoPtr ; void MdlOutputs ( int_T tid ) ; void
MdlOutputsParameterSampleTime ( int_T tid ) ; void MdlUpdate ( int_T tid ) ;
void MdlTerminate ( void ) ; void MdlInitializeSizes ( void ) ; void
MdlInitializeSampleTimes ( void ) ; SimStruct * raccel_register_model ( void
) ;
#endif
