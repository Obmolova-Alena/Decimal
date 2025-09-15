#include "../s21_decimal.h"

int same_sign(s21_big_decimal *big_value_1, s21_big_decimal *big_value_2,
              s21_big_decimal *big_result, int flag_for_mul) {
  int flager = 0;
  int flag_for_double_one = 0;
  if (flag_for_mul == 0) normalization(big_value_1, big_value_2);
  for (int i = 0; i <= 223; i++) {
    int temp1 = big_get_bit(big_value_1, i);
    int temp2 = big_get_bit(big_value_2, i);
    int result_bit = temp1 + temp2 + flag_for_double_one;
    if (result_bit % 2 == 0)
      big_set_bit(big_result, 0, i);
    else
      big_set_bit(big_result, 1, i);
    if (result_bit >= 2)
      flag_for_double_one = 1;
    else
      flag_for_double_one = 0;
  }
  big_set_sign(big_result, big_get_sign(big_value_1));
  big_set_scale(big_result, big_get_scale(big_value_1));
  return flager;
}
