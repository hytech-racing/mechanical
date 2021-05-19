#include "rtwtypes.h"
#include "multiword_types.h"
#include <stddef.h>
#include "rt_TDelayUpdateTailOrGrowBuf.h"
#ifndef __RTW_UTFREE__

extern void * utMalloc(size_t);
extern void utFree(void *);

#endif

boolean_T rt_TDelayUpdateTailOrGrowBuf(
  int_T *bufSzPtr,
  int_T *tailPtr,
  int_T *headPtr,
  int_T *lastPtr,
  real_T tMinusDelay,
  real_T **uBufPtr,
  boolean_T isfixedbuf,
  boolean_T istransportdelay,
  int_T *maxNewBufSzPtr)
{
  int_T testIdx;
  int_T tail = *tailPtr;
  int_T bufSz = *bufSzPtr;
  real_T *tBuf = *uBufPtr + bufSz;
  real_T *xBuf = (NULL);
  int_T numBuffer = 2;
  if (istransportdelay) {
    numBuffer = 3 ;
    xBuf= *uBufPtr + 2 * bufSz;
  }

  testIdx = (tail < (bufSz - 1)) ? (tail + 1) : 0;
  if ((tMinusDelay <= tBuf[testIdx]) && !isfixedbuf) {
    int_T j;
    real_T *tempT;
    real_T *tempU;
    real_T *tempX = (NULL);
    real_T *uBuf = *uBufPtr;
    int_T newBufSz = bufSz + 1024;
    if (newBufSz > *maxNewBufSzPtr) {
      *maxNewBufSzPtr = newBufSz;
    }

    tempU = (real_T*)utMalloc(numBuffer*newBufSz*sizeof(real_T));
    if (tempU == (NULL)) {
      return (false);
    }

    tempT = tempU + newBufSz;
    if (istransportdelay)
      tempX = tempT + newBufSz;
    for (j = tail; j < bufSz; j++) {
      tempT[j - tail] = tBuf[j];
      tempU[j - tail] = uBuf[j];
      if (istransportdelay)
        tempX[j - tail] = xBuf[j];
    }

    for (j = 0; j < tail; j++) {
      tempT[j + bufSz - tail] = tBuf[j];
      tempU[j + bufSz - tail] = uBuf[j];
      if (istransportdelay)
        tempX[j + bufSz - tail] = xBuf[j];
    }

    if (*lastPtr> tail) {
      *lastPtr -= tail;
    } else {
      *lastPtr += (bufSz - tail);
    }

    *tailPtr= 0;
    *headPtr = bufSz;
    utFree(uBuf);
    *bufSzPtr = newBufSz;
    *uBufPtr = tempU;
  } else {
    *tailPtr = testIdx;
  }

  return(true);
}
