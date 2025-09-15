#include "../s21_decimal.h"

int s21_mul(s21_decimal value_1, s21_decimal value_2, s21_decimal *result) {
  s21_big_decimal big_value_1 = {{0}};
  s21_big_decimal big_value_2 = {{0}};
  s21_big_decimal big_result = {{0}};
  int flag_for_mul = 1;
  convertion_big(&value_1, &big_value_1);
  convertion_big(&value_2, &big_value_2);
  int rem_scale = big_get_scale(&big_value_1) + big_get_scale(&big_value_2);
  big_set_scale(&big_result, big_get_scale(&big_value_1));
  for (int i = 0; i <= 223; i++) {
    if (big_get_bit(&big_value_2, i) == 1) {
      same_sign(&big_result, &big_value_1, &big_result, flag_for_mul);
    }
    big_shift_left(&big_value_1, 1);
  }
  if ((big_get_sign(&big_value_1) + big_get_sign(&big_value_2)) % 2 == 0)
    big_set_sign(&big_result, 0);
  else
    big_set_sign(&big_result, 1);
  big_set_scale(&big_result, rem_scale);
  int no_mistakes = big_decimal_round_convertion(&big_result, result);
  return no_mistakes;
}
