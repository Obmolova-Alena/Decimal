#ifndef s21_DECIMAL_H
#define S21_DECIMAL_H
#define CALCULATION_ERROR 1

#include <limits.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define OK 0
#define CONVERSION_ERROR 1

#define TRUE 1
#define FALSE 0
#define ARITHMETIC_CALCULATION_OK 0
#define TOO_LARGE 1
#define TOO_LEAST 2
#define DIV_BY_ZERO 3

typedef struct {
  unsigned int bits[4];
} s21_decimal;

typedef struct {
  unsigned int bits[8];
} s21_big_decimal;

int diff_sign(s21_big_decimal *big_value_1, s21_big_decimal *big_value_2,
              s21_big_decimal *big_result);
int same_sign(s21_big_decimal *big_value_1, s21_big_decimal *big_value_2,
              s21_big_decimal *big_result, int flag_for_mul);
int s21_add(s21_decimal value_1, s21_decimal value_2, s21_decimal *result);
int s21_sub(s21_decimal value_1, s21_decimal value_2, s21_decimal *result);
int get_sign(s21_decimal *value);
int get_bit(s21_decimal *value, int index);
int check_sign(s21_decimal value_1, s21_decimal value_2, s21_decimal *result,
               int flag_for_ss);
void change_values(s21_big_decimal *big_value_1, s21_big_decimal *big_value_2);
void output(s21_decimal *value);
int s21_mul(s21_decimal value_1, s21_decimal value_2, s21_decimal *result);
int big_get_bit(s21_big_decimal *big_value, int index);
void big_set_bit(s21_big_decimal *big_value, int bit, int index);
void convertion_big(s21_decimal *value, s21_big_decimal *big_value);
void convertion_decimal(s21_big_decimal *big_value, s21_decimal *value);
int comp(s21_big_decimal *value_1, s21_big_decimal *value_2);
void normalization(s21_big_decimal *value_1, s21_big_decimal *value_2);
void big_set_scale(s21_big_decimal *big_value, int scale);
int big_get_scale(s21_big_decimal *big_value);
void multiplication_10(s21_big_decimal *big_value);
void copy_bits_big(s21_big_decimal *big_value_1, s21_big_decimal *big_value_2);
void big_output(s21_big_decimal *big_value_1);
int s21_big_round(s21_big_decimal *big_value, s21_big_decimal *big_value_2);
int s21_big_truncate(s21_big_decimal *big_value_1,
                     s21_big_decimal *big_value_2);
int s21_big_num(s21_big_decimal *big_value);
void big_bitwise_addition(s21_big_decimal *big_value1,
                          s21_big_decimal *big_value2);
int big_decimal_round_convertion(s21_big_decimal *big_value1,
                                 s21_decimal *result);
int s21_is_equal(s21_decimal value_1, s21_decimal value_2);
int compare(s21_decimal *value_1, s21_decimal *value_2);
int compare_big(s21_big_decimal *big_value_1, s21_big_decimal *big_value_2);
int s21_zero(s21_big_decimal *big_value);
int big_get_sign(s21_big_decimal *big_value);
int find_first_one(s21_big_decimal *big_value_1);
int s21_div(s21_decimal value_1, s21_decimal value_2, s21_decimal *result);
void big_set_sign(s21_big_decimal *big_value, int sign);
int s21_from_int_to_decimal(int src, s21_decimal *dst);
int s21_from_decimal_to_int(s21_decimal src, int *dst);
int s21_from_float_to_decimal(float src, s21_decimal *dst);
int s21_from_decimal_to_float(s21_decimal src, float *dst);
int shift_left(s21_decimal *value, int n);
void normalization(s21_big_decimal *value_1, s21_big_decimal *value_2);
int s21_is_less(s21_decimal value_1, s21_decimal value_2);
int s21_is_less_or_equal(s21_decimal value_1, s21_decimal value_2);
int s21_is_greater(s21_decimal value_1, s21_decimal value_2);
int s21_is_greater_or_equal(s21_decimal value_1, s21_decimal value_2);
int s21_is_equal(s21_decimal value_1, s21_decimal value_2);
int s21_is_not_equal(s21_decimal value_1, s21_decimal value_2);
void print(s21_big_decimal big_value_1, s21_big_decimal big_value_2);
int s21_floor(s21_decimal value, s21_decimal *result);
int s21_negate(s21_decimal value, s21_decimal *result);
int s21_round(s21_decimal value, s21_decimal *result);
int s21_truncate(s21_decimal value, s21_decimal *result);
int big_shift_left(s21_big_decimal *big_value, int n);
void set_sign(s21_decimal *decimal, int sign);
void set_scale(s21_decimal *value, int scale);
int get_scale(s21_decimal *value);
void set_bit(s21_decimal *value, int bit, int index);
void bitwise_addition(s21_decimal *value1, s21_decimal *value2);
int s21_num(s21_decimal *value);

#endif