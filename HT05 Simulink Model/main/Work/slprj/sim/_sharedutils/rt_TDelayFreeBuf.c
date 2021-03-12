#include "rtwtypes.h"
#include "multiword_types.h"
#include "rt_TDelayFreeBuf.h"
#ifndef __RTW_UTFREE__

extern void utFree(void *);

#endif

void rt_TDelayFreeBuf(
                      void * buf)
{
  utFree(buf);
}
