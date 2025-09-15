#include "./tests.h"

START_TEST(test_from_int_to_decimal_ok1) {
  int number = -2147483648;

  s21_decimal decimal_check = {{0x80000000, 0x0, 0x0, 0x80000000}};

  test_from_int_to_decimal(number, decimal_check);
}

START_TEST(test_from_int_to_decimal_ok2) {
  int number = -2147483647;

  s21_decimal decimal_check = {{0x7FFFFFFF, 0x0, 0x0, 0x80000000}};

  test_from_int_to_decimal(number, decimal_check);
}

START_TEST(test_from_int_to_decimal_ok3) {
  int number = -214748364;

  s21_decimal decimal_check = {{0xCCCCCCC, 0x0, 0x0, 0x80000000}};

  test_from_int_to_decimal(number, decimal_check);
}

START_TEST(test_from_int_to_decimal_ok4) {
  int number = -214748;

  s21_decimal decimal_check = {{0x346DC, 0x0, 0x0, 0x80000000}};

  test_from_int_to_decimal(number, decimal_check);
}

START_TEST(test_from_int_to_decimal_ok5) {
  int number = -1000;

  s21_decimal decimal_check = {{0x3E8, 0x0, 0x0, 0x80000000}};

  test_from_int_to_decimal(number, decimal_check);
}

START_TEST(test_from_int_to_decimal_ok6) {
  int number = -1;

  s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x80000000}};

  test_from_int_to_decimal(number, decimal_check);
}

START_TEST(test_from_int_to_decimal_ok7) {
  int number = 0;

  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

  test_from_int_to_decimal(number, decimal_check);
}

START_TEST(test_from_int_to_decimal_ok8) {
  int number = 1;

  s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x0}};

  test_from_int_to_decimal(number, decimal_check);
}

START_TEST(test_from_int_to_decimal_ok9) {
  int number = 1000;

  s21_decimal decimal_check = {{0x3E8, 0x0, 0x0, 0x0}};

  test_from_int_to_decimal(number, decimal_check);
}

START_TEST(test_from_int_to_decimal_ok10) {
  int number = 214748;

  s21_decimal decimal_check = {{0x346DC, 0x0, 0x0, 0x0}};

  test_from_int_to_decimal(number, decimal_check);
}

START_TEST(test_from_int_to_decimal_ok11) {
  int number = 214748364;

  s21_decimal decimal_check = {{0xCCCCCCC, 0x0, 0x0, 0x0}};

  test_from_int_to_decimal(number, decimal_check);
}

START_TEST(test_from_int_to_decimal_ok12) {
  int number = 2147483646;

  s21_decimal decimal_check = {{0x7FFFFFFE, 0x0, 0x0, 0x0}};

  test_from_int_to_decimal(number, decimal_check);
}

START_TEST(test_from_int_to_decimal_ok13) {
  int number = 2147483647;

  s21_decimal decimal_check = {{0x7FFFFFFF, 0x0, 0x0, 0x0}};

  test_from_int_to_decimal(number, decimal_check);
}

// START_TEST(test_from_decimal_to_int_fail_manual1) {
//   // 792281625.14264337593543950335
//   s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x140000}};
//   int code = s21_from_decimal_to_int(decimal, NULL);

//   ck_assert_int_eq(code, CONVERSION_ERROR);
// }

START_TEST(test_from_decimal_to_int_ok1) {
  // 792281625.14264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x140000}};
  int check = 792281625;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok2) {
  // -792281625.14264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80140000}};
  int check = -792281625;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok3) {
  // 79228162.514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x150000}};
  int check = 79228162;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok4) {
  // -79228162.514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80150000}};
  int check = -79228162;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok5) {
  // 7922816.2514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x160000}};
  int check = 7922816;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok6) {
  // -7922816.2514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80160000}};
  int check = -7922816;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok7) {
  // 792281.62514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x170000}};
  int check = 792281;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok8) {
  // -792281.62514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80170000}};
  int check = -792281;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok9) {
  // 79228.162514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x180000}};
  int check = 79228;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok10) {
  // -79228.162514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80180000}};
  int check = -79228;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok11) {
  // 7922.8162514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x190000}};
  int check = 7922;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok12) {
  // -7922.8162514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80190000}};
  int check = -7922;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok13) {
  // 792.28162514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x1A0000}};
  int check = 792;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok14) {
  // -792.28162514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x801A0000}};
  int check = -792;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok15) {
  // 79.228162514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x1B0000}};
  int check = 79;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok16) {
  // -79.228162514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x801B0000}};
  int check = -79;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok17) {
  // 7.9228162514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x1C0000}};
  int check = 7;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok18) {
  // -7.9228162514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x801C0000}};
  int check = -7;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok19) {
  // 792281625.14264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x140000}};
  int check = 792281625;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok20) {
  // -792281625.14264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80140000}};
  int check = -792281625;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok21) {
  // 79228162.514264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x150000}};
  int check = 79228162;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok22) {
  // -79228162.514264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80150000}};
  int check = -79228162;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok23) {
  // 7922816.2514264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x160000}};
  int check = 7922816;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok24) {
  // -7922816.2514264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80160000}};
  int check = -7922816;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok25) {
  // 792281.62514264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x170000}};
  int check = 792281;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok26) {
  // -792281.62514264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80170000}};
  int check = -792281;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok27) {
  // 79228.162514264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x180000}};
  int check = 79228;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok28) {
  // -79228.162514264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80180000}};
  int check = -79228;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok29) {
  // 7922.8162514264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x190000}};
  int check = 7922;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok30) {
  // -7922.8162514264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80190000}};
  int check = -7922;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok31) {
  // 792.28162514264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x1A0000}};
  int check = 792;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok32) {
  // -792.28162514264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x801A0000}};
  int check = -792;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok33) {
  // 79.228162514264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x1B0000}};
  int check = 79;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok34) {
  // -79.228162514264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x801B0000}};
  int check = -79;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok35) {
  // 7.9228162514264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x1C0000}};
  int check = 7;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok36) {
  // -7.9228162514264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x801C0000}};
  int check = -7;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok37) {
  // 528187750.09509558395695966890
  s21_decimal decimal = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x140000}};
  int check = 528187750;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok38) {
  // -528187750.09509558395695966890
  s21_decimal decimal = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80140000}};
  int check = -528187750;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok39) {
  // 5.2818775009509558395695966890
  s21_decimal decimal = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x1C0000}};
  int check = 5;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok40) {
  // -5.2818775009509558395695966890
  s21_decimal decimal = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x801C0000}};
  int check = -5;

  test_from_decimal_to_int(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_int_ok41) {
  // 528187750.09509558392832655360
  s21_decimal decimal = {{0x0, 0xAAAAAAAA, 0xAAAAAAAA, 0x140000}};
  int check = 528187750;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok42) {
  // -528187750.09509558392832655360
  s21_decimal decimal = {{0x0, 0xAAAAAAAA, 0xAAAAAAAA, 0x80140000}};
  int check = -528187750;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok43) {
  // 5.2818775009509558392832655360
  s21_decimal decimal = {{0x0, 0xAAAAAAAA, 0xAAAAAAAA, 0x1C0000}};
  int check = 5;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok44) {
  // -5.2818775009509558392832655360
  s21_decimal decimal = {{0x0, 0xAAAAAAAA, 0xAAAAAAAA, 0x801C0000}};
  int check = -5;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok45) {
  // 528187749.97211729016086244010
  s21_decimal decimal = {{0xAAAAAAAA, 0x0, 0xAAAAAAAA, 0x140000}};
  int check = 528187749;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok46) {
  // -528187749.97211729016086244010
  s21_decimal decimal = {{0xAAAAAAAA, 0x0, 0xAAAAAAAA, 0x80140000}};
  int check = -528187749;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok47) {
  // 5.2818774997211729016086244010
  s21_decimal decimal = {{0xAAAAAAAA, 0x0, 0xAAAAAAAA, 0x1C0000}};
  int check = 5;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok48) {
  // -5.2818774997211729016086244010
  s21_decimal decimal = {{0xAAAAAAAA, 0x0, 0xAAAAAAAA, 0x801C0000}};
  int check = -5;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok49) {
  // 528187749.97211729013222932480
  s21_decimal decimal = {{0x0, 0x0, 0xAAAAAAAA, 0x140000}};
  int check = 528187749;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok50) {
  // -528187749.97211729013222932480
  s21_decimal decimal = {{0x0, 0x0, 0xAAAAAAAA, 0x80140000}};
  int check = -528187749;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok51) {
  // 5.2818774997211729013222932480
  s21_decimal decimal = {{0x0, 0x0, 0xAAAAAAAA, 0x1C0000}};
  int check = 5;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok52) {
  // -5.2818774997211729013222932480
  s21_decimal decimal = {{0x0, 0x0, 0xAAAAAAAA, 0x801C0000}};
  int check = -5;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok53) {
  // 122978293.82473034410
  s21_decimal decimal = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0xB0000}};
  int check = 122978293;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok54) {
  // -122978293.82473034410
  s21_decimal decimal = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x800B0000}};
  int check = -122978293;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok55) {
  // 1.2297829382473034410
  s21_decimal decimal = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x130000}};
  int check = 1;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok56) {
  // -1.2297829382473034410
  s21_decimal decimal = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x80130000}};
  int check = -1;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok57) {
  // 122978293.79609722880
  s21_decimal decimal = {{0x0, 0xAAAAAAAA, 0x0, 0xB0000}};
  int check = 122978293;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok58) {
  // -122978293.79609722880
  s21_decimal decimal = {{0x0, 0xAAAAAAAA, 0x0, 0x800B0000}};
  int check = -122978293;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok59) {
  // 1.2297829379609722880
  s21_decimal decimal = {{0x0, 0xAAAAAAAA, 0x0, 0x130000}};
  int check = 1;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok60) {
  // -1.2297829379609722880
  s21_decimal decimal = {{0x0, 0xAAAAAAAA, 0x0, 0x80130000}};
  int check = -1;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok61) {
  // 286331153.0
  s21_decimal decimal = {{0xAAAAAAAA, 0x0, 0x0, 0x10000}};
  int check = 286331153;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok62) {
  // -286331153.0
  s21_decimal decimal = {{0xAAAAAAAA, 0x0, 0x0, 0x80010000}};
  int check = -286331153;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok63) {
  // 286331.1530
  s21_decimal decimal = {{0xAAAAAAAA, 0x0, 0x0, 0x40000}};
  int check = 286331;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok64) {
  // -286331.1530
  s21_decimal decimal = {{0xAAAAAAAA, 0x0, 0x0, 0x80040000}};
  int check = -286331;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok65) {
  // 2.863311530
  s21_decimal decimal = {{0xAAAAAAAA, 0x0, 0x0, 0x90000}};
  int check = 2;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok66) {
  // -2.863311530
  s21_decimal decimal = {{0xAAAAAAAA, 0x0, 0x0, 0x80090000}};
  int check = -2;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok67) {
  // 264093875.04754779197847983445
  s21_decimal decimal = {{0x55555555, 0x55555555, 0x55555555, 0x140000}};
  int check = 264093875;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok68) {
  // -264093875.04754779197847983445
  s21_decimal decimal = {{0x55555555, 0x55555555, 0x55555555, 0x80140000}};
  int check = -264093875;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok69) {
  // 2.6409387504754779197847983445
  s21_decimal decimal = {{0x55555555, 0x55555555, 0x55555555, 0x1C0000}};
  int check = 2;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok70) {
  // -2.6409387504754779197847983445
  s21_decimal decimal = {{0x55555555, 0x55555555, 0x55555555, 0x801C0000}};
  int check = -2;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok71) {
  // 264093875.04754779196416327680
  s21_decimal decimal = {{0x0, 0x55555555, 0x55555555, 0x140000}};
  int check = 264093875;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok72) {
  // -264093875.04754779196416327680
  s21_decimal decimal = {{0x0, 0x55555555, 0x55555555, 0x80140000}};
  int check = -264093875;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok73) {
  // 2.6409387504754779196416327680
  s21_decimal decimal = {{0x0, 0x55555555, 0x55555555, 0x1C0000}};
  int check = 2;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok74) {
  // -2.6409387504754779196416327680
  s21_decimal decimal = {{0x0, 0x55555555, 0x55555555, 0x801C0000}};
  int check = -2;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok75) {
  // 264093874.98605864508043122005
  s21_decimal decimal = {{0x55555555, 0x0, 0x55555555, 0x140000}};
  int check = 264093874;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok76) {
  // -264093874.98605864508043122005
  s21_decimal decimal = {{0x55555555, 0x0, 0x55555555, 0x80140000}};
  int check = -264093874;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok77) {
  // 2.6409387498605864508043122005
  s21_decimal decimal = {{0x55555555, 0x0, 0x55555555, 0x1C0000}};
  int check = 2;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok78) {
  // -2.6409387498605864508043122005
  s21_decimal decimal = {{0x55555555, 0x0, 0x55555555, 0x801C0000}};
  int check = -2;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok79) {
  // 264093874.98605864506611466240
  s21_decimal decimal = {{0x0, 0x0, 0x55555555, 0x140000}};
  int check = 264093874;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok80) {
  // -264093874.98605864506611466240
  s21_decimal decimal = {{0x0, 0x0, 0x55555555, 0x80140000}};
  int check = -264093874;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok81) {
  // 2.6409387498605864506611466240
  s21_decimal decimal = {{0x0, 0x0, 0x55555555, 0x1C0000}};
  int check = 2;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok82) {
  // -2.6409387498605864506611466240
  s21_decimal decimal = {{0x0, 0x0, 0x55555555, 0x801C0000}};
  int check = -2;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok83) {
  // 6148914.691236517205
  s21_decimal decimal = {{0x55555555, 0x55555555, 0x0, 0xC0000}};
  int check = 6148914;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok84) {
  // -6148914.691236517205
  s21_decimal decimal = {{0x55555555, 0x55555555, 0x0, 0x800C0000}};
  int check = -6148914;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok85) {
  // 6.148914691236517205
  s21_decimal decimal = {{0x55555555, 0x55555555, 0x0, 0x120000}};
  int check = 6;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok86) {
  // -6.148914691236517205
  s21_decimal decimal = {{0x55555555, 0x55555555, 0x0, 0x80120000}};
  int check = -6;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok87) {
  // 6148914.689804861440
  s21_decimal decimal = {{0x0, 0x55555555, 0x0, 0xC0000}};
  int check = 6148914;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok88) {
  // -6148914.689804861440
  s21_decimal decimal = {{0x0, 0x55555555, 0x0, 0x800C0000}};
  int check = -6148914;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok89) {
  // 6.148914689804861440
  s21_decimal decimal = {{0x0, 0x55555555, 0x0, 0x120000}};
  int check = 6;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok90) {
  // -6.148914689804861440
  s21_decimal decimal = {{0x0, 0x55555555, 0x0, 0x80120000}};
  int check = -6;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok91) {
  // 1431655765
  s21_decimal decimal = {{0x55555555, 0x0, 0x0, 0x0}};
  int check = 1431655765;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok92) {
  // -1431655765
  s21_decimal decimal = {{0x55555555, 0x0, 0x0, 0x80000000}};
  int check = -1431655765;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok93) {
  // 143165576.5
  s21_decimal decimal = {{0x55555555, 0x0, 0x0, 0x10000}};
  int check = 143165576;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok94) {
  // -143165576.5
  s21_decimal decimal = {{0x55555555, 0x0, 0x0, 0x80010000}};
  int check = -143165576;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok95) {
  // 143165.5765
  s21_decimal decimal = {{0x55555555, 0x0, 0x0, 0x40000}};
  int check = 143165;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok96) {
  // -143165.5765
  s21_decimal decimal = {{0x55555555, 0x0, 0x0, 0x80040000}};
  int check = -143165;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok97) {
  // 1.431655765
  s21_decimal decimal = {{0x55555555, 0x0, 0x0, 0x90000}};
  int check = 1;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok98) {
  // -1.431655765
  s21_decimal decimal = {{0x55555555, 0x0, 0x0, 0x80090000}};
  int check = -1;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok99) {
  // 184467440.78004518913
  s21_decimal decimal = {{0x1, 0x1, 0x1, 0xB0000}};
  int check = 184467440;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_ok100) {
  // -184467440.78004518913
  s21_decimal decimal = {{0x1, 0x1, 0x1, 0x800B0000}};
  int check = -184467440;

  test_from_decimal_to_int(decimal, check);
}

// START_TEST(test_from_decimal_to_int_fail1) {
//   // 79228162514264337593543950335
//   s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};

//   test_from_decimal_to_int_fail(decimal);
// }

// START_TEST(test_from_decimal_to_int_fail2) {
//   // -79228162514264337593543950335
//   s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};

//   test_from_decimal_to_int_fail(decimal);
// }

// START_TEST(test_from_decimal_to_int_fail3) {
//   // 7922816251426433759354395033.5
//   s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};

//   test_from_decimal_to_int_fail(decimal);
// }

// START_TEST(test_from_decimal_to_int_fail4) {
//   // -7922816251426433759354395033.5
//   s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};

//   test_from_decimal_to_int_fail(decimal);
// }

// START_TEST(test_from_decimal_to_int_fail5) {
//   // 792281625142643375935439503.35
//   s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x20000}};

//   test_from_decimal_to_int_fail(decimal);
// }

// START_TEST(test_from_decimal_to_int_fail6) {
//   // -792281625142643375935439503.35
//   s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80020000}};

//   test_from_decimal_to_int_fail(decimal);
// }

// START_TEST(test_from_decimal_to_int_fail7) {
//   // 79228162514264337593543950.335
//   s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x30000}};

//   test_from_decimal_to_int_fail(decimal);
// }

// START_TEST(test_from_decimal_to_int_fail8) {
//   // -79228162514264337593543950.335
//   s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80030000}};

//   test_from_decimal_to_int_fail(decimal);
// }

// START_TEST(test_from_decimal_to_int_fail9) {
//   // 7922816251426433759354395.0335
//   s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x40000}};

//   test_from_decimal_to_int_fail(decimal);
// }

// START_TEST(test_from_decimal_to_int_fail10) {
//   // -7922816251426433759354395.0335
//   s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80040000}};

//   test_from_decimal_to_int_fail(decimal);
// }

// START_TEST(test_from_decimal_to_int_fail11) {
//   // 792281625142643375935439.50335
//   s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x50000}};

//   test_from_decimal_to_int_fail(decimal);
// }

// START_TEST(test_from_decimal_to_int_fail12) {
//   // -792281625142643375935439.50335
//   s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80050000}};

//   test_from_decimal_to_int_fail(decimal);
// }

// START_TEST(test_from_decimal_to_int_fail13) {
//   // 79228162514264337593543.950335
//   s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x60000}};

//   test_from_decimal_to_int_fail(decimal);
// }

// START_TEST(test_from_decimal_to_int_fail14) {
//   // -79228162514264337593543.950335
//   s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80060000}};

//   test_from_decimal_to_int_fail(decimal);
// }

// START_TEST(test_from_decimal_to_int_fail15) {
//   // 7922816251426433759354.3950335
//   s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x70000}};

//   test_from_decimal_to_int_fail(decimal);
// }

// START_TEST(test_from_decimal_to_int_fail16) {
//   // -7922816251426433759354.3950335
//   s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80070000}};

//   test_from_decimal_to_int_fail(decimal);
// }

// START_TEST(test_from_decimal_to_int_fail17) {
//   // 792281625142643375935.43950335
//   s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000}};

//   test_from_decimal_to_int_fail(decimal);
// }

// START_TEST(test_from_decimal_to_int_fail18) {
//   // -792281625142643375935.43950335
//   s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80080000}};

//   test_from_decimal_to_int_fail(decimal);
// }

// START_TEST(test_from_decimal_to_int_fail19) {
//   // 79228162514264337593.543950335
//   s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x90000}};

//   test_from_decimal_to_int_fail(decimal);
// }

// START_TEST(test_from_decimal_to_int_fail20) {
//   // -79228162514264337593.543950335
//   s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80090000}};

//   test_from_decimal_to_int_fail(decimal);
// }

// START_TEST(test_from_decimal_to_int_fail21) {
//   // 7922816251426433759.3543950335
//   s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xA0000}};

//   test_from_decimal_to_int_fail(decimal);
// }

// START_TEST(test_from_decimal_to_int_fail22) {
//   // -7922816251426433759.3543950335
//   s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x800A0000}};

//   test_from_decimal_to_int_fail(decimal);
// }

// START_TEST(test_from_decimal_to_int_fail23) {
//   // 792281625142643375.93543950335
//   s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xB0000}};

//   test_from_decimal_to_int_fail(decimal);
// }

// START_TEST(test_from_decimal_to_int_fail24) {
//   // -792281625142643375.93543950335
//   s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x800B0000}};

//   test_from_decimal_to_int_fail(decimal);
// }

// START_TEST(test_from_decimal_to_int_fail25) {
//   // 79228162514264337.593543950335
//   s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xC0000}};

//   test_from_decimal_to_int_fail(decimal);
// }

// START_TEST(test_from_decimal_to_int_fail26) {
//   // -79228162514264337.593543950335
//   s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x800C0000}};

//   test_from_decimal_to_int_fail(decimal);
// }

// START_TEST(test_from_decimal_to_int_fail27) {
//   // 7922816251426433.7593543950335
//   s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xD0000}};

//   test_from_decimal_to_int_fail(decimal);
// }

// START_TEST(test_from_decimal_to_int_fail28) {
//   // -7922816251426433.7593543950335
//   s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x800D0000}};

//   test_from_decimal_to_int_fail(decimal);
// }

// START_TEST(test_from_decimal_to_int_fail29) {
//   // 792281625142643.37593543950335
//   s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xE0000}};

//   test_from_decimal_to_int_fail(decimal);
// }

// START_TEST(test_from_decimal_to_int_fail30) {
//   // -792281625142643.37593543950335
//   s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x800E0000}};

//   test_from_decimal_to_int_fail(decimal);
// }

// START_TEST(test_from_decimal_to_int_fail31) {
//   // 79228162514264.337593543950335
//   s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xF0000}};

//   test_from_decimal_to_int_fail(decimal);
// }

// START_TEST(test_from_decimal_to_int_fail32) {
//   // -79228162514264.337593543950335
//   s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x800F0000}};

//   test_from_decimal_to_int_fail(decimal);
// }

// START_TEST(test_from_decimal_to_int_fail33) {
//   // 7922816251426.4337593543950335
//   s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x100000}};

//   test_from_decimal_to_int_fail(decimal);
// }

// START_TEST(test_from_decimal_to_int_fail34) {
//   // -7922816251426.4337593543950335
//   s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80100000}};

//   test_from_decimal_to_int_fail(decimal);
// }

// START_TEST(test_from_decimal_to_int_fail35) {
//   // 792281625142.64337593543950335
//   s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x110000}};

//   test_from_decimal_to_int_fail(decimal);
// }

// START_TEST(test_from_decimal_to_int_fail36) {
//   // -792281625142.64337593543950335
//   s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80110000}};

//   test_from_decimal_to_int_fail(decimal);
// }

// START_TEST(test_from_decimal_to_int_fail37) {
//   // 79228162514.264337593543950335
//   s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x120000}};

//   test_from_decimal_to_int_fail(decimal);
// }

// START_TEST(test_from_decimal_to_int_fail38) {
//   // -79228162514.264337593543950335
//   s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80120000}};

//   test_from_decimal_to_int_fail(decimal);
// }

// START_TEST(test_from_decimal_to_int_fail39) {
//   // 7922816251.4264337593543950335
//   s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x130000}};

//   test_from_decimal_to_int_fail(decimal);
// }

// START_TEST(test_from_decimal_to_int_fail40) {
//   // -7922816251.4264337593543950335
//   s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80130000}};

//   test_from_decimal_to_int_fail(decimal);
// }

// START_TEST(test_from_decimal_to_int_fail41) {
//   // 79228162514264337593543950334
//   s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};

//   test_from_decimal_to_int_fail(decimal);
// }

// START_TEST(test_from_decimal_to_int_fail42) {
//   // -79228162514264337593543950334
//   s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};

//   test_from_decimal_to_int_fail(decimal);
// }

// START_TEST(test_from_decimal_to_int_fail43) {
//   // 7922816251426433759354395033.4
//   s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};

//   test_from_decimal_to_int_fail(decimal);
// }

// START_TEST(test_from_decimal_to_int_fail44) {
//   // -7922816251426433759354395033.4
//   s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};

//   test_from_decimal_to_int_fail(decimal);
// }

// START_TEST(test_from_decimal_to_int_fail45) {
//   // 792281625142643375935439503.34
//   s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x20000}};

//   test_from_decimal_to_int_fail(decimal);
// }

// START_TEST(test_from_decimal_to_int_fail46) {
//   // -792281625142643375935439503.34
//   s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80020000}};

//   test_from_decimal_to_int_fail(decimal);
// }

// START_TEST(test_from_decimal_to_int_fail47) {
//   // 79228162514264337593543950.334
//   s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x30000}};

//   test_from_decimal_to_int_fail(decimal);
// }

// START_TEST(test_from_decimal_to_int_fail48) {
//   // -79228162514264337593543950.334
//   s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80030000}};

//   test_from_decimal_to_int_fail(decimal);
// }

// START_TEST(test_from_decimal_to_int_fail49) {
//   // 7922816251426433759354395.0334
//   s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x40000}};

//   test_from_decimal_to_int_fail(decimal);
// }

// START_TEST(test_from_decimal_to_int_fail50) {
//   // -7922816251426433759354395.0334
//   s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80040000}};

//   test_from_decimal_to_int_fail(decimal);
// }
// END_TEST

// ------------------------------------------------------------------------------------------>
// START_TEST(test_from_float_to_decimal_incorrect1) {
//   float f = 1.0f;
//   int code = s21_from_float_to_decimal(f, NULL);

//   ck_assert_int_eq(code, CONVERSION_ERROR);
// }
// END_TEST

// START_TEST(test_from_float_to_decimal_fail_big) {
//   float f = fails_big[_i];
//   s21_decimal result;

//   int code = s21_from_float_to_decimal(f, &result);
//   ck_assert_int_eq(code, CONVERSION_ERROR);
// }
// END_TEST

// START_TEST(test_from_float_to_decimal_fail_big_negate) {
//   float f = -fails_big[_i];
//   s21_decimal result;

//   int code = s21_from_float_to_decimal(f, &result);
//   ck_assert_int_eq(code, CONVERSION_ERROR);
// }
// END_TEST

// START_TEST(test_from_float_to_decimal_fail_small) {
//   float f = fails_small[_i];
//   s21_decimal result;
//   s21_decimal check = {{0x0, 0x0, 0x0, 0x0}};

//   int code = s21_from_float_to_decimal(f, &result);
//   ck_assert_int_eq(code, CONVERSION_ERROR);
//   ck_assert_int_eq(s21_is_equal(result, check), 1);
// }
// END_TEST

// START_TEST(test_from_float_to_decimal_fail_small_negate) {
//   float f = -fails_small[_i];
//   s21_decimal result;
//   s21_decimal check = {{0x0, 0x0, 0x0, 0x0}};

//   int code = s21_from_float_to_decimal(f, &result);
//   ck_assert_int_eq(code, CONVERSION_ERROR);
//   ck_assert_int_eq(s21_is_equal(result, check), 1);
// }
// END_TEST

// START_TEST(test_from_float_to_decimal_unnormal1) {
//   float f = 0.0;
//   s21_decimal result;
//   s21_decimal check = {{0x0, 0x0, 0x0, 0x0}};

//   int code = s21_from_float_to_decimal(f, &result);
//   ck_assert_int_eq(code, CONVERSION_OK);
//   ck_assert_int_eq(s21_is_equal(result, check), 1);
// }
// END_TEST

// // START_TEST(test_from_float_to_decimal_unnormal2) {
// //   float f = -0.0;
// //   s21_decimal result;
// //   s21_decimal check = {{0x0, 0x0, 0x0, 0x80000000}};

// //   int code = s21_from_float_to_decimal(f, &result);

// //   int sign_check = s21_get_decimal_sign(check);
// //   int sign_result = s21_get_decimal_sign(result);

// //   ck_assert_int_eq(code, CONVERSION_OK);
// //   ck_assert_int_eq(s21_is_equal(result, check), 1);
// //   ck_assert_int_eq(sign_check, sign_result);
// // }
// // END_TEST

// START_TEST(test_from_float_to_decimal_unnormal3) {
//   float f = INFINITY;
//   s21_decimal result;

//   int code = s21_from_float_to_decimal(f, &result);
//   ck_assert_int_eq(code, CONVERSION_ERROR);
// }
// END_TEST

// START_TEST(test_from_float_to_decimal_unnormal4) {
//   float f = -INFINITY;
//   s21_decimal result;

//   int code = s21_from_float_to_decimal(f, &result);
//   ck_assert_int_eq(code, CONVERSION_ERROR);
// }
// END_TEST

// START_TEST(test_from_float_to_decimal_unnormal5) {
//   float f = NAN;
//   s21_decimal result;

//   int code = s21_from_float_to_decimal(f, &result);
//   ck_assert_int_eq(code, CONVERSION_ERROR);
// }
// END_TEST

// START_TEST(test_from_float_to_decimal_unnormal6) {
//   float f = -NAN;
//   s21_decimal result;

//   int code = s21_from_float_to_decimal(f, &result);
//   ck_assert_int_eq(code, CONVERSION_ERROR);
// }
// END_TEST

START_TEST(test_from_float_to_decimal_ok1) {
  // 2.28401628E-19
  int f = 545706772;
  // 0.0000000000000000002284016
  s21_decimal decimal_check = {{0x22D9F0, 0x0, 0x0, 0x190000}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok2) {
  // -2.28401628E-19
  int f = -1601776876;
  // -0.0000000000000000002284016
  s21_decimal decimal_check = {{0x22D9F0, 0x0, 0x0, 0x80190000}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok3) {
  // 5.92141241E+23
  int f = 1727711253;
  // 592141200000000000000000
  s21_decimal decimal_check = {{0xBF280000, 0x9ED0576, 0x7D64, 0x0}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok4) {
  // -5.92141241E+23
  int f = -419772395;
  // -592141200000000000000000
  s21_decimal decimal_check = {{0xBF280000, 0x9ED0576, 0x7D64, 0x80000000}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok5) {
  // 2.1349025E-18
  int f = 572360491;
  // 0.000000000000000002134902
  s21_decimal decimal_check = {{0x209376, 0x0, 0x0, 0x180000}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok6) {
  // -2.1349025E-18
  int f = -1575123157;
  // -0.000000000000000002134902
  s21_decimal decimal_check = {{0x209376, 0x0, 0x0, 0x80180000}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok7) {
  // 2.38582807E-08
  int f = 852291818;
  // 0.00000002385828
  s21_decimal decimal_check = {{0x2467A4, 0x0, 0x0, 0xE0000}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok8) {
  // -2.38582807E-08
  int f = -1295191830;
  // -0.00000002385828
  s21_decimal decimal_check = {{0x2467A4, 0x0, 0x0, 0x800E0000}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok9) {
  // 7.91617864E+11
  int f = 1396199450;
  // 791617900000
  s21_decimal decimal_check = {{0x501A8DE0, 0xB8, 0x0, 0x0}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok10) {
  // -7.91617864E+11
  int f = -751284198;
  // -791617900000
  s21_decimal decimal_check = {{0x501A8DE0, 0xB8, 0x0, 0x80000000}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok11) {
  // 1.99102057E+21
  int f = 1658314220;
  // 1991021000000000000000
  s21_decimal decimal_check = {{0x5F048000, 0xEEF78A9E, 0x6B, 0x0}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok12) {
  // -1.99102057E+21
  int f = -489169428;
  // -1991021000000000000000
  s21_decimal decimal_check = {{0x5F048000, 0xEEF78A9E, 0x6B, 0x80000000}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok13) {
  // 9.29209423E+24
  int f = 1760949678;
  // 9292094000000000000000000
  s21_decimal decimal_check = {{0xE380000, 0x6CD28004, 0x7AFAD, 0x0}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok14) {
  // -9.29209423E+24
  int f = -386533970;
  // -9292094000000000000000000
  s21_decimal decimal_check = {{0xE380000, 0x6CD28004, 0x7AFAD, 0x80000000}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok15) {
  // 0.000115481133
  int f = 955395702;
  // 0.0001154811
  s21_decimal decimal_check = {{0x119EFB, 0x0, 0x0, 0xA0000}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok16) {
  // -0.000115481133
  int f = -1192087946;
  // -0.0001154811
  s21_decimal decimal_check = {{0x119EFB, 0x0, 0x0, 0x800A0000}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok17) {
  // 8.66900895E-23
  int f = 449944209;
  // 0.0000000000000000000000866901
  s21_decimal decimal_check = {{0xD3A55, 0x0, 0x0, 0x1C0000}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok18) {
  // -8.66900895E-23
  int f = -1697539439;
  // -0.0000000000000000000000866901
  s21_decimal decimal_check = {{0xD3A55, 0x0, 0x0, 0x801C0000}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok19) {
  // 3.91406387E+11
  int f = 1387676487;
  // 391406400000
  s21_decimal decimal_check = {{0x21A3B200, 0x5B, 0x0, 0x0}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok20) {
  // -3.91406387E+11
  int f = -759807161;
  // -391406400000
  s21_decimal decimal_check = {{0x21A3B200, 0x5B, 0x0, 0x80000000}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok21) {
  // 1.54636995E-16
  int f = 624052425;
  // 0.000000000000000154637
  s21_decimal decimal_check = {{0x25C0D, 0x0, 0x0, 0x150000}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok22) {
  // -1.54636995E-16
  int f = -1523431223;
  // -0.000000000000000154637
  s21_decimal decimal_check = {{0x25C0D, 0x0, 0x0, 0x80150000}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok23) {
  // 1.05583253E-13
  int f = 703447194;
  // 0.0000000000001055833
  s21_decimal decimal_check = {{0x101C59, 0x0, 0x0, 0x130000}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok24) {
  // -1.05583253E-13
  int f = -1444036454;
  // -0.0000000000001055833
  s21_decimal decimal_check = {{0x101C59, 0x0, 0x0, 0x80130000}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok25) {
  // 4882.71582
  int f = 1167627706;
  // 4882.716
  s21_decimal decimal_check = {{0x4A811C, 0x0, 0x0, 0x30000}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok26) {
  // -4882.71582
  int f = -979855942;
  // -4882.716
  s21_decimal decimal_check = {{0x4A811C, 0x0, 0x0, 0x80030000}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok27) {
  // 1.9929916E-26
  int f = 348479575;
  // 0.0000000000000000000000000199
  s21_decimal decimal_check = {{0xC7, 0x0, 0x0, 0x1C0000}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok28) {
  // -1.9929916E-26
  int f = -1799004073;
  // -0.0000000000000000000000000199
  s21_decimal decimal_check = {{0xC7, 0x0, 0x0, 0x801C0000}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok29) {
  // 3574.10864
  int f = 1163878845;
  // 3574.109
  s21_decimal decimal_check = {{0x36895D, 0x0, 0x0, 0x30000}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok30) {
  // -3574.10864
  int f = -983604803;
  // -3574.109
  s21_decimal decimal_check = {{0x36895D, 0x0, 0x0, 0x80030000}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok31) {
  // 3.62930687E-13
  int f = 718032851;
  // 0.0000000000003629307
  s21_decimal decimal_check = {{0x3760FB, 0x0, 0x0, 0x130000}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok32) {
  // -3.62930687E-13
  int f = -1429450797;
  // -0.0000000000003629307
  s21_decimal decimal_check = {{0x3760FB, 0x0, 0x0, 0x80130000}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok33) {
  // 2.1409382E-19
  int f = 545047011;
  // 0.0000000000000000002140938
  s21_decimal decimal_check = {{0x20AB0A, 0x0, 0x0, 0x190000}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok34) {
  // -2.1409382E-19
  int f = -1602436637;
  // -0.0000000000000000002140938
  s21_decimal decimal_check = {{0x20AB0A, 0x0, 0x0, 0x80190000}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok35) {
  // 241.244507
  int f = 1131495064;
  // 241.2445
  s21_decimal decimal_check = {{0x24CF9D, 0x0, 0x0, 0x40000}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok36) {
  // -241.244507
  int f = -1015988584;
  // -241.2445
  s21_decimal decimal_check = {{0x24CF9D, 0x0, 0x0, 0x80040000}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok37) {
  // 802580.063
  int f = 1229189441;
  // 802580.1
  s21_decimal decimal_check = {{0x7A76C9, 0x0, 0x0, 0x10000}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok38) {
  // -802580.063
  int f = -918294207;
  // -802580.1
  s21_decimal decimal_check = {{0x7A76C9, 0x0, 0x0, 0x80010000}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok39) {
  // 8.38680669E+16
  int f = 1536490184;
  // 83868070000000000
  s21_decimal decimal_check = {{0xB858FC00, 0x129F590, 0x0, 0x0}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok40) {
  // -8.38680669E+16
  int f = -610993464;
  // -83868070000000000
  s21_decimal decimal_check = {{0xB858FC00, 0x129F590, 0x0, 0x80000000}};

  test_from_float_to_decimal(f, decimal_check);
}
END_TEST

START_TEST(test_from_float_to_decimal_ok41) {
  // 3.93541897E-17
  int f = 607485242;
  // 0.00000000000000003935419
  s21_decimal decimal_check = {{0x3C0CBB, 0x0, 0x0, 0x170000}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok42) {
  // -3.93541897E-17
  int f = -1539998406;
  // -0.00000000000000003935419
  s21_decimal decimal_check = {{0x3C0CBB, 0x0, 0x0, 0x80170000}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok43) {
  // 1.45764168E-20
  int f = 512338845;
  // 0.00000000000000000001457642
  s21_decimal decimal_check = {{0x163DEA, 0x0, 0x0, 0x1A0000}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok44) {
  // -1.45764168E-20
  int f = -1635144803;
  // -0.00000000000000000001457642
  s21_decimal decimal_check = {{0x163DEA, 0x0, 0x0, 0x801A0000}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok45) {
  // 1.34647118E+20
  int f = 1625920341;
  // 134647100000000000000
  s21_decimal decimal_check = {{0x207FC000, 0x4C9A980F, 0x7, 0x0}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok46) {
  // -1.34647118E+20
  int f = -521563307;
  // -134647100000000000000
  s21_decimal decimal_check = {{0x207FC000, 0x4C9A980F, 0x7, 0x80000000}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok47) {
  // 2.20958198E-20
  int f = 516993130;
  // 0.00000000000000000002209582
  s21_decimal decimal_check = {{0x21B72E, 0x0, 0x0, 0x1A0000}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok48) {
  // -2.20958198E-20
  int f = -1630490518;
  // -0.00000000000000000002209582
  s21_decimal decimal_check = {{0x21B72E, 0x0, 0x0, 0x801A0000}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok49) {
  // 5.36623235E-09
  int f = 834167265;
  // 0.000000005366232
  s21_decimal decimal_check = {{0x51E1D8, 0x0, 0x0, 0xF0000}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok50) {
  // -5.36623235E-09
  int f = -1313316383;
  // -0.000000005366232
  s21_decimal decimal_check = {{0x51E1D8, 0x0, 0x0, 0x800F0000}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok51) {
  // 4.71008997E+17
  int f = 1557212038;
  // 471009000000000000
  s21_decimal decimal_check = {{0xA3031000, 0x6895C30, 0x0, 0x0}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok52) {
  // -4.71008997E+17
  int f = -590271610;
  // -471009000000000000
  s21_decimal decimal_check = {{0xA3031000, 0x6895C30, 0x0, 0x80000000}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok53) {
  // 2.36363464E-11
  int f = 768600146;
  // 0.00000000002363635
  s21_decimal decimal_check = {{0x2410F3, 0x0, 0x0, 0x110000}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok54) {
  // -2.36363464E-11
  int f = -1378883502;
  // -0.00000000002363635
  s21_decimal decimal_check = {{0x2410F3, 0x0, 0x0, 0x80110000}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok55) {
  // 0.0255207196
  int f = 1020334292;
  // 0.02552072
  s21_decimal decimal_check = {{0x26F108, 0x0, 0x0, 0x80000}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok56) {
  // -0.0255207196
  int f = -1127149356;
  // -0.02552072
  s21_decimal decimal_check = {{0x26F108, 0x0, 0x0, 0x80080000}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok57) {
  // 3.9575282E-24
  int f = 412686710;
  // 0.0000000000000000000000039575
  s21_decimal decimal_check = {{0x9A97, 0x0, 0x0, 0x1C0000}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok58) {
  // -3.9575282E-24
  int f = -1734796938;
  // -0.0000000000000000000000039575
  s21_decimal decimal_check = {{0x9A97, 0x0, 0x0, 0x801C0000}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok59) {
  // 0.00399137754
  int f = 998427162;
  // 0.003991378
  s21_decimal decimal_check = {{0x3CE752, 0x0, 0x0, 0x90000}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok60) {
  // -0.00399137754
  int f = -1149056486;
  // -0.003991378
  s21_decimal decimal_check = {{0x3CE752, 0x0, 0x0, 0x80090000}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok61) {
  // 1.95127377E-05
  int f = 933474121;
  // 0.00001951274
  s21_decimal decimal_check = {{0x1DC62A, 0x0, 0x0, 0xB0000}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok62) {
  // -1.95127377E-05
  int f = -1214009527;
  // -0.00001951274
  s21_decimal decimal_check = {{0x1DC62A, 0x0, 0x0, 0x800B0000}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok63) {
  // 1.26745242E-20
  int f = 510618173;
  // 0.00000000000000000001267452
  s21_decimal decimal_check = {{0x1356FC, 0x0, 0x0, 0x1A0000}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok64) {
  // -1.26745242E-20
  int f = -1636865475;
  // -0.00000000000000000001267452
  s21_decimal decimal_check = {{0x1356FC, 0x0, 0x0, 0x801A0000}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok65) {
  // 0.0764362067
  int f = 1033669270;
  // 0.07643621
  s21_decimal decimal_check = {{0x74A1E5, 0x0, 0x0, 0x80000}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok66) {
  // -0.0764362067
  int f = -1113814378;
  // -0.07643621
  s21_decimal decimal_check = {{0x74A1E5, 0x0, 0x0, 0x80080000}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok67) {
  // 1.19421885E-18
  int f = 565197904;
  // 0.000000000000000001194219
  s21_decimal decimal_check = {{0x1238EB, 0x0, 0x0, 0x180000}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok68) {
  // -1.19421885E-18
  int f = -1582285744;
  // -0.000000000000000001194219
  s21_decimal decimal_check = {{0x1238EB, 0x0, 0x0, 0x80180000}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok69) {
  // 7.93902012E-16
  int f = 644141985;
  // 0.000000000000000793902
  s21_decimal decimal_check = {{0xC1D2E, 0x0, 0x0, 0x150000}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok70) {
  // -7.93902012E-16
  int f = -1503341663;
  // -0.000000000000000793902
  s21_decimal decimal_check = {{0xC1D2E, 0x0, 0x0, 0x80150000}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok71) {
  // 5.86327048E-15
  int f = 668155680;
  // 0.00000000000000586327
  s21_decimal decimal_check = {{0x8F257, 0x0, 0x0, 0x140000}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok72) {
  // -5.86327048E-15
  int f = -1479327968;
  // -0.00000000000000586327
  s21_decimal decimal_check = {{0x8F257, 0x0, 0x0, 0x80140000}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok73) {
  // 8.52215659E-11
  int f = 784033658;
  // 0.00000000008522157
  s21_decimal decimal_check = {{0x8209AD, 0x0, 0x0, 0x110000}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok74) {
  // -8.52215659E-11
  int f = -1363449990;
  // -0.00000000008522157
  s21_decimal decimal_check = {{0x8209AD, 0x0, 0x0, 0x80110000}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok75) {
  // 9.61645806E-28
  int f = 311976189;
  // 0.000000000000000000000000001
  s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x1B0000}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok76) {
  // -9.61645806E-28
  int f = -1835507459;
  // -0.000000000000000000000000001
  s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x801B0000}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok77) {
  // 46282560
  int f = 1278250448;
  // 46282560
  s21_decimal decimal_check = {{0x2C23740, 0x0, 0x0, 0x0}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok78) {
  // -46282560
  int f = -869233200;
  // -46282560
  s21_decimal decimal_check = {{0x2C23740, 0x0, 0x0, 0x80000000}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok79) {
  // 1.15109615E-12
  int f = 732037276;
  // 0.000000000001151096
  s21_decimal decimal_check = {{0x119078, 0x0, 0x0, 0x120000}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok80) {
  // -1.15109615E-12
  int f = -1415446372;
  // -0.000000000001151096
  s21_decimal decimal_check = {{0x119078, 0x0, 0x0, 0x80120000}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok81) {
  // 2.83794689E-11
  int f = 771334370;
  // 0.00000000002837947
  s21_decimal decimal_check = {{0x2B4DBB, 0x0, 0x0, 0x110000}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok82) {
  // -2.83794689E-11
  int f = -1376149278;
  // -0.00000000002837947
  s21_decimal decimal_check = {{0x2B4DBB, 0x0, 0x0, 0x80110000}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok83) {
  // 8.43187742E-10
  int f = 812107280;
  // 0.0000000008431877
  s21_decimal decimal_check = {{0x80A905, 0x0, 0x0, 0x100000}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok84) {
  // -8.43187742E-10
  int f = -1335376368;
  // -0.0000000008431877
  s21_decimal decimal_check = {{0x80A905, 0x0, 0x0, 0x80100000}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok85) {
  // 9.83161032E+17
  int f = 1566199356;
  // 983161000000000000
  s21_decimal decimal_check = {{0x72049000, 0xDA4E3B8, 0x0, 0x0}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok86) {
  // -9.83161032E+17
  int f = -581284292;
  // -983161000000000000
  s21_decimal decimal_check = {{0x72049000, 0xDA4E3B8, 0x0, 0x80000000}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok87) {
  // 5010.18115
  int f = 1167888755;
  // 5010.181
  s21_decimal decimal_check = {{0x4C7305, 0x0, 0x0, 0x30000}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok88) {
  // -5010.18115
  int f = -979594893;
  // -5010.181
  s21_decimal decimal_check = {{0x4C7305, 0x0, 0x0, 0x80030000}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok89) {
  // 5.82704236E-25
  int f = 389306006;
  // 0.0000000000000000000000005827
  s21_decimal decimal_check = {{0x16C3, 0x0, 0x0, 0x1C0000}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok90) {
  // -5.82704236E-25
  int f = -1758177642;
  // -0.0000000000000000000000005827
  s21_decimal decimal_check = {{0x16C3, 0x0, 0x0, 0x801C0000}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok91) {
  // 5.07265574E+16
  int f = 1530148745;
  // 50726560000000000
  s21_decimal decimal_check = {{0x9D7A4000, 0xB43789, 0x0, 0x0}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok92) {
  // -5.07265574E+16
  int f = -617334903;
  // -50726560000000000
  s21_decimal decimal_check = {{0x9D7A4000, 0xB43789, 0x0, 0x80000000}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok93) {
  // 1.35639493E+19
  int f = 1597783252;
  // 13563950000000000000
  s21_decimal decimal_check = {{0xFD28E000, 0xBC3CD4A8, 0x0, 0x0}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok94) {
  // -1.35639493E+19
  int f = -549700396;
  // -13563950000000000000
  s21_decimal decimal_check = {{0xFD28E000, 0xBC3CD4A8, 0x0, 0x80000000}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok95) {
  // 1.2867606E+27
  int f = 1820658757;
  // 1286761000000000000000000000
  s21_decimal decimal_check = {{0x8FA00000, 0x955F02E9, 0x428623D, 0x0}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok96) {
  // -1.2867606E+27
  int f = -326824891;
  // -1286761000000000000000000000
  s21_decimal decimal_check = {{0x8FA00000, 0x955F02E9, 0x428623D, 0x80000000}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok97) {
  // 9.07980924E+20
  int f = 1648681745;
  // 907980900000000000000
  s21_decimal decimal_check = {{0x6B7A4000, 0x38C429DC, 0x31, 0x0}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok98) {
  // -9.07980924E+20
  int f = -498801903;
  // -907980900000000000000
  s21_decimal decimal_check = {{0x6B7A4000, 0x38C429DC, 0x31, 0x80000000}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok99) {
  // 15372566
  int f = 1265275158;
  // 15372570
  s21_decimal decimal_check = {{0xEA911A, 0x0, 0x0, 0x0}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_ok100) {
  // -15372566
  int f = -882208490;
  // -15372570
  s21_decimal decimal_check = {{0xEA911A, 0x0, 0x0, 0x80000000}};

  test_from_float_to_decimal(f, decimal_check);
}

// START_TEST(test_from_decimal_to_float_fail_manual1) {
//   // 792281625.14264337593543950335
//   s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x140000}};
//   int code = s21_from_decimal_to_float(decimal, NULL);

//   ck_assert_int_eq(code, CONVERSION_ERROR);
// }

START_TEST(test_from_decimal_to_float_ok1) {
  // 79228162514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = 1870659584;

  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok2) {
  // -79228162514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = -276824064;

  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok3) {
  // 7922816251426433759354395033.5
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};
  int check = 1842138317;

  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok4) {
  // -7922816251426433759354395033.5
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};
  int check = -305345331;

  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok5) {
  // 20995463066280049462289146839
  s21_decimal decimal = {{0x3D70A3D7, 0x70A3D70A, 0x43D70A3D, 0x0}};
  int check = 1854385684;

  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok6) {
  // -20995463066280049462289146839
  s21_decimal decimal = {{0x3D70A3D7, 0x70A3D70A, 0x43D70A3D, 0x80000000}};
  int check = -293097964;

  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok7) {
  // 792281625142643375935439503.35
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x20000}};
  int check = 1814288138;

  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok8) {
  // -792281625142643375935439503.35
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80020000}};
  int check = -333195510;

  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok9) {
  // 2099546306628004946228914683.9
  s21_decimal decimal = {{0x3D70A3D7, 0x70A3D70A, 0x43D70A3D, 0x10000}};
  int check = 1826166407;

  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok10) {
  // -2099546306628004946228914683.9
  s21_decimal decimal = {{0x3D70A3D7, 0x70A3D70A, 0x43D70A3D, 0x80010000}};
  int check = -321317241;

  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok11) {
  // 79228162514264337593543950.335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x30000}};
  int check = 1786974831;

  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok12) {
  // -79228162514264337593543950.335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80030000}};
  int check = -360508817;

  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok13) {
  // 209954630662800494622891468.39
  s21_decimal decimal = {{0x3D70A3D7, 0x70A3D70A, 0x43D70A3D, 0x20000}};
  int check = 1798155167;

  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok14) {
  // -209954630662800494622891468.39
  s21_decimal decimal = {{0x3D70A3D7, 0x70A3D70A, 0x43D70A3D, 0x80020000}};
  int check = -349328481;

  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok15) {
  // 7922816251426433759354395.0335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x40000}};
  int check = 1758574359;

  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok16) {
  // -7922816251426433759354395.0335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80040000}};
  int check = -388909289;

  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok17) {
  // 20995463066280049462289146.839
  s21_decimal decimal = {{0x3D70A3D7, 0x70A3D70A, 0x43D70A3D, 0x30000}};
  int check = 1770713011;

  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok18) {
  // -20995463066280049462289146.839
  s21_decimal decimal = {{0x3D70A3D7, 0x70A3D70A, 0x43D70A3D, 0x80030000}};
  int check = -376770637;

  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok19) {
  // 792281625142643375935439.50335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x50000}};
  int check = 1730659756;

  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok20) {
  // -792281625142643375935439.50335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80050000}};
  int check = -416823892;

  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok21) {
  // 2099546306628004946228914.6839
  s21_decimal decimal = {{0x3D70A3D7, 0x70A3D70A, 0x43D70A3D, 0x40000}};
  int check = 1742621777;

  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok22) {
  // -2099546306628004946228914.6839
  s21_decimal decimal = {{0x3D70A3D7, 0x70A3D70A, 0x43D70A3D, 0x80040000}};
  int check = -404861871;

  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok23) {
  // 79228162514264337593543.950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x60000}};
  int check = 1703294909;

  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok24) {
  // -79228162514264337593543.950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80060000}};
  int check = -444188739;

  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok25) {
  // 209954630662800494622891.46839
  s21_decimal decimal = {{0x3D70A3D7, 0x70A3D70A, 0x43D70A3D, 0x50000}};
  int check = 1714542247;

  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok26) {
  // -209954630662800494622891.46839
  s21_decimal decimal = {{0x3D70A3D7, 0x70A3D70A, 0x43D70A3D, 0x80050000}};
  int check = -432941401;

  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok27) {
  // 7922816251426433759354.3950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x70000}};
  int check = 1675018133;

  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok28) {
  // -7922816251426433759354.3950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80070000}};
  int check = -472465515;

  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok29) {
  // 20995463066280049462289.146839
  s21_decimal decimal = {{0x3D70A3D7, 0x70A3D70A, 0x43D70A3D, 0x60000}};
  int check = 1687045459;

  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok30) {
  // -20995463066280049462289.146839
  s21_decimal decimal = {{0x3D70A3D7, 0x70A3D70A, 0x43D70A3D, 0x80060000}};
  int check = -460438189;

  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok31) {
  // 792281625142643375935.43950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000}};
  int check = 1647037559;

  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok32) {
  // -792281625142643375935.43950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80080000}};
  int check = -500446089;

  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok33) {
  // 2099546306628004946228.9146839
  s21_decimal decimal = {{0x3D70A3D7, 0x70A3D70A, 0x43D70A3D, 0x70000}};
  int check = 1659085342;

  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok34) {
  // -2099546306628004946228.9146839
  s21_decimal decimal = {{0x3D70A3D7, 0x70A3D70A, 0x43D70A3D, 0x80070000}};
  int check = -488398306;

  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok35) {
  // 79228162514264337593.543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x90000}};
  int check = 1619619935;

  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok36) {
  // -79228162514264337593.543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80090000}};
  int check = -527863713;

  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok37) {
  // 209954630662800494622.89146839
  s21_decimal decimal = {{0x3D70A3D7, 0x70A3D70A, 0x43D70A3D, 0x80000}};
  int check = 1630935883;

  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok38) {
  // -209954630662800494622.89146839
  s21_decimal decimal = {{0x3D70A3D7, 0x70A3D70A, 0x43D70A3D, 0x80080000}};
  int check = -516547765;

  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok39) {
  // 7922816251426433759.3543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xA0000}};
  int check = 1591469823;

  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok40) {
  // -7922816251426433759.3543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x800A0000}};
  int check = -556013825;

  test_from_decimal_to_float(decimal, check);
}
END_TEST

START_TEST(test_from_decimal_to_float_ok41) {
  // 20995463066280049462.289146839
  s21_decimal decimal = {{0x3D70A3D7, 0x70A3D70A, 0x43D70A3D, 0x90000}};
  int check = 1603383151;

  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok42) {
  // -20995463066280049462.289146839
  s21_decimal decimal = {{0x3D70A3D7, 0x70A3D70A, 0x43D70A3D, 0x80090000}};
  int check = -544100497;

  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok43) {
  // 792281625142643375.93543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xB0000}};
  int check = 1563421695;

  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok44) {
  // -792281625142643375.93543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x800B0000}};
  int check = -584061953;

  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok45) {
  // 2099546306628004946.2289146839
  s21_decimal decimal = {{0x3D70A3D7, 0x70A3D70A, 0x43D70A3D, 0xA0000}};
  int check = 1575557298;

  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok46) {
  // -2099546306628004946.2289146839
  s21_decimal decimal = {{0x3D70A3D7, 0x70A3D70A, 0x43D70A3D, 0x800A0000}};
  int check = -571926350;

  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok47) {
  // 79228162514264337.593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xC0000}};
  int check = 1535950028;

  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok48) {
  // -79228162514264337.593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x800C0000}};
  int check = -611533620;

  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok49) {
  // 209954630662800494.62289146839
  s21_decimal decimal = {{0x3D70A3D7, 0x70A3D70A, 0x43D70A3D, 0xB0000}};
  int check = 1547336232;

  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok50) {
  // -209954630662800494.62289146839
  s21_decimal decimal = {{0x3D70A3D7, 0x70A3D70A, 0x43D70A3D, 0x800B0000}};
  int check = -600147416;

  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok51) {
  // 7922816251426433.7593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xD0000}};
  int check = 1507929619;

  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok52) {
  // -7922816251426433.7593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x800D0000}};
  int check = -639554029;

  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok53) {
  // 20995463066280049.462289146839
  s21_decimal decimal = {{0x3D70A3D7, 0x70A3D70A, 0x43D70A3D, 0xC0000}};
  int check = 1519726214;

  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok54) {
  // -20995463066280049.462289146839
  s21_decimal decimal = {{0x3D70A3D7, 0x70A3D70A, 0x43D70A3D, 0x800C0000}};
  int check = -627757434;

  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok55) {
  // 792281625142643.37593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xE0000}};
  int check = 1479812316;

  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok56) {
  // -792281625142643.37593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x800E0000}};
  int check = -667671332;

  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok57) {
  // 2099546306628004.9462289146839
  s21_decimal decimal = {{0x3D70A3D7, 0x70A3D70A, 0x43D70A3D, 0xD0000}};
  int check = 1492037847;

  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok58) {
  // -2099546306628004.9462289146839
  s21_decimal decimal = {{0x3D70A3D7, 0x70A3D70A, 0x43D70A3D, 0x800D0000}};
  int check = -655445801;

  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok59) {
  // 79228162514264.337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xF0000}};
  int check = 1452285309;

  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok60) {
  // -79228162514264.337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x800F0000}};
  int check = -695198339;

  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok61) {
  // 209954630662800.49462289146839
  s21_decimal decimal = {{0x3D70A3D7, 0x70A3D70A, 0x43D70A3D, 0xE0000}};
  int check = 1463743455;

  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok62) {
  // -209954630662800.49462289146839
  s21_decimal decimal = {{0x3D70A3D7, 0x70A3D70A, 0x43D70A3D, 0x800E0000}};
  int check = -683740193;

  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok63) {
  // 7922816251426.4337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x100000}};
  int check = 1424397717;

  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok64) {
  // -7922816251426.4337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80100000}};
  int check = -723085931;

  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok65) {
  // 20995463066280.049462289146839
  s21_decimal decimal = {{0x3D70A3D7, 0x70A3D70A, 0x43D70A3D, 0xF0000}};
  int check = 1436074777;

  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok66) {
  // -20995463066280.049462289146839
  s21_decimal decimal = {{0x3D70A3D7, 0x70A3D70A, 0x43D70A3D, 0x800F0000}};
  int check = -711408871;

  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok67) {
  // 792281625142.64337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x110000}};
  int check = 1396209578;

  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok68) {
  // -792281625142.64337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80110000}};
  int check = -751274070;

  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok69) {
  // 2099546306628.0049462289146839
  s21_decimal decimal = {{0x3D70A3D7, 0x70A3D70A, 0x43D70A3D, 0x100000}};
  int check = 1408527195;

  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok70) {
  // -2099546306628.0049462289146839
  s21_decimal decimal = {{0x3D70A3D7, 0x70A3D70A, 0x43D70A3D, 0x80100000}};
  int check = -738956453;

  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok71) {
  // 79228162514.264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x120000}};
  int check = 1368625903;

  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok72) {
  // -79228162514.264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80120000}};
  int check = -778857745;

  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok73) {
  // 209954630662.80049462289146839
  s21_decimal decimal = {{0x3D70A3D7, 0x70A3D70A, 0x43D70A3D, 0x110000}};
  int check = 1380157718;

  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok74) {
  // -209954630662.80049462289146839
  s21_decimal decimal = {{0x3D70A3D7, 0x70A3D70A, 0x43D70A3D, 0x80110000}};
  int check = -767325930;

  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok75) {
  // 7922816251.4264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x130000}};
  int check = 1340874314;

  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok76) {
  // -7922816251.4264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80130000}};
  int check = -806609334;

  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok77) {
  // 20995463066.280049462289146839
  s21_decimal decimal = {{0x3D70A3D7, 0x70A3D70A, 0x43D70A3D, 0x120000}};
  int check = 1352428971;

  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok78) {
  // -20995463066.280049462289146839
  s21_decimal decimal = {{0x3D70A3D7, 0x70A3D70A, 0x43D70A3D, 0x80120000}};
  int check = -795054677;

  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok79) {
  // 792281625.14264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x140000}};
  int check = 1312613640;

  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok80) {
  // -792281625.14264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80140000}};
  int check = -834870008;

  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok81) {
  // 2099546306.6280049462289146839
  s21_decimal decimal = {{0x3D70A3D7, 0x70A3D70A, 0x43D70A3D, 0x130000}};
  int check = 1325025554;

  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok82) {
  // -2099546306.6280049462289146839
  s21_decimal decimal = {{0x3D70A3D7, 0x70A3D70A, 0x43D70A3D, 0x80130000}};
  int check = -822458094;

  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok83) {
  // 79228162.514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x150000}};
  int check = 1284971936;

  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok84) {
  // -79228162.514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80150000}};
  int check = -862511712;

  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok85) {
  // 209954630.66280049462289146839
  s21_decimal decimal = {{0x3D70A3D7, 0x70A3D70A, 0x43D70A3D, 0x140000}};
  int check = 1296579188;

  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok86) {
  // -209954630.66280049462289146839
  s21_decimal decimal = {{0x3D70A3D7, 0x70A3D70A, 0x43D70A3D, 0x80140000}};
  int check = -850904460;

  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok87) {
  // 7922816.2514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x160000}};
  int check = 1257359617;

  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok88) {
  // -7922816.2514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80160000}};
  int check = -890124031;

  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok89) {
  // 20995463.066280049462289146839
  s21_decimal decimal = {{0x3D70A3D7, 0x70A3D70A, 0x43D70A3D, 0x150000}};
  int check = 1268788932;

  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok90) {
  // -20995463.066280049462289146839
  s21_decimal decimal = {{0x3D70A3D7, 0x70A3D70A, 0x43D70A3D, 0x80150000}};
  int check = -878694716;

  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok91) {
  // 792281.62514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x170000}};
  int check = 1229024666;

  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok92) {
  // -792281.62514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80170000}};
  int check = -918458982;

  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok93) {
  // 2099546.3066280049462289146839
  s21_decimal decimal = {{0x3D70A3D7, 0x70A3D70A, 0x43D70A3D, 0x160000}};
  int check = 1241523561;

  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok94) {
  // -2099546.3066280049462289146839
  s21_decimal decimal = {{0x3D70A3D7, 0x70A3D70A, 0x43D70A3D, 0x80160000}};
  int check = -905960087;

  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok95) {
  // 79228.162514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x180000}};
  int check = 1201323541;

  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok96) {
  // -79228.162514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80180000}};
  int check = -946160107;

  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok97) {
  // 209954.63066280049462289146839
  s21_decimal decimal = {{0x3D70A3D7, 0x70A3D70A, 0x43D70A3D, 0x170000}};
  int check = 1213008040;

  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok98) {
  // -209954.63066280049462289146839
  s21_decimal decimal = {{0x3D70A3D7, 0x70A3D70A, 0x43D70A3D, 0x80170000}};
  int check = -934475608;

  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok99) {
  // 7922.8162514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x190000}};
  int check = 1173853832;

  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_ok100) {
  // -7922.8162514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80190000}};
  int check = -973629816;

  test_from_decimal_to_float(decimal, check);
}

Suite *from_int_to_decimal_suite(void) {
  Suite *s;
  TCase *tc_main;

  s = suite_create("\n from_int_to_decimal");
  tc_main = tcase_create("main");

  // tcase_add_test(tc_main, test_from_int_to_decimal_fail1);

  tcase_add_test(tc_main, test_from_int_to_decimal_ok1);
  tcase_add_test(tc_main, test_from_int_to_decimal_ok2);
  tcase_add_test(tc_main, test_from_int_to_decimal_ok3);
  tcase_add_test(tc_main, test_from_int_to_decimal_ok4);
  tcase_add_test(tc_main, test_from_int_to_decimal_ok5);
  tcase_add_test(tc_main, test_from_int_to_decimal_ok6);
  tcase_add_test(tc_main, test_from_int_to_decimal_ok7);
  tcase_add_test(tc_main, test_from_int_to_decimal_ok8);
  tcase_add_test(tc_main, test_from_int_to_decimal_ok9);
  tcase_add_test(tc_main, test_from_int_to_decimal_ok10);
  tcase_add_test(tc_main, test_from_int_to_decimal_ok11);
  tcase_add_test(tc_main, test_from_int_to_decimal_ok12);
  tcase_add_test(tc_main, test_from_int_to_decimal_ok13);

  suite_add_tcase(s, tc_main);

  return s;
}

Suite *from_float_to_decimal_suite(void) {
  Suite *s;
  TCase *tc_main;

  s = suite_create("from_float_to_decimal");
  tc_main = tcase_create("main");

  // tcase_add_test(tc_main, test_from_float_to_decimal_incorrect1);
  //   tcase_add_test(tc_main, test_from_float_to_decimal_fail_big); //FAIL
  //   tcase_add_test(tc_main, test_from_float_to_decimal_fail_big_negate);
  //   //FAIL tcase_add_test(tc_main, test_from_float_to_decimal_fail_small);
  //   tcase_add_test(tc_main, test_from_float_to_decimal_fail_small_negate);

  //   tcase_add_test(tc_main, test_from_float_to_decimal_unnormal1);
  //   // tcase_add_test(tc_main, test_from_float_to_decimal_unnormal2);
  //   tcase_add_test(tc_main, test_from_float_to_decimal_unnormal3);
  //   tcase_add_test(tc_main, test_from_float_to_decimal_unnormal4);
  //   tcase_add_test(tc_main, test_from_float_to_decimal_unnormal5);
  //   tcase_add_test(tc_main, test_from_float_to_decimal_unnormal6);

  tcase_add_test(tc_main, test_from_float_to_decimal_ok1);
  tcase_add_test(tc_main, test_from_float_to_decimal_ok2);
  tcase_add_test(tc_main, test_from_float_to_decimal_ok3);
  tcase_add_test(tc_main, test_from_float_to_decimal_ok4);
  tcase_add_test(tc_main, test_from_float_to_decimal_ok5);
  tcase_add_test(tc_main, test_from_float_to_decimal_ok6);
  tcase_add_test(tc_main, test_from_float_to_decimal_ok7);
  tcase_add_test(tc_main, test_from_float_to_decimal_ok8);
  tcase_add_test(tc_main, test_from_float_to_decimal_ok9);
  tcase_add_test(tc_main, test_from_float_to_decimal_ok10);
  tcase_add_test(tc_main, test_from_float_to_decimal_ok11);
  tcase_add_test(tc_main, test_from_float_to_decimal_ok12);
  tcase_add_test(tc_main, test_from_float_to_decimal_ok13);
  tcase_add_test(tc_main, test_from_float_to_decimal_ok14);
  tcase_add_test(tc_main, test_from_float_to_decimal_ok15);
  tcase_add_test(tc_main, test_from_float_to_decimal_ok16);
  tcase_add_test(tc_main, test_from_float_to_decimal_ok17);
  tcase_add_test(tc_main, test_from_float_to_decimal_ok18);
  tcase_add_test(tc_main, test_from_float_to_decimal_ok19);
  tcase_add_test(tc_main, test_from_float_to_decimal_ok20);
  tcase_add_test(tc_main, test_from_float_to_decimal_ok21);
  tcase_add_test(tc_main, test_from_float_to_decimal_ok22);
  tcase_add_test(tc_main, test_from_float_to_decimal_ok23);
  tcase_add_test(tc_main, test_from_float_to_decimal_ok24);
  tcase_add_test(tc_main, test_from_float_to_decimal_ok25);
  tcase_add_test(tc_main, test_from_float_to_decimal_ok26);
  tcase_add_test(tc_main, test_from_float_to_decimal_ok27);
  tcase_add_test(tc_main, test_from_float_to_decimal_ok28);
  tcase_add_test(tc_main, test_from_float_to_decimal_ok29);
  tcase_add_test(tc_main, test_from_float_to_decimal_ok30);
  tcase_add_test(tc_main, test_from_float_to_decimal_ok31);
  tcase_add_test(tc_main, test_from_float_to_decimal_ok32);
  tcase_add_test(tc_main, test_from_float_to_decimal_ok33);
  tcase_add_test(tc_main, test_from_float_to_decimal_ok34);
  tcase_add_test(tc_main, test_from_float_to_decimal_ok35);
  tcase_add_test(tc_main, test_from_float_to_decimal_ok36);
  tcase_add_test(tc_main, test_from_float_to_decimal_ok37);
  tcase_add_test(tc_main, test_from_float_to_decimal_ok38);
  tcase_add_test(tc_main, test_from_float_to_decimal_ok39);
  tcase_add_test(tc_main, test_from_float_to_decimal_ok40);
  tcase_add_test(tc_main, test_from_float_to_decimal_ok41);
  tcase_add_test(tc_main, test_from_float_to_decimal_ok42);
  tcase_add_test(tc_main, test_from_float_to_decimal_ok43);
  tcase_add_test(tc_main, test_from_float_to_decimal_ok44);
  tcase_add_test(tc_main, test_from_float_to_decimal_ok45);
  tcase_add_test(tc_main, test_from_float_to_decimal_ok46);
  tcase_add_test(tc_main, test_from_float_to_decimal_ok47);
  tcase_add_test(tc_main, test_from_float_to_decimal_ok48);
  tcase_add_test(tc_main, test_from_float_to_decimal_ok49);
  tcase_add_test(tc_main, test_from_float_to_decimal_ok50);
  tcase_add_test(tc_main, test_from_float_to_decimal_ok51);
  tcase_add_test(tc_main, test_from_float_to_decimal_ok52);
  tcase_add_test(tc_main, test_from_float_to_decimal_ok53);
  tcase_add_test(tc_main, test_from_float_to_decimal_ok54);
  tcase_add_test(tc_main, test_from_float_to_decimal_ok55);
  tcase_add_test(tc_main, test_from_float_to_decimal_ok56);
  tcase_add_test(tc_main, test_from_float_to_decimal_ok57);
  tcase_add_test(tc_main, test_from_float_to_decimal_ok58);
  tcase_add_test(tc_main, test_from_float_to_decimal_ok59);
  tcase_add_test(tc_main, test_from_float_to_decimal_ok60);
  tcase_add_test(tc_main, test_from_float_to_decimal_ok61);
  tcase_add_test(tc_main, test_from_float_to_decimal_ok62);
  tcase_add_test(tc_main, test_from_float_to_decimal_ok63);
  tcase_add_test(tc_main, test_from_float_to_decimal_ok64);
  tcase_add_test(tc_main, test_from_float_to_decimal_ok65);
  tcase_add_test(tc_main, test_from_float_to_decimal_ok66);
  tcase_add_test(tc_main, test_from_float_to_decimal_ok67);
  tcase_add_test(tc_main, test_from_float_to_decimal_ok68);
  tcase_add_test(tc_main, test_from_float_to_decimal_ok69);
  tcase_add_test(tc_main, test_from_float_to_decimal_ok70);
  tcase_add_test(tc_main, test_from_float_to_decimal_ok71);
  tcase_add_test(tc_main, test_from_float_to_decimal_ok72);
  tcase_add_test(tc_main, test_from_float_to_decimal_ok73);
  tcase_add_test(tc_main, test_from_float_to_decimal_ok74);
  tcase_add_test(tc_main, test_from_float_to_decimal_ok75);
  tcase_add_test(tc_main, test_from_float_to_decimal_ok76);
  tcase_add_test(tc_main, test_from_float_to_decimal_ok77);
  tcase_add_test(tc_main, test_from_float_to_decimal_ok78);
  tcase_add_test(tc_main, test_from_float_to_decimal_ok79);
  tcase_add_test(tc_main, test_from_float_to_decimal_ok80);
  tcase_add_test(tc_main, test_from_float_to_decimal_ok81);
  tcase_add_test(tc_main, test_from_float_to_decimal_ok82);
  tcase_add_test(tc_main, test_from_float_to_decimal_ok83);
  tcase_add_test(tc_main, test_from_float_to_decimal_ok84);
  tcase_add_test(tc_main, test_from_float_to_decimal_ok85);
  tcase_add_test(tc_main, test_from_float_to_decimal_ok86);
  tcase_add_test(tc_main, test_from_float_to_decimal_ok87);
  tcase_add_test(tc_main, test_from_float_to_decimal_ok88);
  tcase_add_test(tc_main, test_from_float_to_decimal_ok89);
  tcase_add_test(tc_main, test_from_float_to_decimal_ok90);
  tcase_add_test(tc_main, test_from_float_to_decimal_ok91);
  tcase_add_test(tc_main, test_from_float_to_decimal_ok92);
  tcase_add_test(tc_main, test_from_float_to_decimal_ok93);
  tcase_add_test(tc_main, test_from_float_to_decimal_ok94);
  tcase_add_test(tc_main, test_from_float_to_decimal_ok95);
  tcase_add_test(tc_main, test_from_float_to_decimal_ok96);
  tcase_add_test(tc_main, test_from_float_to_decimal_ok97);
  tcase_add_test(tc_main, test_from_float_to_decimal_ok98);
  tcase_add_test(tc_main, test_from_float_to_decimal_ok99);
  tcase_add_test(tc_main, test_from_float_to_decimal_ok100);

  suite_add_tcase(s, tc_main);

  return s;
}

// Suite *from_decimal_to_float_suite0(void) {
//   Suite *s;
//   TCase *tc_main;

//   s = suite_create("from_decimal_to_float0");
//   tc_main = tcase_create("main");

//   tcase_add_test(tc_main, test_from_decimal_to_float_fail_manual1);

//   suite_add_tcase(s, tc_main);
//   return s;
// }

Suite *from_decimal_to_float_suite1(void) {
  Suite *s;
  TCase *tc_main;

  s = suite_create("from_decimal_to_float1");
  tc_main = tcase_create("main");
  tcase_add_test(tc_main, test_from_decimal_to_float_ok1);
  tcase_add_test(tc_main, test_from_decimal_to_float_ok2);
  tcase_add_test(tc_main, test_from_decimal_to_float_ok3);
  tcase_add_test(tc_main, test_from_decimal_to_float_ok4);
  tcase_add_test(tc_main, test_from_decimal_to_float_ok5);
  tcase_add_test(tc_main, test_from_decimal_to_float_ok6);
  tcase_add_test(tc_main, test_from_decimal_to_float_ok7);
  tcase_add_test(tc_main, test_from_decimal_to_float_ok8);
  tcase_add_test(tc_main, test_from_decimal_to_float_ok9);
  tcase_add_test(tc_main, test_from_decimal_to_float_ok10);
  tcase_add_test(tc_main, test_from_decimal_to_float_ok11);
  tcase_add_test(tc_main, test_from_decimal_to_float_ok12);
  tcase_add_test(tc_main, test_from_decimal_to_float_ok13);
  tcase_add_test(tc_main, test_from_decimal_to_float_ok14);
  tcase_add_test(tc_main, test_from_decimal_to_float_ok15);
  tcase_add_test(tc_main, test_from_decimal_to_float_ok16);
  tcase_add_test(tc_main, test_from_decimal_to_float_ok17);
  tcase_add_test(tc_main, test_from_decimal_to_float_ok18);
  tcase_add_test(tc_main, test_from_decimal_to_float_ok19);
  tcase_add_test(tc_main, test_from_decimal_to_float_ok20);
  tcase_add_test(tc_main, test_from_decimal_to_float_ok21);
  tcase_add_test(tc_main, test_from_decimal_to_float_ok22);
  tcase_add_test(tc_main, test_from_decimal_to_float_ok23);
  tcase_add_test(tc_main, test_from_decimal_to_float_ok24);
  tcase_add_test(tc_main, test_from_decimal_to_float_ok25);
  tcase_add_test(tc_main, test_from_decimal_to_float_ok26);
  tcase_add_test(tc_main, test_from_decimal_to_float_ok27);
  tcase_add_test(tc_main, test_from_decimal_to_float_ok28);
  tcase_add_test(tc_main, test_from_decimal_to_float_ok29);
  tcase_add_test(tc_main, test_from_decimal_to_float_ok30);
  tcase_add_test(tc_main, test_from_decimal_to_float_ok31);
  tcase_add_test(tc_main, test_from_decimal_to_float_ok32);
  tcase_add_test(tc_main, test_from_decimal_to_float_ok33);
  tcase_add_test(tc_main, test_from_decimal_to_float_ok34);
  tcase_add_test(tc_main, test_from_decimal_to_float_ok35);
  tcase_add_test(tc_main, test_from_decimal_to_float_ok36);
  tcase_add_test(tc_main, test_from_decimal_to_float_ok37);
  tcase_add_test(tc_main, test_from_decimal_to_float_ok38);
  tcase_add_test(tc_main, test_from_decimal_to_float_ok39);
  tcase_add_test(tc_main, test_from_decimal_to_float_ok40);
  tcase_add_test(tc_main, test_from_decimal_to_float_ok40);
  tcase_add_test(tc_main, test_from_decimal_to_float_ok41);
  tcase_add_test(tc_main, test_from_decimal_to_float_ok42);
  tcase_add_test(tc_main, test_from_decimal_to_float_ok43);
  tcase_add_test(tc_main, test_from_decimal_to_float_ok44);
  tcase_add_test(tc_main, test_from_decimal_to_float_ok45);
  tcase_add_test(tc_main, test_from_decimal_to_float_ok46);
  tcase_add_test(tc_main, test_from_decimal_to_float_ok47);
  tcase_add_test(tc_main, test_from_decimal_to_float_ok48);
  tcase_add_test(tc_main, test_from_decimal_to_float_ok49);
  tcase_add_test(tc_main, test_from_decimal_to_float_ok50);
  tcase_add_test(tc_main, test_from_decimal_to_float_ok51);
  tcase_add_test(tc_main, test_from_decimal_to_float_ok52);
  tcase_add_test(tc_main, test_from_decimal_to_float_ok53);
  tcase_add_test(tc_main, test_from_decimal_to_float_ok54);
  tcase_add_test(tc_main, test_from_decimal_to_float_ok55);
  tcase_add_test(tc_main, test_from_decimal_to_float_ok56);
  tcase_add_test(tc_main, test_from_decimal_to_float_ok57);
  tcase_add_test(tc_main, test_from_decimal_to_float_ok58);
  tcase_add_test(tc_main, test_from_decimal_to_float_ok59);
  tcase_add_test(tc_main, test_from_decimal_to_float_ok60);
  tcase_add_test(tc_main, test_from_decimal_to_float_ok61);
  tcase_add_test(tc_main, test_from_decimal_to_float_ok62);
  tcase_add_test(tc_main, test_from_decimal_to_float_ok63);
  tcase_add_test(tc_main, test_from_decimal_to_float_ok64);
  tcase_add_test(tc_main, test_from_decimal_to_float_ok65);
  tcase_add_test(tc_main, test_from_decimal_to_float_ok66);
  tcase_add_test(tc_main, test_from_decimal_to_float_ok67);
  tcase_add_test(tc_main, test_from_decimal_to_float_ok68);
  tcase_add_test(tc_main, test_from_decimal_to_float_ok69);
  tcase_add_test(tc_main, test_from_decimal_to_float_ok70);
  tcase_add_test(tc_main, test_from_decimal_to_float_ok71);
  tcase_add_test(tc_main, test_from_decimal_to_float_ok72);
  tcase_add_test(tc_main, test_from_decimal_to_float_ok73);
  tcase_add_test(tc_main, test_from_decimal_to_float_ok74);
  tcase_add_test(tc_main, test_from_decimal_to_float_ok75);
  tcase_add_test(tc_main, test_from_decimal_to_float_ok76);
  tcase_add_test(tc_main, test_from_decimal_to_float_ok77);
  tcase_add_test(tc_main, test_from_decimal_to_float_ok78);
  tcase_add_test(tc_main, test_from_decimal_to_float_ok79);
  tcase_add_test(tc_main, test_from_decimal_to_float_ok80);
  tcase_add_test(tc_main, test_from_decimal_to_float_ok81);
  tcase_add_test(tc_main, test_from_decimal_to_float_ok82);
  tcase_add_test(tc_main, test_from_decimal_to_float_ok83);
  tcase_add_test(tc_main, test_from_decimal_to_float_ok84);
  tcase_add_test(tc_main, test_from_decimal_to_float_ok85);
  tcase_add_test(tc_main, test_from_decimal_to_float_ok86);
  tcase_add_test(tc_main, test_from_decimal_to_float_ok87);
  tcase_add_test(tc_main, test_from_decimal_to_float_ok88);
  tcase_add_test(tc_main, test_from_decimal_to_float_ok89);
  tcase_add_test(tc_main, test_from_decimal_to_float_ok90);
  tcase_add_test(tc_main, test_from_decimal_to_float_ok91);
  tcase_add_test(tc_main, test_from_decimal_to_float_ok92);
  tcase_add_test(tc_main, test_from_decimal_to_float_ok93);
  tcase_add_test(tc_main, test_from_decimal_to_float_ok94);
  tcase_add_test(tc_main, test_from_decimal_to_float_ok95);
  tcase_add_test(tc_main, test_from_decimal_to_float_ok96);
  tcase_add_test(tc_main, test_from_decimal_to_float_ok97);
  tcase_add_test(tc_main, test_from_decimal_to_float_ok98);
  tcase_add_test(tc_main, test_from_decimal_to_float_ok99);
  tcase_add_test(tc_main, test_from_decimal_to_float_ok100);

  suite_add_tcase(s, tc_main);
  return s;
}

// Suite *from_decimal_to_int_suite0(void) {
//   Suite *s;
//   TCase *tc_main;

//   s = suite_create("from_decimal_to_int0");
//   tc_main = tcase_create("main");

//   tcase_add_test(tc_main, test_from_decimal_to_int_fail_manual1);

//   suite_add_tcase(s, tc_main);
//   return s;
// }

// Suite *from_decimal_to_int_suite1(void) {
//   Suite *s;
//   TCase *tc_main;

//   s = suite_create("from_decimal_to_int1");
//   tc_main = tcase_create("main");
//   tcase_add_test(tc_main, test_from_decimal_to_int_fail1);
//   tcase_add_test(tc_main, test_from_decimal_to_int_fail2);
//   tcase_add_test(tc_main, test_from_decimal_to_int_fail3);
//   tcase_add_test(tc_main, test_from_decimal_to_int_fail4);
//   tcase_add_test(tc_main, test_from_decimal_to_int_fail5);
//   tcase_add_test(tc_main, test_from_decimal_to_int_fail6);
//   tcase_add_test(tc_main, test_from_decimal_to_int_fail7);
//   tcase_add_test(tc_main, test_from_decimal_to_int_fail8);
//   tcase_add_test(tc_main, test_from_decimal_to_int_fail9);
//   tcase_add_test(tc_main, test_from_decimal_to_int_fail10);
//   tcase_add_test(tc_main, test_from_decimal_to_int_fail11);
//   tcase_add_test(tc_main, test_from_decimal_to_int_fail12);
//   tcase_add_test(tc_main, test_from_decimal_to_int_fail13);
//   tcase_add_test(tc_main, test_from_decimal_to_int_fail14);
//   tcase_add_test(tc_main, test_from_decimal_to_int_fail15);
//   tcase_add_test(tc_main, test_from_decimal_to_int_fail16);
//   tcase_add_test(tc_main, test_from_decimal_to_int_fail17);
//   tcase_add_test(tc_main, test_from_decimal_to_int_fail18);
//   tcase_add_test(tc_main, test_from_decimal_to_int_fail19);
//   tcase_add_test(tc_main, test_from_decimal_to_int_fail20);
//   tcase_add_test(tc_main, test_from_decimal_to_int_fail21);
//   tcase_add_test(tc_main, test_from_decimal_to_int_fail22);
//   tcase_add_test(tc_main, test_from_decimal_to_int_fail23);
//   tcase_add_test(tc_main, test_from_decimal_to_int_fail24);
//   tcase_add_test(tc_main, test_from_decimal_to_int_fail25);
//   tcase_add_test(tc_main, test_from_decimal_to_int_fail26);
//   tcase_add_test(tc_main, test_from_decimal_to_int_fail27);
//   tcase_add_test(tc_main, test_from_decimal_to_int_fail28);
//   tcase_add_test(tc_main, test_from_decimal_to_int_fail29);
//   tcase_add_test(tc_main, test_from_decimal_to_int_fail30);
//   tcase_add_test(tc_main, test_from_decimal_to_int_fail31);
//   tcase_add_test(tc_main, test_from_decimal_to_int_fail32);
//   tcase_add_test(tc_main, test_from_decimal_to_int_fail33);
//   tcase_add_test(tc_main, test_from_decimal_to_int_fail34);
//   tcase_add_test(tc_main, test_from_decimal_to_int_fail35);
//   tcase_add_test(tc_main, test_from_decimal_to_int_fail36);
//   tcase_add_test(tc_main, test_from_decimal_to_int_fail37);
//   tcase_add_test(tc_main, test_from_decimal_to_int_fail38);
//   tcase_add_test(tc_main, test_from_decimal_to_int_fail39);
//   tcase_add_test(tc_main, test_from_decimal_to_int_fail40);
//   tcase_add_test(tc_main, test_from_decimal_to_int_fail41);
//   tcase_add_test(tc_main, test_from_decimal_to_int_fail42);
//   tcase_add_test(tc_main, test_from_decimal_to_int_fail43);
//   tcase_add_test(tc_main, test_from_decimal_to_int_fail44);
//   tcase_add_test(tc_main, test_from_decimal_to_int_fail45);
//   tcase_add_test(tc_main, test_from_decimal_to_int_fail46);
//   tcase_add_test(tc_main, test_from_decimal_to_int_fail47);
//   tcase_add_test(tc_main, test_from_decimal_to_int_fail48);
//   tcase_add_test(tc_main, test_from_decimal_to_int_fail49);
//   tcase_add_test(tc_main, test_from_decimal_to_int_fail50);

//   suite_add_tcase(s, tc_main);
//   return s;
// }

Suite *from_decimal_to_int_suite2(void) {
  Suite *s;
  TCase *tc_main;

  s = suite_create("from_decimal_to_int2");
  tc_main = tcase_create("main");
  tcase_add_test(tc_main, test_from_decimal_to_int_ok1);
  tcase_add_test(tc_main, test_from_decimal_to_int_ok2);
  tcase_add_test(tc_main, test_from_decimal_to_int_ok3);
  tcase_add_test(tc_main, test_from_decimal_to_int_ok4);
  tcase_add_test(tc_main, test_from_decimal_to_int_ok5);
  tcase_add_test(tc_main, test_from_decimal_to_int_ok6);
  tcase_add_test(tc_main, test_from_decimal_to_int_ok7);
  tcase_add_test(tc_main, test_from_decimal_to_int_ok8);
  tcase_add_test(tc_main, test_from_decimal_to_int_ok9);
  tcase_add_test(tc_main, test_from_decimal_to_int_ok10);
  tcase_add_test(tc_main, test_from_decimal_to_int_ok11);
  tcase_add_test(tc_main, test_from_decimal_to_int_ok12);
  tcase_add_test(tc_main, test_from_decimal_to_int_ok13);
  tcase_add_test(tc_main, test_from_decimal_to_int_ok14);
  tcase_add_test(tc_main, test_from_decimal_to_int_ok15);
  tcase_add_test(tc_main, test_from_decimal_to_int_ok16);
  tcase_add_test(tc_main, test_from_decimal_to_int_ok17);
  tcase_add_test(tc_main, test_from_decimal_to_int_ok18);
  tcase_add_test(tc_main, test_from_decimal_to_int_ok19);
  tcase_add_test(tc_main, test_from_decimal_to_int_ok20);
  tcase_add_test(tc_main, test_from_decimal_to_int_ok21);
  tcase_add_test(tc_main, test_from_decimal_to_int_ok22);
  tcase_add_test(tc_main, test_from_decimal_to_int_ok23);
  tcase_add_test(tc_main, test_from_decimal_to_int_ok24);
  tcase_add_test(tc_main, test_from_decimal_to_int_ok25);
  tcase_add_test(tc_main, test_from_decimal_to_int_ok26);
  tcase_add_test(tc_main, test_from_decimal_to_int_ok27);
  tcase_add_test(tc_main, test_from_decimal_to_int_ok28);
  tcase_add_test(tc_main, test_from_decimal_to_int_ok29);
  tcase_add_test(tc_main, test_from_decimal_to_int_ok30);
  tcase_add_test(tc_main, test_from_decimal_to_int_ok31);
  tcase_add_test(tc_main, test_from_decimal_to_int_ok32);
  tcase_add_test(tc_main, test_from_decimal_to_int_ok33);
  tcase_add_test(tc_main, test_from_decimal_to_int_ok34);
  tcase_add_test(tc_main, test_from_decimal_to_int_ok35);
  tcase_add_test(tc_main, test_from_decimal_to_int_ok36);
  tcase_add_test(tc_main, test_from_decimal_to_int_ok37);
  tcase_add_test(tc_main, test_from_decimal_to_int_ok38);
  tcase_add_test(tc_main, test_from_decimal_to_int_ok39);
  tcase_add_test(tc_main, test_from_decimal_to_int_ok40);
  tcase_add_test(tc_main, test_from_decimal_to_int_ok41);
  tcase_add_test(tc_main, test_from_decimal_to_int_ok42);
  tcase_add_test(tc_main, test_from_decimal_to_int_ok43);
  tcase_add_test(tc_main, test_from_decimal_to_int_ok44);
  tcase_add_test(tc_main, test_from_decimal_to_int_ok45);
  tcase_add_test(tc_main, test_from_decimal_to_int_ok46);
  tcase_add_test(tc_main, test_from_decimal_to_int_ok47);
  tcase_add_test(tc_main, test_from_decimal_to_int_ok48);
  tcase_add_test(tc_main, test_from_decimal_to_int_ok49);
  tcase_add_test(tc_main, test_from_decimal_to_int_ok50);
  tcase_add_test(tc_main, test_from_decimal_to_int_ok51);
  tcase_add_test(tc_main, test_from_decimal_to_int_ok52);
  tcase_add_test(tc_main, test_from_decimal_to_int_ok53);
  tcase_add_test(tc_main, test_from_decimal_to_int_ok54);
  tcase_add_test(tc_main, test_from_decimal_to_int_ok55);
  tcase_add_test(tc_main, test_from_decimal_to_int_ok56);
  tcase_add_test(tc_main, test_from_decimal_to_int_ok57);
  tcase_add_test(tc_main, test_from_decimal_to_int_ok58);
  tcase_add_test(tc_main, test_from_decimal_to_int_ok59);
  tcase_add_test(tc_main, test_from_decimal_to_int_ok60);
  tcase_add_test(tc_main, test_from_decimal_to_int_ok61);
  tcase_add_test(tc_main, test_from_decimal_to_int_ok62);
  tcase_add_test(tc_main, test_from_decimal_to_int_ok63);
  tcase_add_test(tc_main, test_from_decimal_to_int_ok64);
  tcase_add_test(tc_main, test_from_decimal_to_int_ok65);
  tcase_add_test(tc_main, test_from_decimal_to_int_ok66);
  tcase_add_test(tc_main, test_from_decimal_to_int_ok67);
  tcase_add_test(tc_main, test_from_decimal_to_int_ok68);
  tcase_add_test(tc_main, test_from_decimal_to_int_ok69);
  tcase_add_test(tc_main, test_from_decimal_to_int_ok70);
  tcase_add_test(tc_main, test_from_decimal_to_int_ok71);
  tcase_add_test(tc_main, test_from_decimal_to_int_ok72);
  tcase_add_test(tc_main, test_from_decimal_to_int_ok73);
  tcase_add_test(tc_main, test_from_decimal_to_int_ok74);
  tcase_add_test(tc_main, test_from_decimal_to_int_ok75);
  tcase_add_test(tc_main, test_from_decimal_to_int_ok76);
  tcase_add_test(tc_main, test_from_decimal_to_int_ok77);
  tcase_add_test(tc_main, test_from_decimal_to_int_ok78);
  tcase_add_test(tc_main, test_from_decimal_to_int_ok79);
  tcase_add_test(tc_main, test_from_decimal_to_int_ok80);
  tcase_add_test(tc_main, test_from_decimal_to_int_ok81);
  tcase_add_test(tc_main, test_from_decimal_to_int_ok82);
  tcase_add_test(tc_main, test_from_decimal_to_int_ok83);
  tcase_add_test(tc_main, test_from_decimal_to_int_ok84);
  tcase_add_test(tc_main, test_from_decimal_to_int_ok85);
  tcase_add_test(tc_main, test_from_decimal_to_int_ok86);
  tcase_add_test(tc_main, test_from_decimal_to_int_ok87);
  tcase_add_test(tc_main, test_from_decimal_to_int_ok88);
  tcase_add_test(tc_main, test_from_decimal_to_int_ok89);
  tcase_add_test(tc_main, test_from_decimal_to_int_ok90);
  tcase_add_test(tc_main, test_from_decimal_to_int_ok91);
  tcase_add_test(tc_main, test_from_decimal_to_int_ok92);
  tcase_add_test(tc_main, test_from_decimal_to_int_ok93);
  tcase_add_test(tc_main, test_from_decimal_to_int_ok94);
  tcase_add_test(tc_main, test_from_decimal_to_int_ok95);
  tcase_add_test(tc_main, test_from_decimal_to_int_ok96);
  tcase_add_test(tc_main, test_from_decimal_to_int_ok97);
  tcase_add_test(tc_main, test_from_decimal_to_int_ok98);
  tcase_add_test(tc_main, test_from_decimal_to_int_ok99);
  tcase_add_test(tc_main, test_from_decimal_to_int_ok100);

  suite_add_tcase(s, tc_main);
  return s;
}

void test_from_int_to_decimal(int n, s21_decimal dcml) {
  s21_decimal dcml_cp;
  int rс = s21_from_int_to_decimal(n, &dcml_cp);

  ck_assert_int_eq(rс, CONVERSION_OK);

  ck_assert_uint_eq((unsigned)n,
                    dcml.bits[0] * ((dcml.bits[3] & SIGN_MASK) ? -1 : 1));
  ck_assert_int_eq(dcml.bits[1], ZERO);
  ck_assert_int_eq(dcml.bits[2], ZERO);
}

void test_from_decimal_to_int(s21_decimal decimal, int check) {
  int result;
  int code = s21_from_decimal_to_int(decimal, &result);

  ck_assert_int_eq(result, check);
  ck_assert_int_eq(code, CONVERSION_OK);
}

// void test_from_decimal_to_int_fail(s21_decimal decimal) {
//   int result;
//   int code = s21_from_decimal_to_int(decimal, &result);

//   ck_assert_int_eq(code, CONVERSION_ERROR);
// }

void test_from_float_to_decimal(int f, s21_decimal decimal_check) {
  s21_decimal result;

  float_cast_test cast_float;
  cast_float.int32_bytes = f;

  int code = s21_from_float_to_decimal(cast_float.f, &result);

  ck_assert_int_eq(code, CONVERSION_OK);
  ck_assert_int_eq(s21_is_equal(result, decimal_check), 1);
}

void test_from_decimal_to_float(s21_decimal decimal, int check) {
  float result;
  int code = s21_from_decimal_to_float(decimal, &result);

  float_cast_test cast_result;
  cast_result.f = result;

  ck_assert_int_eq(cast_result.int32_bytes, check);
  ck_assert_int_eq(code, CONVERSION_OK);
}
