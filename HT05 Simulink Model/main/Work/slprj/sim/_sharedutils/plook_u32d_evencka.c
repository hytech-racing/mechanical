#include "rtwtypes.h"
#include "multiword_types.h"
#include "plook_u32d_evencka.h"

uint32_T plook_u32d_evencka(real_T u, real_T bp0, real_T bpSpace, uint32_T
  maxIndex)
{
  uint32_T bpIndex;
  real_T fbpIndex;
  if (u <= bp0) {
    bpIndex = 0U;
  } else {
    fbpIndex = (u - bp0) * (1.0 / bpSpace);
    if (fbpIndex < maxIndex) {
      bpIndex = (uint32_T)fbpIndex;
    } else {
      bpIndex = maxIndex;
    }
  }

  return bpIndex;
}
