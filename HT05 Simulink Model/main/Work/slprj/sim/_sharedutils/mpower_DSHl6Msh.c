#include "rtwtypes.h"
#include "multiword_types.h"
#include "mwmathutil.h"
#include "mpower_DSHl6Msh.h"

void mpower_DSHl6Msh(const real_T a[4], real_T b, real_T c[4])
{
  real_T aBuffer[4];
  real_T b_a[4];
  real_T cBuffer[4];
  real_T cBuffer_e[4];
  real_T cBuffer_p[4];
  real_T y;
  int32_T b_n;
  int32_T n;
  int32_T nb;
  int32_T nbitson;
  boolean_T aBufferInUse;
  boolean_T cBufferInUse;
  boolean_T first;
  if (b == b) {
    b_a[0] = a[0];
    b_a[1] = a[1];
    b_a[2] = a[2];
    b_a[3] = a[3];
    y = muDoubleScalarAbs(b);
    n = (int32_T)muDoubleScalarAbs(b);
    b_n = (int32_T)y;
    nbitson = 0;
    nb = -2;
    while (b_n > 0) {
      nb++;
      if ((b_n & 1U) != 0U) {
        nbitson++;
      }

      b_n >>= 1;
    }

    if ((int32_T)y <= 2) {
      if (b == 2.0) {
        for (nbitson = 0; nbitson < 2; nbitson++) {
          c[nbitson << 1] = 0.0;
          c[nbitson << 1] += a[nbitson << 1] * a[0];
          c[nbitson << 1] += a[(nbitson << 1) + 1] * a[2];
          c[(nbitson << 1) + 1] = 0.0;
          c[(nbitson << 1) + 1] += a[nbitson << 1] * a[1];
          c[(nbitson << 1) + 1] += a[(nbitson << 1) + 1] * a[3];
        }
      } else if (b == 1.0) {
        c[0] = a[0];
        c[1] = a[1];
        c[2] = a[2];
        c[3] = a[3];
      } else {
        c[1] = 0.0;
        c[2] = 0.0;
        c[0] = 1.0;
        c[3] = 1.0;
      }
    } else {
      first = true;
      aBufferInUse = false;
      cBufferInUse = ((nbitson & 1U) == 0U);
      for (b_n = 0; b_n <= nb; b_n++) {
        if ((n & 1U) != 0U) {
          if (first) {
            first = false;
            if (cBufferInUse) {
              if (aBufferInUse) {
                cBuffer[0] = aBuffer[0];
                cBuffer[1] = aBuffer[1];
                cBuffer[2] = aBuffer[2];
                cBuffer[3] = aBuffer[3];
              } else {
                cBuffer[0] = b_a[0];
                cBuffer[1] = b_a[1];
                cBuffer[2] = b_a[2];
                cBuffer[3] = b_a[3];
              }
            } else if (aBufferInUse) {
              c[0] = aBuffer[0];
              c[1] = aBuffer[1];
              c[2] = aBuffer[2];
              c[3] = aBuffer[3];
            } else {
              c[0] = b_a[0];
              c[1] = b_a[1];
              c[2] = b_a[2];
              c[3] = b_a[3];
            }
          } else {
            if (aBufferInUse) {
              if (cBufferInUse) {
                for (nbitson = 0; nbitson < 2; nbitson++) {
                  c[nbitson] = 0.0;
                  c[nbitson] += cBuffer[nbitson] * aBuffer[0];
                  c[nbitson] += cBuffer[nbitson + 2] * aBuffer[1];
                  c[nbitson + 2] = 0.0;
                  c[nbitson + 2] += cBuffer[nbitson] * aBuffer[2];
                  c[nbitson + 2] += cBuffer[nbitson + 2] * aBuffer[3];
                }
              } else {
                for (nbitson = 0; nbitson < 2; nbitson++) {
                  cBuffer[nbitson] = 0.0;
                  cBuffer[nbitson] += c[nbitson] * aBuffer[0];
                  cBuffer[nbitson] += c[nbitson + 2] * aBuffer[1];
                  cBuffer[nbitson + 2] = 0.0;
                  cBuffer[nbitson + 2] += c[nbitson] * aBuffer[2];
                  cBuffer[nbitson + 2] += c[nbitson + 2] * aBuffer[3];
                }
              }
            } else if (cBufferInUse) {
              for (nbitson = 0; nbitson < 2; nbitson++) {
                c[nbitson] = 0.0;
                c[nbitson] += cBuffer[nbitson] * b_a[0];
                c[nbitson] += cBuffer[nbitson + 2] * b_a[1];
                c[nbitson + 2] = 0.0;
                c[nbitson + 2] += cBuffer[nbitson] * b_a[2];
                c[nbitson + 2] += cBuffer[nbitson + 2] * b_a[3];
              }
            } else {
              for (nbitson = 0; nbitson < 2; nbitson++) {
                cBuffer[nbitson] = 0.0;
                cBuffer[nbitson] += c[nbitson] * b_a[0];
                cBuffer[nbitson] += c[nbitson + 2] * b_a[1];
                cBuffer[nbitson + 2] = 0.0;
                cBuffer[nbitson + 2] += c[nbitson] * b_a[2];
                cBuffer[nbitson + 2] += c[nbitson + 2] * b_a[3];
              }
            }

            cBufferInUse = !cBufferInUse;
          }
        }

        n >>= 1;
        if (aBufferInUse) {
          for (nbitson = 0; nbitson < 2; nbitson++) {
            b_a[nbitson] = 0.0;
            b_a[nbitson] += aBuffer[nbitson] * aBuffer[0];
            b_a[nbitson] += aBuffer[nbitson + 2] * aBuffer[1];
            b_a[nbitson + 2] = 0.0;
            b_a[nbitson + 2] += aBuffer[nbitson] * aBuffer[2];
            b_a[nbitson + 2] += aBuffer[nbitson + 2] * aBuffer[3];
          }
        } else {
          for (nbitson = 0; nbitson < 2; nbitson++) {
            aBuffer[nbitson] = 0.0;
            aBuffer[nbitson] += b_a[nbitson] * b_a[0];
            aBuffer[nbitson] += b_a[nbitson + 2] * b_a[1];
            aBuffer[nbitson + 2] = 0.0;
            aBuffer[nbitson + 2] += b_a[nbitson] * b_a[2];
            aBuffer[nbitson + 2] += b_a[nbitson + 2] * b_a[3];
          }
        }

        aBufferInUse = !aBufferInUse;
      }

      for (nbitson = 0; nbitson < 2; nbitson++) {
        cBuffer_p[nbitson << 1] = 0.0;
        cBuffer_e[nbitson << 1] = 0.0;
        cBuffer_p[nbitson << 1] += aBuffer[nbitson << 1] * cBuffer[0];
        cBuffer_e[nbitson << 1] += b_a[nbitson << 1] * cBuffer[0];
        cBuffer_p[nbitson << 1] += aBuffer[(nbitson << 1) + 1] * cBuffer[2];
        cBuffer_e[nbitson << 1] += b_a[(nbitson << 1) + 1] * cBuffer[2];
        cBuffer_p[(nbitson << 1) + 1] = 0.0;
        cBuffer_e[(nbitson << 1) + 1] = 0.0;
        cBuffer_p[(nbitson << 1) + 1] += aBuffer[nbitson << 1] * cBuffer[1];
        cBuffer_e[(nbitson << 1) + 1] += b_a[nbitson << 1] * cBuffer[1];
        cBuffer_p[(nbitson << 1) + 1] += aBuffer[(nbitson << 1) + 1] * cBuffer[3];
        cBuffer_e[(nbitson << 1) + 1] += b_a[(nbitson << 1) + 1] * cBuffer[3];
      }

      if (first) {
        if (aBufferInUse) {
          c[0] = aBuffer[0];
          c[1] = aBuffer[1];
          c[2] = aBuffer[2];
          c[3] = aBuffer[3];
        } else {
          c[0] = b_a[0];
          c[1] = b_a[1];
          c[2] = b_a[2];
          c[3] = b_a[3];
        }
      } else if (aBufferInUse) {
        c[0] = cBuffer_p[0];
        c[1] = cBuffer_p[1];
        c[2] = cBuffer_p[2];
        c[3] = cBuffer_p[3];
      } else {
        c[0] = cBuffer_e[0];
        c[1] = cBuffer_e[1];
        c[2] = cBuffer_e[2];
        c[3] = cBuffer_e[3];
      }
    }
  }
}
