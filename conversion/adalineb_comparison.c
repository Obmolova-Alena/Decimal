#include "../s21_decimal.h"

int big_shift_left(s21_big_decimal *big_value, int n) {
  int memory = 0;

  for (int j = 0; j < n; j++) {
    memory = 0;
    for (int i = 0; i < 7; i++) {
      int temp = big_value->bits[i];
      big_value->bits[i] = (temp << 1) | memory;
      memory = (temp >> 31) & 1;
    }
  }

  return 0;
}

int shift_left(s21_decimal *value, int n) {
  int memory = 0;
  for (int i = 0; i < 3; i++) {
    int temp = value->bits[i];
    value->bits[i] <<= n;
    value->bits[i] |= memory;
    memory = temp >> (32 - n);
  }
  return 0;
}

int big_get_sign(s21_big_decimal *big_value) {
  return (big_value->bits[7] >> 31) & 1;
}

int big_get_bit(s21_big_decimal *big_value, int index) {
  unsigned int temp = 0;
  int bits_number = index / 32;
  int ind_in_bits = index % 32;

  temp = 1 << ind_in_bits;
  temp &= big_value->bits[bits_number];
  temp >>= ind_in_bits;
  return temp;
}

void big_set_bit(s21_big_decimal *big_value, int bit, int index) {
  int i = 0;
  while (index > 31) {
    index -= 32;
    i++;
  }
  if (bit == 1) {
    int val = 1 << index;
    big_value->bits[i] |= val;
  } else if (bit == 0) {
    int val = 1 << index;
    val = ~val;
    big_value->bits[i] &= val;
  }
}

int big_get_scale(s21_big_decimal *big_value) {
  int scale = 0;
  int n = 7;
  for (int index = 23 + 32 * 7; index > 15 + 32 * 7; index--) {
    scale |= big_get_bit(big_value, index) << n;
    n--;
  }
  return scale;
}

void big_set_scale(s21_big_decimal *big_value, int scale) {
  int a = 1 << 31;
  big_value->bits[7] &= a;
  big_value->bits[7] |= (scale << 16);
}

void multiplication_10(s21_big_decimal *big_value) {
  s21_big_decimal shifted1Value = *big_value;
  s21_big_decimal shifted3Value = *big_value;

  big_shift_left(&shifted1Value, 1);
  big_shift_left(&shifted3Value, 3);
  int memo = 0;
  unsigned int res_bit = 0;
  for (int k = 0; k < 224; k++) {
    res_bit =
        big_get_bit(&shifted1Value, k) + big_get_bit(&shifted3Value, k) + memo;
    memo = res_bit / 2;
    res_bit %= 2;
    big_set_bit(big_value, res_bit, k);
  }
}

void normalization(s21_big_decimal *value_1, s21_big_decimal *value_2) {
  while (big_get_scale(value_1) > big_get_scale(value_2)) {
    multiplication_10(value_2);
    int scale = big_get_scale(value_2) + 1;
    big_set_scale(value_2, scale);
  }

  while (big_get_scale(value_2) > big_get_scale(value_1)) {
    multiplication_10(value_1);
    int scale = big_get_scale(value_1) + 1;
    big_set_scale(value_1, scale);
  }
}

void convertion_big(s21_decimal *value, s21_big_decimal *big_value) {
  big_value->bits[0] = value->bits[0];
  big_value->bits[1] = value->bits[1];
  big_value->bits[2] = value->bits[2];
  big_value->bits[7] = value->bits[3];
}

int s21_zero(s21_big_decimal *big_value) {
  int flag = 1;
  for (int index = 0; index <= 224 && flag; index++) {
    if (big_get_bit(big_value, index) != 0) {
      flag = 0;
    }
  }

  return flag;
}

void print(s21_big_decimal big_value_1, s21_big_decimal big_value_2) {
  for (int i = 255; i >= 0; i--) {
    printf("%d", ((big_value_1.bits[i / 32] >> i) & 1));
    if ((i % 32) == 0) {
      printf(" ");
    }
  }
  printf("\n");
  printf("\n");
  for (int i = 255; i >= 0; i--) {
    printf("%d", ((big_value_2.bits[i / 32] >> i) & 1));
    if ((i % 32) == 0) {
      printf(" ");
    }
  }
  printf("\n");
}

int compare(s21_decimal *value_1, s21_decimal *value_2) {
  s21_big_decimal big_value_1 = {0};
  convertion_big(value_1, &big_value_1);
  s21_big_decimal big_value_2 = {0};
  convertion_big(value_2, &big_value_2);
  normalization(&big_value_1, &big_value_2);
  return compare_big(&big_value_1, &big_value_2);
}

int compare_big(s21_big_decimal *big_value_1, s21_big_decimal *big_value_2) {
  int flag, bit1, bit2 = 0;
  int sign1 = big_get_sign(big_value_1);
  int sign2 = big_get_sign(big_value_2);

  if (s21_zero(big_value_1) == 1 && s21_zero(big_value_2) == 1) {
    flag = 0;
  } else if (sign1 == 0 && sign2 == 1) {
    flag = 1;
  } else if (sign1 == 1 && sign2 == 0) {
    flag = -1;
  } else {
    for (int i = 223; i >= 0; i--) {
      bit1 = big_get_bit(big_value_1, i);
      bit2 = big_get_bit(big_value_2, i);
      if (bit1 > bit2) {
        flag = 1;
        i = -1;
      } else {
        flag = bit1 < bit2 ? -1 : 0;
        if (flag != 0) i = -1;
      }
    }

    if (sign1) flag *= -1;
  }
  return flag;
}
int s21_is_less(s21_decimal value_1, s21_decimal value_2) {
  int flag = 0;
  if (compare(&value_1, &value_2) == -1) {
    flag = TRUE;
  } else {
    flag = FALSE;
  }
  return flag;
}

int s21_is_less_or_equal(s21_decimal value_1, s21_decimal value_2) {
  int flag = 0;
  if (compare(&value_1, &value_2) == -1 || compare(&value_1, &value_2) == 0) {
    flag = TRUE;
  } else {
    flag = FALSE;
  }
  return flag;
}

int s21_is_greater(s21_decimal value_1, s21_decimal value_2) {
  int flag = 0;
  if (compare(&value_1, &value_2) == 1) {
    flag = TRUE;
  } else {
    flag = FALSE;
  }
  return flag;
}

int s21_is_greater_or_equal(s21_decimal value_1, s21_decimal value_2) {
  int flag = 0;
  if (compare(&value_1, &value_2) >= 0) {
    flag = TRUE;
  } else {
    flag = FALSE;
  }
  return flag;
}

int s21_is_equal(s21_decimal value_1, s21_decimal value_2) {
  return compare(&value_1, &value_2) == 0;
}

int s21_is_not_equal(s21_decimal value_1, s21_decimal value_2) {
  return compare(&value_1, &value_2) != 0;
}