#include "../s21_decimal.h"

int s21_negate(s21_decimal value, s21_decimal *result) {
  if (result == NULL) {
    return CALCULATION_ERROR;
  }
  for (int index = 127; index >= 0; index--) {
    set_bit(result, get_bit(&value, index), index);
  }
  if (get_sign(&value) == 0) {
    set_sign(result, 1);
  } else {
    set_sign(result, 0);
  }

  return 0;
}