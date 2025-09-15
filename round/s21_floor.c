#include "../s21_decimal.h"

int s21_floor(s21_decimal value, s21_decimal *result) {
  if (result == NULL) {
    return CALCULATION_ERROR;
  }
  s21_decimal add_1 = {{1}};
  if (get_sign(&value) == 0) {
    s21_truncate(value, result);
  } else {
    if (get_scale(&value) == 0) {
      for (int index = 127; index >= 0; index--) {
        set_bit(result, get_bit(&value, index), index);
      }
    } else {
      s21_truncate(value, result);
      bitwise_addition(result, &add_1);
    }
  }
  return 0;
}
