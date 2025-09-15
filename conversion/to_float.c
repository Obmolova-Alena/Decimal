#include <float.h>

#include "../s21_decimal.h"

int s21_from_decimal_to_float(s21_decimal src, float *dst) {
  int error = OK;
  double temp = 0.0;

  if (dst == NULL) {
    error = CONVERSION_ERROR;
  } else {
    int scale = (src.bits[3] >> 16) & 255;
    int invalid_bits = src.bits[3] & ~((1u << 31) | (255 << 16));

    if (scale > 28 || invalid_bits != 0) {
      error = 1;
    } else if (src.bits[0] == 0 && src.bits[1] == 0 && src.bits[2] == 0) {
      *dst = get_sign(&src) ? -0.0f : 0.0f;
    } else {
      for (int i = 0; i < 3; i++) {
        temp += (double)((unsigned int)src.bits[i]) * pow(2.0, i * 32);
      }
      for (int i = 0; i < scale; i++) {
        temp /= 10.0;
      }

      if (!error && ((temp != 0.0 && fabs(temp) < 1e-28) ||
                     fabs(temp) > 7.9228162514264337593543950335e28)) {
        error = CONVERSION_ERROR;
      } else if (!error) {
        int sign = (src.bits[3] & (1u << 31)) ? -1 : 1;
        temp *= sign;

        *dst = (float)temp;
      }
    }
  }
  return error;
}