#ifndef RTW_HEADER_rt_TDelayUpdateTailOrGrowBuf_h_
#define RTW_HEADER_rt_TDelayUpdateTailOrGrowBuf_h_
#include "rtwtypes.h"
#include "multiword_types.h"

boolean_T rt_TDelayUpdateTailOrGrowBuf(
  int_T *bufSzPtr,
  int_T *tailPtr,
  int_T *headPtr,
  int_T *lastPtr,
  real_T tMinusDelay,
  real_T **uBufPtr,
  boolean_T isfixedbuf,
  boolean_T istransportdelay,
  int_T *maxNewBufSzPtr);

#endif
