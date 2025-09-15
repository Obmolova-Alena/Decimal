# Decimal

В проекте необходимо реализовать библиотеку s21_decimal.h на языке С для работы с типом "decimal", который важен для финансовых расчетов из-за отсутствия погрешностей, свойственных типам с плавающей точкой. Демонстрация ключевого навыка для банковской разработки. Избежание ошибок округления при использовании float и double.
Информация

Тип Decimal представляет десятичные числа в диапазоне от -79,228,162,514,264,337,593,543,950,335 до +79,228,162,514,264,337,593,543,950,335. Он состоит из:

    1 разряда знака
    96 разрядов целого числа
    Коэффициент масштабирования (от 0 до 28)

Представление в виде массива:

typedef struct {
    int bits[4];
} s21_decimal;

Арифметические операции

    Сложение: int s21_add(s21_decimal v1, s21_decimal v2, s21_decimal *result)
    Вычитание: int s21_sub(s21_decimal v1, s21_decimal v2, s21_decimal *result)
    Умножение: int s21_mul(s21_decimal v1, s21_decimal v2, s21_decimal *result)
    Деление: int s21_div(s21_decimal v1, s21_decimal v2, s21_decimal *result)

Операторы сравнения

    int s21_is_less(s21_decimal v1, s21_decimal v2)
    int s21_is_less_or_equal(s21_decimal v1, s21_decimal v2)
    int s21_is_greater(s21_decimal v1, s21_decimal v2)
    int s21_is_greater_or_equal(s21_decimal v1, s21_decimal v2)
    int s21_is_equal(s21_decimal v1, s21_decimal v2)
    int s21_is_not_equal(s21_decimal v1, s21_decimal v2)

Преобразователи

    int s21_from_int_to_decimal(int src, s21_decimal *dst)
    int s21_from_float_to_decimal(float src, s21_decimal *dst)
    int s21_from_decimal_to_int(s21_decimal src, int *dst)
    int s21_from_decimal_to_float(s21_decimal src, float *dst)

Дополнительные функции

    int s21_floor(s21_decimal value, s21_decimal *result)
    int s21_round(s21_decimal value, s21_decimal *result)
    int s21_truncate(s21_decimal value, s21_decimal *result)
    int s21_negate(s21_decimal value, s21_decimal *result)

Числа не должны превышать допустимый диапазон и должны правильно обрабатывать округления.
