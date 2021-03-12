#include "rtwtypes.h"
#include "multiword_types.h"
#include "rt_TDelayCreateBuf.h"
#ifndef __RTW_UTFREE__

extern void * utMalloc(size_t);

#endif

void * rt_TDelayCreateBuf(
  int_T numBuffer,
  int_T bufSz,
  int_T elemSz)
{
  return((void*)utMalloc(numBuffer*bufSz*elemSz));
}
