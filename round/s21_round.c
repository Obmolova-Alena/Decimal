#include "../s21_decimal.h"

int s21_round(s21_decimal value, s21_decimal *result) {
  if (result == NULL) {
    return CALCULATION_ERROR;
  }
  s21_decimal add_1 = {{1}};
  s21_decimal result_dop = {{0}};
  for (int index = 127; index >= 0; index--) {
    set_bit(&result_dop, get_bit(&value, index), index);
  }

  int scale = get_scale(&result_dop);
  if (scale == 0) {
    for (int index = 127; index >= 0; index--) {
      set_bit(result, get_bit(&value, index), index);
    }
  } else {
    while (scale != 1) {
      s21_num(&result_dop);
      scale--;
    }
    int last_number = s21_num(&result_dop);
    if (last_number > 5) {
      s21_truncate(value, &result_dop);
      bitwise_addition(&result_dop, &add_1);
      for (int index = 127; index >= 0; index--) {
        set_bit(result, get_bit(&result_dop, index), index);
      }
    } else if (last_number == 5) {
      s21_truncate(value, &result_dop);

      if (s21_truncate(value, &result_dop) % 2 == 0) {
        bitwise_addition(&result_dop, &add_1);
        for (int index = 127; index >= 0; index--) {
          set_bit(result, get_bit(&result_dop, index), index);
        }
      } else {
        for (int index = 127; index >= 0; index--) {
          set_bit(result, get_bit(&result_dop, index), index);
        }
      }

    } else {
      s21_truncate(value, result);
    }
  }
  return 0;
}

int s21_num(s21_decimal *value) {
  unsigned long long num = 0;
  for (int i = 2; i >= 0; i--) {
    num = num << 32;
    num = num + value->bits[i];
    value->bits[i] = num / 10;
    num %= 10;
  }
  return num;
}
