#include "../s21_decimal.h"

int diff_sign(s21_big_decimal *big_value_1, s21_big_decimal *big_value_2,
              s21_big_decimal *big_result) {
  int flager = 0;
  normalization(big_value_1, big_value_2);
  if (comp(big_value_1, big_value_2) == -1)
    change_values(big_value_1, big_value_2);
  int flag_for_double_one = 0;
  for (int i = 0; i <= 223; i++) {
    int temp1 = big_get_bit(big_value_1, i);
    int temp2 = big_get_bit(big_value_2, i);
    int stocks = 2 + temp1;
    int result_bit = stocks - temp2 - flag_for_double_one;
    if (result_bit % 2 == 0)
      big_set_bit(big_result, 0, i);
    else
      big_set_bit(big_result, 1, i);
    if (result_bit <= 1)
      flag_for_double_one = 1;
    else
      flag_for_double_one = 0;
  }
  big_set_sign(big_result, big_get_sign(big_value_1));
  big_set_scale(big_result, big_get_scale(big_value_1));
  return flager;
}

void change_values(s21_big_decimal *big_value_1, s21_big_decimal *big_value_2) {
  s21_big_decimal big_temp_value = {{0}};
  if (comp(big_value_1, big_value_2) == -1) {
    copy_bits_big(&big_temp_value, big_value_1);
    copy_bits_big(big_value_1, big_value_2);
    copy_bits_big(big_value_2, &big_temp_value);
  }
}

void copy_bits_big(s21_big_decimal *big_value_1, s21_big_decimal *big_value_2) {
  for (int i = 0; i <= 7; i++) {
    big_value_1->bits[i] = big_value_2->bits[i];
  }
}