#include "rtwtypes.h"
#include "multiword_types.h"
#include "interp2_MfPDUf1L.h"

real_T interp2_MfPDUf1L(const real_T varargin_1[3], const real_T varargin_2[3],
  const real_T varargin_3[9], real_T varargin_4, real_T varargin_5)
{
  real_T Vq;
  int32_T low_i;
  int32_T low_ip1;
  real_T qx1;
  real_T rx;
  int32_T tmp;
  int32_T tmp_p;
  if ((varargin_4 >= varargin_1[0]) && (varargin_4 <= varargin_1[2]) &&
      (varargin_5 >= varargin_2[0]) && (varargin_5 <= varargin_2[2])) {
    low_i = 0;
    if (varargin_4 >= varargin_1[1]) {
      low_i = 1;
    }

    low_ip1 = 0;
    if (varargin_5 >= varargin_2[1]) {
      low_ip1 = 1;
    }

    if (varargin_4 == varargin_1[low_i]) {
      low_i = 3 * low_i + low_ip1;
      qx1 = varargin_3[low_i];
      Vq = varargin_3[low_i + 1];
    } else {
      rx = varargin_1[low_i + 1];
      if (rx == varargin_4) {
        low_i = (low_i + 1) * 3 + low_ip1;
        qx1 = varargin_3[low_i];
        Vq = varargin_3[low_i + 1];
      } else {
        rx = (varargin_4 - varargin_1[low_i]) / (rx - varargin_1[low_i]);
        tmp = (low_i + 1) * 3 + low_ip1;
        tmp_p = 3 * low_i + low_ip1;
        if (varargin_3[tmp] == varargin_3[tmp_p]) {
          qx1 = varargin_3[tmp_p];
        } else {
          qx1 = varargin_3[tmp] * rx + varargin_3[tmp_p] * (1.0 - rx);
        }

        tmp = ((low_i + 1) * 3 + low_ip1) + 1;
        tmp_p = (3 * low_i + low_ip1) + 1;
        if (varargin_3[tmp] == varargin_3[tmp_p]) {
          Vq = varargin_3[tmp_p];
        } else {
          Vq = varargin_3[tmp] * rx + varargin_3[tmp_p] * (1.0 - rx);
        }
      }
    }

    if ((varargin_5 == varargin_2[low_ip1]) || (qx1 == Vq)) {
      Vq = qx1;
    } else {
      rx = varargin_2[low_ip1 + 1];
      if (!(rx == varargin_5)) {
        rx = (varargin_5 - varargin_2[low_ip1]) / (rx - varargin_2[low_ip1]);
        Vq = (1.0 - rx) * qx1 + rx * Vq;
      }
    }
  } else {
    Vq = 0.0;
  }

  return Vq;
}
