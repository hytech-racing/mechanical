#ifndef RTW_HEADER_DrivetrainEv_private_h_
#define RTW_HEADER_DrivetrainEv_private_h_
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#include "DrivetrainEv.h"
#if !defined(rt_VALIDATE_MEMORY)
#define rt_VALIDATE_MEMORY(S, ptr)   if(!(ptr)) {\
  ssSetErrorStatus(rtS, RT_MEMORY_ALLOCATION_ERROR);\
  }
#endif
#if !defined(rt_FREE)
#if !defined(_WIN32)
#define rt_FREE(ptr)   if((ptr) != (NULL)) {\
  free((ptr));\
  (ptr) = (NULL);\
  }
#else
#define rt_FREE(ptr)   if((ptr) != (NULL)) {\
  free((void *)(ptr));\
  (ptr) = (NULL);\
  }
#endif
#endif
extern real_T look1_binlxpw ( real_T u0 , const real_T bp0 [ ] , const real_T
table [ ] , uint32_T maxIndex ) ; extern real_T look1_binlcpw ( real_T u0 ,
const real_T bp0 [ ] , const real_T table [ ] , uint32_T maxIndex ) ; extern
void nsppivnex0 ( real_T odm2hgiib1 , real_T fxscru3kvk , real_T mng3zln5i0 ,
real_T hqqntlk5es , real_T bhq15myzsj , real_T at1wsv2f40 , real_T ppwrrwtapf
, real_T loz4rtzk0e , real_T kke3h1g4g2 , const real_T bpesv4lpqj [ 34 ] ,
const real_T madobvcucx [ 3 ] , const real_T p4h0uspsys [ 3 ] , const real_T
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
, real_T rtp_VXLOW , real_T rtp_kappamax ) ; extern void pd0f2vfijo (
am0zbcsot1 * localB , n2z3212kuo * localDW , ddkpbkrncn * localP , n1qqd0unpi
* localX , real_T rtp_omegao ) ; extern void fgglyqllwj ( am0zbcsot1 * localB
) ; extern void hd4rfm4a3x ( am0zbcsot1 * localB , n2z3212kuo * localDW ,
cab15xgmjs * localXdot ) ; extern void nvrysdlj44 ( SimStruct * rtS_c ,
real_T e10hu52zhk , real_T jb0oqwh15w , am0zbcsot1 * localB , n2z3212kuo *
localDW , ddkpbkrncn * localP , ehtbhlzffh * localZCSV , real_T rtp_OmegaTol
) ; extern void dwxltv2xb0 ( SimStruct * rtS_c , real_T e10hu52zhk , real_T
jb0oqwh15w , real_T ogbgkrc3ov , am0zbcsot1 * localB , n2z3212kuo * localDW ,
ddkpbkrncn * localP , n1qqd0unpi * localX , real_T rtp_omegao , real_T rtp_br
, real_T rtp_Iyy , real_T rtp_OmegaTol ) ; extern void dwxltv2xb0TID2 (
am0zbcsot1 * localB , ddkpbkrncn * localP , real_T rtp_br ) ; extern void
p4ux310hrw ( int32_T NumIters , mhkngtisvj localB [ 1 ] , m0b1rj1f3m localDW
[ 1 ] , czihtk1jhp * localP , lopaynj0f0 localX [ 1 ] , real_T rtp_omegao ) ;
extern void jes4nbajkf ( int32_T NumIters , mhkngtisvj localB [ 1 ] ) ;
extern void hctrfz05e3 ( int32_T NumIters , const real_T * llytyuaau5 , const
real_T * nc0zbqdiii , const real_T * lpy5f51vtc , mhkngtisvj localB [ 1 ] ,
m0b1rj1f3m localDW [ 1 ] , ne5zdtnxds localXdot [ 1 ] ) ; extern void
a35kvcmsf0 ( int32_T NumIters , SimStruct * rtS_g , const real_T * llytyuaau5
, const real_T * nc0zbqdiii , const real_T * lpy5f51vtc , mhkngtisvj localB [
1 ] , m0b1rj1f3m localDW [ 1 ] , czihtk1jhp * localP , hx4oc15a5t localZCSV [
1 ] , real_T rtp_VXLOW , real_T rtp_Re ) ; extern void g0qms2rrt2 ( int32_T
NumIters , SimStruct * rtS_m , const real_T * llytyuaau5 , const real_T *
nc0zbqdiii , const real_T * lpy5f51vtc , real_T * d21x30jzox , mhkngtisvj
localB [ 1 ] , m0b1rj1f3m localDW [ 1 ] , czihtk1jhp * localP , lopaynj0f0
localX [ 1 ] , real_T rtp_omegao , real_T rtp_br , real_T rtp_Iyy , real_T
rtp_VXLOW , real_T rtp_Re ) ; extern void g0qms2rrt2TID2 ( int32_T NumIters ,
const real_T * llytyuaau5 , const real_T * nc0zbqdiii , const real_T *
lpy5f51vtc , mhkngtisvj localB [ 1 ] , czihtk1jhp * localP , real_T rtp_br )
;
#if defined(MULTITASKING)
#error Models using the variable step solvers cannot define MULTITASKING
#endif
#endif
