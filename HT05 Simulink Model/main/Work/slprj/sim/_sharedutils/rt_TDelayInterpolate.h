#ifndef RTW_HEADER_rt_TDelayInterpolate_h_
#define RTW_HEADER_rt_TDelayInterpolate_h_
#include "rtwtypes.h"
#include "multiword_types.h"

real_T rt_TDelayInterpolate(
  real_T tMinusDelay,
  real_T tStart,
  real_T *uBuf,
  int_T bufSz,
  int_T *lastIdx,
  int_T oldestIdx,
  int_T newIdx,
  real_T initOutput,
  boolean_T discrete,
  boolean_T minorStepAndTAtLastMajorOutput)
  ;

#endif
