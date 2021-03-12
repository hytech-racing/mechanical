#ifndef RTW_HEADER_HT05Model_private_h_
#define RTW_HEADER_HT05Model_private_h_
#include "rtwtypes.h"
#include "model_reference_types.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
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
#ifndef __RTW_UTFREE__
extern void * utMalloc ( size_t ) ; extern void utFree ( void * ) ;
#endif
extern void fusci251cj ( pijou5z0ta * localB , real_T rtp_IC ) ; extern void
ofnwunlxyp ( SimStruct * rtS_p , bzcsocffru * localDW ) ; extern void
mtsjnxvi2x ( bzcsocffru * localDW ) ; extern void e2ib0nh2tk ( SimStruct *
rtS_i , boolean_T bdrw0lzm3k , real_T epyamcb43r , pijou5z0ta * localB ,
bzcsocffru * localDW ) ;
#if defined(MULTITASKING)
#error Models using the variable step solvers cannot define MULTITASKING
#endif
#endif
