#include "../s21_decimal.h"

int s21_div(s21_decimal value_1, s21_decimal value_2, s21_decimal *result) {
  s21_big_decimal big_value_1 = {{0}};
  s21_big_decimal big_value_2 = {{0}};
  s21_big_decimal big_result = {{0}};
  convertion_big(&value_1, &big_value_1);
  convertion_big(&value_2, &big_value_2);
  find_first_one(&big_value_1);
  convertion_decimal(&big_result, result);
  return 0;
}

int find_first_one(s21_big_decimal *big_value_1) {
  int i = 223;
  while (big_get_bit(big_value_1, i) != 1) i--;
  return i;
}