#include "../s21_decimal.h"

int s21_truncate(s21_decimal value, s21_decimal *result) {
  if (result == NULL) {
    return CALCULATION_ERROR;
  }
  for (int index = 127; index >= 0; index--) {
    set_bit(result, get_bit(&value, index), index);
  }
  int scale = get_scale(result);

  while (scale != 0) {
    s21_num(result);
    scale--;
  }
  set_scale(result, 0);
  return 0;
}
