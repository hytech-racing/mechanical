#ifndef RTW_HEADER_HT05Model_private_h_
#define RTW_HEADER_HT05Model_private_h_
#include "rtwtypes.h"
#include "model_reference_types.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#include "zero_crossing_types.h"
#include "HT05Model.h"
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
extern void duilatdtko ( real_T rtp_IC , fhqirp0zey * localB ) ; extern void
d5bphz5bsi ( SimStruct * rtS_p , hrr1ocggec * localDW ) ; extern void
cadi3e44op ( hrr1ocggec * localDW ) ; extern void g31xp5tryr ( SimStruct *
rtS_i , boolean_T np4yyi1lai , real_T kfqis0x3go , fhqirp0zey * localB ,
hrr1ocggec * localDW ) ;
#if defined(MULTITASKING)
#error Models using the variable step solvers cannot define MULTITASKING
#endif
#endif
