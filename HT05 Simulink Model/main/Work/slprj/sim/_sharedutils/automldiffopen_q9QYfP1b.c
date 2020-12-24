#include "rtwtypes.h"
#include "multiword_types.h"
#include "automldiffopen_q9QYfP1b.h"

void automldiffopen_q9QYfP1b(const real_T u[3], real_T bw1, real_T bd, real_T
  bw2, real_T Ndiff, real_T shaftSwitch, real_T Jd, real_T Jw1, real_T Jw2,
  const real_T x[2], real_T y[3], real_T xdot[2])
{
  real_T NbdTerm;
  int32_T diffDir;
  real_T term1;
  real_T term2;
  real_T invJ[4];
  real_T diffDir_p[6];
  real_T invJ_p[6];
  real_T invJ_e[4];
  real_T invJ_i[2];
  real_T invJ_m[2];
  real_T diffDir_e[6];
  int32_T i;
  real_T NbdTerm_tmp;
  int32_T invJ_tmp;
  int32_T invJ_tmp_tmp;
  NbdTerm_tmp = Ndiff * Ndiff;
  NbdTerm = NbdTerm_tmp * bd / 4.0;
  if (shaftSwitch != 0.0) {
    diffDir = -1;
  } else {
    diffDir = 1;
  }

  term1 = NbdTerm_tmp * Jd;
  term2 = (4.0 * Jw1 * Jw2 + term1 * Jw1) + Jw2 * term1;
  invJ[0] = (Jw2 * 4.0 + term1) / term2;
  NbdTerm_tmp = -term1 / term2;
  invJ[2] = NbdTerm_tmp;
  invJ[1] = NbdTerm_tmp;
  invJ[3] = (Jw1 * 4.0 + term1) / term2;
  NbdTerm_tmp = (real_T)diffDir / 2.0 * Ndiff;
  diffDir_p[0] = NbdTerm_tmp;
  diffDir_p[2] = -1.0;
  diffDir_p[4] = 0.0;
  diffDir_p[1] = NbdTerm_tmp;
  diffDir_p[3] = 0.0;
  diffDir_p[5] = -1.0;
  term1 = -(bw1 + NbdTerm);
  term2 = -(NbdTerm + bw2);
  diffDir_e[0] = NbdTerm_tmp;
  diffDir_e[3] = NbdTerm_tmp;
  for (diffDir = 0; diffDir < 2; diffDir++) {
    for (i = 0; i < 3; i++) {
      invJ_tmp_tmp = i << 1;
      invJ_tmp = diffDir + invJ_tmp_tmp;
      invJ_p[invJ_tmp] = 0.0;
      invJ_p[invJ_tmp] += diffDir_p[invJ_tmp_tmp] * invJ[diffDir];
      invJ_p[invJ_tmp] += diffDir_p[invJ_tmp_tmp + 1] * invJ[diffDir + 2];
    }

    invJ_e[diffDir] = 0.0;
    invJ_e[diffDir] += invJ[diffDir] * term1;
    NbdTerm_tmp = invJ[diffDir + 2];
    invJ_e[diffDir] += NbdTerm_tmp * -NbdTerm;
    invJ_e[diffDir + 2] = 0.0;
    invJ_e[diffDir + 2] += invJ[diffDir] * -NbdTerm;
    invJ_e[diffDir + 2] += NbdTerm_tmp * term2;
    invJ_i[diffDir] = 0.0;
    invJ_i[diffDir] += invJ_p[diffDir] * u[0];
    invJ_i[diffDir] += invJ_p[diffDir + 2] * u[1];
    invJ_i[diffDir] += invJ_p[diffDir + 4] * u[2];
    invJ_m[diffDir] = 0.0;
    invJ_m[diffDir] += invJ_e[diffDir] * x[0];
    invJ_m[diffDir] += invJ_e[diffDir + 2] * x[1];
    xdot[diffDir] = invJ_i[diffDir] + invJ_m[diffDir];
    diffDir_e[3 * diffDir + 1] = (real_T)diffDir + -1.0;
    diffDir_e[3 * diffDir + 2] = 0.0 - (real_T)diffDir;
  }

  for (diffDir = 0; diffDir < 3; diffDir++) {
    y[diffDir] = (diffDir_e[diffDir + 3] * x[1] + diffDir_e[diffDir] * x[0]) +
      (0.0 * u[2] + (0.0 * u[1] + 0.0 * u[0]));
  }
}
