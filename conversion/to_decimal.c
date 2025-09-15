#include "../s21_decimal.h"

int s21_from_float_to_decimal(float src, s21_decimal *dst) {
  int error = 0;

  if (dst == NULL ||
      (src != 0 && (src < 1e-28 || src > 79228162514264337593543950335.0f))) {
    error = 1;
  } else if (src == 0.0f) {
    for (int i = 0; i < 4; i++) {
      dst->bits[i] = 0;
    }
  } else {
    for (int i = 0; i < 4; i++) {
      dst->bits[i] = 0;
    }

    if (src < 0) {
      src = -src;
      set_sign(dst, 1);
    }

    char buffer[32] = {0};
    sprintf(buffer, "%e", src);

    char *mantissa_str = strtok(buffer, "e");
    char *exponent_str = strtok(NULL, "e");

    long long mantissa = 0;
    int exponent = 0;
    if (mantissa_str && exponent_str) {
      char *res = strchr(mantissa_str, '.');
      if (res) {
        memmove(res, res + 1, strlen(res));
      }
      mantissa = atoll(mantissa_str);
      exponent = atoi(exponent_str);

      exponent -= 6;
    }

    while (mantissa % 10 == 0 && exponent < 28 && mantissa != 0) {
      mantissa /= 10;
      exponent++;
    }

    dst->bits[0] = (unsigned int)mantissa;

    if (exponent < 0) {
      set_scale(dst, -exponent);
    } else {
      s21_decimal ten = {{10, 0, 0, 0}};
      while (exponent > 0) {
        if (s21_mul(*dst, ten, dst)) {
          error = 1;
        }
        exponent--;
      }
    }

    int invalid_bits = dst->bits[3] & ~((1u << 31) | (255 << 16));
    int scale = (dst->bits[3] >> 16) & 255;
    if (scale > 28 || invalid_bits != 0) {
      error = 1;
    }
  }

  return error;
}