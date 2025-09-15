#include "../s21_decimal.h"

void set_sign(s21_decimal *value, int sign) {  //  поставить знак
  if (sign == 1) {
    int sign = 1 << 31;
    value->bits[3] |= sign;
  } else if (sign == 0) {
    // int sign = 0 << 31;
    value->bits[3] = (value->bits[3] & 0x7FFFFFFF);
    // int val = 1 << 31;
    // val = ~val;
    // value->bits[3] &= sign;
  }
}

void set_scale(s21_decimal *value, int scale) {
  int a = 1 << 31;
  value->bits[3] &= a;

  value->bits[3] |= (scale << 16);
}

int s21_from_float_to_decimal(float src, s21_decimal *dst) {
  int error = 0;

  if (dst == NULL || (src != 0 && (src) < 1e-28) ||
      (src) > 79228162514264337593543950335.0) {
  } else if (src == 0.0f) {
  }
  for (int i = 0; i < 4; i++) {
    dst->bits[i] = 0;
  }

  char buffer[32] = {0};
  char m[40] = {0};

  sprintf(buffer, "%e", src);

  int minus = (src < 0);
  strncpy(m, buffer, strcspn(buffer, "e"));
  m[strcspn(buffer, "e")] = '\0';

  char *res = strchr(m, '.');
  if (res != NULL) {
    memmove(res, res + 1, strlen(res));
  }

  long long mantissa = atoll(m);

  char *exp_str = strchr(buffer, 'e');
  int exponent = 0;
  if (exp_str != NULL) {
    exponent = atoi(exp_str + 1);
  }

  for (int i = 0; i < 6; i++) {
    if (mantissa % 10 == 0 && exponent <= 28) {
      mantissa = mantissa / 10;
      exponent++;
    }
  }

  exponent = exponent - 6;

  if (minus) {
    set_sign(dst, 1);
  }

  dst->bits[0] = mantissa;
  s21_decimal ten = {{10, 0, 0, 0}};

  if (exponent < 0) {
    exponent = -exponent;
    set_scale(dst, exponent);
  } else {
    while (exponent > 0) {
      s21_mul(*dst, ten, dst);
      exponent--;
    }
  }
  error = 0;

  int invalid_bits = dst->bits[3] & ~((1u << 31) | (255 << 16));
  int scale = (dst->bits[3] >> 16) & 255;
  if (scale > 28 || invalid_bits != 0) {
    error = 1;
  }

  return error;
}