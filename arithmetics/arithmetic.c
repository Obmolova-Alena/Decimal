#include "../s21_decimal.h"

int s21_add(s21_decimal value_1, s21_decimal value_2, s21_decimal *result) {
  int flag_for_ss = 0;
  int res = check_sign(value_1, value_2, result, flag_for_ss);
  return res;
}

int s21_sub(s21_decimal value_1, s21_decimal value_2, s21_decimal *result) {
  int flag_for_ss = 1;
  int res = check_sign(value_1, value_2, result, flag_for_ss);
  return res;
}

int check_sign(s21_decimal value_1, s21_decimal value_2, s21_decimal *result,
               int flag_for_ss) {
  int no_mistakes = 0;
  int flag_for_mul = 0;
  s21_big_decimal big_value_1 = {{0}};
  s21_big_decimal big_value_2 = {{0}};
  s21_big_decimal big_result = {{0}};
  int sign_1 = get_sign(&value_1);
  int sign_2 = get_sign(&value_2);
  convertion_big(&value_1, &big_value_1);
  convertion_big(&value_2, &big_value_2);
  if ((sign_1 == sign_2 && flag_for_ss == 0) ||
      (sign_1 != sign_2 && flag_for_ss == 1))
    no_mistakes =
        same_sign(&big_value_1, &big_value_2, &big_result, flag_for_mul);
  else if ((sign_1 == sign_2 && flag_for_ss == 1) ||
           (sign_1 != sign_2 && flag_for_ss == 0))
    no_mistakes = diff_sign(&big_value_1, &big_value_2, &big_result);
  no_mistakes = big_decimal_round_convertion(&big_result, result);
  return no_mistakes;
}

void output(s21_decimal *value) {
  for (int i = 127; i >= 0; i--) {
    printf("%d", ((value->bits[i / 32] >> i) & 1));
    if ((i % 32) == 0) {
      printf(" ");
    }
  }
  printf("\n");
  printf("\n");
}

void convertion_decimal(s21_big_decimal *big_value, s21_decimal *value) {
  value->bits[0] = big_value->bits[0];
  value->bits[1] = big_value->bits[1];
  value->bits[2] = big_value->bits[2];
  value->bits[3] = big_value->bits[7];
}

int comp(s21_big_decimal *value_1, s21_big_decimal *value_2) {
  int comp_res = 0;
  int flag = 0;
  normalization(value_1, value_2);
  for (int i = 223; i >= 0; i--) {
    int temp_1 = big_get_bit(value_1, i);
    int temp_2 = big_get_bit(value_2, i);
    if (temp_1 != temp_2 && flag == 0) {
      comp_res = (temp_1 > temp_2) ? 1 : -1;
      flag = 1;
    }
  }
  return comp_res;
}

void big_bitwise_addition(s21_big_decimal *big_value1,
                          s21_big_decimal *big_value2) {
  unsigned int res_bit = 0;
  int memo = 0;
  for (int i = 0; i < 32 * 3 || memo != 0; i++) {
    res_bit = big_get_bit(big_value1, i) + big_get_bit(big_value2, i) + memo;
    memo = res_bit / 2;
    res_bit %= 2;
    big_set_bit(big_value1, res_bit, i);
  }
}

int s21_big_round(s21_big_decimal *big_value, s21_big_decimal *big_value_2) {
  s21_big_decimal add_1 = {{1}};
  s21_big_decimal result_dop = {{0}};
  for (int index = 255; index >= 0; index--) {
    big_set_bit(&result_dop, big_get_bit(big_value, index), index);
  }
  int scale = big_get_scale(&result_dop);
  if (scale != 1) {
    s21_big_num(&result_dop);
    scale--;
  }
  int last_number = s21_big_num(&result_dop);
  if (last_number >= 5) {
    s21_big_truncate(big_value, &result_dop);
    big_bitwise_addition(&result_dop, &add_1);
    for (int index = 255; index >= 0; index--) {
      big_set_bit(big_value_2, big_get_bit(&result_dop, index), index);
    }
  } else {
    s21_big_truncate(big_value, big_value_2);
  }
  return 0;
}

int s21_big_truncate(s21_big_decimal *big_value_1,
                     s21_big_decimal *big_value_2) {
  for (int index = 255; index >= 0; index--) {
    big_set_bit(big_value_2, big_get_bit(big_value_1, index), index);
  }
  int scale = big_get_scale(big_value_2);
  if (scale != 0) {
    s21_big_num(big_value_2);
    scale--;
  }
  big_set_scale(big_value_2, scale);
  return 0;
}

void big_output(s21_big_decimal *value) {
  for (int i = 255; i >= 0; i--) {
    printf("%d", ((value->bits[i / 32] >> i) & 1));
    if ((i % 32) == 0) {
      printf(" ");
    }
  }
}

int s21_big_num(s21_big_decimal *big_value) {
  unsigned long long num = 0;
  for (int i = 6; i >= 0; i--) {
    num = num << 32;
    num = num + big_value->bits[i];
    big_value->bits[i] = num / 10;
    num %= 10;
  }
  return num;
}

int s21_big_round_bankir(s21_big_decimal *big_value,
                         s21_big_decimal *big_value_2) {
  s21_big_decimal add_1 = {{1}};
  s21_big_decimal result_dop = {{0}};

  for (int index = 255; index >= 0; index--) {
    big_set_bit(&result_dop, big_get_bit(big_value, index), index);
  }
  s21_big_truncate(big_value, &result_dop);
  int last_number_2 = s21_big_num(&result_dop);
  multiplication_10(&result_dop);
  if (last_number_2 % 2 == 0) {
    s21_big_truncate(big_value, big_value_2);
  } else {
    s21_big_decimal result_dop = {{0}};
    s21_big_truncate(big_value, &result_dop);

    big_bitwise_addition(&result_dop, &add_1);
    for (int index = 255; index >= 0; index--) {
      big_set_bit(big_value_2, big_get_bit(&result_dop, index), index);
    }
  }

  return 0;
}

int big_decimal_round_convertion(s21_big_decimal *big_value1,
                                 s21_decimal *result) {
  int i = 6;
  int flag = 0;
  int a_scale = big_get_scale(big_value1);
  if (big_get_scale(big_value1) > 28) {
    flag = TOO_LARGE;
    return flag;
  }
  if ((big_value1->bits[3] || big_value1->bits[4] || big_value1->bits[5] ||
       big_value1->bits[6]) != 0 &&
      big_get_scale(big_value1) == 0) {
    if (big_get_sign(big_value1) == 0)
      flag = TOO_LARGE;
    else
      flag = TOO_LEAST;
    return flag;
  }
  if ((big_value1->bits[3] || big_value1->bits[4] || big_value1->bits[5] ||
       big_value1->bits[6]) == 0 &&
      big_get_scale(big_value1) < 29) {
    convertion_decimal(big_value1, result);
    i = 7;
  }
  s21_big_decimal big_value_2 = {{0}};
  while ((big_value1->bits[3] != 0 || big_value1->bits[4] ||
          big_value1->bits[5] != 0 || big_value1->bits[6] != 0) &&
         (big_get_scale(big_value1) > 0) && i == 6) {
    if (((big_value1->bits[3] || big_value1->bits[4] || big_value1->bits[5] ||
          big_value1->bits[6]) != 0) &&
        a_scale == 1 && s21_big_num(big_value1) == 5) {
      multiplication_10(big_value1);
      s21_big_round_bankir(big_value1, &big_value_2);
    } else {
      s21_big_round(big_value1, &big_value_2);
    }
    if ((big_value_2.bits[3] == 0 && big_value_2.bits[4] == 0 &&
         big_value_2.bits[5] == 0 && big_value_2.bits[6] == 0)) {
      convertion_decimal(&big_value_2, result);
      i = 7;
    } else if (big_get_scale(&big_value_2) == 0 &&
               (big_value_2.bits[3] != 0 || big_value_2.bits[4] ||
                big_value_2.bits[5] != 0 || big_value_2.bits[6] != 0)) {
      if (big_get_sign(big_value1) == 0)
        flag = TOO_LARGE;
      else
        flag = TOO_LEAST;
      i = 7;
    } else {
      s21_big_decimal big_value_2 = {{0}};
      s21_big_truncate(big_value1, &big_value_2);
      for (int index = 255; index >= 0; index--) {
        big_set_bit(big_value1, big_get_bit(&big_value_2, index), index);
      }
    }
  }
  return flag;
}

int get_sign(s21_decimal *value) { return (value->bits[3] >> 31) & 1; }

void big_set_sign(s21_big_decimal *big_value, int sign) {
  if (sign == 1) {
    int sign = 1 << 31;
    big_value->bits[7] |= sign;
  } else if (sign == 0) {
    big_value->bits[7] = (big_value->bits[7] & 0x7FFFFFFF);
  }
}

int get_scale(s21_decimal *value) {
  int scale = 0;
  int n = 7;
  for (int index = 23 + 32 * 3; index > 15 + 32 * 3; index--) {
    scale |= get_bit(value, index) << n;
    n--;
  }
  return scale;
}

void set_bit(s21_decimal *value, int bit, int index) {
  int i = 0;
  while (index > 31) {
    index -= 32;
    i++;
  }
  if (bit == 1) {
    int val = 1 << index;
    value->bits[i] |= val;
  } else if (bit == 0) {
    int val = 1 << index;
    val = ~val;
    value->bits[i] &= val;
  }
}

void bitwise_addition(s21_decimal *value1, s21_decimal *value2) {
  unsigned int res_bit = 0;
  int memo = 0;
  for (int i = 0; i < 32 * 3; i++) {
    res_bit = get_bit(value1, i) + get_bit(value2, i) + memo;
    memo = res_bit / 2;
    res_bit %= 2;
    set_bit(value1, res_bit, i);
  }
}

int get_bit(s21_decimal *value, int index) {
  int temp = 0;
  if ((index < 128) && (index >= 0)) {
    temp = (value->bits[index / 32] >> (index % 32)) & 1;
  }
  return temp;
}
