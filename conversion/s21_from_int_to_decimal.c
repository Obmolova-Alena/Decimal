#include "../s21_decimal.h"

void s21_set_null(s21_decimal *dst) {
  if (dst) {
    for (int i = 0; i < 4; i++) {
      dst->bits[i] = 0;
    }
  }
}

int s21_from_int_to_decimal(int src, s21_decimal *dst) {
  if (!dst || src > INT_MAX || src < INT_MIN) return CONVERSION_ERROR;

  s21_set_null(dst);
  if (src < 0) {
    set_sign(dst, 1);
    src = -src;
  }
  dst->bits[0] = src;
  return OK;
}
