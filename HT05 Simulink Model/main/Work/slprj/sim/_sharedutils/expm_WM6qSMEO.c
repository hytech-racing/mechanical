#include "rtwtypes.h"
#include "multiword_types.h"
#include "rt_nonfinite.h"
#include <math.h>
#include "PadeApproximantOfDegree_5BLwCIn6.h"
#include "mwmathutil.h"
#include "expm_WM6qSMEO.h"

void expm_WM6qSMEO(real_T A[4], real_T F[4])
{
  static const real_T theta[5] = { 0.01495585217958292, 0.253939833006323,
    0.95041789961629319, 2.097847961257068, 5.3719203511481517 };

  static const uint8_T b[5] = { 3U, 5U, 7U, 9U, 13U };

  real_T F_p[4];
  real_T b_s;
  real_T normA;
  int32_T b_j;
  int32_T e;
  boolean_T exitg1;
  normA = 0.0;
  b_j = 0;
  exitg1 = false;
  while ((!exitg1) && (b_j < 2)) {
    b_s = muDoubleScalarAbs(A[(b_j << 1) + 1]) + muDoubleScalarAbs(A[b_j << 1]);
    if (muDoubleScalarIsNaN(b_s)) {
      normA = (rtNaN);
      exitg1 = true;
    } else {
      if (b_s > normA) {
        normA = b_s;
      }

      b_j++;
    }
  }

  if (normA <= 5.3719203511481517) {
    b_j = 0;
    exitg1 = false;
    while ((!exitg1) && (b_j < 5)) {
      if (normA <= theta[b_j]) {
        PadeApproximantOfDegree_5BLwCIn6(A, b[b_j], F);
        exitg1 = true;
      } else {
        b_j++;
      }
    }
  } else {
    b_s = normA / 5.3719203511481517;
    if ((!muDoubleScalarIsInf(b_s)) && (!muDoubleScalarIsNaN(b_s))) {
      b_s = frexp(b_s, &e);
    } else {
      e = 0;
    }

    normA = e;
    if (b_s == 0.5) {
      normA = (real_T)e - 1.0;
    }

    b_s = muDoubleScalarPower(2.0, normA);
    A[0] /= b_s;
    A[1] /= b_s;
    A[2] /= b_s;
    A[3] /= b_s;
    PadeApproximantOfDegree_5BLwCIn6(A, 13, F);
    for (b_j = 0; b_j < (int32_T)normA; b_j++) {
      for (e = 0; e < 2; e++) {
        F_p[e] = 0.0;
        F_p[e] += F[e] * F[0];
        F_p[e] += F[e + 2] * F[1];
        F_p[e + 2] = 0.0;
        F_p[e + 2] += F[e] * F[2];
        F_p[e + 2] += F[e + 2] * F[3];
      }

      F[0] = F_p[0];
      F[1] = F_p[1];
      F[2] = F_p[2];
      F[3] = F_p[3];
    }
  }
}
