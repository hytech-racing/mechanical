#ifndef RTW_HEADER_DrivetrainEv_h_
#define RTW_HEADER_DrivetrainEv_h_
#include <stddef.h>
#include <string.h>
#include "rtw_modelmap.h"
#ifndef DrivetrainEv_COMMON_INCLUDES_
#define DrivetrainEv_COMMON_INCLUDES_
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "rtwtypes.h"
#include "zero_crossing_types.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "sf_runtime/sfc_sdi.h"
#endif
#include "DrivetrainEv_types.h"
#include "multiword_types.h"
#include "model_reference_types.h"
#include "rt_zcfcn.h"
#include "mwmathutil.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"
typedef struct { real_T oqgrsi0ejr [ 3 ] ; } gqcilb1ome ; typedef struct {
real_T eh3bmirodr [ 5 ] ; real_T k3pqpt3554 [ 16 ] ; real_T myssjwdee1 [ 24 ]
; real_T c4zmcdhw0l ; real_T kxfugx0x5t ; real_T n0kmac1huv ; } lc2agjjnwf ;
typedef struct { real_T nd0y5c0uli ; real_T gbfn2dmyrg ; real_T deodfjbdgl ;
real_T a2nlilzn31 ; real_T ebmccrxjeh ; real_T lfwwseijkh ; real_T ngac1fpctz
; real_T oqbsnhfjuf ; real_T ewkfjng1l4 ; real_T hcmrnlatk5 ; real_T
mwz5tssn5o ; real_T exbq33mn51 ; real_T dgykadrj5y ; real_T aereisbden ;
real_T mjdk2hab1e ; boolean_T jvxaiqibhb ; boolean_T kzk2m4ro0k ; }
dmpx2jc2pu ; typedef struct { real_T bsjj0oya40 ; boolean_T jrdv3hmnoc ;
int8_T azoxgesvxj ; int8_T dufw0vwv3o ; int8_T iojd2jlc3k ; int8_T lim0ml1jqw
; int8_T d3vznomj0x ; int8_T k3j1amkab5 ; uint8_T kzmq5ayuhp ; uint8_T
jp5trqmghp ; } fmdhv4fck3 ; typedef struct { real_T cxk3fsuqri ; } bobjql0acy
; typedef struct { real_T cxk3fsuqri ; } pjvirltsck ; typedef struct {
boolean_T cxk3fsuqri ; } oj3qcikvsd ; typedef struct { real_T cxk3fsuqri ; }
jsyfghzlbs ; typedef struct { real_T cxk3fsuqri ; } kckfzckqe5 ; typedef
struct { real_T cxk3fsuqri ; } kgdb5tut5v ; typedef struct { dmpx2jc2pu
fate2u2iog ; } avaxmyit3j ; typedef struct { fmdhv4fck3 fate2u2iog ; }
mxjlqvkjce ; typedef struct { bobjql0acy fate2u2iog ; } lbl1s0hghr ; typedef
struct { pjvirltsck fate2u2iog ; } kqspnrjgmw ; typedef struct { oj3qcikvsd
fate2u2iog ; } atojkui03z ; typedef struct { jsyfghzlbs fate2u2iog ; }
aufkcqjofk ; typedef struct { kckfzckqe5 fate2u2iog ; } fgqtupspgf ; typedef
struct { kgdb5tut5v fate2u2iog ; } iyfebu03dj ; typedef struct { avaxmyit3j
nod5vp1cyy ; } giz1qdggjn ; typedef struct { mxjlqvkjce nod5vp1cyy ; }
eumkmfr5s3 ; typedef struct { lbl1s0hghr nod5vp1cyy ; } bndvzro3yj ; typedef
struct { kqspnrjgmw nod5vp1cyy ; } evacbcz0zx ; typedef struct { atojkui03z
nod5vp1cyy ; } nubem4cgi1 ; typedef struct { aufkcqjofk nod5vp1cyy ; }
g02dtko50l ; typedef struct { fgqtupspgf nod5vp1cyy ; } ayp004fbv4 ; typedef
struct { iyfebu03dj nod5vp1cyy ; } hccjr0jhk5 ; typedef struct { real_T
kn3kq1dbud [ 3 ] ; real_T if3fq2sidt [ 2 ] ; real_T b1gikpnzh3 ; real_T
mq5brxdy0l ; real_T mdbtlgl3mq ; real_T ehcwhnstlp ; real_T gqgx10mle3 ;
real_T gmj2qteurg ; real_T mxxvqktr4f ; real_T djwjslokxk ; real_T hcj35ee5xv
; real_T prsdl3hoy3 ; real_T aqx4je4mq1 [ 2 ] ; real_T lernmx4ihz [ 2 ] ;
real_T gdoligonio ; real_T anujqhyerh ; real_T lvjqfcnojx ; real_T j0xak0sif5
; real_T lcv2rbkrjw ; real_T periluwvy2 ; real_T c5l3i02s50 ; real_T
gg21xnzmpd ; real_T kbytenqj4y ; real_T ncno5bir1r ; real_T ed1ugsrdmz ;
real_T efeiqqng0j ; real_T kqttujkp5i [ 3 ] ; real_T a1lc0bzspv [ 3 ] ;
real_T cs2xhnaqym [ 3 ] ; real_T iyfd34wurk [ 3 ] ; real_T chrfkmtxib ;
real_T jtrwu1h3mg ; real_T b55pc2gukd ; real_T eopftl2pcu ; real_T dwtcw2v0qq
; real_T gbcrpvfhc5 ; real_T bkauqrexbi [ 2 ] ; real_T iwrj2cqzhf ; real_T
lernmx4ihz_mbvzarwird ; real_T pbgxyjcpso ; real_T g3qrjs4pvm ; real_T
cpxmevd5ln [ 12 ] ; real_T jv2ysj32xt [ 2 ] ; giz1qdggjn cg32ix3bhp [ 1 ] ;
lc2agjjnwf cl0311alh3 ; giz1qdggjn fbnwpfi1ef3 [ 1 ] ; lc2agjjnwf f0qvxxi2xz
; gqcilb1ome izrftnejci [ 4 ] ; } pw4f2kjo3k ; typedef struct { real_T
hdxujtbohd ; real_T mk2q5nw0z4 ; struct { void * AQHandles ; } haavmmrpns ;
struct { void * AQHandles ; } aztcqpbxjo ; struct { void * AQHandles ; }
crrfuulwci ; struct { void * AQHandles ; } fv3mchw1jn ; int_T jg0qnrcaox ;
int_T avmrav1eka ; int_T f53xce00cm ; int_T pzaicq2iw5 ; int8_T kxp34i0kfp ;
int8_T mdigxevyus ; int8_T bbyh2lmjuh ; eumkmfr5s3 cg32ix3bhp [ 1 ] ;
eumkmfr5s3 fbnwpfi1ef3 [ 1 ] ; } lvsoqlxlcs ; typedef struct { real_T
ncmmxrrgvr [ 2 ] ; real_T d5vyxqghh0 [ 2 ] ; real_T noatsby3ej [ 2 ] ; real_T
in4ouu3rj0 ; real_T fmsvpqigtm ; real_T neffdf1vy0 ; real_T m5tmby1aqo ;
real_T dkpe1jeg2m ; real_T exw1srp224 ; real_T lwzedupgn2 ; real_T cs3cbynlcj
; real_T fxodvuf53f ; real_T lavyvivx1k ; real_T jin1n3lghh ; real_T
durnydrbng ; real_T mjiky0nofi [ 2 ] ; real_T pvkalczr1c ; bndvzro3yj
cg32ix3bhp [ 1 ] ; bndvzro3yj fbnwpfi1ef3 [ 1 ] ; } edp3webv0p ; typedef
int_T emgdq0melr [ 1 ] ; typedef real_T pdsrwvkfou [ 2 ] ; typedef struct {
real_T ncmmxrrgvr [ 2 ] ; real_T d5vyxqghh0 [ 2 ] ; real_T noatsby3ej [ 2 ] ;
real_T in4ouu3rj0 ; real_T fmsvpqigtm ; real_T neffdf1vy0 ; real_T m5tmby1aqo
; real_T dkpe1jeg2m ; real_T exw1srp224 ; real_T lwzedupgn2 ; real_T
cs3cbynlcj ; real_T fxodvuf53f ; real_T lavyvivx1k ; real_T jin1n3lghh ;
real_T durnydrbng ; real_T mjiky0nofi [ 2 ] ; real_T pvkalczr1c ; evacbcz0zx
cg32ix3bhp [ 1 ] ; evacbcz0zx fbnwpfi1ef3 [ 1 ] ; } cspbap1de4 ; typedef
struct { boolean_T ncmmxrrgvr [ 2 ] ; boolean_T d5vyxqghh0 [ 2 ] ; boolean_T
noatsby3ej [ 2 ] ; boolean_T in4ouu3rj0 ; boolean_T fmsvpqigtm ; boolean_T
neffdf1vy0 ; boolean_T m5tmby1aqo ; boolean_T dkpe1jeg2m ; boolean_T
exw1srp224 ; boolean_T lwzedupgn2 ; boolean_T cs3cbynlcj ; boolean_T
fxodvuf53f ; boolean_T lavyvivx1k ; boolean_T jin1n3lghh ; boolean_T
durnydrbng ; boolean_T mjiky0nofi [ 2 ] ; boolean_T pvkalczr1c ; nubem4cgi1
cg32ix3bhp [ 1 ] ; nubem4cgi1 fbnwpfi1ef3 [ 1 ] ; } bbuzvmnhsa ; typedef
struct { real_T ncmmxrrgvr [ 2 ] ; real_T d5vyxqghh0 [ 2 ] ; real_T
noatsby3ej [ 2 ] ; real_T in4ouu3rj0 ; real_T fmsvpqigtm ; real_T neffdf1vy0
; real_T m5tmby1aqo ; real_T dkpe1jeg2m ; real_T exw1srp224 ; real_T
lwzedupgn2 ; real_T cs3cbynlcj ; real_T fxodvuf53f ; real_T lavyvivx1k ;
real_T jin1n3lghh ; real_T durnydrbng ; real_T mjiky0nofi [ 2 ] ; real_T
pvkalczr1c ; g02dtko50l cg32ix3bhp [ 1 ] ; g02dtko50l fbnwpfi1ef3 [ 1 ] ; }
nupxuy3etd ; typedef struct { real_T ncmmxrrgvr [ 2 ] ; real_T d5vyxqghh0 [ 2
] ; real_T noatsby3ej [ 2 ] ; real_T in4ouu3rj0 ; real_T fmsvpqigtm ; real_T
neffdf1vy0 ; real_T m5tmby1aqo ; real_T dkpe1jeg2m ; real_T exw1srp224 ;
real_T lwzedupgn2 ; real_T cs3cbynlcj ; real_T fxodvuf53f ; real_T lavyvivx1k
; real_T jin1n3lghh ; real_T durnydrbng ; real_T mjiky0nofi [ 2 ] ; real_T
pvkalczr1c ; ayp004fbv4 cg32ix3bhp [ 1 ] ; ayp004fbv4 fbnwpfi1ef3 [ 1 ] ; }
aciiplviyd ; typedef struct { real_T ncmmxrrgvr [ 2 ] ; real_T d5vyxqghh0 [ 2
] ; real_T noatsby3ej [ 2 ] ; real_T in4ouu3rj0 ; real_T fmsvpqigtm ; real_T
neffdf1vy0 ; real_T m5tmby1aqo ; real_T dkpe1jeg2m ; real_T exw1srp224 ;
real_T lwzedupgn2 ; real_T cs3cbynlcj ; real_T fxodvuf53f ; real_T lavyvivx1k
; real_T jin1n3lghh ; real_T durnydrbng ; real_T mjiky0nofi [ 2 ] ; real_T
pvkalczr1c ; hccjr0jhk5 cg32ix3bhp [ 1 ] ; hccjr0jhk5 fbnwpfi1ef3 [ 1 ] ; }
cphoervchx ; typedef struct { real_T bfeegpir1y ; real_T e5y0k4sbo3 ; }
pmzuarg20b ; typedef struct { ZCSigState bgqk1jku3c ; ZCSigState f2oklvkjqk ;
} at3vnbf5fi ; struct fu2d21p2me_ { real_T P_0 ; real_T P_1 ; } ; struct
pymb3fi5g4_ { real_T P_0 ; real_T P_1 ; real_T P_2 ; real_T P_3 ; real_T P_4
; boolean_T P_5 ; boolean_T P_6 ; boolean_T P_7 ; boolean_T P_8 [ 8 ] ; } ;
struct gwbuyqty4q_ { pymb3fi5g4 fate2u2iog ; } ; struct lk2f0i2dh3_ {
gwbuyqty4q nod5vp1cyy ; } ; struct akbgnuupjzy_ { real_T P_0 ; real_T P_1 ;
real_T P_2 ; real_T P_3 ; real_T P_4 [ 2 ] ; real_T P_5 [ 2 ] ; real_T P_6 ;
real_T P_7 ; real_T P_8 ; real_T P_9 ; real_T P_10 ; real_T P_11 [ 7 ] ;
real_T P_12 [ 7 ] ; real_T P_13 [ 6 ] ; real_T P_14 [ 6 ] ; real_T P_15 ;
real_T P_16 ; real_T P_17 ; real_T P_18 ; real_T P_19 ; real_T P_20 ; real_T
P_21 ; real_T P_22 ; real_T P_23 ; real_T P_24 ; real_T P_25 ; real_T P_26 ;
real_T P_27 ; real_T P_28 ; real_T P_29 ; real_T P_30 ; real_T P_31 ; real_T
P_32 ; real_T P_33 ; real_T P_34 ; real_T P_35 ; real_T P_36 ; real_T P_37 ;
real_T P_38 ; real_T P_39 [ 9 ] ; real_T P_40 ; real_T P_41 ; real_T P_42 ;
real_T P_43 ; real_T P_44 ; real_T P_45 ; real_T P_46 ; real_T P_47 ; real_T
P_48 [ 2 ] ; real_T P_49 ; real_T P_50 ; real_T P_51 ; real_T P_52 ; real_T
P_53 ; real_T P_54 ; real_T P_55 ; real_T P_56 ; real_T P_57 [ 9 ] ; real_T
P_58 [ 7 ] ; real_T P_59 [ 7 ] ; real_T P_60 [ 6 ] ; real_T P_61 [ 6 ] ;
real_T P_62 ; real_T P_63 ; real_T P_64 ; real_T P_65 ; real_T P_66 ; real_T
P_67 ; real_T P_68 ; real_T P_69 ; real_T P_70 ; real_T P_71 ; real_T P_72 ;
real_T P_73 ; real_T P_74 ; real_T P_75 ; real_T P_76 ; real_T P_77 ; real_T
P_78 ; real_T P_79 ; real_T P_80 ; real_T P_81 ; real_T P_82 ; real_T P_83 ;
real_T P_84 ; real_T P_85 ; real_T P_86 [ 2 ] ; real_T P_87 ; real_T P_88 ;
real_T P_89 ; real_T P_90 ; real_T P_91 ; real_T P_92 ; real_T P_93 ; real_T
P_94 ; real_T P_95 ; real_T P_96 ; real_T P_97 ; real_T P_98 ; real_T P_99 ;
real_T P_100 [ 2 ] ; real_T P_101 ; real_T P_102 ; real_T P_103 ; real_T
P_104 ; real_T P_105 ; real_T P_106 ; real_T P_107 ; real_T P_108 ; real_T
P_109 ; real_T P_110 ; real_T P_111 ; real_T P_112 ; real_T P_113 ; real_T
P_114 [ 2 ] ; real_T P_115 [ 2 ] ; real_T P_116 ; real_T P_117 [ 4 ] ; real_T
P_118 [ 2 ] ; real_T P_119 [ 2 ] ; real_T P_120 ; real_T P_121 ; real_T P_122
; real_T P_123 ; real_T P_124 ; real_T P_125 ; real_T P_126 ; real_T P_127 ;
real_T P_128 [ 3 ] ; real_T P_129 [ 3 ] ; real_T P_130 ; real_T P_131 ;
real_T P_132 ; real_T P_133 ; real_T P_134 ; real_T P_135 ; real_T P_136 [ 3
] ; real_T P_137 ; real_T P_138 ; real_T P_139 ; real_T P_140 ; real_T P_141
; real_T P_142 ; real_T P_143 ; real_T P_144 [ 34 ] ; real_T P_145 [ 3 ] ;
real_T P_146 [ 3 ] ; real_T P_147 [ 9 ] ; real_T P_148 ; real_T P_149 ;
real_T P_150 ; real_T P_151 ; real_T P_152 ; real_T P_153 ; real_T P_154 ;
real_T P_155 ; real_T P_156 ; real_T P_157 ; real_T P_158 ; real_T P_159 ;
real_T P_160 ; real_T P_161 ; real_T P_162 ; real_T P_163 ; real_T P_164 [ 3
] ; real_T P_165 [ 3 ] ; real_T P_166 [ 9 ] ; real_T P_167 ; real_T P_168 ;
real_T P_169 ; real_T P_170 ; real_T P_171 ; real_T P_172 ; real_T P_173 ;
real_T P_174 ; real_T P_175 ; real_T P_176 ; real_T P_177 ; real_T P_178 ;
real_T P_179 ; real_T P_180 ; real_T P_181 ; real_T P_182 ; real_T P_183 ;
real_T P_184 ; real_T P_185 ; real_T P_186 ; real_T P_187 ; real_T P_188 ;
real_T P_189 ; real_T P_190 ; real_T P_191 ; real_T P_192 ; real_T P_193 ;
real_T P_194 ; real_T P_195 ; real_T P_196 ; real_T P_197 ; real_T P_198 ;
real_T P_199 [ 34 ] ; real_T P_200 [ 3 ] ; real_T P_201 [ 3 ] ; real_T P_202
[ 9 ] ; real_T P_203 ; real_T P_204 ; real_T P_205 ; real_T P_206 ; real_T
P_207 ; real_T P_208 ; real_T P_209 ; real_T P_210 ; real_T P_211 ; real_T
P_212 ; real_T P_213 ; real_T P_214 ; real_T P_215 ; real_T P_216 ; real_T
P_217 ; real_T P_218 ; real_T P_219 [ 3 ] ; real_T P_220 [ 3 ] ; real_T P_221
[ 9 ] ; real_T P_222 ; real_T P_223 ; real_T P_224 ; real_T P_225 ; real_T
P_226 ; real_T P_227 ; real_T P_228 ; real_T P_229 ; real_T P_230 ; real_T
P_231 ; real_T P_232 ; real_T P_233 ; real_T P_234 ; real_T P_235 ; real_T
P_236 ; real_T P_237 ; real_T P_238 ; real_T P_239 ; real_T P_240 ; real_T
P_241 ; real_T P_242 ; real_T P_243 ; real_T P_244 ; real_T P_245 ; real_T
P_246 ; real_T P_247 ; real_T P_248 ; real_T P_249 ; real_T P_250 ; real_T
P_251 ; real_T P_252 ; real_T P_253 ; real_T P_254 ; real_T P_255 ; real_T
P_256 ; real_T P_257 ; real_T P_258 ; real_T P_259 ; real_T P_260 ;
lk2f0i2dh3 cg32ix3bhp ; lk2f0i2dh3 fbnwpfi1ef3 ; fu2d21p2me izrftnejci ; } ;
struct kz1ziyy35g { struct SimStruct_tag * _mdlRefSfcnS ; struct { real_T
mr_nonContSig0 [ 1 ] ; real_T mr_nonContSig1 [ 1 ] ; boolean_T mr_nonContSig2
[ 1 ] ; boolean_T mr_nonContSig3 [ 1 ] ; boolean_T mr_nonContSig4 [ 1 ] ;
boolean_T mr_nonContSig5 [ 1 ] ; } NonContDerivMemory ; ssNonContDerivSigInfo
nonContDerivSignal [ 6 ] ; const rtTimingBridge * timingBridge ; struct {
rtwCAPI_ModelMappingInfo mmi ; rtwCAPI_ModelMapLoggingInstanceInfo
mmiLogInstanceInfo ; void * dataAddress [ 17 ] ; int32_T * vardimsAddress [
17 ] ; RTWLoggingFcnPtr loggingPtrs [ 17 ] ; sysRanDType * systemRan [ 25 ] ;
int_T systemTid [ 25 ] ; } DataMapInfo ; struct { int_T mdlref_GlobalTID [ 3
] ; } Timing ; } ; typedef struct { pw4f2kjo3k rtb ; lvsoqlxlcs rtdw ;
hcopmldpph rtm ; at3vnbf5fi rtzce ; } hmke5fx3tcj ; extern void ktxb3gprz3 (
SimStruct * _mdlRefSfcnS , ssNonContDerivSigFeedingOutports * *
mr_nonContOutputArray , int_T mdlref_TID0 , int_T mdlref_TID1 , int_T
mdlref_TID2 , hcopmldpph * const a5ree4wwe5 , pw4f2kjo3k * localB ,
lvsoqlxlcs * localDW , edp3webv0p * localX , at3vnbf5fi * localZCE , void *
sysRanPtr , int contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI , const
char_T * rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ; extern
void mr_DrivetrainEv_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T *
modelName , int_T * retVal ) ; extern mxArray * mr_DrivetrainEv_GetDWork (
const hmke5fx3tcj * mdlrefDW ) ; extern void mr_DrivetrainEv_SetDWork (
hmke5fx3tcj * mdlrefDW , const mxArray * ssDW ) ; extern void
mr_DrivetrainEv_RegisterSimStateChecksum ( SimStruct * S ) ; extern mxArray *
mr_DrivetrainEv_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * DrivetrainEv_GetCAPIStaticMap ( void ) ;
extern void pafzrlxpms ( real_T lhfh0lgexg , real_T dddksvopvu , real_T
aqziyf45vh , real_T kmxusdamtu , real_T kvgp2fkjhy , real_T gnoj3vvd04 ,
real_T i5tazc1u4j , real_T hrxlzevx3z , real_T jblgopnf1i , const real_T
pkjxdlvuwn [ 34 ] , const real_T n0mhhr4t1h [ 3 ] , const real_T cjgdxidpon [
3 ] , const real_T csyrzuatjk [ 9 ] , real_T hiqsfmypee , real_T mx5so5mgvw ,
real_T inchkh4kac , real_T gycdhdasg2 , real_T few2l1fwxa , real_T jklaqvkxfe
, real_T otfgbpbyhn , real_T kv2iqsifba , real_T hiawd1p1fx , real_T
o5ygoxqi30 , real_T ig4mu234iu , real_T dbtrggoxo1 , real_T fdpxrz5vmb ,
real_T k2udx51syx , real_T pfq2eyet0u , real_T e3zacyak04 , const real_T
i11thzoaok [ 3 ] , const real_T jiefker5rr [ 3 ] , const real_T govy01dn4l [
9 ] , real_T n5xjjpqvhi , real_T bodbaw1ynp , real_T gehf3geyns , real_T
gakbsgqcve , real_T hdwkghxa4l , real_T bt0sy4q3zx , real_T djkh3gvlkv ,
real_T bbl12fnfds , real_T maogfv1bti , real_T b55yk0qpmy , real_T c4pn3rsir2
, real_T hhd1av5ez0 , real_T epvhuoa1qy , real_T p4b5kxhudx , real_T
a5c4goqooi , real_T fs3ildlixj , real_T prsb4scvfy , real_T cmj0idhrc5 ,
real_T m2do5j31ef , real_T dgy4icut3a , real_T kh4hnzmazk , real_T jtbjysdjqj
, real_T iypogydhcm , real_T lkloq2embq , real_T k2p5404yxi , real_T
egsq4zjrg3 , real_T mqv0lzc44j , real_T g2qbvrcl1j , lc2agjjnwf * localB ,
real_T rtp_FZMAX , real_T rtp_FZMIN , real_T rtp_VXLOW , real_T rtp_kappamax
) ; extern void fhk5xmrghf ( dmpx2jc2pu * localB , fmdhv4fck3 * localDW ,
pymb3fi5g4 * localP , bobjql0acy * localX , real_T rtp_omegao ) ; extern void
hjtn2cfetd ( dmpx2jc2pu * localB , fmdhv4fck3 * localDW , bobjql0acy * localX
) ; extern void jzxqghlsdl ( dmpx2jc2pu * localB ) ; extern void blmwtgrkjm (
dmpx2jc2pu * localB , fmdhv4fck3 * localDW , pjvirltsck * localXdot ) ;
extern void cddyh02qci ( hcopmldpph * const a5ree4wwe5 , real_T fgvs5banyw ,
real_T auareadgka , real_T ka4js1rmku , dmpx2jc2pu * localB , fmdhv4fck3 *
localDW , pymb3fi5g4 * localP , bobjql0acy * localX , real_T rtp_omegao ,
real_T rtp_br , real_T rtp_Iyy , real_T rtp_OmegaTol ) ; extern void
cddyh02qciTID2 ( dmpx2jc2pu * localB , pymb3fi5g4 * localP , real_T rtp_br )
; extern void mqqbpxd21e ( int32_T NumIters , giz1qdggjn localB [ 1 ] ,
eumkmfr5s3 localDW [ 1 ] , lk2f0i2dh3 * localP , bndvzro3yj localX [ 1 ] ,
real_T rtp_omegao ) ; extern void ahv1dfpeau ( int32_T NumIters , giz1qdggjn
localB [ 1 ] , eumkmfr5s3 localDW [ 1 ] , bndvzro3yj localX [ 1 ] ) ; extern
void k3wrgascwa ( int32_T NumIters , giz1qdggjn localB [ 1 ] ) ; extern void
cxtxb3yrrw ( int32_T NumIters , const real_T * ghilmr1vn0 , const real_T *
op0zcmofju , const real_T * kq3ayvvoyg , giz1qdggjn localB [ 1 ] , eumkmfr5s3
localDW [ 1 ] , evacbcz0zx localXdot [ 1 ] ) ; extern void fbnwpfi1ef (
int32_T NumIters , hcopmldpph * const a5ree4wwe5 , const real_T * ghilmr1vn0
, const real_T * op0zcmofju , const real_T * kq3ayvvoyg , real_T * glgzd2jqy5
, giz1qdggjn localB [ 1 ] , eumkmfr5s3 localDW [ 1 ] , lk2f0i2dh3 * localP ,
bndvzro3yj localX [ 1 ] , real_T rtp_omegao , real_T rtp_br , real_T rtp_Iyy
, real_T rtp_VXLOW , real_T rtp_Re ) ; extern void fbnwpfi1efTID2 ( int32_T
NumIters , const real_T * ghilmr1vn0 , const real_T * op0zcmofju , const
real_T * kq3ayvvoyg , giz1qdggjn localB [ 1 ] , lk2f0i2dh3 * localP , real_T
rtp_br ) ; extern void fzkpqsvdo4 ( hcopmldpph * const a5ree4wwe5 ,
lvsoqlxlcs * localDW ) ; extern void eqyc2wn3m1 ( hcopmldpph * const
a5ree4wwe5 , pw4f2kjo3k * localB , lvsoqlxlcs * localDW , edp3webv0p * localX
) ; extern void er1nyhy4k5 ( hcopmldpph * const a5ree4wwe5 , pw4f2kjo3k *
localB , lvsoqlxlcs * localDW , edp3webv0p * localX ) ; extern void
cmuw0kqmoe ( hcopmldpph * const a5ree4wwe5 , lvsoqlxlcs * localDW ) ; extern
void ka5dospcnh ( pw4f2kjo3k * localB , lvsoqlxlcs * localDW ) ; extern void
a2spfqi5as ( pw4f2kjo3k * localB , lvsoqlxlcs * localDW , edp3webv0p * localX
, cspbap1de4 * localXdot ) ; extern void ekz3w3o33e ( hcopmldpph * const
a5ree4wwe5 , lvsoqlxlcs * localDW ) ; extern void ekz3w3o33eTID2 ( void ) ;
extern void DrivetrainEv ( hcopmldpph * const a5ree4wwe5 , const real_T *
a10dw5c4tm , const real_T * ccn5sowg0n , const real_T * dxefyqzind , const
real_T * iudgegw2lz , real_T * hk0t0gzq0m , real_T * jnhw4b1r4n , real_T *
epu24awsw0 , real_T * gd1s5pp2od , pw4f2kjo3k * localB , lvsoqlxlcs * localDW
, edp3webv0p * localX , at3vnbf5fi * localZCE ) ; extern void
DrivetrainEvTID2 ( pw4f2kjo3k * localB ) ; extern void ekywbf3nku (
hcopmldpph * const a5ree4wwe5 ) ;
#endif
