#include "../s21_decimal.h"

int s21_get_sign(s21_decimal src) { return (src.bits[3] >> 31) & 1; }

int s21_get_scale(s21_decimal src) {
  int scale = src.bits[3] >> 16;
  scale &= 255;
  return (scale <= 28 && scale >= 0) ? scale : -1;
}

void s21_divide_by_ten(s21_decimal *src) {
  if (src) {
    unsigned long long num = 0;
    for (int i = 2; i >= 0; i--) {
      num = num << 32;
      num = num + src->bits[i];
      src->bits[i] = num / 10;
      num %= 10;
    }
  }
}

int s21_from_decimal_to_int(s21_decimal src, int *dst) {
  if (!dst) return CONVERSION_ERROR;

  int exit_flag = OK;
  int sign = s21_get_sign(src);
  int scale = s21_get_scale(src);

  if (scale == -1) {
    exit_flag = CONVERSION_ERROR;
  } else {
    while (scale > 0 && exit_flag == OK) {
      s21_divide_by_ten(&src);
      scale--;
    }

    if (src.bits[1] != 0 || src.bits[2] != 0) {
      exit_flag = CONVERSION_ERROR;
    } else if ((sign == 0 && src.bits[0] > INT_MAX) ||
               (sign == 1 && src.bits[0] > (unsigned)INT_MAX + 1)) {
      exit_flag = CONVERSION_ERROR;
    } else {
      *dst = (int)src.bits[0];
      if (sign) {
        if (src.bits[0] > (unsigned)INT_MAX + 1) {
          exit_flag = CONVERSION_ERROR;
        } else {
          *dst = -((int)src.bits[0]);
        }
      }
    }
  }

  return exit_flag;
}
