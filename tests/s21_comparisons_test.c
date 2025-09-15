#include "./tests.h"

START_TEST(test_is_equal_ok1) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok2) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok3) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok4) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok5) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok6) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok7) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok8) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok9) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok10) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok11) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok12) {
  // -52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok13) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok14) {
  // 5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok15) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x801B0000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok16) {
  // -5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x801B0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok17) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 5281877500950955839569596689
  s21_decimal decimal2 = {{0x11111111, 0x11111111, 0x11111111, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok18) {
  // 5281877500950955839569596689
  s21_decimal decimal1 = {{0x11111111, 0x11111111, 0x11111111, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok19) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -5281877500950955839569596689
  s21_decimal decimal2 = {{0x11111111, 0x11111111, 0x11111111, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok20) {
  // -5281877500950955839569596689
  s21_decimal decimal1 = {{0x11111111, 0x11111111, 0x11111111, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok21) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 5281877500950955839569596689.0
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x10000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok22) {
  // 5281877500950955839569596689.0
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x10000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok23) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -5281877500950955839569596689.0
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80010000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok24) {
  // -5281877500950955839569596689.0
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80010000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok25) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 7922816251426433759354395033
  s21_decimal decimal2 = {{0x99999999, 0x99999999, 0x19999999, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok26) {
  // 7922816251426433759354395033
  s21_decimal decimal1 = {{0x99999999, 0x99999999, 0x19999999, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok27) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -7922816251426433759354395033
  s21_decimal decimal2 = {{0x99999999, 0x99999999, 0x19999999, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok28) {
  // -7922816251426433759354395033
  s21_decimal decimal1 = {{0x99999999, 0x99999999, 0x19999999, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok29) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 7922816251426433759354395034
  s21_decimal decimal2 = {{0x9999999A, 0x99999999, 0x19999999, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok30) {
  // 7922816251426433759354395034
  s21_decimal decimal1 = {{0x9999999A, 0x99999999, 0x19999999, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok31) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -7922816251426433759354395034
  s21_decimal decimal2 = {{0x9999999A, 0x99999999, 0x19999999, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok32) {
  // -7922816251426433759354395034
  s21_decimal decimal1 = {{0x9999999A, 0x99999999, 0x19999999, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok33) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1.2297829382473034409
  s21_decimal decimal2 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x130000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok34) {
  // 1.2297829382473034409
  s21_decimal decimal1 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x130000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok35) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1.2297829382473034409
  s21_decimal decimal2 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x80130000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok36) {
  // -1.2297829382473034409
  s21_decimal decimal1 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x80130000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok37) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1.2297829382473034410
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x130000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok38) {
  // 1.2297829382473034410
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x130000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok39) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1.2297829382473034410
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x80130000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok40) {
  // -1.2297829382473034410
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x80130000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}
END_TEST

START_TEST(test_is_equal_ok41) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok42) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok43) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok44) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok45) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok46) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok47) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok48) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok49) {
  // -52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok50) {
  // -52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok51) {
  // 5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  // 5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  int check = COMPARISON_TRUE;

  test_is_equal(decimal1, decimal2, check);
}
END_TEST

START_TEST(test_is_equal_ok52) {
  // -1.0
  s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x80010000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok53) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1.22
  s21_decimal decimal2 = {{0x7A, 0x0, 0x0, 0x20000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok54) {
  // 1.22
  s21_decimal decimal1 = {{0x7A, 0x0, 0x0, 0x20000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok55) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1.22
  s21_decimal decimal2 = {{0x7A, 0x0, 0x0, 0x80020000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok56) {
  // -1.22
  s21_decimal decimal1 = {{0x7A, 0x0, 0x0, 0x80020000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok57) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1.230001
  s21_decimal decimal2 = {{0x12C4B1, 0x0, 0x0, 0x60000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok58) {
  // 1.230001
  s21_decimal decimal1 = {{0x12C4B1, 0x0, 0x0, 0x60000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok59) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1.230001
  s21_decimal decimal2 = {{0x12C4B1, 0x0, 0x0, 0x80060000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok60) {
  // -1.230001
  s21_decimal decimal1 = {{0x12C4B1, 0x0, 0x0, 0x80060000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok61) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1.23000
  s21_decimal decimal2 = {{0x1E078, 0x0, 0x0, 0x50000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok62) {
  // 1.23000
  s21_decimal decimal1 = {{0x1E078, 0x0, 0x0, 0x50000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok63) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1.23000
  s21_decimal decimal2 = {{0x1E078, 0x0, 0x0, 0x80050000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok64) {
  // -1.23000
  s21_decimal decimal1 = {{0x1E078, 0x0, 0x0, 0x80050000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok65) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1431655765
  s21_decimal decimal2 = {{0x55555555, 0x0, 0x0, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok66) {
  // 1431655765
  s21_decimal decimal1 = {{0x55555555, 0x0, 0x0, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok67) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1431655765
  s21_decimal decimal2 = {{0x55555555, 0x0, 0x0, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok68) {
  // -1431655765
  s21_decimal decimal1 = {{0x55555555, 0x0, 0x0, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok69) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1431655765.00000
  s21_decimal decimal2 = {{0x5554D320, 0x8235, 0x0, 0x50000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok70) {
  // 1431655765.00000
  s21_decimal decimal1 = {{0x5554D320, 0x8235, 0x0, 0x50000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok71) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1431655765.00000
  s21_decimal decimal2 = {{0x5554D320, 0x8235, 0x0, 0x80050000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok72) {
  // -1431655765.00000
  s21_decimal decimal1 = {{0x5554D320, 0x8235, 0x0, 0x80050000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok73) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1431655765.000000000000000001
  s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok74) {
  // 1431655765.000000000000000001
  s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok75) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1431655765.000000000000000001
  s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x80120000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok76) {
  // -1431655765.000000000000000001
  s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x80120000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok77) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1431655764.999999999999999999
  s21_decimal decimal2 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x120000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok78) {
  // 1431655764.999999999999999999
  s21_decimal decimal1 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x120000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok79) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1431655764.999999999999999999
  s21_decimal decimal2 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x80120000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok80) {
  // -1431655764.999999999999999999
  s21_decimal decimal1 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x80120000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok81) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 0.9999999999999999999999999999
  s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok82) {
  // 0.9999999999999999999999999999
  s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok83) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -0.9999999999999999999999999999
  s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x801C0000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok84) {
  // -0.9999999999999999999999999999
  s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x801C0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok85) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 0.0000000000000000000000000001
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x1C0000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok86) {
  // 0.0000000000000000000000000001
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok87) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -0.0000000000000000000000000001
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x801C0000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok88) {
  // -0.0000000000000000000000000001
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x801C0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok89) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 0
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok90) {
  // 0
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok91) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -0
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok92) {
  // -0
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok93) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -0.00000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x800E0000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok94) {
  // -0.00000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x800E0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok95) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 0.00000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0xE0000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok96) {
  // 0.00000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0xE0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok97) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -0.0000000000000000000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x801C0000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok98) {
  // -0.0000000000000000000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x801C0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok99) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 0.0000000000000000000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x1C0000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok100) {
  // 0.0000000000000000000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok101) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -305820564510.46084593589468994
  s21_decimal decimal2 = {{0x64B0BF42, 0x2A3886D9, 0x62D0E25A, 0x80110000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok102) {
  // -305820564510.46084593589468994
  s21_decimal decimal1 = {{0x64B0BF42, 0x2A3886D9, 0x62D0E25A, 0x80110000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok103) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 305820564510.46084593589468994
  s21_decimal decimal2 = {{0x64B0BF42, 0x2A3886D9, 0x62D0E25A, 0x110000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok104) {
  // 305820564510.46084593589468994
  s21_decimal decimal1 = {{0x64B0BF42, 0x2A3886D9, 0x62D0E25A, 0x110000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok105) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 5077779.6717425679610094186071
  s21_decimal decimal2 = {{0xA15E6E57, 0xC0C562E8, 0xA41268B3, 0x160000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok106) {
  // 5077779.6717425679610094186071
  s21_decimal decimal1 = {{0xA15E6E57, 0xC0C562E8, 0xA41268B3, 0x160000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok107) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -5077779.6717425679610094186071
  s21_decimal decimal2 = {{0xA15E6E57, 0xC0C562E8, 0xA41268B3, 0x80160000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok108) {
  // -5077779.6717425679610094186071
  s21_decimal decimal1 = {{0xA15E6E57, 0xC0C562E8, 0xA41268B3, 0x80160000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok109) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 20786105945010.405849433600269
  s21_decimal decimal2 = {{0x48D7710D, 0x279AE1C0, 0x4329DD25, 0xF0000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok110) {
  // 20786105945010.405849433600269
  s21_decimal decimal1 = {{0x48D7710D, 0x279AE1C0, 0x4329DD25, 0xF0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok111) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -20786105945010.405849433600269
  s21_decimal decimal2 = {{0x48D7710D, 0x279AE1C0, 0x4329DD25, 0x800F0000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok112) {
  // -20786105945010.405849433600269
  s21_decimal decimal1 = {{0x48D7710D, 0x279AE1C0, 0x4329DD25, 0x800F0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok113) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok114) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok115) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok116) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok117) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok118) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok119) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok120) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok121) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok122) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok123) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok124) {
  // -52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok125) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok126) {
  // 5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok127) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x801B0000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok128) {
  // -5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x801B0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok129) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 5281877500950955839569596689
  s21_decimal decimal2 = {{0x11111111, 0x11111111, 0x11111111, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok130) {
  // 5281877500950955839569596689
  s21_decimal decimal1 = {{0x11111111, 0x11111111, 0x11111111, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok131) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -5281877500950955839569596689
  s21_decimal decimal2 = {{0x11111111, 0x11111111, 0x11111111, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok132) {
  // -5281877500950955839569596689
  s21_decimal decimal1 = {{0x11111111, 0x11111111, 0x11111111, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok133) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 5281877500950955839569596689.0
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x10000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok134) {
  // 5281877500950955839569596689.0
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x10000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok135) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -5281877500950955839569596689.0
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80010000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok136) {
  // -5281877500950955839569596689.0
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80010000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok137) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 7922816251426433759354395033
  s21_decimal decimal2 = {{0x99999999, 0x99999999, 0x19999999, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok138) {
  // 7922816251426433759354395033
  s21_decimal decimal1 = {{0x99999999, 0x99999999, 0x19999999, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok139) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -7922816251426433759354395033
  s21_decimal decimal2 = {{0x99999999, 0x99999999, 0x19999999, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok140) {
  // -7922816251426433759354395033
  s21_decimal decimal1 = {{0x99999999, 0x99999999, 0x19999999, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok141) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 7922816251426433759354395034
  s21_decimal decimal2 = {{0x9999999A, 0x99999999, 0x19999999, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok142) {
  // 7922816251426433759354395034
  s21_decimal decimal1 = {{0x9999999A, 0x99999999, 0x19999999, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok143) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -7922816251426433759354395034
  s21_decimal decimal2 = {{0x9999999A, 0x99999999, 0x19999999, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok144) {
  // -7922816251426433759354395034
  s21_decimal decimal1 = {{0x9999999A, 0x99999999, 0x19999999, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok145) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1.2297829382473034409
  s21_decimal decimal2 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x130000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok146) {
  // 1.2297829382473034409
  s21_decimal decimal1 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x130000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok147) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1.2297829382473034409
  s21_decimal decimal2 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x80130000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok148) {
  // -1.2297829382473034409
  s21_decimal decimal1 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x80130000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok149) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1.2297829382473034410
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x130000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok150) {
  // 1.2297829382473034410
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x130000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok151) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1.2297829382473034410
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x80130000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok152) {
  // -1.2297829382473034410
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x80130000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok153) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1.2297829382473034411
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x130000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok154) {
  // 1.2297829382473034411
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x130000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok155) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1.2297829382473034411
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x80130000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok156) {
  // -1.2297829382473034411
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x80130000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok157) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok158) {
  // 1
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok159) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok160) {
  // -1
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok161) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1.0
  s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x10000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok162) {
  // 1.0
  s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x10000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok163) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1.0
  s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x80010000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok164) {
  // -1.0
  s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x80010000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok165) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1.22
  s21_decimal decimal2 = {{0x7A, 0x0, 0x0, 0x20000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok166) {
  // 1.22
  s21_decimal decimal1 = {{0x7A, 0x0, 0x0, 0x20000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok167) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1.22
  s21_decimal decimal2 = {{0x7A, 0x0, 0x0, 0x80020000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok168) {
  // -1.22
  s21_decimal decimal1 = {{0x7A, 0x0, 0x0, 0x80020000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok169) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1.230001
  s21_decimal decimal2 = {{0x12C4B1, 0x0, 0x0, 0x60000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok170) {
  // 1.230001
  s21_decimal decimal1 = {{0x12C4B1, 0x0, 0x0, 0x60000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok171) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1.230001
  s21_decimal decimal2 = {{0x12C4B1, 0x0, 0x0, 0x80060000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok172) {
  // -1.230001
  s21_decimal decimal1 = {{0x12C4B1, 0x0, 0x0, 0x80060000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok173) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1.23000
  s21_decimal decimal2 = {{0x1E078, 0x0, 0x0, 0x50000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok174) {
  // 1.23000
  s21_decimal decimal1 = {{0x1E078, 0x0, 0x0, 0x50000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok175) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1.23000
  s21_decimal decimal2 = {{0x1E078, 0x0, 0x0, 0x80050000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok176) {
  // -1.23000
  s21_decimal decimal1 = {{0x1E078, 0x0, 0x0, 0x80050000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok177) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1431655765
  s21_decimal decimal2 = {{0x55555555, 0x0, 0x0, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok178) {
  // 1431655765
  s21_decimal decimal1 = {{0x55555555, 0x0, 0x0, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok179) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1431655765
  s21_decimal decimal2 = {{0x55555555, 0x0, 0x0, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok180) {
  // -1431655765
  s21_decimal decimal1 = {{0x55555555, 0x0, 0x0, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok181) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1431655765.00000
  s21_decimal decimal2 = {{0x5554D320, 0x8235, 0x0, 0x50000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok182) {
  // 1431655765.00000
  s21_decimal decimal1 = {{0x5554D320, 0x8235, 0x0, 0x50000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok183) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1431655765.00000
  s21_decimal decimal2 = {{0x5554D320, 0x8235, 0x0, 0x80050000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok184) {
  // -1431655765.00000
  s21_decimal decimal1 = {{0x5554D320, 0x8235, 0x0, 0x80050000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok185) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1431655765.000000000000000001
  s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok186) {
  // 1431655765.000000000000000001
  s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok187) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1431655765.000000000000000001
  s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x80120000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok188) {
  // -1431655765.000000000000000001
  s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x80120000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok189) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1431655764.999999999999999999
  s21_decimal decimal2 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x120000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok190) {
  // 1431655764.999999999999999999
  s21_decimal decimal1 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x120000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok191) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1431655764.999999999999999999
  s21_decimal decimal2 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x80120000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok192) {
  // -1431655764.999999999999999999
  s21_decimal decimal1 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x80120000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok193) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 0.9999999999999999999999999999
  s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok194) {
  // 0.9999999999999999999999999999
  s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok195) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -0.9999999999999999999999999999
  s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x801C0000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok196) {
  // -0.9999999999999999999999999999
  s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x801C0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok197) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 0.0000000000000000000000000001
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x1C0000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok198) {
  // 0.0000000000000000000000000001
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok199) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -0.0000000000000000000000000001
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x801C0000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok200) {
  // -0.0000000000000000000000000001
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x801C0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok201) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 0
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok202) {
  // 0
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok203) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -0
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok204) {
  // -0
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok205) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -0.00000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x800E0000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok206) {
  // -0.00000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x800E0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok207) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 0.00000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0xE0000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok208) {
  // 0.00000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0xE0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok209) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -0.0000000000000000000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x801C0000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok210) {
  // -0.0000000000000000000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x801C0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok211) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 0.0000000000000000000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x1C0000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok212) {
  // 0.0000000000000000000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok213) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -305820564510.46084593589468994
  s21_decimal decimal2 = {{0x64B0BF42, 0x2A3886D9, 0x62D0E25A, 0x80110000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok214) {
  // -305820564510.46084593589468994
  s21_decimal decimal1 = {{0x64B0BF42, 0x2A3886D9, 0x62D0E25A, 0x80110000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok215) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 305820564510.46084593589468994
  s21_decimal decimal2 = {{0x64B0BF42, 0x2A3886D9, 0x62D0E25A, 0x110000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok216) {
  // 305820564510.46084593589468994
  s21_decimal decimal1 = {{0x64B0BF42, 0x2A3886D9, 0x62D0E25A, 0x110000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok217) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 5077779.6717425679610094186071
  s21_decimal decimal2 = {{0xA15E6E57, 0xC0C562E8, 0xA41268B3, 0x160000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok218) {
  // 5077779.6717425679610094186071
  s21_decimal decimal1 = {{0xA15E6E57, 0xC0C562E8, 0xA41268B3, 0x160000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok219) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -5077779.6717425679610094186071
  s21_decimal decimal2 = {{0xA15E6E57, 0xC0C562E8, 0xA41268B3, 0x80160000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok220) {
  // -5077779.6717425679610094186071
  s21_decimal decimal1 = {{0xA15E6E57, 0xC0C562E8, 0xA41268B3, 0x80160000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok221) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 20786105945010.405849433600269
  s21_decimal decimal2 = {{0x48D7710D, 0x279AE1C0, 0x4329DD25, 0xF0000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok222) {
  // 20786105945010.405849433600269
  s21_decimal decimal1 = {{0x48D7710D, 0x279AE1C0, 0x4329DD25, 0xF0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok223) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -20786105945010.405849433600269
  s21_decimal decimal2 = {{0x48D7710D, 0x279AE1C0, 0x4329DD25, 0x800F0000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok224) {
  // -20786105945010.405849433600269
  s21_decimal decimal1 = {{0x48D7710D, 0x279AE1C0, 0x4329DD25, 0x800F0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok225) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok226) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok227) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok228) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok229) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok230) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok231) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok232) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok233) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok234) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok235) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok236) {
  // -52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok237) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok238) {
  // 5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok239) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x801B0000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok240) {
  // -5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x801B0000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok241) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 5281877500950955839569596689
  s21_decimal decimal2 = {{0x11111111, 0x11111111, 0x11111111, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok242) {
  // 5281877500950955839569596689
  s21_decimal decimal1 = {{0x11111111, 0x11111111, 0x11111111, 0x0}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok243) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -5281877500950955839569596689
  s21_decimal decimal2 = {{0x11111111, 0x11111111, 0x11111111, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok244) {
  // -5281877500950955839569596689
  s21_decimal decimal1 = {{0x11111111, 0x11111111, 0x11111111, 0x80000000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok245) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 5281877500950955839569596689.0
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x10000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok246) {
  // 5281877500950955839569596689.0
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x10000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok247) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -5281877500950955839569596689.0
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80010000}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok248) {
  // -5281877500950955839569596689.0
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80010000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok249) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 7922816251426433759354395033
  s21_decimal decimal2 = {{0x99999999, 0x99999999, 0x19999999, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}

START_TEST(test_is_equal_ok250) {
  // 7922816251426433759354395033
  s21_decimal decimal1 = {{0x99999999, 0x99999999, 0x19999999, 0x0}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_equal(decimal1, decimal2, check);
}
END_TEST

START_TEST(test_is_greater_ok1) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok2) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok3) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok4) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok5) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok6) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok7) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok8) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok9) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok10) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok11) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok12) {
  // -52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok13) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  int check = COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok14) {
  // 5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok15) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x801B0000}};
  int check = COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok16) {
  // -5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x801B0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok17) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 5281877500950955839569596689
  s21_decimal decimal2 = {{0x11111111, 0x11111111, 0x11111111, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok18) {
  // 5281877500950955839569596689
  s21_decimal decimal1 = {{0x11111111, 0x11111111, 0x11111111, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok19) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -5281877500950955839569596689
  s21_decimal decimal2 = {{0x11111111, 0x11111111, 0x11111111, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok20) {
  // -5281877500950955839569596689
  s21_decimal decimal1 = {{0x11111111, 0x11111111, 0x11111111, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok21) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 5281877500950955839569596689.0
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x10000}};
  int check = COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok22) {
  // 5281877500950955839569596689.0
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x10000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok23) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -5281877500950955839569596689.0
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80010000}};
  int check = COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok24) {
  // -5281877500950955839569596689.0
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80010000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok25) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 7922816251426433759354395033
  s21_decimal decimal2 = {{0x99999999, 0x99999999, 0x19999999, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok26) {
  // 7922816251426433759354395033
  s21_decimal decimal1 = {{0x99999999, 0x99999999, 0x19999999, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok27) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -7922816251426433759354395033
  s21_decimal decimal2 = {{0x99999999, 0x99999999, 0x19999999, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok28) {
  // -7922816251426433759354395033
  s21_decimal decimal1 = {{0x99999999, 0x99999999, 0x19999999, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok29) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 7922816251426433759354395034
  s21_decimal decimal2 = {{0x9999999A, 0x99999999, 0x19999999, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok30) {
  // 7922816251426433759354395034
  s21_decimal decimal1 = {{0x9999999A, 0x99999999, 0x19999999, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok31) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -7922816251426433759354395034
  s21_decimal decimal2 = {{0x9999999A, 0x99999999, 0x19999999, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok32) {
  // -7922816251426433759354395034
  s21_decimal decimal1 = {{0x9999999A, 0x99999999, 0x19999999, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok33) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1.2297829382473034409
  s21_decimal decimal2 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x130000}};
  int check = COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok34) {
  // 1.2297829382473034409
  s21_decimal decimal1 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x130000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok35) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1.2297829382473034409
  s21_decimal decimal2 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x80130000}};
  int check = COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok36) {
  // -1.2297829382473034409
  s21_decimal decimal1 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x80130000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok37) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1.2297829382473034410
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x130000}};
  int check = COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok38) {
  // 1.2297829382473034410
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x130000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok39) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1.2297829382473034410
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x80130000}};
  int check = COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok40) {
  // -1.2297829382473034410
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x80130000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok41) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1.2297829382473034411
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x130000}};
  int check = COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok42) {
  // 1.2297829382473034411
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x130000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok43) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1.2297829382473034411
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x80130000}};
  int check = COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok44) {
  // -1.2297829382473034411
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x80130000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok45) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok46) {
  // 1
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok47) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok48) {
  // -1
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok49) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1.0
  s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x10000}};
  int check = COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok50) {
  // 1.0
  s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x10000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok51) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1.0
  s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x80010000}};
  int check = COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok52) {
  // -1.0
  s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x80010000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok53) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1.22
  s21_decimal decimal2 = {{0x7A, 0x0, 0x0, 0x20000}};
  int check = COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok54) {
  // 1.22
  s21_decimal decimal1 = {{0x7A, 0x0, 0x0, 0x20000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok55) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1.22
  s21_decimal decimal2 = {{0x7A, 0x0, 0x0, 0x80020000}};
  int check = COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok56) {
  // -1.22
  s21_decimal decimal1 = {{0x7A, 0x0, 0x0, 0x80020000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok57) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1.230001
  s21_decimal decimal2 = {{0x12C4B1, 0x0, 0x0, 0x60000}};
  int check = COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok58) {
  // 1.230001
  s21_decimal decimal1 = {{0x12C4B1, 0x0, 0x0, 0x60000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok59) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1.230001
  s21_decimal decimal2 = {{0x12C4B1, 0x0, 0x0, 0x80060000}};
  int check = COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok60) {
  // -1.230001
  s21_decimal decimal1 = {{0x12C4B1, 0x0, 0x0, 0x80060000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok61) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1.23000
  s21_decimal decimal2 = {{0x1E078, 0x0, 0x0, 0x50000}};
  int check = COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok62) {
  // 1.23000
  s21_decimal decimal1 = {{0x1E078, 0x0, 0x0, 0x50000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok63) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1.23000
  s21_decimal decimal2 = {{0x1E078, 0x0, 0x0, 0x80050000}};
  int check = COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok64) {
  // -1.23000
  s21_decimal decimal1 = {{0x1E078, 0x0, 0x0, 0x80050000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok65) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1431655765
  s21_decimal decimal2 = {{0x55555555, 0x0, 0x0, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok66) {
  // 1431655765
  s21_decimal decimal1 = {{0x55555555, 0x0, 0x0, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok67) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1431655765
  s21_decimal decimal2 = {{0x55555555, 0x0, 0x0, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok68) {
  // -1431655765
  s21_decimal decimal1 = {{0x55555555, 0x0, 0x0, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok69) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1431655765.00000
  s21_decimal decimal2 = {{0x5554D320, 0x8235, 0x0, 0x50000}};
  int check = COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok70) {
  // 1431655765.00000
  s21_decimal decimal1 = {{0x5554D320, 0x8235, 0x0, 0x50000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok71) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1431655765.00000
  s21_decimal decimal2 = {{0x5554D320, 0x8235, 0x0, 0x80050000}};
  int check = COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok72) {
  // -1431655765.00000
  s21_decimal decimal1 = {{0x5554D320, 0x8235, 0x0, 0x80050000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok73) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1431655765.000000000000000001
  s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
  int check = COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok74) {
  // 1431655765.000000000000000001
  s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok75) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1431655765.000000000000000001
  s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x80120000}};
  int check = COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok76) {
  // -1431655765.000000000000000001
  s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x80120000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok77) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1431655764.999999999999999999
  s21_decimal decimal2 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x120000}};
  int check = COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok78) {
  // 1431655764.999999999999999999
  s21_decimal decimal1 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x120000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok79) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1431655764.999999999999999999
  s21_decimal decimal2 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x80120000}};
  int check = COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok80) {
  // -1431655764.999999999999999999
  s21_decimal decimal1 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x80120000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok81) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 0.9999999999999999999999999999
  s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
  int check = COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok82) {
  // 0.9999999999999999999999999999
  s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok83) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -0.9999999999999999999999999999
  s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x801C0000}};
  int check = COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok84) {
  // -0.9999999999999999999999999999
  s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x801C0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok85) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 0.0000000000000000000000000001
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x1C0000}};
  int check = COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok86) {
  // 0.0000000000000000000000000001
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok87) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -0.0000000000000000000000000001
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x801C0000}};
  int check = COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok88) {
  // -0.0000000000000000000000000001
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x801C0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok89) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 0
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok90) {
  // 0
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok91) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -0
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok92) {
  // -0
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok93) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -0.00000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x800E0000}};
  int check = COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok94) {
  // -0.00000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x800E0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok95) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 0.00000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0xE0000}};
  int check = COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok96) {
  // 0.00000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0xE0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok97) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -0.0000000000000000000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x801C0000}};
  int check = COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok98) {
  // -0.0000000000000000000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x801C0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok99) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 0.0000000000000000000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x1C0000}};
  int check = COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok100) {
  // 0.0000000000000000000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok101) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -19290120297533996546.12653034
  s21_decimal decimal2 = {{0x11EAD3EA, 0xABA39F31, 0x63BA42F, 0x80080000}};
  int check = COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok102) {
  // -19290120297533996546.12653034
  s21_decimal decimal1 = {{0x11EAD3EA, 0xABA39F31, 0x63BA42F, 0x80080000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok103) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 19290120297533996546.12653034
  s21_decimal decimal2 = {{0x11EAD3EA, 0xABA39F31, 0x63BA42F, 0x80000}};
  int check = COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok104) {
  // 19290120297533996546.12653034
  s21_decimal decimal1 = {{0x11EAD3EA, 0xABA39F31, 0x63BA42F, 0x80000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok105) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 3.2370474408201521914302817507
  s21_decimal decimal2 = {{0xB219E4E3, 0xE34F18DD, 0x68983A95, 0x1C0000}};
  int check = COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok106) {
  // 3.2370474408201521914302817507
  s21_decimal decimal1 = {{0xB219E4E3, 0xE34F18DD, 0x68983A95, 0x1C0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok107) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -3.2370474408201521914302817507
  s21_decimal decimal2 = {{0xB219E4E3, 0xE34F18DD, 0x68983A95, 0x801C0000}};
  int check = COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok108) {
  // -3.2370474408201521914302817507
  s21_decimal decimal1 = {{0xB219E4E3, 0xE34F18DD, 0x68983A95, 0x801C0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok109) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 858826877820029649465.1465162
  s21_decimal decimal2 = {{0x96DCDDCA, 0x5C57756E, 0x1BC00CA7, 0x70000}};
  int check = COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok110) {
  // 858826877820029649465.1465162
  s21_decimal decimal1 = {{0x96DCDDCA, 0x5C57756E, 0x1BC00CA7, 0x70000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok111) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -858826877820029649465.1465162
  s21_decimal decimal2 = {{0x96DCDDCA, 0x5C57756E, 0x1BC00CA7, 0x80070000}};
  int check = COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok112) {
  // -858826877820029649465.1465162
  s21_decimal decimal1 = {{0x96DCDDCA, 0x5C57756E, 0x1BC00CA7, 0x80070000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok113) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok114) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok115) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok116) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok117) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok118) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok119) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok120) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok121) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok122) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok123) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok124) {
  // -52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok125) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  int check = COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok126) {
  // 5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok127) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x801B0000}};
  int check = COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok128) {
  // -5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x801B0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok129) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 5281877500950955839569596689
  s21_decimal decimal2 = {{0x11111111, 0x11111111, 0x11111111, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok130) {
  // 5281877500950955839569596689
  s21_decimal decimal1 = {{0x11111111, 0x11111111, 0x11111111, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok131) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -5281877500950955839569596689
  s21_decimal decimal2 = {{0x11111111, 0x11111111, 0x11111111, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok132) {
  // -5281877500950955839569596689
  s21_decimal decimal1 = {{0x11111111, 0x11111111, 0x11111111, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok133) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 5281877500950955839569596689.0
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x10000}};
  int check = COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok134) {
  // 5281877500950955839569596689.0
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x10000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok135) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -5281877500950955839569596689.0
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80010000}};
  int check = COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok136) {
  // -5281877500950955839569596689.0
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80010000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok137) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 7922816251426433759354395033
  s21_decimal decimal2 = {{0x99999999, 0x99999999, 0x19999999, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok138) {
  // 7922816251426433759354395033
  s21_decimal decimal1 = {{0x99999999, 0x99999999, 0x19999999, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok139) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -7922816251426433759354395033
  s21_decimal decimal2 = {{0x99999999, 0x99999999, 0x19999999, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok140) {
  // -7922816251426433759354395033
  s21_decimal decimal1 = {{0x99999999, 0x99999999, 0x19999999, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok141) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 7922816251426433759354395034
  s21_decimal decimal2 = {{0x9999999A, 0x99999999, 0x19999999, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok142) {
  // 7922816251426433759354395034
  s21_decimal decimal1 = {{0x9999999A, 0x99999999, 0x19999999, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok143) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -7922816251426433759354395034
  s21_decimal decimal2 = {{0x9999999A, 0x99999999, 0x19999999, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok144) {
  // -7922816251426433759354395034
  s21_decimal decimal1 = {{0x9999999A, 0x99999999, 0x19999999, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok145) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1.2297829382473034409
  s21_decimal decimal2 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x130000}};
  int check = COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok146) {
  // 1.2297829382473034409
  s21_decimal decimal1 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x130000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok147) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1.2297829382473034409
  s21_decimal decimal2 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x80130000}};
  int check = COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok148) {
  // -1.2297829382473034409
  s21_decimal decimal1 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x80130000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok149) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1.2297829382473034410
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x130000}};
  int check = COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok150) {
  // 1.2297829382473034410
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x130000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok151) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1.2297829382473034410
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x80130000}};
  int check = COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok152) {
  // -1.2297829382473034410
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x80130000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok153) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1.2297829382473034411
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x130000}};
  int check = COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok154) {
  // 1.2297829382473034411
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x130000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok155) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1.2297829382473034411
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x80130000}};
  int check = COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok156) {
  // -1.2297829382473034411
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x80130000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok157) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok158) {
  // 1
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok159) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok160) {
  // -1
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok161) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1.0
  s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x10000}};
  int check = COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok162) {
  // 1.0
  s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x10000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok163) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1.0
  s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x80010000}};
  int check = COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok164) {
  // -1.0
  s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x80010000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok165) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1.22
  s21_decimal decimal2 = {{0x7A, 0x0, 0x0, 0x20000}};
  int check = COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok166) {
  // 1.22
  s21_decimal decimal1 = {{0x7A, 0x0, 0x0, 0x20000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok167) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1.22
  s21_decimal decimal2 = {{0x7A, 0x0, 0x0, 0x80020000}};
  int check = COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok168) {
  // -1.22
  s21_decimal decimal1 = {{0x7A, 0x0, 0x0, 0x80020000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok169) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1.230001
  s21_decimal decimal2 = {{0x12C4B1, 0x0, 0x0, 0x60000}};
  int check = COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok170) {
  // 1.230001
  s21_decimal decimal1 = {{0x12C4B1, 0x0, 0x0, 0x60000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok171) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1.230001
  s21_decimal decimal2 = {{0x12C4B1, 0x0, 0x0, 0x80060000}};
  int check = COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok172) {
  // -1.230001
  s21_decimal decimal1 = {{0x12C4B1, 0x0, 0x0, 0x80060000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok173) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1.23000
  s21_decimal decimal2 = {{0x1E078, 0x0, 0x0, 0x50000}};
  int check = COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok174) {
  // 1.23000
  s21_decimal decimal1 = {{0x1E078, 0x0, 0x0, 0x50000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok175) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1.23000
  s21_decimal decimal2 = {{0x1E078, 0x0, 0x0, 0x80050000}};
  int check = COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok176) {
  // -1.23000
  s21_decimal decimal1 = {{0x1E078, 0x0, 0x0, 0x80050000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok177) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1431655765
  s21_decimal decimal2 = {{0x55555555, 0x0, 0x0, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok178) {
  // 1431655765
  s21_decimal decimal1 = {{0x55555555, 0x0, 0x0, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok179) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1431655765
  s21_decimal decimal2 = {{0x55555555, 0x0, 0x0, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok180) {
  // -1431655765
  s21_decimal decimal1 = {{0x55555555, 0x0, 0x0, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok181) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1431655765.00000
  s21_decimal decimal2 = {{0x5554D320, 0x8235, 0x0, 0x50000}};
  int check = COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok182) {
  // 1431655765.00000
  s21_decimal decimal1 = {{0x5554D320, 0x8235, 0x0, 0x50000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok183) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1431655765.00000
  s21_decimal decimal2 = {{0x5554D320, 0x8235, 0x0, 0x80050000}};
  int check = COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok184) {
  // -1431655765.00000
  s21_decimal decimal1 = {{0x5554D320, 0x8235, 0x0, 0x80050000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok185) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1431655765.000000000000000001
  s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
  int check = COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok186) {
  // 1431655765.000000000000000001
  s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok187) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1431655765.000000000000000001
  s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x80120000}};
  int check = COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok188) {
  // -1431655765.000000000000000001
  s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x80120000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok189) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1431655764.999999999999999999
  s21_decimal decimal2 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x120000}};
  int check = COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok190) {
  // 1431655764.999999999999999999
  s21_decimal decimal1 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x120000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok191) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1431655764.999999999999999999
  s21_decimal decimal2 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x80120000}};
  int check = COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok192) {
  // -1431655764.999999999999999999
  s21_decimal decimal1 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x80120000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok193) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 0.9999999999999999999999999999
  s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
  int check = COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok194) {
  // 0.9999999999999999999999999999
  s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok195) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -0.9999999999999999999999999999
  s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x801C0000}};
  int check = COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok196) {
  // -0.9999999999999999999999999999
  s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x801C0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok197) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 0.0000000000000000000000000001
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x1C0000}};
  int check = COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok198) {
  // 0.0000000000000000000000000001
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok199) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -0.0000000000000000000000000001
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x801C0000}};
  int check = COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok200) {
  // -0.0000000000000000000000000001
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x801C0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok201) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 0
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok202) {
  // 0
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok203) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -0
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok204) {
  // -0
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok205) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -0.00000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x800E0000}};
  int check = COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok206) {
  // -0.00000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x800E0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok207) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 0.00000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0xE0000}};
  int check = COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok208) {
  // 0.00000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0xE0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok209) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -0.0000000000000000000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x801C0000}};
  int check = COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok210) {
  // -0.0000000000000000000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x801C0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok211) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 0.0000000000000000000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x1C0000}};
  int check = COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok212) {
  // 0.0000000000000000000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok213) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -19290120297533996546.12653034
  s21_decimal decimal2 = {{0x11EAD3EA, 0xABA39F31, 0x63BA42F, 0x80080000}};
  int check = COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok214) {
  // -19290120297533996546.12653034
  s21_decimal decimal1 = {{0x11EAD3EA, 0xABA39F31, 0x63BA42F, 0x80080000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok215) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 19290120297533996546.12653034
  s21_decimal decimal2 = {{0x11EAD3EA, 0xABA39F31, 0x63BA42F, 0x80000}};
  int check = COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok216) {
  // 19290120297533996546.12653034
  s21_decimal decimal1 = {{0x11EAD3EA, 0xABA39F31, 0x63BA42F, 0x80000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok217) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 3.2370474408201521914302817507
  s21_decimal decimal2 = {{0xB219E4E3, 0xE34F18DD, 0x68983A95, 0x1C0000}};
  int check = COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok218) {
  // 3.2370474408201521914302817507
  s21_decimal decimal1 = {{0xB219E4E3, 0xE34F18DD, 0x68983A95, 0x1C0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok219) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -3.2370474408201521914302817507
  s21_decimal decimal2 = {{0xB219E4E3, 0xE34F18DD, 0x68983A95, 0x801C0000}};
  int check = COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok220) {
  // -3.2370474408201521914302817507
  s21_decimal decimal1 = {{0xB219E4E3, 0xE34F18DD, 0x68983A95, 0x801C0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok221) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 858826877820029649465.1465162
  s21_decimal decimal2 = {{0x96DCDDCA, 0x5C57756E, 0x1BC00CA7, 0x70000}};
  int check = COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok222) {
  // 858826877820029649465.1465162
  s21_decimal decimal1 = {{0x96DCDDCA, 0x5C57756E, 0x1BC00CA7, 0x70000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok223) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -858826877820029649465.1465162
  s21_decimal decimal2 = {{0x96DCDDCA, 0x5C57756E, 0x1BC00CA7, 0x80070000}};
  int check = COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok224) {
  // -858826877820029649465.1465162
  s21_decimal decimal1 = {{0x96DCDDCA, 0x5C57756E, 0x1BC00CA7, 0x80070000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok225) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok226) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok227) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok228) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok229) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok230) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok231) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok232) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok233) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok234) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok235) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok236) {
  // -52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok237) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  int check = COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok238) {
  // 5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok239) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x801B0000}};
  int check = COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok240) {
  // -5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x801B0000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok241) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 5281877500950955839569596689
  s21_decimal decimal2 = {{0x11111111, 0x11111111, 0x11111111, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok242) {
  // 5281877500950955839569596689
  s21_decimal decimal1 = {{0x11111111, 0x11111111, 0x11111111, 0x0}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok243) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -5281877500950955839569596689
  s21_decimal decimal2 = {{0x11111111, 0x11111111, 0x11111111, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok244) {
  // -5281877500950955839569596689
  s21_decimal decimal1 = {{0x11111111, 0x11111111, 0x11111111, 0x80000000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok245) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 5281877500950955839569596689.0
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x10000}};
  int check = COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok246) {
  // 5281877500950955839569596689.0
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x10000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok247) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -5281877500950955839569596689.0
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80010000}};
  int check = COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok248) {
  // -5281877500950955839569596689.0
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80010000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok249) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 7922816251426433759354395033
  s21_decimal decimal2 = {{0x99999999, 0x99999999, 0x19999999, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok250) {
  // 7922816251426433759354395033
  s21_decimal decimal1 = {{0x99999999, 0x99999999, 0x19999999, 0x0}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok1) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok2) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok3) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok4) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok5) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok6) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok7) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok8) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok9) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok10) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok11) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok12) {
  // -52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok13) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  int check = COMPARISON_TRUE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok14) {
  // 5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok15) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x801B0000}};
  int check = COMPARISON_TRUE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok16) {
  // -5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x801B0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok17) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 5281877500950955839569596689
  s21_decimal decimal2 = {{0x11111111, 0x11111111, 0x11111111, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok18) {
  // 5281877500950955839569596689
  s21_decimal decimal1 = {{0x11111111, 0x11111111, 0x11111111, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok19) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -5281877500950955839569596689
  s21_decimal decimal2 = {{0x11111111, 0x11111111, 0x11111111, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok20) {
  // -5281877500950955839569596689
  s21_decimal decimal1 = {{0x11111111, 0x11111111, 0x11111111, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok21) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 5281877500950955839569596689.0
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x10000}};
  int check = COMPARISON_TRUE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok22) {
  // 5281877500950955839569596689.0
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x10000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok23) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -5281877500950955839569596689.0
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80010000}};
  int check = COMPARISON_TRUE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok24) {
  // -5281877500950955839569596689.0
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80010000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok25) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 7922816251426433759354395033
  s21_decimal decimal2 = {{0x99999999, 0x99999999, 0x19999999, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok26) {
  // 7922816251426433759354395033
  s21_decimal decimal1 = {{0x99999999, 0x99999999, 0x19999999, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok27) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -7922816251426433759354395033
  s21_decimal decimal2 = {{0x99999999, 0x99999999, 0x19999999, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok28) {
  // -7922816251426433759354395033
  s21_decimal decimal1 = {{0x99999999, 0x99999999, 0x19999999, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok29) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 7922816251426433759354395034
  s21_decimal decimal2 = {{0x9999999A, 0x99999999, 0x19999999, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok30) {
  // 7922816251426433759354395034
  s21_decimal decimal1 = {{0x9999999A, 0x99999999, 0x19999999, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok31) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -7922816251426433759354395034
  s21_decimal decimal2 = {{0x9999999A, 0x99999999, 0x19999999, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok32) {
  // -7922816251426433759354395034
  s21_decimal decimal1 = {{0x9999999A, 0x99999999, 0x19999999, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok33) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1.2297829382473034409
  s21_decimal decimal2 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x130000}};
  int check = COMPARISON_TRUE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok34) {
  // 1.2297829382473034409
  s21_decimal decimal1 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x130000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok35) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1.2297829382473034409
  s21_decimal decimal2 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x80130000}};
  int check = COMPARISON_TRUE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok36) {
  // -1.2297829382473034409
  s21_decimal decimal1 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x80130000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok37) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1.2297829382473034410
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x130000}};
  int check = COMPARISON_TRUE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok38) {
  // 1.2297829382473034410
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x130000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok39) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1.2297829382473034410
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x80130000}};
  int check = COMPARISON_TRUE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok40) {
  // -1.2297829382473034410
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x80130000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}
END_TEST

START_TEST(test_is_greater_or_equal_ok41) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1.2297829382473034411
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x130000}};
  int check = COMPARISON_TRUE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok42) {
  // 1.2297829382473034411
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x130000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok43) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1.2297829382473034411
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x80130000}};
  int check = COMPARISON_TRUE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok44) {
  // -1.2297829382473034411
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x80130000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok45) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok46) {
  // 1
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok47) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok48) {
  // -1
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok49) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1.0
  s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x10000}};
  int check = COMPARISON_TRUE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok50) {
  // 1.0
  s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x10000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok51) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1.0
  s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x80010000}};
  int check = COMPARISON_TRUE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok52) {
  // -1.0
  s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x80010000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok53) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1.22
  s21_decimal decimal2 = {{0x7A, 0x0, 0x0, 0x20000}};
  int check = COMPARISON_TRUE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok54) {
  // 1.22
  s21_decimal decimal1 = {{0x7A, 0x0, 0x0, 0x20000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok55) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1.22
  s21_decimal decimal2 = {{0x7A, 0x0, 0x0, 0x80020000}};
  int check = COMPARISON_TRUE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok56) {
  // -1.22
  s21_decimal decimal1 = {{0x7A, 0x0, 0x0, 0x80020000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok57) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1.230001
  s21_decimal decimal2 = {{0x12C4B1, 0x0, 0x0, 0x60000}};
  int check = COMPARISON_TRUE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok58) {
  // 1.230001
  s21_decimal decimal1 = {{0x12C4B1, 0x0, 0x0, 0x60000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok59) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1.230001
  s21_decimal decimal2 = {{0x12C4B1, 0x0, 0x0, 0x80060000}};
  int check = COMPARISON_TRUE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok60) {
  // -1.230001
  s21_decimal decimal1 = {{0x12C4B1, 0x0, 0x0, 0x80060000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok61) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1.23000
  s21_decimal decimal2 = {{0x1E078, 0x0, 0x0, 0x50000}};
  int check = COMPARISON_TRUE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok62) {
  // 1.23000
  s21_decimal decimal1 = {{0x1E078, 0x0, 0x0, 0x50000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok63) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1.23000
  s21_decimal decimal2 = {{0x1E078, 0x0, 0x0, 0x80050000}};
  int check = COMPARISON_TRUE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok64) {
  // -1.23000
  s21_decimal decimal1 = {{0x1E078, 0x0, 0x0, 0x80050000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok65) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1431655765
  s21_decimal decimal2 = {{0x55555555, 0x0, 0x0, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok66) {
  // 1431655765
  s21_decimal decimal1 = {{0x55555555, 0x0, 0x0, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok67) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1431655765
  s21_decimal decimal2 = {{0x55555555, 0x0, 0x0, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok68) {
  // -1431655765
  s21_decimal decimal1 = {{0x55555555, 0x0, 0x0, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok69) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1431655765.00000
  s21_decimal decimal2 = {{0x5554D320, 0x8235, 0x0, 0x50000}};
  int check = COMPARISON_TRUE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok70) {
  // 1431655765.00000
  s21_decimal decimal1 = {{0x5554D320, 0x8235, 0x0, 0x50000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok71) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1431655765.00000
  s21_decimal decimal2 = {{0x5554D320, 0x8235, 0x0, 0x80050000}};
  int check = COMPARISON_TRUE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok72) {
  // -1431655765.00000
  s21_decimal decimal1 = {{0x5554D320, 0x8235, 0x0, 0x80050000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok73) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1431655765.000000000000000001
  s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
  int check = COMPARISON_TRUE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok74) {
  // 1431655765.000000000000000001
  s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok75) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1431655765.000000000000000001
  s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x80120000}};
  int check = COMPARISON_TRUE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok76) {
  // -1431655765.000000000000000001
  s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x80120000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok77) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1431655764.999999999999999999
  s21_decimal decimal2 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x120000}};
  int check = COMPARISON_TRUE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok78) {
  // 1431655764.999999999999999999
  s21_decimal decimal1 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x120000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok79) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1431655764.999999999999999999
  s21_decimal decimal2 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x80120000}};
  int check = COMPARISON_TRUE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok80) {
  // -1431655764.999999999999999999
  s21_decimal decimal1 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x80120000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok81) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 0.9999999999999999999999999999
  s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
  int check = COMPARISON_TRUE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok82) {
  // 0.9999999999999999999999999999
  s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok83) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -0.9999999999999999999999999999
  s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x801C0000}};
  int check = COMPARISON_TRUE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok84) {
  // -0.9999999999999999999999999999
  s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x801C0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok85) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 0.0000000000000000000000000001
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x1C0000}};
  int check = COMPARISON_TRUE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok86) {
  // 0.0000000000000000000000000001
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok87) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -0.0000000000000000000000000001
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x801C0000}};
  int check = COMPARISON_TRUE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok88) {
  // -0.0000000000000000000000000001
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x801C0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok89) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 0
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok90) {
  // 0
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok91) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -0
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok92) {
  // -0
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok93) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -0.00000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x800E0000}};
  int check = COMPARISON_TRUE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok94) {
  // -0.00000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x800E0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok95) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 0.00000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0xE0000}};
  int check = COMPARISON_TRUE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok96) {
  // 0.00000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0xE0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok97) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -0.0000000000000000000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x801C0000}};
  int check = COMPARISON_TRUE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok98) {
  // -0.0000000000000000000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x801C0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok99) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 0.0000000000000000000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x1C0000}};
  int check = COMPARISON_TRUE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok100) {
  // 0.0000000000000000000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok101) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -5491184418.5106300524956975593
  s21_decimal decimal2 = {{0x734381E9, 0x8ACE66A, 0xB16E034E, 0x80130000}};
  int check = COMPARISON_TRUE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok102) {
  // -5491184418.5106300524956975593
  s21_decimal decimal1 = {{0x734381E9, 0x8ACE66A, 0xB16E034E, 0x80130000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok103) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 5491184418.5106300524956975593
  s21_decimal decimal2 = {{0x734381E9, 0x8ACE66A, 0xB16E034E, 0x130000}};
  int check = COMPARISON_TRUE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok104) {
  // 5491184418.5106300524956975593
  s21_decimal decimal1 = {{0x734381E9, 0x8ACE66A, 0xB16E034E, 0x130000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok105) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -518571519399.48581393334040314
  s21_decimal decimal2 = {{0xDB6476FA, 0x9C33420F, 0xA78F3B0F, 0x80110000}};
  int check = COMPARISON_TRUE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok106) {
  // -518571519399.48581393334040314
  s21_decimal decimal1 = {{0xDB6476FA, 0x9C33420F, 0xA78F3B0F, 0x80110000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok107) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 518571519399.48581393334040314
  s21_decimal decimal2 = {{0xDB6476FA, 0x9C33420F, 0xA78F3B0F, 0x110000}};
  int check = COMPARISON_TRUE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok108) {
  // 518571519399.48581393334040314
  s21_decimal decimal1 = {{0xDB6476FA, 0x9C33420F, 0xA78F3B0F, 0x110000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok109) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -7347194860180725191424.9548934
  s21_decimal decimal2 = {{0x8A5D3486, 0x8A87F668, 0xED66924A, 0x80070000}};
  int check = COMPARISON_TRUE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok110) {
  // -7347194860180725191424.9548934
  s21_decimal decimal1 = {{0x8A5D3486, 0x8A87F668, 0xED66924A, 0x80070000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok111) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 7347194860180725191424.9548934
  s21_decimal decimal2 = {{0x8A5D3486, 0x8A87F668, 0xED66924A, 0x70000}};
  int check = COMPARISON_TRUE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok112) {
  // 7347194860180725191424.9548934
  s21_decimal decimal1 = {{0x8A5D3486, 0x8A87F668, 0xED66924A, 0x70000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok113) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok114) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok115) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok116) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok117) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok118) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok119) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok120) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok121) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok122) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok123) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok124) {
  // -52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok125) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  int check = COMPARISON_FALSE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok126) {
  // 5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok127) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x801B0000}};
  int check = COMPARISON_FALSE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok128) {
  // -5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x801B0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok129) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 5281877500950955839569596689
  s21_decimal decimal2 = {{0x11111111, 0x11111111, 0x11111111, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok130) {
  // 5281877500950955839569596689
  s21_decimal decimal1 = {{0x11111111, 0x11111111, 0x11111111, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok131) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -5281877500950955839569596689
  s21_decimal decimal2 = {{0x11111111, 0x11111111, 0x11111111, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok132) {
  // -5281877500950955839569596689
  s21_decimal decimal1 = {{0x11111111, 0x11111111, 0x11111111, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok133) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 5281877500950955839569596689.0
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x10000}};
  int check = COMPARISON_FALSE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok134) {
  // 5281877500950955839569596689.0
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x10000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok135) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -5281877500950955839569596689.0
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80010000}};
  int check = COMPARISON_FALSE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok136) {
  // -5281877500950955839569596689.0
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80010000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok137) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 7922816251426433759354395033
  s21_decimal decimal2 = {{0x99999999, 0x99999999, 0x19999999, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok138) {
  // 7922816251426433759354395033
  s21_decimal decimal1 = {{0x99999999, 0x99999999, 0x19999999, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok139) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -7922816251426433759354395033
  s21_decimal decimal2 = {{0x99999999, 0x99999999, 0x19999999, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok140) {
  // -7922816251426433759354395033
  s21_decimal decimal1 = {{0x99999999, 0x99999999, 0x19999999, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok141) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 7922816251426433759354395034
  s21_decimal decimal2 = {{0x9999999A, 0x99999999, 0x19999999, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok142) {
  // 7922816251426433759354395034
  s21_decimal decimal1 = {{0x9999999A, 0x99999999, 0x19999999, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok143) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -7922816251426433759354395034
  s21_decimal decimal2 = {{0x9999999A, 0x99999999, 0x19999999, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok144) {
  // -7922816251426433759354395034
  s21_decimal decimal1 = {{0x9999999A, 0x99999999, 0x19999999, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok145) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1.2297829382473034409
  s21_decimal decimal2 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x130000}};
  int check = COMPARISON_FALSE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok146) {
  // 1.2297829382473034409
  s21_decimal decimal1 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x130000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok147) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1.2297829382473034409
  s21_decimal decimal2 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x80130000}};
  int check = COMPARISON_FALSE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok148) {
  // -1.2297829382473034409
  s21_decimal decimal1 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x80130000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok149) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1.2297829382473034410
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x130000}};
  int check = COMPARISON_FALSE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok150) {
  // 1.2297829382473034410
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x130000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok151) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1.2297829382473034410
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x80130000}};
  int check = COMPARISON_FALSE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok152) {
  // -1.2297829382473034410
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x80130000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok153) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1.2297829382473034411
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x130000}};
  int check = COMPARISON_FALSE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok154) {
  // 1.2297829382473034411
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x130000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok155) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1.2297829382473034411
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x80130000}};
  int check = COMPARISON_FALSE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok156) {
  // -1.2297829382473034411
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x80130000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok157) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok158) {
  // 1
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok159) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok160) {
  // -1
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok161) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1.0
  s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x10000}};
  int check = COMPARISON_FALSE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok162) {
  // 1.0
  s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x10000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok163) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1.0
  s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x80010000}};
  int check = COMPARISON_FALSE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok164) {
  // -1.0
  s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x80010000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok165) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1.22
  s21_decimal decimal2 = {{0x7A, 0x0, 0x0, 0x20000}};
  int check = COMPARISON_FALSE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok166) {
  // 1.22
  s21_decimal decimal1 = {{0x7A, 0x0, 0x0, 0x20000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok167) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1.22
  s21_decimal decimal2 = {{0x7A, 0x0, 0x0, 0x80020000}};
  int check = COMPARISON_FALSE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok168) {
  // -1.22
  s21_decimal decimal1 = {{0x7A, 0x0, 0x0, 0x80020000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok169) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1.230001
  s21_decimal decimal2 = {{0x12C4B1, 0x0, 0x0, 0x60000}};
  int check = COMPARISON_FALSE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok170) {
  // 1.230001
  s21_decimal decimal1 = {{0x12C4B1, 0x0, 0x0, 0x60000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok171) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1.230001
  s21_decimal decimal2 = {{0x12C4B1, 0x0, 0x0, 0x80060000}};
  int check = COMPARISON_FALSE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok172) {
  // -1.230001
  s21_decimal decimal1 = {{0x12C4B1, 0x0, 0x0, 0x80060000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok173) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1.23000
  s21_decimal decimal2 = {{0x1E078, 0x0, 0x0, 0x50000}};
  int check = COMPARISON_FALSE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok174) {
  // 1.23000
  s21_decimal decimal1 = {{0x1E078, 0x0, 0x0, 0x50000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok175) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1.23000
  s21_decimal decimal2 = {{0x1E078, 0x0, 0x0, 0x80050000}};
  int check = COMPARISON_FALSE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok176) {
  // -1.23000
  s21_decimal decimal1 = {{0x1E078, 0x0, 0x0, 0x80050000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok177) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1431655765
  s21_decimal decimal2 = {{0x55555555, 0x0, 0x0, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok178) {
  // 1431655765
  s21_decimal decimal1 = {{0x55555555, 0x0, 0x0, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok179) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1431655765
  s21_decimal decimal2 = {{0x55555555, 0x0, 0x0, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok180) {
  // -1431655765
  s21_decimal decimal1 = {{0x55555555, 0x0, 0x0, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok181) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1431655765.00000
  s21_decimal decimal2 = {{0x5554D320, 0x8235, 0x0, 0x50000}};
  int check = COMPARISON_FALSE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok182) {
  // 1431655765.00000
  s21_decimal decimal1 = {{0x5554D320, 0x8235, 0x0, 0x50000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok183) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1431655765.00000
  s21_decimal decimal2 = {{0x5554D320, 0x8235, 0x0, 0x80050000}};
  int check = COMPARISON_FALSE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok184) {
  // -1431655765.00000
  s21_decimal decimal1 = {{0x5554D320, 0x8235, 0x0, 0x80050000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok185) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1431655765.000000000000000001
  s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
  int check = COMPARISON_FALSE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok186) {
  // 1431655765.000000000000000001
  s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok187) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1431655765.000000000000000001
  s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x80120000}};
  int check = COMPARISON_FALSE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok188) {
  // -1431655765.000000000000000001
  s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x80120000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok189) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1431655764.999999999999999999
  s21_decimal decimal2 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x120000}};
  int check = COMPARISON_FALSE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok190) {
  // 1431655764.999999999999999999
  s21_decimal decimal1 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x120000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok191) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1431655764.999999999999999999
  s21_decimal decimal2 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x80120000}};
  int check = COMPARISON_FALSE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok192) {
  // -1431655764.999999999999999999
  s21_decimal decimal1 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x80120000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok193) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 0.9999999999999999999999999999
  s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
  int check = COMPARISON_FALSE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok194) {
  // 0.9999999999999999999999999999
  s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok195) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -0.9999999999999999999999999999
  s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x801C0000}};
  int check = COMPARISON_FALSE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok196) {
  // -0.9999999999999999999999999999
  s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x801C0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok197) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 0.0000000000000000000000000001
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x1C0000}};
  int check = COMPARISON_FALSE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok198) {
  // 0.0000000000000000000000000001
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok199) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -0.0000000000000000000000000001
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x801C0000}};
  int check = COMPARISON_FALSE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok200) {
  // -0.0000000000000000000000000001
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x801C0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok201) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 0
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok202) {
  // 0
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok203) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -0
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok204) {
  // -0
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok205) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -0.00000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x800E0000}};
  int check = COMPARISON_FALSE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok206) {
  // -0.00000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x800E0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok207) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 0.00000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0xE0000}};
  int check = COMPARISON_FALSE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok208) {
  // 0.00000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0xE0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok209) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -0.0000000000000000000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x801C0000}};
  int check = COMPARISON_FALSE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok210) {
  // -0.0000000000000000000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x801C0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok211) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 0.0000000000000000000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x1C0000}};
  int check = COMPARISON_FALSE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok212) {
  // 0.0000000000000000000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok213) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -5491184418.5106300524956975593
  s21_decimal decimal2 = {{0x734381E9, 0x8ACE66A, 0xB16E034E, 0x80130000}};
  int check = COMPARISON_FALSE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok214) {
  // -5491184418.5106300524956975593
  s21_decimal decimal1 = {{0x734381E9, 0x8ACE66A, 0xB16E034E, 0x80130000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok215) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 5491184418.5106300524956975593
  s21_decimal decimal2 = {{0x734381E9, 0x8ACE66A, 0xB16E034E, 0x130000}};
  int check = COMPARISON_FALSE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok216) {
  // 5491184418.5106300524956975593
  s21_decimal decimal1 = {{0x734381E9, 0x8ACE66A, 0xB16E034E, 0x130000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok217) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -518571519399.48581393334040314
  s21_decimal decimal2 = {{0xDB6476FA, 0x9C33420F, 0xA78F3B0F, 0x80110000}};
  int check = COMPARISON_FALSE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok218) {
  // -518571519399.48581393334040314
  s21_decimal decimal1 = {{0xDB6476FA, 0x9C33420F, 0xA78F3B0F, 0x80110000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok219) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 518571519399.48581393334040314
  s21_decimal decimal2 = {{0xDB6476FA, 0x9C33420F, 0xA78F3B0F, 0x110000}};
  int check = COMPARISON_FALSE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok220) {
  // 518571519399.48581393334040314
  s21_decimal decimal1 = {{0xDB6476FA, 0x9C33420F, 0xA78F3B0F, 0x110000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok221) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -7347194860180725191424.9548934
  s21_decimal decimal2 = {{0x8A5D3486, 0x8A87F668, 0xED66924A, 0x80070000}};
  int check = COMPARISON_FALSE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok222) {
  // -7347194860180725191424.9548934
  s21_decimal decimal1 = {{0x8A5D3486, 0x8A87F668, 0xED66924A, 0x80070000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok223) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 7347194860180725191424.9548934
  s21_decimal decimal2 = {{0x8A5D3486, 0x8A87F668, 0xED66924A, 0x70000}};
  int check = COMPARISON_FALSE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok224) {
  // 7347194860180725191424.9548934
  s21_decimal decimal1 = {{0x8A5D3486, 0x8A87F668, 0xED66924A, 0x70000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok225) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok226) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok227) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok228) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok229) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok230) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok231) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok232) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok233) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok234) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok235) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok236) {
  // -52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok237) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  int check = COMPARISON_TRUE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok238) {
  // 5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok239) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x801B0000}};
  int check = COMPARISON_TRUE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok240) {
  // -5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x801B0000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok241) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 5281877500950955839569596689
  s21_decimal decimal2 = {{0x11111111, 0x11111111, 0x11111111, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok242) {
  // 5281877500950955839569596689
  s21_decimal decimal1 = {{0x11111111, 0x11111111, 0x11111111, 0x0}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok243) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -5281877500950955839569596689
  s21_decimal decimal2 = {{0x11111111, 0x11111111, 0x11111111, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok244) {
  // -5281877500950955839569596689
  s21_decimal decimal1 = {{0x11111111, 0x11111111, 0x11111111, 0x80000000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok245) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 5281877500950955839569596689.0
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x10000}};
  int check = COMPARISON_TRUE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok246) {
  // 5281877500950955839569596689.0
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x10000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok247) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -5281877500950955839569596689.0
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80010000}};
  int check = COMPARISON_TRUE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok248) {
  // -5281877500950955839569596689.0
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80010000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok249) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 7922816251426433759354395033
  s21_decimal decimal2 = {{0x99999999, 0x99999999, 0x19999999, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_greater_or_equal_ok250) {
  // 7922816251426433759354395033
  s21_decimal decimal1 = {{0x99999999, 0x99999999, 0x19999999, 0x0}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_greater_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok1) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok2) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok3) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok4) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok5) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok6) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok7) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok8) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok9) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok10) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok11) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok12) {
  // -52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok13) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  int check = COMPARISON_FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok14) {
  // 5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok15) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x801B0000}};
  int check = COMPARISON_FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok16) {
  // -5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x801B0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok17) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 5281877500950955839569596689
  s21_decimal decimal2 = {{0x11111111, 0x11111111, 0x11111111, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok18) {
  // 5281877500950955839569596689
  s21_decimal decimal1 = {{0x11111111, 0x11111111, 0x11111111, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok19) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -5281877500950955839569596689
  s21_decimal decimal2 = {{0x11111111, 0x11111111, 0x11111111, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok20) {
  // -5281877500950955839569596689
  s21_decimal decimal1 = {{0x11111111, 0x11111111, 0x11111111, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok21) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 5281877500950955839569596689.0
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x10000}};
  int check = COMPARISON_FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok22) {
  // 5281877500950955839569596689.0
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x10000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok23) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -5281877500950955839569596689.0
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80010000}};
  int check = COMPARISON_FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok24) {
  // -5281877500950955839569596689.0
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80010000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok25) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 7922816251426433759354395033
  s21_decimal decimal2 = {{0x99999999, 0x99999999, 0x19999999, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok26) {
  // 7922816251426433759354395033
  s21_decimal decimal1 = {{0x99999999, 0x99999999, 0x19999999, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok27) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -7922816251426433759354395033
  s21_decimal decimal2 = {{0x99999999, 0x99999999, 0x19999999, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok28) {
  // -7922816251426433759354395033
  s21_decimal decimal1 = {{0x99999999, 0x99999999, 0x19999999, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok29) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 7922816251426433759354395034
  s21_decimal decimal2 = {{0x9999999A, 0x99999999, 0x19999999, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok30) {
  // 7922816251426433759354395034
  s21_decimal decimal1 = {{0x9999999A, 0x99999999, 0x19999999, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok31) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -7922816251426433759354395034
  s21_decimal decimal2 = {{0x9999999A, 0x99999999, 0x19999999, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok32) {
  // -7922816251426433759354395034
  s21_decimal decimal1 = {{0x9999999A, 0x99999999, 0x19999999, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok33) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1.2297829382473034409
  s21_decimal decimal2 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x130000}};
  int check = COMPARISON_FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok34) {
  // 1.2297829382473034409
  s21_decimal decimal1 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x130000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok35) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1.2297829382473034409
  s21_decimal decimal2 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x80130000}};
  int check = COMPARISON_FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok36) {
  // -1.2297829382473034409
  s21_decimal decimal1 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x80130000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok37) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1.2297829382473034410
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x130000}};
  int check = COMPARISON_FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok38) {
  // 1.2297829382473034410
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x130000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok39) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1.2297829382473034410
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x80130000}};
  int check = COMPARISON_FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok40) {
  // -1.2297829382473034410
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x80130000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less(decimal1, decimal2, check);
}
END_TEST

START_TEST(test_is_less_ok41) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1.2297829382473034411
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x130000}};
  int check = COMPARISON_FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok42) {
  // 1.2297829382473034411
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x130000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok43) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1.2297829382473034411
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x80130000}};
  int check = COMPARISON_FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok44) {
  // -1.2297829382473034411
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x80130000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok45) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok46) {
  // 1
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok47) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok48) {
  // -1
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok49) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1.0
  s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x10000}};
  int check = COMPARISON_FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok50) {
  // 1.0
  s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x10000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok51) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1.0
  s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x80010000}};
  int check = COMPARISON_FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok52) {
  // -1.0
  s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x80010000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok53) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1.22
  s21_decimal decimal2 = {{0x7A, 0x0, 0x0, 0x20000}};
  int check = COMPARISON_FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok54) {
  // 1.22
  s21_decimal decimal1 = {{0x7A, 0x0, 0x0, 0x20000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok55) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1.22
  s21_decimal decimal2 = {{0x7A, 0x0, 0x0, 0x80020000}};
  int check = COMPARISON_FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok56) {
  // -1.22
  s21_decimal decimal1 = {{0x7A, 0x0, 0x0, 0x80020000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok57) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1.230001
  s21_decimal decimal2 = {{0x12C4B1, 0x0, 0x0, 0x60000}};
  int check = COMPARISON_FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok58) {
  // 1.230001
  s21_decimal decimal1 = {{0x12C4B1, 0x0, 0x0, 0x60000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok59) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1.230001
  s21_decimal decimal2 = {{0x12C4B1, 0x0, 0x0, 0x80060000}};
  int check = COMPARISON_FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok60) {
  // -1.230001
  s21_decimal decimal1 = {{0x12C4B1, 0x0, 0x0, 0x80060000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok61) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1.23000
  s21_decimal decimal2 = {{0x1E078, 0x0, 0x0, 0x50000}};
  int check = COMPARISON_FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok62) {
  // 1.23000
  s21_decimal decimal1 = {{0x1E078, 0x0, 0x0, 0x50000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok63) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1.23000
  s21_decimal decimal2 = {{0x1E078, 0x0, 0x0, 0x80050000}};
  int check = COMPARISON_FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok64) {
  // -1.23000
  s21_decimal decimal1 = {{0x1E078, 0x0, 0x0, 0x80050000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok65) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1431655765
  s21_decimal decimal2 = {{0x55555555, 0x0, 0x0, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok66) {
  // 1431655765
  s21_decimal decimal1 = {{0x55555555, 0x0, 0x0, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok67) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1431655765
  s21_decimal decimal2 = {{0x55555555, 0x0, 0x0, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok68) {
  // -1431655765
  s21_decimal decimal1 = {{0x55555555, 0x0, 0x0, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok69) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1431655765.00000
  s21_decimal decimal2 = {{0x5554D320, 0x8235, 0x0, 0x50000}};
  int check = COMPARISON_FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok70) {
  // 1431655765.00000
  s21_decimal decimal1 = {{0x5554D320, 0x8235, 0x0, 0x50000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok71) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1431655765.00000
  s21_decimal decimal2 = {{0x5554D320, 0x8235, 0x0, 0x80050000}};
  int check = COMPARISON_FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok72) {
  // -1431655765.00000
  s21_decimal decimal1 = {{0x5554D320, 0x8235, 0x0, 0x80050000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok73) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1431655765.000000000000000001
  s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
  int check = COMPARISON_FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok74) {
  // 1431655765.000000000000000001
  s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok75) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1431655765.000000000000000001
  s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x80120000}};
  int check = COMPARISON_FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok76) {
  // -1431655765.000000000000000001
  s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x80120000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok77) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1431655764.999999999999999999
  s21_decimal decimal2 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x120000}};
  int check = COMPARISON_FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok78) {
  // 1431655764.999999999999999999
  s21_decimal decimal1 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x120000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok79) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1431655764.999999999999999999
  s21_decimal decimal2 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x80120000}};
  int check = COMPARISON_FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok80) {
  // -1431655764.999999999999999999
  s21_decimal decimal1 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x80120000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok81) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 0.9999999999999999999999999999
  s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
  int check = COMPARISON_FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok82) {
  // 0.9999999999999999999999999999
  s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok83) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -0.9999999999999999999999999999
  s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x801C0000}};
  int check = COMPARISON_FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok84) {
  // -0.9999999999999999999999999999
  s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x801C0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok85) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 0.0000000000000000000000000001
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x1C0000}};
  int check = COMPARISON_FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok86) {
  // 0.0000000000000000000000000001
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok87) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -0.0000000000000000000000000001
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x801C0000}};
  int check = COMPARISON_FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok88) {
  // -0.0000000000000000000000000001
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x801C0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok89) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 0
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok90) {
  // 0
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok91) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -0
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok92) {
  // -0
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok93) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -0.00000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x800E0000}};
  int check = COMPARISON_FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok94) {
  // -0.00000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x800E0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok95) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 0.00000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0xE0000}};
  int check = COMPARISON_FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok96) {
  // 0.00000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0xE0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok97) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -0.0000000000000000000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x801C0000}};
  int check = COMPARISON_FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok98) {
  // -0.0000000000000000000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x801C0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok99) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 0.0000000000000000000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x1C0000}};
  int check = COMPARISON_FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok100) {
  // 0.0000000000000000000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok101) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -58391.31040040850204230282817
  s21_decimal decimal2 = {{0x9AA5EE41, 0xF3B5B959, 0x12DE0417, 0x80170000}};
  int check = COMPARISON_FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok102) {
  // -58391.31040040850204230282817
  s21_decimal decimal1 = {{0x9AA5EE41, 0xF3B5B959, 0x12DE0417, 0x80170000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok103) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 58391.31040040850204230282817
  s21_decimal decimal2 = {{0x9AA5EE41, 0xF3B5B959, 0x12DE0417, 0x170000}};
  int check = COMPARISON_FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok104) {
  // 58391.31040040850204230282817
  s21_decimal decimal1 = {{0x9AA5EE41, 0xF3B5B959, 0x12DE0417, 0x170000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok105) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 5596930204637261591.6377658369
  s21_decimal decimal2 = {{0x9B10D401, 0x8F08DC74, 0xB4D8B8B7, 0xA0000}};
  int check = COMPARISON_FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok106) {
  // 5596930204637261591.6377658369
  s21_decimal decimal1 = {{0x9B10D401, 0x8F08DC74, 0xB4D8B8B7, 0xA0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok107) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -5596930204637261591.6377658369
  s21_decimal decimal2 = {{0x9B10D401, 0x8F08DC74, 0xB4D8B8B7, 0x800A0000}};
  int check = COMPARISON_FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok108) {
  // -5596930204637261591.6377658369
  s21_decimal decimal1 = {{0x9B10D401, 0x8F08DC74, 0xB4D8B8B7, 0x800A0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok109) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 47209772988309285293.155713691
  s21_decimal decimal2 = {{0x4A3C829B, 0xD2D8CC92, 0x988B0249, 0x90000}};
  int check = COMPARISON_FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok110) {
  // 47209772988309285293.155713691
  s21_decimal decimal1 = {{0x4A3C829B, 0xD2D8CC92, 0x988B0249, 0x90000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok111) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -47209772988309285293.155713691
  s21_decimal decimal2 = {{0x4A3C829B, 0xD2D8CC92, 0x988B0249, 0x80090000}};
  int check = COMPARISON_FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok112) {
  // -47209772988309285293.155713691
  s21_decimal decimal1 = {{0x4A3C829B, 0xD2D8CC92, 0x988B0249, 0x80090000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok113) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok114) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok115) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok116) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok117) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok118) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok119) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok120) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok121) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok122) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok123) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok124) {
  // -52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok125) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  int check = COMPARISON_TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok126) {
  // 5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok127) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x801B0000}};
  int check = COMPARISON_TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok128) {
  // -5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x801B0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok129) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 5281877500950955839569596689
  s21_decimal decimal2 = {{0x11111111, 0x11111111, 0x11111111, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok130) {
  // 5281877500950955839569596689
  s21_decimal decimal1 = {{0x11111111, 0x11111111, 0x11111111, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok131) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -5281877500950955839569596689
  s21_decimal decimal2 = {{0x11111111, 0x11111111, 0x11111111, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok132) {
  // -5281877500950955839569596689
  s21_decimal decimal1 = {{0x11111111, 0x11111111, 0x11111111, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok133) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 5281877500950955839569596689.0
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x10000}};
  int check = COMPARISON_TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok134) {
  // 5281877500950955839569596689.0
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x10000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok135) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -5281877500950955839569596689.0
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80010000}};
  int check = COMPARISON_TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok136) {
  // -5281877500950955839569596689.0
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80010000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok137) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 7922816251426433759354395033
  s21_decimal decimal2 = {{0x99999999, 0x99999999, 0x19999999, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok138) {
  // 7922816251426433759354395033
  s21_decimal decimal1 = {{0x99999999, 0x99999999, 0x19999999, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok139) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -7922816251426433759354395033
  s21_decimal decimal2 = {{0x99999999, 0x99999999, 0x19999999, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok140) {
  // -7922816251426433759354395033
  s21_decimal decimal1 = {{0x99999999, 0x99999999, 0x19999999, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok141) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 7922816251426433759354395034
  s21_decimal decimal2 = {{0x9999999A, 0x99999999, 0x19999999, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok142) {
  // 7922816251426433759354395034
  s21_decimal decimal1 = {{0x9999999A, 0x99999999, 0x19999999, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok143) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -7922816251426433759354395034
  s21_decimal decimal2 = {{0x9999999A, 0x99999999, 0x19999999, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok144) {
  // -7922816251426433759354395034
  s21_decimal decimal1 = {{0x9999999A, 0x99999999, 0x19999999, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok145) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1.2297829382473034409
  s21_decimal decimal2 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x130000}};
  int check = COMPARISON_TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok146) {
  // 1.2297829382473034409
  s21_decimal decimal1 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x130000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok147) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1.2297829382473034409
  s21_decimal decimal2 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x80130000}};
  int check = COMPARISON_TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok148) {
  // -1.2297829382473034409
  s21_decimal decimal1 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x80130000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok149) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1.2297829382473034410
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x130000}};
  int check = COMPARISON_TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok150) {
  // 1.2297829382473034410
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x130000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok151) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1.2297829382473034410
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x80130000}};
  int check = COMPARISON_TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok152) {
  // -1.2297829382473034410
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x80130000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok153) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1.2297829382473034411
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x130000}};
  int check = COMPARISON_TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok154) {
  // 1.2297829382473034411
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x130000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok155) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1.2297829382473034411
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x80130000}};
  int check = COMPARISON_TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok156) {
  // -1.2297829382473034411
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x80130000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok157) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok158) {
  // 1
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok159) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok160) {
  // -1
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok161) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1.0
  s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x10000}};
  int check = COMPARISON_TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok162) {
  // 1.0
  s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x10000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok163) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1.0
  s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x80010000}};
  int check = COMPARISON_TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok164) {
  // -1.0
  s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x80010000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok165) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1.22
  s21_decimal decimal2 = {{0x7A, 0x0, 0x0, 0x20000}};
  int check = COMPARISON_TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok166) {
  // 1.22
  s21_decimal decimal1 = {{0x7A, 0x0, 0x0, 0x20000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok167) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1.22
  s21_decimal decimal2 = {{0x7A, 0x0, 0x0, 0x80020000}};
  int check = COMPARISON_TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok168) {
  // -1.22
  s21_decimal decimal1 = {{0x7A, 0x0, 0x0, 0x80020000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok169) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1.230001
  s21_decimal decimal2 = {{0x12C4B1, 0x0, 0x0, 0x60000}};
  int check = COMPARISON_TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok170) {
  // 1.230001
  s21_decimal decimal1 = {{0x12C4B1, 0x0, 0x0, 0x60000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok171) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1.230001
  s21_decimal decimal2 = {{0x12C4B1, 0x0, 0x0, 0x80060000}};
  int check = COMPARISON_TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok172) {
  // -1.230001
  s21_decimal decimal1 = {{0x12C4B1, 0x0, 0x0, 0x80060000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok173) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1.23000
  s21_decimal decimal2 = {{0x1E078, 0x0, 0x0, 0x50000}};
  int check = COMPARISON_TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok174) {
  // 1.23000
  s21_decimal decimal1 = {{0x1E078, 0x0, 0x0, 0x50000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok175) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1.23000
  s21_decimal decimal2 = {{0x1E078, 0x0, 0x0, 0x80050000}};
  int check = COMPARISON_TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok176) {
  // -1.23000
  s21_decimal decimal1 = {{0x1E078, 0x0, 0x0, 0x80050000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok177) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1431655765
  s21_decimal decimal2 = {{0x55555555, 0x0, 0x0, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok178) {
  // 1431655765
  s21_decimal decimal1 = {{0x55555555, 0x0, 0x0, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok179) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1431655765
  s21_decimal decimal2 = {{0x55555555, 0x0, 0x0, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok180) {
  // -1431655765
  s21_decimal decimal1 = {{0x55555555, 0x0, 0x0, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok181) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1431655765.00000
  s21_decimal decimal2 = {{0x5554D320, 0x8235, 0x0, 0x50000}};
  int check = COMPARISON_TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok182) {
  // 1431655765.00000
  s21_decimal decimal1 = {{0x5554D320, 0x8235, 0x0, 0x50000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok183) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1431655765.00000
  s21_decimal decimal2 = {{0x5554D320, 0x8235, 0x0, 0x80050000}};
  int check = COMPARISON_TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok184) {
  // -1431655765.00000
  s21_decimal decimal1 = {{0x5554D320, 0x8235, 0x0, 0x80050000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok185) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1431655765.000000000000000001
  s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
  int check = COMPARISON_TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok186) {
  // 1431655765.000000000000000001
  s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok187) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1431655765.000000000000000001
  s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x80120000}};
  int check = COMPARISON_TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok188) {
  // -1431655765.000000000000000001
  s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x80120000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok189) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1431655764.999999999999999999
  s21_decimal decimal2 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x120000}};
  int check = COMPARISON_TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok190) {
  // 1431655764.999999999999999999
  s21_decimal decimal1 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x120000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok191) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1431655764.999999999999999999
  s21_decimal decimal2 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x80120000}};
  int check = COMPARISON_TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok192) {
  // -1431655764.999999999999999999
  s21_decimal decimal1 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x80120000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok193) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 0.9999999999999999999999999999
  s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
  int check = COMPARISON_TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok194) {
  // 0.9999999999999999999999999999
  s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok195) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -0.9999999999999999999999999999
  s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x801C0000}};
  int check = COMPARISON_TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok196) {
  // -0.9999999999999999999999999999
  s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x801C0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok197) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 0.0000000000000000000000000001
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x1C0000}};
  int check = COMPARISON_TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok198) {
  // 0.0000000000000000000000000001
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok199) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -0.0000000000000000000000000001
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x801C0000}};
  int check = COMPARISON_TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok200) {
  // -0.0000000000000000000000000001
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x801C0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok201) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 0
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok202) {
  // 0
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok203) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -0
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok204) {
  // -0
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok205) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -0.00000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x800E0000}};
  int check = COMPARISON_TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok206) {
  // -0.00000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x800E0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok207) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 0.00000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0xE0000}};
  int check = COMPARISON_TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok208) {
  // 0.00000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0xE0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok209) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -0.0000000000000000000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x801C0000}};
  int check = COMPARISON_TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok210) {
  // -0.0000000000000000000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x801C0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok211) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 0.0000000000000000000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x1C0000}};
  int check = COMPARISON_TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok212) {
  // 0.0000000000000000000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok213) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -58391.31040040850204230282817
  s21_decimal decimal2 = {{0x9AA5EE41, 0xF3B5B959, 0x12DE0417, 0x80170000}};
  int check = COMPARISON_TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok214) {
  // -58391.31040040850204230282817
  s21_decimal decimal1 = {{0x9AA5EE41, 0xF3B5B959, 0x12DE0417, 0x80170000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok215) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 58391.31040040850204230282817
  s21_decimal decimal2 = {{0x9AA5EE41, 0xF3B5B959, 0x12DE0417, 0x170000}};
  int check = COMPARISON_TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok216) {
  // 58391.31040040850204230282817
  s21_decimal decimal1 = {{0x9AA5EE41, 0xF3B5B959, 0x12DE0417, 0x170000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok217) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 5596930204637261591.6377658369
  s21_decimal decimal2 = {{0x9B10D401, 0x8F08DC74, 0xB4D8B8B7, 0xA0000}};
  int check = COMPARISON_TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok218) {
  // 5596930204637261591.6377658369
  s21_decimal decimal1 = {{0x9B10D401, 0x8F08DC74, 0xB4D8B8B7, 0xA0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok219) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -5596930204637261591.6377658369
  s21_decimal decimal2 = {{0x9B10D401, 0x8F08DC74, 0xB4D8B8B7, 0x800A0000}};
  int check = COMPARISON_TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok220) {
  // -5596930204637261591.6377658369
  s21_decimal decimal1 = {{0x9B10D401, 0x8F08DC74, 0xB4D8B8B7, 0x800A0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok221) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 47209772988309285293.155713691
  s21_decimal decimal2 = {{0x4A3C829B, 0xD2D8CC92, 0x988B0249, 0x90000}};
  int check = COMPARISON_TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok222) {
  // 47209772988309285293.155713691
  s21_decimal decimal1 = {{0x4A3C829B, 0xD2D8CC92, 0x988B0249, 0x90000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok223) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -47209772988309285293.155713691
  s21_decimal decimal2 = {{0x4A3C829B, 0xD2D8CC92, 0x988B0249, 0x80090000}};
  int check = COMPARISON_TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok224) {
  // -47209772988309285293.155713691
  s21_decimal decimal1 = {{0x4A3C829B, 0xD2D8CC92, 0x988B0249, 0x80090000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok225) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok226) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok227) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok228) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok229) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok230) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok231) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok232) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok233) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok234) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok235) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok236) {
  // -52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok237) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  int check = COMPARISON_FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok238) {
  // 5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok239) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x801B0000}};
  int check = COMPARISON_FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok240) {
  // -5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x801B0000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok241) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 5281877500950955839569596689
  s21_decimal decimal2 = {{0x11111111, 0x11111111, 0x11111111, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok242) {
  // 5281877500950955839569596689
  s21_decimal decimal1 = {{0x11111111, 0x11111111, 0x11111111, 0x0}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok243) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -5281877500950955839569596689
  s21_decimal decimal2 = {{0x11111111, 0x11111111, 0x11111111, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok244) {
  // -5281877500950955839569596689
  s21_decimal decimal1 = {{0x11111111, 0x11111111, 0x11111111, 0x80000000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok245) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 5281877500950955839569596689.0
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x10000}};
  int check = COMPARISON_FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok246) {
  // 5281877500950955839569596689.0
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x10000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok247) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -5281877500950955839569596689.0
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80010000}};
  int check = COMPARISON_FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok248) {
  // -5281877500950955839569596689.0
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80010000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok249) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 7922816251426433759354395033
  s21_decimal decimal2 = {{0x99999999, 0x99999999, 0x19999999, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_ok250) {
  // 7922816251426433759354395033
  s21_decimal decimal1 = {{0x99999999, 0x99999999, 0x19999999, 0x0}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less(decimal1, decimal2, check);
}
END_TEST

START_TEST(test_is_less_ok251) {
  // 7922816251426433759354395033
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_less(decimal1, decimal2, check);
}
END_TEST

START_TEST(test_is_less_or_equal_ok1) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok2) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok3) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok4) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok5) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok6) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok7) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok8) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok9) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok10) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok11) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok12) {
  // -52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok13) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  int check = COMPARISON_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok14) {
  // 5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok15) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x801B0000}};
  int check = COMPARISON_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok16) {
  // -5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x801B0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok17) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 5281877500950955839569596689
  s21_decimal decimal2 = {{0x11111111, 0x11111111, 0x11111111, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok18) {
  // 5281877500950955839569596689
  s21_decimal decimal1 = {{0x11111111, 0x11111111, 0x11111111, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok19) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -5281877500950955839569596689
  s21_decimal decimal2 = {{0x11111111, 0x11111111, 0x11111111, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok20) {
  // -5281877500950955839569596689
  s21_decimal decimal1 = {{0x11111111, 0x11111111, 0x11111111, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok21) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 5281877500950955839569596689.0
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x10000}};
  int check = COMPARISON_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok22) {
  // 5281877500950955839569596689.0
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x10000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok23) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -5281877500950955839569596689.0
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80010000}};
  int check = COMPARISON_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok24) {
  // -5281877500950955839569596689.0
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80010000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok25) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 7922816251426433759354395033
  s21_decimal decimal2 = {{0x99999999, 0x99999999, 0x19999999, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok26) {
  // 7922816251426433759354395033
  s21_decimal decimal1 = {{0x99999999, 0x99999999, 0x19999999, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok27) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -7922816251426433759354395033
  s21_decimal decimal2 = {{0x99999999, 0x99999999, 0x19999999, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok28) {
  // -7922816251426433759354395033
  s21_decimal decimal1 = {{0x99999999, 0x99999999, 0x19999999, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok29) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 7922816251426433759354395034
  s21_decimal decimal2 = {{0x9999999A, 0x99999999, 0x19999999, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok30) {
  // 7922816251426433759354395034
  s21_decimal decimal1 = {{0x9999999A, 0x99999999, 0x19999999, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok31) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -7922816251426433759354395034
  s21_decimal decimal2 = {{0x9999999A, 0x99999999, 0x19999999, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok32) {
  // -7922816251426433759354395034
  s21_decimal decimal1 = {{0x9999999A, 0x99999999, 0x19999999, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok33) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1.2297829382473034409
  s21_decimal decimal2 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x130000}};
  int check = COMPARISON_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok34) {
  // 1.2297829382473034409
  s21_decimal decimal1 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x130000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok35) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1.2297829382473034409
  s21_decimal decimal2 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x80130000}};
  int check = COMPARISON_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok36) {
  // -1.2297829382473034409
  s21_decimal decimal1 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x80130000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok37) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1.2297829382473034410
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x130000}};
  int check = COMPARISON_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok38) {
  // 1.2297829382473034410
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x130000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok39) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1.2297829382473034410
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x80130000}};
  int check = COMPARISON_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok40) {
  // -1.2297829382473034410
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x80130000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}
END_TEST

START_TEST(test_is_less_or_equal_ok41) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1.2297829382473034411
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x130000}};
  int check = COMPARISON_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok42) {
  // 1.2297829382473034411
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x130000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok43) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1.2297829382473034411
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x80130000}};
  int check = COMPARISON_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok44) {
  // -1.2297829382473034411
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x80130000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok45) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok46) {
  // 1
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok47) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok48) {
  // -1
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok49) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1.0
  s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x10000}};
  int check = COMPARISON_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok50) {
  // 1.0
  s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x10000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok51) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1.0
  s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x80010000}};
  int check = COMPARISON_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok52) {
  // -1.0
  s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x80010000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok53) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1.22
  s21_decimal decimal2 = {{0x7A, 0x0, 0x0, 0x20000}};
  int check = COMPARISON_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok54) {
  // 1.22
  s21_decimal decimal1 = {{0x7A, 0x0, 0x0, 0x20000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok55) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1.22
  s21_decimal decimal2 = {{0x7A, 0x0, 0x0, 0x80020000}};
  int check = COMPARISON_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok56) {
  // -1.22
  s21_decimal decimal1 = {{0x7A, 0x0, 0x0, 0x80020000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok57) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1.230001
  s21_decimal decimal2 = {{0x12C4B1, 0x0, 0x0, 0x60000}};
  int check = COMPARISON_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok58) {
  // 1.230001
  s21_decimal decimal1 = {{0x12C4B1, 0x0, 0x0, 0x60000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok59) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1.230001
  s21_decimal decimal2 = {{0x12C4B1, 0x0, 0x0, 0x80060000}};
  int check = COMPARISON_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok60) {
  // -1.230001
  s21_decimal decimal1 = {{0x12C4B1, 0x0, 0x0, 0x80060000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok61) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1.23000
  s21_decimal decimal2 = {{0x1E078, 0x0, 0x0, 0x50000}};
  int check = COMPARISON_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok62) {
  // 1.23000
  s21_decimal decimal1 = {{0x1E078, 0x0, 0x0, 0x50000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok63) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1.23000
  s21_decimal decimal2 = {{0x1E078, 0x0, 0x0, 0x80050000}};
  int check = COMPARISON_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok64) {
  // -1.23000
  s21_decimal decimal1 = {{0x1E078, 0x0, 0x0, 0x80050000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok65) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1431655765
  s21_decimal decimal2 = {{0x55555555, 0x0, 0x0, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok66) {
  // 1431655765
  s21_decimal decimal1 = {{0x55555555, 0x0, 0x0, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok67) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1431655765
  s21_decimal decimal2 = {{0x55555555, 0x0, 0x0, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok68) {
  // -1431655765
  s21_decimal decimal1 = {{0x55555555, 0x0, 0x0, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok69) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1431655765.00000
  s21_decimal decimal2 = {{0x5554D320, 0x8235, 0x0, 0x50000}};
  int check = COMPARISON_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok70) {
  // 1431655765.00000
  s21_decimal decimal1 = {{0x5554D320, 0x8235, 0x0, 0x50000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok71) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1431655765.00000
  s21_decimal decimal2 = {{0x5554D320, 0x8235, 0x0, 0x80050000}};
  int check = COMPARISON_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok72) {
  // -1431655765.00000
  s21_decimal decimal1 = {{0x5554D320, 0x8235, 0x0, 0x80050000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok73) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1431655765.000000000000000001
  s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
  int check = COMPARISON_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok74) {
  // 1431655765.000000000000000001
  s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok75) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1431655765.000000000000000001
  s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x80120000}};
  int check = COMPARISON_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok76) {
  // -1431655765.000000000000000001
  s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x80120000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok77) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1431655764.999999999999999999
  s21_decimal decimal2 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x120000}};
  int check = COMPARISON_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok78) {
  // 1431655764.999999999999999999
  s21_decimal decimal1 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x120000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok79) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1431655764.999999999999999999
  s21_decimal decimal2 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x80120000}};
  int check = COMPARISON_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok80) {
  // -1431655764.999999999999999999
  s21_decimal decimal1 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x80120000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok81) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 0.9999999999999999999999999999
  s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
  int check = COMPARISON_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok82) {
  // 0.9999999999999999999999999999
  s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok83) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -0.9999999999999999999999999999
  s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x801C0000}};
  int check = COMPARISON_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok84) {
  // -0.9999999999999999999999999999
  s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x801C0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok85) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 0.0000000000000000000000000001
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x1C0000}};
  int check = COMPARISON_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok86) {
  // 0.0000000000000000000000000001
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok87) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -0.0000000000000000000000000001
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x801C0000}};
  int check = COMPARISON_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok88) {
  // -0.0000000000000000000000000001
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x801C0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok89) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 0
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok90) {
  // 0
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok91) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -0
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok92) {
  // -0
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok93) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -0.00000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x800E0000}};
  int check = COMPARISON_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok94) {
  // -0.00000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x800E0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok95) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 0.00000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0xE0000}};
  int check = COMPARISON_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok96) {
  // 0.00000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0xE0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok97) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -0.0000000000000000000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x801C0000}};
  int check = COMPARISON_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok98) {
  // -0.0000000000000000000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x801C0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok99) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 0.0000000000000000000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x1C0000}};
  int check = COMPARISON_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok100) {
  // 0.0000000000000000000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok101) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -4.7074769154693434325056864883
  s21_decimal decimal2 = {{0xCEDBC273, 0x56AF422B, 0x981B561D, 0x801C0000}};
  int check = COMPARISON_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok102) {
  // -4.7074769154693434325056864883
  s21_decimal decimal1 = {{0xCEDBC273, 0x56AF422B, 0x981B561D, 0x801C0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok103) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 4.7074769154693434325056864883
  s21_decimal decimal2 = {{0xCEDBC273, 0x56AF422B, 0x981B561D, 0x1C0000}};
  int check = COMPARISON_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok104) {
  // 4.7074769154693434325056864883
  s21_decimal decimal1 = {{0xCEDBC273, 0x56AF422B, 0x981B561D, 0x1C0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok105) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 24054676222594164633554651068
  s21_decimal decimal2 = {{0xCE5807BC, 0xF2D773B6, 0x4DB98FD2, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok106) {
  // 24054676222594164633554651068
  s21_decimal decimal1 = {{0xCE5807BC, 0xF2D773B6, 0x4DB98FD2, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok107) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -24054676222594164633554651068
  s21_decimal decimal2 = {{0xCE5807BC, 0xF2D773B6, 0x4DB98FD2, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok108) {
  // -24054676222594164633554651068
  s21_decimal decimal1 = {{0xCE5807BC, 0xF2D773B6, 0x4DB98FD2, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok109) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 30667538544853.855676101018067
  s21_decimal decimal2 = {{0xE333C1D3, 0xC173E715, 0x631797E3, 0xF0000}};
  int check = COMPARISON_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok110) {
  // 30667538544853.855676101018067
  s21_decimal decimal1 = {{0xE333C1D3, 0xC173E715, 0x631797E3, 0xF0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok111) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -30667538544853.855676101018067
  s21_decimal decimal2 = {{0xE333C1D3, 0xC173E715, 0x631797E3, 0x800F0000}};
  int check = COMPARISON_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok112) {
  // -30667538544853.855676101018067
  s21_decimal decimal1 = {{0xE333C1D3, 0xC173E715, 0x631797E3, 0x800F0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok113) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok114) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok115) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok116) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok117) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok118) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok119) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok120) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok121) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok122) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok123) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok124) {
  // -52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok125) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  int check = COMPARISON_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok126) {
  // 5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok127) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x801B0000}};
  int check = COMPARISON_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok128) {
  // -5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x801B0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok129) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 5281877500950955839569596689
  s21_decimal decimal2 = {{0x11111111, 0x11111111, 0x11111111, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok130) {
  // 5281877500950955839569596689
  s21_decimal decimal1 = {{0x11111111, 0x11111111, 0x11111111, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok131) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -5281877500950955839569596689
  s21_decimal decimal2 = {{0x11111111, 0x11111111, 0x11111111, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok132) {
  // -5281877500950955839569596689
  s21_decimal decimal1 = {{0x11111111, 0x11111111, 0x11111111, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok133) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 5281877500950955839569596689.0
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x10000}};
  int check = COMPARISON_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok134) {
  // 5281877500950955839569596689.0
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x10000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok135) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -5281877500950955839569596689.0
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80010000}};
  int check = COMPARISON_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok136) {
  // -5281877500950955839569596689.0
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80010000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok137) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 7922816251426433759354395033
  s21_decimal decimal2 = {{0x99999999, 0x99999999, 0x19999999, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok138) {
  // 7922816251426433759354395033
  s21_decimal decimal1 = {{0x99999999, 0x99999999, 0x19999999, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok139) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -7922816251426433759354395033
  s21_decimal decimal2 = {{0x99999999, 0x99999999, 0x19999999, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok140) {
  // -7922816251426433759354395033
  s21_decimal decimal1 = {{0x99999999, 0x99999999, 0x19999999, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok141) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 7922816251426433759354395034
  s21_decimal decimal2 = {{0x9999999A, 0x99999999, 0x19999999, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok142) {
  // 7922816251426433759354395034
  s21_decimal decimal1 = {{0x9999999A, 0x99999999, 0x19999999, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok143) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -7922816251426433759354395034
  s21_decimal decimal2 = {{0x9999999A, 0x99999999, 0x19999999, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok144) {
  // -7922816251426433759354395034
  s21_decimal decimal1 = {{0x9999999A, 0x99999999, 0x19999999, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok145) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1.2297829382473034409
  s21_decimal decimal2 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x130000}};
  int check = COMPARISON_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok146) {
  // 1.2297829382473034409
  s21_decimal decimal1 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x130000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok147) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1.2297829382473034409
  s21_decimal decimal2 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x80130000}};
  int check = COMPARISON_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok148) {
  // -1.2297829382473034409
  s21_decimal decimal1 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x80130000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok149) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1.2297829382473034410
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x130000}};
  int check = COMPARISON_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok150) {
  // 1.2297829382473034410
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x130000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok151) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1.2297829382473034410
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x80130000}};
  int check = COMPARISON_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok152) {
  // -1.2297829382473034410
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x80130000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok153) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1.2297829382473034411
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x130000}};
  int check = COMPARISON_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok154) {
  // 1.2297829382473034411
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x130000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok155) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1.2297829382473034411
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x80130000}};
  int check = COMPARISON_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok156) {
  // -1.2297829382473034411
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x80130000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok157) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok158) {
  // 1
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok159) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok160) {
  // -1
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok161) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1.0
  s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x10000}};
  int check = COMPARISON_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok162) {
  // 1.0
  s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x10000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok163) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1.0
  s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x80010000}};
  int check = COMPARISON_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok164) {
  // -1.0
  s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x80010000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok165) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1.22
  s21_decimal decimal2 = {{0x7A, 0x0, 0x0, 0x20000}};
  int check = COMPARISON_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok166) {
  // 1.22
  s21_decimal decimal1 = {{0x7A, 0x0, 0x0, 0x20000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok167) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1.22
  s21_decimal decimal2 = {{0x7A, 0x0, 0x0, 0x80020000}};
  int check = COMPARISON_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok168) {
  // -1.22
  s21_decimal decimal1 = {{0x7A, 0x0, 0x0, 0x80020000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok169) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1.230001
  s21_decimal decimal2 = {{0x12C4B1, 0x0, 0x0, 0x60000}};
  int check = COMPARISON_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok170) {
  // 1.230001
  s21_decimal decimal1 = {{0x12C4B1, 0x0, 0x0, 0x60000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok171) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1.230001
  s21_decimal decimal2 = {{0x12C4B1, 0x0, 0x0, 0x80060000}};
  int check = COMPARISON_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok172) {
  // -1.230001
  s21_decimal decimal1 = {{0x12C4B1, 0x0, 0x0, 0x80060000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok173) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1.23000
  s21_decimal decimal2 = {{0x1E078, 0x0, 0x0, 0x50000}};
  int check = COMPARISON_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok174) {
  // 1.23000
  s21_decimal decimal1 = {{0x1E078, 0x0, 0x0, 0x50000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok175) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1.23000
  s21_decimal decimal2 = {{0x1E078, 0x0, 0x0, 0x80050000}};
  int check = COMPARISON_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok176) {
  // -1.23000
  s21_decimal decimal1 = {{0x1E078, 0x0, 0x0, 0x80050000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok177) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1431655765
  s21_decimal decimal2 = {{0x55555555, 0x0, 0x0, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok178) {
  // 1431655765
  s21_decimal decimal1 = {{0x55555555, 0x0, 0x0, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok179) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1431655765
  s21_decimal decimal2 = {{0x55555555, 0x0, 0x0, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok180) {
  // -1431655765
  s21_decimal decimal1 = {{0x55555555, 0x0, 0x0, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok181) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1431655765.00000
  s21_decimal decimal2 = {{0x5554D320, 0x8235, 0x0, 0x50000}};
  int check = COMPARISON_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok182) {
  // 1431655765.00000
  s21_decimal decimal1 = {{0x5554D320, 0x8235, 0x0, 0x50000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok183) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1431655765.00000
  s21_decimal decimal2 = {{0x5554D320, 0x8235, 0x0, 0x80050000}};
  int check = COMPARISON_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok184) {
  // -1431655765.00000
  s21_decimal decimal1 = {{0x5554D320, 0x8235, 0x0, 0x80050000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok185) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1431655765.000000000000000001
  s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
  int check = COMPARISON_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok186) {
  // 1431655765.000000000000000001
  s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok187) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1431655765.000000000000000001
  s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x80120000}};
  int check = COMPARISON_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok188) {
  // -1431655765.000000000000000001
  s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x80120000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok189) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1431655764.999999999999999999
  s21_decimal decimal2 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x120000}};
  int check = COMPARISON_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok190) {
  // 1431655764.999999999999999999
  s21_decimal decimal1 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x120000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok191) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1431655764.999999999999999999
  s21_decimal decimal2 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x80120000}};
  int check = COMPARISON_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok192) {
  // -1431655764.999999999999999999
  s21_decimal decimal1 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x80120000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok193) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 0.9999999999999999999999999999
  s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
  int check = COMPARISON_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok194) {
  // 0.9999999999999999999999999999
  s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok195) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -0.9999999999999999999999999999
  s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x801C0000}};
  int check = COMPARISON_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok196) {
  // -0.9999999999999999999999999999
  s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x801C0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok197) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 0.0000000000000000000000000001
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x1C0000}};
  int check = COMPARISON_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok198) {
  // 0.0000000000000000000000000001
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok199) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -0.0000000000000000000000000001
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x801C0000}};
  int check = COMPARISON_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok200) {
  // -0.0000000000000000000000000001
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x801C0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok201) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 0
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok202) {
  // 0
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok203) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -0
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok204) {
  // -0
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok205) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -0.00000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x800E0000}};
  int check = COMPARISON_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok206) {
  // -0.00000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x800E0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok207) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 0.00000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0xE0000}};
  int check = COMPARISON_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok208) {
  // 0.00000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0xE0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok209) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -0.0000000000000000000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x801C0000}};
  int check = COMPARISON_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok210) {
  // -0.0000000000000000000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x801C0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok211) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 0.0000000000000000000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x1C0000}};
  int check = COMPARISON_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok212) {
  // 0.0000000000000000000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok213) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -4.7074769154693434325056864883
  s21_decimal decimal2 = {{0xCEDBC273, 0x56AF422B, 0x981B561D, 0x801C0000}};
  int check = COMPARISON_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok214) {
  // -4.7074769154693434325056864883
  s21_decimal decimal1 = {{0xCEDBC273, 0x56AF422B, 0x981B561D, 0x801C0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok215) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 4.7074769154693434325056864883
  s21_decimal decimal2 = {{0xCEDBC273, 0x56AF422B, 0x981B561D, 0x1C0000}};
  int check = COMPARISON_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok216) {
  // 4.7074769154693434325056864883
  s21_decimal decimal1 = {{0xCEDBC273, 0x56AF422B, 0x981B561D, 0x1C0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok217) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 24054676222594164633554651068
  s21_decimal decimal2 = {{0xCE5807BC, 0xF2D773B6, 0x4DB98FD2, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok218) {
  // 24054676222594164633554651068
  s21_decimal decimal1 = {{0xCE5807BC, 0xF2D773B6, 0x4DB98FD2, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok219) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -24054676222594164633554651068
  s21_decimal decimal2 = {{0xCE5807BC, 0xF2D773B6, 0x4DB98FD2, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok220) {
  // -24054676222594164633554651068
  s21_decimal decimal1 = {{0xCE5807BC, 0xF2D773B6, 0x4DB98FD2, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok221) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 30667538544853.855676101018067
  s21_decimal decimal2 = {{0xE333C1D3, 0xC173E715, 0x631797E3, 0xF0000}};
  int check = COMPARISON_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok222) {
  // 30667538544853.855676101018067
  s21_decimal decimal1 = {{0xE333C1D3, 0xC173E715, 0x631797E3, 0xF0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok223) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -30667538544853.855676101018067
  s21_decimal decimal2 = {{0xE333C1D3, 0xC173E715, 0x631797E3, 0x800F0000}};
  int check = COMPARISON_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok224) {
  // -30667538544853.855676101018067
  s21_decimal decimal1 = {{0xE333C1D3, 0xC173E715, 0x631797E3, 0x800F0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok225) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok226) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok227) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok228) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok229) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok230) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok231) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok232) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok233) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok234) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok235) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok236) {
  // -52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok237) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  int check = COMPARISON_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok238) {
  // 5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok239) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x801B0000}};
  int check = COMPARISON_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok240) {
  // -5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x801B0000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok241) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 5281877500950955839569596689
  s21_decimal decimal2 = {{0x11111111, 0x11111111, 0x11111111, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok242) {
  // 5281877500950955839569596689
  s21_decimal decimal1 = {{0x11111111, 0x11111111, 0x11111111, 0x0}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok243) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -5281877500950955839569596689
  s21_decimal decimal2 = {{0x11111111, 0x11111111, 0x11111111, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok244) {
  // -5281877500950955839569596689
  s21_decimal decimal1 = {{0x11111111, 0x11111111, 0x11111111, 0x80000000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok245) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 5281877500950955839569596689.0
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x10000}};
  int check = COMPARISON_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok246) {
  // 5281877500950955839569596689.0
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x10000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok247) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -5281877500950955839569596689.0
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80010000}};
  int check = COMPARISON_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok248) {
  // -5281877500950955839569596689.0
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80010000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok249) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 7922816251426433759354395033
  s21_decimal decimal2 = {{0x99999999, 0x99999999, 0x19999999, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_less_or_equal(decimal1, decimal2, check);
}

START_TEST(test_is_less_or_equal_ok250) {
  // 7922816251426433759354395033
  s21_decimal decimal1 = {{0x99999999, 0x99999999, 0x19999999, 0x0}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_less_or_equal(decimal1, decimal2, check);
}
END_TEST

START_TEST(test_is_not_equal_ok1) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok2) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok3) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok4) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok5) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok6) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok7) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok8) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok9) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok10) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok11) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok12) {
  // -52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok13) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok14) {
  // 5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok15) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x801B0000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok16) {
  // -5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x801B0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok17) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 5281877500950955839569596689
  s21_decimal decimal2 = {{0x11111111, 0x11111111, 0x11111111, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok18) {
  // 5281877500950955839569596689
  s21_decimal decimal1 = {{0x11111111, 0x11111111, 0x11111111, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok19) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -5281877500950955839569596689
  s21_decimal decimal2 = {{0x11111111, 0x11111111, 0x11111111, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok20) {
  // -5281877500950955839569596689
  s21_decimal decimal1 = {{0x11111111, 0x11111111, 0x11111111, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok21) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 5281877500950955839569596689.0
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x10000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok22) {
  // 5281877500950955839569596689.0
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x10000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok23) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -5281877500950955839569596689.0
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80010000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok24) {
  // -5281877500950955839569596689.0
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80010000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok25) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 7922816251426433759354395033
  s21_decimal decimal2 = {{0x99999999, 0x99999999, 0x19999999, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok26) {
  // 7922816251426433759354395033
  s21_decimal decimal1 = {{0x99999999, 0x99999999, 0x19999999, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok27) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -7922816251426433759354395033
  s21_decimal decimal2 = {{0x99999999, 0x99999999, 0x19999999, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok28) {
  // -7922816251426433759354395033
  s21_decimal decimal1 = {{0x99999999, 0x99999999, 0x19999999, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok29) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 7922816251426433759354395034
  s21_decimal decimal2 = {{0x9999999A, 0x99999999, 0x19999999, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok30) {
  // 7922816251426433759354395034
  s21_decimal decimal1 = {{0x9999999A, 0x99999999, 0x19999999, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok31) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -7922816251426433759354395034
  s21_decimal decimal2 = {{0x9999999A, 0x99999999, 0x19999999, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok32) {
  // -7922816251426433759354395034
  s21_decimal decimal1 = {{0x9999999A, 0x99999999, 0x19999999, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok33) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1.2297829382473034409
  s21_decimal decimal2 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x130000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok34) {
  // 1.2297829382473034409
  s21_decimal decimal1 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x130000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok35) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1.2297829382473034409
  s21_decimal decimal2 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x80130000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok36) {
  // -1.2297829382473034409
  s21_decimal decimal1 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x80130000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok37) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1.2297829382473034410
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x130000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok38) {
  // 1.2297829382473034410
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x130000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok39) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1.2297829382473034410
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x80130000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok40) {
  // -1.2297829382473034410
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x80130000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}
END_TEST

START_TEST(test_is_not_equal_ok41) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1.2297829382473034411
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x130000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok42) {
  // 1.2297829382473034411
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x130000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok43) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1.2297829382473034411
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x80130000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok44) {
  // -1.2297829382473034411
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x80130000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok45) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok46) {
  // 1
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok47) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok48) {
  // -1
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok49) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1.0
  s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x10000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok50) {
  // 1.0
  s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x10000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok51) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1.0
  s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x80010000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok52) {
  // -1.0
  s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x80010000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok53) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1.22
  s21_decimal decimal2 = {{0x7A, 0x0, 0x0, 0x20000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok54) {
  // 1.22
  s21_decimal decimal1 = {{0x7A, 0x0, 0x0, 0x20000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok55) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1.22
  s21_decimal decimal2 = {{0x7A, 0x0, 0x0, 0x80020000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok56) {
  // -1.22
  s21_decimal decimal1 = {{0x7A, 0x0, 0x0, 0x80020000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok57) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1.230001
  s21_decimal decimal2 = {{0x12C4B1, 0x0, 0x0, 0x60000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok58) {
  // 1.230001
  s21_decimal decimal1 = {{0x12C4B1, 0x0, 0x0, 0x60000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok59) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1.230001
  s21_decimal decimal2 = {{0x12C4B1, 0x0, 0x0, 0x80060000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok60) {
  // -1.230001
  s21_decimal decimal1 = {{0x12C4B1, 0x0, 0x0, 0x80060000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok61) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1.23000
  s21_decimal decimal2 = {{0x1E078, 0x0, 0x0, 0x50000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok62) {
  // 1.23000
  s21_decimal decimal1 = {{0x1E078, 0x0, 0x0, 0x50000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok63) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1.23000
  s21_decimal decimal2 = {{0x1E078, 0x0, 0x0, 0x80050000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok64) {
  // -1.23000
  s21_decimal decimal1 = {{0x1E078, 0x0, 0x0, 0x80050000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok65) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1431655765
  s21_decimal decimal2 = {{0x55555555, 0x0, 0x0, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok66) {
  // 1431655765
  s21_decimal decimal1 = {{0x55555555, 0x0, 0x0, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok67) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1431655765
  s21_decimal decimal2 = {{0x55555555, 0x0, 0x0, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok68) {
  // -1431655765
  s21_decimal decimal1 = {{0x55555555, 0x0, 0x0, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok69) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1431655765.00000
  s21_decimal decimal2 = {{0x5554D320, 0x8235, 0x0, 0x50000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok70) {
  // 1431655765.00000
  s21_decimal decimal1 = {{0x5554D320, 0x8235, 0x0, 0x50000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok71) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1431655765.00000
  s21_decimal decimal2 = {{0x5554D320, 0x8235, 0x0, 0x80050000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok72) {
  // -1431655765.00000
  s21_decimal decimal1 = {{0x5554D320, 0x8235, 0x0, 0x80050000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok73) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1431655765.000000000000000001
  s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok74) {
  // 1431655765.000000000000000001
  s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok75) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1431655765.000000000000000001
  s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x80120000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok76) {
  // -1431655765.000000000000000001
  s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x80120000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok77) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1431655764.999999999999999999
  s21_decimal decimal2 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x120000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok78) {
  // 1431655764.999999999999999999
  s21_decimal decimal1 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x120000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok79) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1431655764.999999999999999999
  s21_decimal decimal2 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x80120000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok80) {
  // -1431655764.999999999999999999
  s21_decimal decimal1 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x80120000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok81) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 0.9999999999999999999999999999
  s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok82) {
  // 0.9999999999999999999999999999
  s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok83) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -0.9999999999999999999999999999
  s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x801C0000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok84) {
  // -0.9999999999999999999999999999
  s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x801C0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok85) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 0.0000000000000000000000000001
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x1C0000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok86) {
  // 0.0000000000000000000000000001
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok87) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -0.0000000000000000000000000001
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x801C0000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok88) {
  // -0.0000000000000000000000000001
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x801C0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok89) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 0
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok90) {
  // 0
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok91) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -0
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok92) {
  // -0
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok93) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -0.00000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x800E0000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok94) {
  // -0.00000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x800E0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok95) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 0.00000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0xE0000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok96) {
  // 0.00000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0xE0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok97) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -0.0000000000000000000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x801C0000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok98) {
  // -0.0000000000000000000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x801C0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok99) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 0.0000000000000000000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x1C0000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok100) {
  // 0.0000000000000000000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok101) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 6267999556702909014823.458183
  s21_decimal decimal2 = {{0x488D587, 0xD365E6A2, 0x1440C488, 0x60000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok102) {
  // 6267999556702909014823.458183
  s21_decimal decimal1 = {{0x488D587, 0xD365E6A2, 0x1440C488, 0x60000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok103) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -6267999556702909014823.458183
  s21_decimal decimal2 = {{0x488D587, 0xD365E6A2, 0x1440C488, 0x80060000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok104) {
  // -6267999556702909014823.458183
  s21_decimal decimal1 = {{0x488D587, 0xD365E6A2, 0x1440C488, 0x80060000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok105) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -38277759856433.92884224284713
  s21_decimal decimal2 = {{0x3457D829, 0xF89B5A0D, 0xC5E4317, 0x800E0000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok106) {
  // -38277759856433.92884224284713
  s21_decimal decimal1 = {{0x3457D829, 0xF89B5A0D, 0xC5E4317, 0x800E0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok107) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 38277759856433.92884224284713
  s21_decimal decimal2 = {{0x3457D829, 0xF89B5A0D, 0xC5E4317, 0xE0000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok108) {
  // 38277759856433.92884224284713
  s21_decimal decimal1 = {{0x3457D829, 0xF89B5A0D, 0xC5E4317, 0xE0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok109) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -711.75276875911144204551509824
  s21_decimal decimal2 = {{0x29BED740, 0xCE56818A, 0xE5FACF22, 0x801A0000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok110) {
  // -711.75276875911144204551509824
  s21_decimal decimal1 = {{0x29BED740, 0xCE56818A, 0xE5FACF22, 0x801A0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok111) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 711.75276875911144204551509824
  s21_decimal decimal2 = {{0x29BED740, 0xCE56818A, 0xE5FACF22, 0x1A0000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok112) {
  // 711.75276875911144204551509824
  s21_decimal decimal1 = {{0x29BED740, 0xCE56818A, 0xE5FACF22, 0x1A0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok113) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok114) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok115) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok116) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_FALSE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok117) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok118) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok119) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok120) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok121) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok122) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok123) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok124) {
  // -52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok125) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok126) {
  // 5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok127) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x801B0000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok128) {
  // -5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x801B0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok129) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 5281877500950955839569596689
  s21_decimal decimal2 = {{0x11111111, 0x11111111, 0x11111111, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok130) {
  // 5281877500950955839569596689
  s21_decimal decimal1 = {{0x11111111, 0x11111111, 0x11111111, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok131) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -5281877500950955839569596689
  s21_decimal decimal2 = {{0x11111111, 0x11111111, 0x11111111, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok132) {
  // -5281877500950955839569596689
  s21_decimal decimal1 = {{0x11111111, 0x11111111, 0x11111111, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok133) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 5281877500950955839569596689.0
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x10000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok134) {
  // 5281877500950955839569596689.0
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x10000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok135) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -5281877500950955839569596689.0
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80010000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok136) {
  // -5281877500950955839569596689.0
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80010000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok137) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 7922816251426433759354395033
  s21_decimal decimal2 = {{0x99999999, 0x99999999, 0x19999999, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok138) {
  // 7922816251426433759354395033
  s21_decimal decimal1 = {{0x99999999, 0x99999999, 0x19999999, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok139) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -7922816251426433759354395033
  s21_decimal decimal2 = {{0x99999999, 0x99999999, 0x19999999, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok140) {
  // -7922816251426433759354395033
  s21_decimal decimal1 = {{0x99999999, 0x99999999, 0x19999999, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok141) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 7922816251426433759354395034
  s21_decimal decimal2 = {{0x9999999A, 0x99999999, 0x19999999, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok142) {
  // 7922816251426433759354395034
  s21_decimal decimal1 = {{0x9999999A, 0x99999999, 0x19999999, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok143) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -7922816251426433759354395034
  s21_decimal decimal2 = {{0x9999999A, 0x99999999, 0x19999999, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok144) {
  // -7922816251426433759354395034
  s21_decimal decimal1 = {{0x9999999A, 0x99999999, 0x19999999, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok145) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1.2297829382473034409
  s21_decimal decimal2 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x130000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok146) {
  // 1.2297829382473034409
  s21_decimal decimal1 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x130000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok147) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1.2297829382473034409
  s21_decimal decimal2 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x80130000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok148) {
  // -1.2297829382473034409
  s21_decimal decimal1 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x80130000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok149) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1.2297829382473034410
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x130000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok150) {
  // 1.2297829382473034410
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x130000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok151) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1.2297829382473034410
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x80130000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok152) {
  // -1.2297829382473034410
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x80130000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok153) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1.2297829382473034411
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x130000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok154) {
  // 1.2297829382473034411
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x130000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok155) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1.2297829382473034411
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x80130000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok156) {
  // -1.2297829382473034411
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x80130000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok157) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok158) {
  // 1
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok159) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok160) {
  // -1
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok161) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1.0
  s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x10000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok162) {
  // 1.0
  s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x10000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok163) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1.0
  s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x80010000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok164) {
  // -1.0
  s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x80010000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok165) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1.22
  s21_decimal decimal2 = {{0x7A, 0x0, 0x0, 0x20000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok166) {
  // 1.22
  s21_decimal decimal1 = {{0x7A, 0x0, 0x0, 0x20000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok167) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1.22
  s21_decimal decimal2 = {{0x7A, 0x0, 0x0, 0x80020000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok168) {
  // -1.22
  s21_decimal decimal1 = {{0x7A, 0x0, 0x0, 0x80020000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok169) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1.230001
  s21_decimal decimal2 = {{0x12C4B1, 0x0, 0x0, 0x60000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok170) {
  // 1.230001
  s21_decimal decimal1 = {{0x12C4B1, 0x0, 0x0, 0x60000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok171) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1.230001
  s21_decimal decimal2 = {{0x12C4B1, 0x0, 0x0, 0x80060000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok172) {
  // -1.230001
  s21_decimal decimal1 = {{0x12C4B1, 0x0, 0x0, 0x80060000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok173) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1.23000
  s21_decimal decimal2 = {{0x1E078, 0x0, 0x0, 0x50000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok174) {
  // 1.23000
  s21_decimal decimal1 = {{0x1E078, 0x0, 0x0, 0x50000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok175) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1.23000
  s21_decimal decimal2 = {{0x1E078, 0x0, 0x0, 0x80050000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok176) {
  // -1.23000
  s21_decimal decimal1 = {{0x1E078, 0x0, 0x0, 0x80050000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok177) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1431655765
  s21_decimal decimal2 = {{0x55555555, 0x0, 0x0, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok178) {
  // 1431655765
  s21_decimal decimal1 = {{0x55555555, 0x0, 0x0, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok179) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1431655765
  s21_decimal decimal2 = {{0x55555555, 0x0, 0x0, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok180) {
  // -1431655765
  s21_decimal decimal1 = {{0x55555555, 0x0, 0x0, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok181) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1431655765.00000
  s21_decimal decimal2 = {{0x5554D320, 0x8235, 0x0, 0x50000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok182) {
  // 1431655765.00000
  s21_decimal decimal1 = {{0x5554D320, 0x8235, 0x0, 0x50000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok183) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1431655765.00000
  s21_decimal decimal2 = {{0x5554D320, 0x8235, 0x0, 0x80050000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok184) {
  // -1431655765.00000
  s21_decimal decimal1 = {{0x5554D320, 0x8235, 0x0, 0x80050000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok185) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1431655765.000000000000000001
  s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok186) {
  // 1431655765.000000000000000001
  s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok187) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1431655765.000000000000000001
  s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x80120000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok188) {
  // -1431655765.000000000000000001
  s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x80120000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok189) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1431655764.999999999999999999
  s21_decimal decimal2 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x120000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok190) {
  // 1431655764.999999999999999999
  s21_decimal decimal1 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x120000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok191) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1431655764.999999999999999999
  s21_decimal decimal2 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x80120000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok192) {
  // -1431655764.999999999999999999
  s21_decimal decimal1 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x80120000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok193) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 0.9999999999999999999999999999
  s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok194) {
  // 0.9999999999999999999999999999
  s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok195) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -0.9999999999999999999999999999
  s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x801C0000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok196) {
  // -0.9999999999999999999999999999
  s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x801C0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok197) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 0.0000000000000000000000000001
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x1C0000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok198) {
  // 0.0000000000000000000000000001
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok199) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -0.0000000000000000000000000001
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x801C0000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok200) {
  // -0.0000000000000000000000000001
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x801C0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok201) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 0
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok202) {
  // 0
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok203) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -0
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok204) {
  // -0
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok205) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -0.00000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x800E0000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok206) {
  // -0.00000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x800E0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok207) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 0.00000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0xE0000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok208) {
  // 0.00000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0xE0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok209) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -0.0000000000000000000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x801C0000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok210) {
  // -0.0000000000000000000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x801C0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok211) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 0.0000000000000000000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x1C0000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok212) {
  // 0.0000000000000000000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok213) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 6267999556702909014823.458183
  s21_decimal decimal2 = {{0x488D587, 0xD365E6A2, 0x1440C488, 0x60000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok214) {
  // 6267999556702909014823.458183
  s21_decimal decimal1 = {{0x488D587, 0xD365E6A2, 0x1440C488, 0x60000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok215) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -6267999556702909014823.458183
  s21_decimal decimal2 = {{0x488D587, 0xD365E6A2, 0x1440C488, 0x80060000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok216) {
  // -6267999556702909014823.458183
  s21_decimal decimal1 = {{0x488D587, 0xD365E6A2, 0x1440C488, 0x80060000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok217) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -38277759856433.92884224284713
  s21_decimal decimal2 = {{0x3457D829, 0xF89B5A0D, 0xC5E4317, 0x800E0000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok218) {
  // -38277759856433.92884224284713
  s21_decimal decimal1 = {{0x3457D829, 0xF89B5A0D, 0xC5E4317, 0x800E0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok219) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 38277759856433.92884224284713
  s21_decimal decimal2 = {{0x3457D829, 0xF89B5A0D, 0xC5E4317, 0xE0000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok220) {
  // 38277759856433.92884224284713
  s21_decimal decimal1 = {{0x3457D829, 0xF89B5A0D, 0xC5E4317, 0xE0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok221) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -711.75276875911144204551509824
  s21_decimal decimal2 = {{0x29BED740, 0xCE56818A, 0xE5FACF22, 0x801A0000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok222) {
  // -711.75276875911144204551509824
  s21_decimal decimal1 = {{0x29BED740, 0xCE56818A, 0xE5FACF22, 0x801A0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok223) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 711.75276875911144204551509824
  s21_decimal decimal2 = {{0x29BED740, 0xCE56818A, 0xE5FACF22, 0x1A0000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok224) {
  // 711.75276875911144204551509824
  s21_decimal decimal1 = {{0x29BED740, 0xCE56818A, 0xE5FACF22, 0x1A0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok225) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok226) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok227) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok228) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok229) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok230) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = COMPARISON_FALSE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok231) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok232) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok233) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok234) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok235) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok236) {
  // -52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok237) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok238) {
  // 5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok239) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x801B0000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok240) {
  // -5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x801B0000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok241) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 5281877500950955839569596689
  s21_decimal decimal2 = {{0x11111111, 0x11111111, 0x11111111, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok242) {
  // 5281877500950955839569596689
  s21_decimal decimal1 = {{0x11111111, 0x11111111, 0x11111111, 0x0}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok243) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -5281877500950955839569596689
  s21_decimal decimal2 = {{0x11111111, 0x11111111, 0x11111111, 0x80000000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok244) {
  // -5281877500950955839569596689
  s21_decimal decimal1 = {{0x11111111, 0x11111111, 0x11111111, 0x80000000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok245) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 5281877500950955839569596689.0
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x10000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok246) {
  // 5281877500950955839569596689.0
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x10000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok247) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -5281877500950955839569596689.0
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80010000}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok248) {
  // -5281877500950955839569596689.0
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80010000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok249) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 7922816251426433759354395033
  s21_decimal decimal2 = {{0x99999999, 0x99999999, 0x19999999, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}

START_TEST(test_is_not_equal_ok250) {
  // 7922816251426433759354395033
  s21_decimal decimal1 = {{0x99999999, 0x99999999, 0x19999999, 0x0}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = COMPARISON_TRUE;

  test_is_not_equal(decimal1, decimal2, check);
}
END_TEST

Suite *is_equal_suite1(void) {
  Suite *s;
  TCase *tc_main;

  s = suite_create("is_equal_suite1");
  tc_main = tcase_create("main");
  tcase_add_test(tc_main, test_is_equal_ok1);
  tcase_add_test(tc_main, test_is_equal_ok2);
  tcase_add_test(tc_main, test_is_equal_ok3);
  tcase_add_test(tc_main, test_is_equal_ok4);
  tcase_add_test(tc_main, test_is_equal_ok5);
  tcase_add_test(tc_main, test_is_equal_ok6);
  tcase_add_test(tc_main, test_is_equal_ok7);
  tcase_add_test(tc_main, test_is_equal_ok8);
  tcase_add_test(tc_main, test_is_equal_ok9);
  tcase_add_test(tc_main, test_is_equal_ok10);
  tcase_add_test(tc_main, test_is_equal_ok11);
  tcase_add_test(tc_main, test_is_equal_ok12);
  tcase_add_test(tc_main, test_is_equal_ok13);
  tcase_add_test(tc_main, test_is_equal_ok14);
  tcase_add_test(tc_main, test_is_equal_ok15);
  tcase_add_test(tc_main, test_is_equal_ok16);
  tcase_add_test(tc_main, test_is_equal_ok17);
  tcase_add_test(tc_main, test_is_equal_ok18);
  tcase_add_test(tc_main, test_is_equal_ok19);
  tcase_add_test(tc_main, test_is_equal_ok20);
  tcase_add_test(tc_main, test_is_equal_ok21);
  tcase_add_test(tc_main, test_is_equal_ok22);
  tcase_add_test(tc_main, test_is_equal_ok23);
  tcase_add_test(tc_main, test_is_equal_ok24);
  tcase_add_test(tc_main, test_is_equal_ok25);
  tcase_add_test(tc_main, test_is_equal_ok26);
  tcase_add_test(tc_main, test_is_equal_ok27);
  tcase_add_test(tc_main, test_is_equal_ok28);
  tcase_add_test(tc_main, test_is_equal_ok29);
  tcase_add_test(tc_main, test_is_equal_ok30);
  tcase_add_test(tc_main, test_is_equal_ok31);
  tcase_add_test(tc_main, test_is_equal_ok32);
  tcase_add_test(tc_main, test_is_equal_ok33);
  tcase_add_test(tc_main, test_is_equal_ok34);
  tcase_add_test(tc_main, test_is_equal_ok35);
  tcase_add_test(tc_main, test_is_equal_ok36);
  tcase_add_test(tc_main, test_is_equal_ok37);
  tcase_add_test(tc_main, test_is_equal_ok38);
  tcase_add_test(tc_main, test_is_equal_ok39);
  tcase_add_test(tc_main, test_is_equal_ok40);
  tcase_add_test(tc_main, test_is_equal_ok41);
  tcase_add_test(tc_main, test_is_equal_ok42);
  tcase_add_test(tc_main, test_is_equal_ok43);
  tcase_add_test(tc_main, test_is_equal_ok44);
  tcase_add_test(tc_main, test_is_equal_ok45);
  tcase_add_test(tc_main, test_is_equal_ok46);
  tcase_add_test(tc_main, test_is_equal_ok47);
  tcase_add_test(tc_main, test_is_equal_ok48);
  tcase_add_test(tc_main, test_is_equal_ok49);
  tcase_add_test(tc_main, test_is_equal_ok50);
  tcase_add_test(tc_main, test_is_equal_ok51);
  tcase_add_test(tc_main, test_is_equal_ok52);
  tcase_add_test(tc_main, test_is_equal_ok53);
  tcase_add_test(tc_main, test_is_equal_ok54);
  tcase_add_test(tc_main, test_is_equal_ok55);
  tcase_add_test(tc_main, test_is_equal_ok56);
  tcase_add_test(tc_main, test_is_equal_ok57);
  tcase_add_test(tc_main, test_is_equal_ok58);
  tcase_add_test(tc_main, test_is_equal_ok59);
  tcase_add_test(tc_main, test_is_equal_ok60);
  tcase_add_test(tc_main, test_is_equal_ok61);
  tcase_add_test(tc_main, test_is_equal_ok62);
  tcase_add_test(tc_main, test_is_equal_ok63);
  tcase_add_test(tc_main, test_is_equal_ok64);
  tcase_add_test(tc_main, test_is_equal_ok65);
  tcase_add_test(tc_main, test_is_equal_ok66);
  tcase_add_test(tc_main, test_is_equal_ok67);
  tcase_add_test(tc_main, test_is_equal_ok68);
  tcase_add_test(tc_main, test_is_equal_ok69);
  tcase_add_test(tc_main, test_is_equal_ok70);
  tcase_add_test(tc_main, test_is_equal_ok71);
  tcase_add_test(tc_main, test_is_equal_ok72);
  tcase_add_test(tc_main, test_is_equal_ok73);
  tcase_add_test(tc_main, test_is_equal_ok74);
  tcase_add_test(tc_main, test_is_equal_ok75);
  tcase_add_test(tc_main, test_is_equal_ok76);
  tcase_add_test(tc_main, test_is_equal_ok77);
  tcase_add_test(tc_main, test_is_equal_ok78);
  tcase_add_test(tc_main, test_is_equal_ok79);
  tcase_add_test(tc_main, test_is_equal_ok80);
  tcase_add_test(tc_main, test_is_equal_ok81);
  tcase_add_test(tc_main, test_is_equal_ok82);
  tcase_add_test(tc_main, test_is_equal_ok83);
  tcase_add_test(tc_main, test_is_equal_ok84);
  tcase_add_test(tc_main, test_is_equal_ok85);
  tcase_add_test(tc_main, test_is_equal_ok86);
  tcase_add_test(tc_main, test_is_equal_ok87);
  tcase_add_test(tc_main, test_is_equal_ok88);
  tcase_add_test(tc_main, test_is_equal_ok89);
  tcase_add_test(tc_main, test_is_equal_ok90);
  tcase_add_test(tc_main, test_is_equal_ok91);
  tcase_add_test(tc_main, test_is_equal_ok92);
  tcase_add_test(tc_main, test_is_equal_ok93);
  tcase_add_test(tc_main, test_is_equal_ok94);
  tcase_add_test(tc_main, test_is_equal_ok95);
  tcase_add_test(tc_main, test_is_equal_ok96);
  tcase_add_test(tc_main, test_is_equal_ok97);
  tcase_add_test(tc_main, test_is_equal_ok98);
  tcase_add_test(tc_main, test_is_equal_ok99);
  tcase_add_test(tc_main, test_is_equal_ok100);
  tcase_add_test(tc_main, test_is_equal_ok101);
  tcase_add_test(tc_main, test_is_equal_ok102);
  tcase_add_test(tc_main, test_is_equal_ok103);
  tcase_add_test(tc_main, test_is_equal_ok104);
  tcase_add_test(tc_main, test_is_equal_ok105);
  tcase_add_test(tc_main, test_is_equal_ok106);
  tcase_add_test(tc_main, test_is_equal_ok107);
  tcase_add_test(tc_main, test_is_equal_ok108);
  tcase_add_test(tc_main, test_is_equal_ok109);
  tcase_add_test(tc_main, test_is_equal_ok110);
  tcase_add_test(tc_main, test_is_equal_ok111);
  tcase_add_test(tc_main, test_is_equal_ok112);
  tcase_add_test(tc_main, test_is_equal_ok113);
  tcase_add_test(tc_main, test_is_equal_ok114);
  tcase_add_test(tc_main, test_is_equal_ok115);
  tcase_add_test(tc_main, test_is_equal_ok116);
  tcase_add_test(tc_main, test_is_equal_ok117);
  tcase_add_test(tc_main, test_is_equal_ok118);
  tcase_add_test(tc_main, test_is_equal_ok119);
  tcase_add_test(tc_main, test_is_equal_ok120);
  tcase_add_test(tc_main, test_is_equal_ok121);
  tcase_add_test(tc_main, test_is_equal_ok122);
  tcase_add_test(tc_main, test_is_equal_ok123);
  tcase_add_test(tc_main, test_is_equal_ok124);
  tcase_add_test(tc_main, test_is_equal_ok125);
  tcase_add_test(tc_main, test_is_equal_ok126);
  tcase_add_test(tc_main, test_is_equal_ok127);
  tcase_add_test(tc_main, test_is_equal_ok128);
  tcase_add_test(tc_main, test_is_equal_ok129);
  tcase_add_test(tc_main, test_is_equal_ok130);
  tcase_add_test(tc_main, test_is_equal_ok131);
  tcase_add_test(tc_main, test_is_equal_ok132);
  tcase_add_test(tc_main, test_is_equal_ok133);
  tcase_add_test(tc_main, test_is_equal_ok134);
  tcase_add_test(tc_main, test_is_equal_ok135);
  tcase_add_test(tc_main, test_is_equal_ok136);
  tcase_add_test(tc_main, test_is_equal_ok137);
  tcase_add_test(tc_main, test_is_equal_ok138);
  tcase_add_test(tc_main, test_is_equal_ok139);
  tcase_add_test(tc_main, test_is_equal_ok140);
  tcase_add_test(tc_main, test_is_equal_ok141);
  tcase_add_test(tc_main, test_is_equal_ok142);
  tcase_add_test(tc_main, test_is_equal_ok143);
  tcase_add_test(tc_main, test_is_equal_ok144);
  tcase_add_test(tc_main, test_is_equal_ok145);
  tcase_add_test(tc_main, test_is_equal_ok146);
  tcase_add_test(tc_main, test_is_equal_ok147);
  tcase_add_test(tc_main, test_is_equal_ok148);
  tcase_add_test(tc_main, test_is_equal_ok149);
  tcase_add_test(tc_main, test_is_equal_ok150);
  tcase_add_test(tc_main, test_is_equal_ok151);
  tcase_add_test(tc_main, test_is_equal_ok152);
  tcase_add_test(tc_main, test_is_equal_ok153);
  tcase_add_test(tc_main, test_is_equal_ok154);
  tcase_add_test(tc_main, test_is_equal_ok155);
  tcase_add_test(tc_main, test_is_equal_ok156);
  tcase_add_test(tc_main, test_is_equal_ok157);
  tcase_add_test(tc_main, test_is_equal_ok158);
  tcase_add_test(tc_main, test_is_equal_ok159);
  tcase_add_test(tc_main, test_is_equal_ok160);
  tcase_add_test(tc_main, test_is_equal_ok161);
  tcase_add_test(tc_main, test_is_equal_ok162);
  tcase_add_test(tc_main, test_is_equal_ok163);
  tcase_add_test(tc_main, test_is_equal_ok164);
  tcase_add_test(tc_main, test_is_equal_ok165);
  tcase_add_test(tc_main, test_is_equal_ok166);
  tcase_add_test(tc_main, test_is_equal_ok167);
  tcase_add_test(tc_main, test_is_equal_ok168);
  tcase_add_test(tc_main, test_is_equal_ok169);
  tcase_add_test(tc_main, test_is_equal_ok170);
  tcase_add_test(tc_main, test_is_equal_ok171);
  tcase_add_test(tc_main, test_is_equal_ok172);
  tcase_add_test(tc_main, test_is_equal_ok173);
  tcase_add_test(tc_main, test_is_equal_ok174);
  tcase_add_test(tc_main, test_is_equal_ok175);
  tcase_add_test(tc_main, test_is_equal_ok176);
  tcase_add_test(tc_main, test_is_equal_ok177);
  tcase_add_test(tc_main, test_is_equal_ok178);
  tcase_add_test(tc_main, test_is_equal_ok179);
  tcase_add_test(tc_main, test_is_equal_ok180);
  tcase_add_test(tc_main, test_is_equal_ok181);
  tcase_add_test(tc_main, test_is_equal_ok182);
  tcase_add_test(tc_main, test_is_equal_ok183);
  tcase_add_test(tc_main, test_is_equal_ok184);
  tcase_add_test(tc_main, test_is_equal_ok185);
  tcase_add_test(tc_main, test_is_equal_ok186);
  tcase_add_test(tc_main, test_is_equal_ok187);
  tcase_add_test(tc_main, test_is_equal_ok188);
  tcase_add_test(tc_main, test_is_equal_ok189);
  tcase_add_test(tc_main, test_is_equal_ok190);
  tcase_add_test(tc_main, test_is_equal_ok191);
  tcase_add_test(tc_main, test_is_equal_ok192);
  tcase_add_test(tc_main, test_is_equal_ok193);
  tcase_add_test(tc_main, test_is_equal_ok194);
  tcase_add_test(tc_main, test_is_equal_ok195);
  tcase_add_test(tc_main, test_is_equal_ok196);
  tcase_add_test(tc_main, test_is_equal_ok197);
  tcase_add_test(tc_main, test_is_equal_ok198);
  tcase_add_test(tc_main, test_is_equal_ok199);
  tcase_add_test(tc_main, test_is_equal_ok200);
  tcase_add_test(tc_main, test_is_equal_ok201);
  tcase_add_test(tc_main, test_is_equal_ok202);
  tcase_add_test(tc_main, test_is_equal_ok203);
  tcase_add_test(tc_main, test_is_equal_ok204);
  tcase_add_test(tc_main, test_is_equal_ok205);
  tcase_add_test(tc_main, test_is_equal_ok206);
  tcase_add_test(tc_main, test_is_equal_ok207);
  tcase_add_test(tc_main, test_is_equal_ok208);
  tcase_add_test(tc_main, test_is_equal_ok209);
  tcase_add_test(tc_main, test_is_equal_ok210);
  tcase_add_test(tc_main, test_is_equal_ok211);
  tcase_add_test(tc_main, test_is_equal_ok212);
  tcase_add_test(tc_main, test_is_equal_ok213);
  tcase_add_test(tc_main, test_is_equal_ok214);
  tcase_add_test(tc_main, test_is_equal_ok215);
  tcase_add_test(tc_main, test_is_equal_ok216);
  tcase_add_test(tc_main, test_is_equal_ok217);
  tcase_add_test(tc_main, test_is_equal_ok218);
  tcase_add_test(tc_main, test_is_equal_ok219);
  tcase_add_test(tc_main, test_is_equal_ok220);
  tcase_add_test(tc_main, test_is_equal_ok221);
  tcase_add_test(tc_main, test_is_equal_ok222);
  tcase_add_test(tc_main, test_is_equal_ok223);
  tcase_add_test(tc_main, test_is_equal_ok224);
  tcase_add_test(tc_main, test_is_equal_ok225);
  tcase_add_test(tc_main, test_is_equal_ok226);
  tcase_add_test(tc_main, test_is_equal_ok227);
  tcase_add_test(tc_main, test_is_equal_ok228);
  tcase_add_test(tc_main, test_is_equal_ok229);
  tcase_add_test(tc_main, test_is_equal_ok230);
  tcase_add_test(tc_main, test_is_equal_ok231);
  tcase_add_test(tc_main, test_is_equal_ok232);
  tcase_add_test(tc_main, test_is_equal_ok233);
  tcase_add_test(tc_main, test_is_equal_ok234);
  tcase_add_test(tc_main, test_is_equal_ok235);
  tcase_add_test(tc_main, test_is_equal_ok236);
  tcase_add_test(tc_main, test_is_equal_ok237);
  tcase_add_test(tc_main, test_is_equal_ok238);
  tcase_add_test(tc_main, test_is_equal_ok239);
  tcase_add_test(tc_main, test_is_equal_ok240);
  tcase_add_test(tc_main, test_is_equal_ok241);
  tcase_add_test(tc_main, test_is_equal_ok242);
  tcase_add_test(tc_main, test_is_equal_ok243);
  tcase_add_test(tc_main, test_is_equal_ok244);
  tcase_add_test(tc_main, test_is_equal_ok245);
  tcase_add_test(tc_main, test_is_equal_ok246);
  tcase_add_test(tc_main, test_is_equal_ok247);
  tcase_add_test(tc_main, test_is_equal_ok248);
  tcase_add_test(tc_main, test_is_equal_ok249);
  tcase_add_test(tc_main, test_is_equal_ok250);

  suite_add_tcase(s, tc_main);
  return s;
}

Suite *is_greater_suite1(void) {
  Suite *s;
  TCase *tc_main;

  s = suite_create("is_greater_suite1");
  tc_main = tcase_create("main");
  tcase_add_test(tc_main, test_is_greater_ok1);
  tcase_add_test(tc_main, test_is_greater_ok2);
  tcase_add_test(tc_main, test_is_greater_ok3);
  tcase_add_test(tc_main, test_is_greater_ok4);
  tcase_add_test(tc_main, test_is_greater_ok5);
  tcase_add_test(tc_main, test_is_greater_ok6);
  tcase_add_test(tc_main, test_is_greater_ok7);
  tcase_add_test(tc_main, test_is_greater_ok8);
  tcase_add_test(tc_main, test_is_greater_ok9);
  tcase_add_test(tc_main, test_is_greater_ok10);
  tcase_add_test(tc_main, test_is_greater_ok11);
  tcase_add_test(tc_main, test_is_greater_ok12);
  tcase_add_test(tc_main, test_is_greater_ok13);
  tcase_add_test(tc_main, test_is_greater_ok14);
  tcase_add_test(tc_main, test_is_greater_ok15);
  tcase_add_test(tc_main, test_is_greater_ok16);
  tcase_add_test(tc_main, test_is_greater_ok17);
  tcase_add_test(tc_main, test_is_greater_ok18);
  tcase_add_test(tc_main, test_is_greater_ok19);
  tcase_add_test(tc_main, test_is_greater_ok20);
  tcase_add_test(tc_main, test_is_greater_ok21);
  tcase_add_test(tc_main, test_is_greater_ok22);
  tcase_add_test(tc_main, test_is_greater_ok23);
  tcase_add_test(tc_main, test_is_greater_ok24);
  tcase_add_test(tc_main, test_is_greater_ok25);
  tcase_add_test(tc_main, test_is_greater_ok26);
  tcase_add_test(tc_main, test_is_greater_ok27);
  tcase_add_test(tc_main, test_is_greater_ok28);
  tcase_add_test(tc_main, test_is_greater_ok29);
  tcase_add_test(tc_main, test_is_greater_ok30);
  tcase_add_test(tc_main, test_is_greater_ok31);
  tcase_add_test(tc_main, test_is_greater_ok32);
  tcase_add_test(tc_main, test_is_greater_ok33);
  tcase_add_test(tc_main, test_is_greater_ok34);
  tcase_add_test(tc_main, test_is_greater_ok35);
  tcase_add_test(tc_main, test_is_greater_ok36);
  tcase_add_test(tc_main, test_is_greater_ok37);
  tcase_add_test(tc_main, test_is_greater_ok38);
  tcase_add_test(tc_main, test_is_greater_ok39);
  tcase_add_test(tc_main, test_is_greater_ok40);
  tcase_add_test(tc_main, test_is_greater_ok41);
  tcase_add_test(tc_main, test_is_greater_ok42);
  tcase_add_test(tc_main, test_is_greater_ok43);
  tcase_add_test(tc_main, test_is_greater_ok44);
  tcase_add_test(tc_main, test_is_greater_ok45);
  tcase_add_test(tc_main, test_is_greater_ok46);
  tcase_add_test(tc_main, test_is_greater_ok47);
  tcase_add_test(tc_main, test_is_greater_ok48);
  tcase_add_test(tc_main, test_is_greater_ok49);
  tcase_add_test(tc_main, test_is_greater_ok50);
  tcase_add_test(tc_main, test_is_greater_ok51);
  tcase_add_test(tc_main, test_is_greater_ok52);
  tcase_add_test(tc_main, test_is_greater_ok53);
  tcase_add_test(tc_main, test_is_greater_ok54);
  tcase_add_test(tc_main, test_is_greater_ok55);
  tcase_add_test(tc_main, test_is_greater_ok56);
  tcase_add_test(tc_main, test_is_greater_ok57);
  tcase_add_test(tc_main, test_is_greater_ok58);
  tcase_add_test(tc_main, test_is_greater_ok59);
  tcase_add_test(tc_main, test_is_greater_ok60);
  tcase_add_test(tc_main, test_is_greater_ok61);
  tcase_add_test(tc_main, test_is_greater_ok62);
  tcase_add_test(tc_main, test_is_greater_ok63);
  tcase_add_test(tc_main, test_is_greater_ok64);
  tcase_add_test(tc_main, test_is_greater_ok65);
  tcase_add_test(tc_main, test_is_greater_ok66);
  tcase_add_test(tc_main, test_is_greater_ok67);
  tcase_add_test(tc_main, test_is_greater_ok68);
  tcase_add_test(tc_main, test_is_greater_ok69);
  tcase_add_test(tc_main, test_is_greater_ok70);
  tcase_add_test(tc_main, test_is_greater_ok71);
  tcase_add_test(tc_main, test_is_greater_ok72);
  tcase_add_test(tc_main, test_is_greater_ok73);
  tcase_add_test(tc_main, test_is_greater_ok74);
  tcase_add_test(tc_main, test_is_greater_ok75);
  tcase_add_test(tc_main, test_is_greater_ok76);
  tcase_add_test(tc_main, test_is_greater_ok77);
  tcase_add_test(tc_main, test_is_greater_ok78);
  tcase_add_test(tc_main, test_is_greater_ok79);
  tcase_add_test(tc_main, test_is_greater_ok80);
  tcase_add_test(tc_main, test_is_greater_ok81);
  tcase_add_test(tc_main, test_is_greater_ok82);
  tcase_add_test(tc_main, test_is_greater_ok83);
  tcase_add_test(tc_main, test_is_greater_ok84);
  tcase_add_test(tc_main, test_is_greater_ok85);
  tcase_add_test(tc_main, test_is_greater_ok86);
  tcase_add_test(tc_main, test_is_greater_ok87);
  tcase_add_test(tc_main, test_is_greater_ok88);
  tcase_add_test(tc_main, test_is_greater_ok89);
  tcase_add_test(tc_main, test_is_greater_ok90);
  tcase_add_test(tc_main, test_is_greater_ok91);
  tcase_add_test(tc_main, test_is_greater_ok92);
  tcase_add_test(tc_main, test_is_greater_ok93);
  tcase_add_test(tc_main, test_is_greater_ok94);
  tcase_add_test(tc_main, test_is_greater_ok95);
  tcase_add_test(tc_main, test_is_greater_ok96);
  tcase_add_test(tc_main, test_is_greater_ok97);
  tcase_add_test(tc_main, test_is_greater_ok98);
  tcase_add_test(tc_main, test_is_greater_ok99);
  tcase_add_test(tc_main, test_is_greater_ok100);
  tcase_add_test(tc_main, test_is_greater_ok101);
  tcase_add_test(tc_main, test_is_greater_ok102);
  tcase_add_test(tc_main, test_is_greater_ok103);
  tcase_add_test(tc_main, test_is_greater_ok104);
  tcase_add_test(tc_main, test_is_greater_ok105);
  tcase_add_test(tc_main, test_is_greater_ok106);
  tcase_add_test(tc_main, test_is_greater_ok107);
  tcase_add_test(tc_main, test_is_greater_ok108);
  tcase_add_test(tc_main, test_is_greater_ok109);
  tcase_add_test(tc_main, test_is_greater_ok110);
  tcase_add_test(tc_main, test_is_greater_ok111);
  tcase_add_test(tc_main, test_is_greater_ok112);
  tcase_add_test(tc_main, test_is_greater_ok113);
  tcase_add_test(tc_main, test_is_greater_ok114);
  tcase_add_test(tc_main, test_is_greater_ok115);
  tcase_add_test(tc_main, test_is_greater_ok116);
  tcase_add_test(tc_main, test_is_greater_ok117);
  tcase_add_test(tc_main, test_is_greater_ok118);
  tcase_add_test(tc_main, test_is_greater_ok119);
  tcase_add_test(tc_main, test_is_greater_ok120);
  tcase_add_test(tc_main, test_is_greater_ok121);
  tcase_add_test(tc_main, test_is_greater_ok122);
  tcase_add_test(tc_main, test_is_greater_ok123);
  tcase_add_test(tc_main, test_is_greater_ok124);
  tcase_add_test(tc_main, test_is_greater_ok125);
  tcase_add_test(tc_main, test_is_greater_ok126);
  tcase_add_test(tc_main, test_is_greater_ok127);
  tcase_add_test(tc_main, test_is_greater_ok128);
  tcase_add_test(tc_main, test_is_greater_ok129);
  tcase_add_test(tc_main, test_is_greater_ok130);
  tcase_add_test(tc_main, test_is_greater_ok131);
  tcase_add_test(tc_main, test_is_greater_ok132);
  tcase_add_test(tc_main, test_is_greater_ok133);
  tcase_add_test(tc_main, test_is_greater_ok134);
  tcase_add_test(tc_main, test_is_greater_ok135);
  tcase_add_test(tc_main, test_is_greater_ok136);
  tcase_add_test(tc_main, test_is_greater_ok137);
  tcase_add_test(tc_main, test_is_greater_ok138);
  tcase_add_test(tc_main, test_is_greater_ok139);
  tcase_add_test(tc_main, test_is_greater_ok140);
  tcase_add_test(tc_main, test_is_greater_ok141);
  tcase_add_test(tc_main, test_is_greater_ok142);
  tcase_add_test(tc_main, test_is_greater_ok143);
  tcase_add_test(tc_main, test_is_greater_ok144);
  tcase_add_test(tc_main, test_is_greater_ok145);
  tcase_add_test(tc_main, test_is_greater_ok146);
  tcase_add_test(tc_main, test_is_greater_ok147);
  tcase_add_test(tc_main, test_is_greater_ok148);
  tcase_add_test(tc_main, test_is_greater_ok149);
  tcase_add_test(tc_main, test_is_greater_ok150);
  tcase_add_test(tc_main, test_is_greater_ok151);
  tcase_add_test(tc_main, test_is_greater_ok152);
  tcase_add_test(tc_main, test_is_greater_ok153);
  tcase_add_test(tc_main, test_is_greater_ok154);
  tcase_add_test(tc_main, test_is_greater_ok155);
  tcase_add_test(tc_main, test_is_greater_ok156);
  tcase_add_test(tc_main, test_is_greater_ok157);
  tcase_add_test(tc_main, test_is_greater_ok158);
  tcase_add_test(tc_main, test_is_greater_ok159);
  tcase_add_test(tc_main, test_is_greater_ok160);
  tcase_add_test(tc_main, test_is_greater_ok161);
  tcase_add_test(tc_main, test_is_greater_ok162);
  tcase_add_test(tc_main, test_is_greater_ok163);
  tcase_add_test(tc_main, test_is_greater_ok164);
  tcase_add_test(tc_main, test_is_greater_ok165);
  tcase_add_test(tc_main, test_is_greater_ok166);
  tcase_add_test(tc_main, test_is_greater_ok167);
  tcase_add_test(tc_main, test_is_greater_ok168);
  tcase_add_test(tc_main, test_is_greater_ok169);
  tcase_add_test(tc_main, test_is_greater_ok170);
  tcase_add_test(tc_main, test_is_greater_ok171);
  tcase_add_test(tc_main, test_is_greater_ok172);
  tcase_add_test(tc_main, test_is_greater_ok173);
  tcase_add_test(tc_main, test_is_greater_ok174);
  tcase_add_test(tc_main, test_is_greater_ok175);
  tcase_add_test(tc_main, test_is_greater_ok176);
  tcase_add_test(tc_main, test_is_greater_ok177);
  tcase_add_test(tc_main, test_is_greater_ok178);
  tcase_add_test(tc_main, test_is_greater_ok179);
  tcase_add_test(tc_main, test_is_greater_ok180);
  tcase_add_test(tc_main, test_is_greater_ok181);
  tcase_add_test(tc_main, test_is_greater_ok182);
  tcase_add_test(tc_main, test_is_greater_ok183);
  tcase_add_test(tc_main, test_is_greater_ok184);
  tcase_add_test(tc_main, test_is_greater_ok185);
  tcase_add_test(tc_main, test_is_greater_ok186);
  tcase_add_test(tc_main, test_is_greater_ok187);
  tcase_add_test(tc_main, test_is_greater_ok188);
  tcase_add_test(tc_main, test_is_greater_ok189);
  tcase_add_test(tc_main, test_is_greater_ok190);
  tcase_add_test(tc_main, test_is_greater_ok191);
  tcase_add_test(tc_main, test_is_greater_ok192);
  tcase_add_test(tc_main, test_is_greater_ok193);
  tcase_add_test(tc_main, test_is_greater_ok194);
  tcase_add_test(tc_main, test_is_greater_ok195);
  tcase_add_test(tc_main, test_is_greater_ok196);
  tcase_add_test(tc_main, test_is_greater_ok197);
  tcase_add_test(tc_main, test_is_greater_ok198);
  tcase_add_test(tc_main, test_is_greater_ok199);
  tcase_add_test(tc_main, test_is_greater_ok200);
  tcase_add_test(tc_main, test_is_greater_ok201);
  tcase_add_test(tc_main, test_is_greater_ok202);
  tcase_add_test(tc_main, test_is_greater_ok203);
  tcase_add_test(tc_main, test_is_greater_ok204);
  tcase_add_test(tc_main, test_is_greater_ok205);
  tcase_add_test(tc_main, test_is_greater_ok206);
  tcase_add_test(tc_main, test_is_greater_ok207);
  tcase_add_test(tc_main, test_is_greater_ok208);
  tcase_add_test(tc_main, test_is_greater_ok209);
  tcase_add_test(tc_main, test_is_greater_ok210);
  tcase_add_test(tc_main, test_is_greater_ok211);
  tcase_add_test(tc_main, test_is_greater_ok212);
  tcase_add_test(tc_main, test_is_greater_ok213);
  tcase_add_test(tc_main, test_is_greater_ok214);
  tcase_add_test(tc_main, test_is_greater_ok215);
  tcase_add_test(tc_main, test_is_greater_ok216);
  tcase_add_test(tc_main, test_is_greater_ok217);
  tcase_add_test(tc_main, test_is_greater_ok218);
  tcase_add_test(tc_main, test_is_greater_ok219);
  tcase_add_test(tc_main, test_is_greater_ok220);
  tcase_add_test(tc_main, test_is_greater_ok221);
  tcase_add_test(tc_main, test_is_greater_ok222);
  tcase_add_test(tc_main, test_is_greater_ok223);
  tcase_add_test(tc_main, test_is_greater_ok224);
  tcase_add_test(tc_main, test_is_greater_ok225);
  tcase_add_test(tc_main, test_is_greater_ok226);
  tcase_add_test(tc_main, test_is_greater_ok227);
  tcase_add_test(tc_main, test_is_greater_ok228);
  tcase_add_test(tc_main, test_is_greater_ok229);
  tcase_add_test(tc_main, test_is_greater_ok230);
  tcase_add_test(tc_main, test_is_greater_ok231);
  tcase_add_test(tc_main, test_is_greater_ok232);
  tcase_add_test(tc_main, test_is_greater_ok233);
  tcase_add_test(tc_main, test_is_greater_ok234);
  tcase_add_test(tc_main, test_is_greater_ok235);
  tcase_add_test(tc_main, test_is_greater_ok236);
  tcase_add_test(tc_main, test_is_greater_ok237);
  tcase_add_test(tc_main, test_is_greater_ok238);
  tcase_add_test(tc_main, test_is_greater_ok239);
  tcase_add_test(tc_main, test_is_greater_ok240);
  tcase_add_test(tc_main, test_is_greater_ok241);
  tcase_add_test(tc_main, test_is_greater_ok242);
  tcase_add_test(tc_main, test_is_greater_ok243);
  tcase_add_test(tc_main, test_is_greater_ok244);
  tcase_add_test(tc_main, test_is_greater_ok245);
  tcase_add_test(tc_main, test_is_greater_ok246);
  tcase_add_test(tc_main, test_is_greater_ok247);
  tcase_add_test(tc_main, test_is_greater_ok248);
  tcase_add_test(tc_main, test_is_greater_ok249);
  tcase_add_test(tc_main, test_is_greater_ok250);

  suite_add_tcase(s, tc_main);
  return s;
}

Suite *is_greater_or_equal_suite1(void) {
  Suite *s;
  TCase *tc_main;

  s = suite_create("is_greater_or_equal_suite1");
  tc_main = tcase_create("main");
  tcase_add_test(tc_main, test_is_greater_or_equal_ok1);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok2);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok3);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok4);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok5);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok6);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok7);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok8);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok9);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok10);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok11);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok12);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok13);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok14);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok15);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok16);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok17);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok18);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok19);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok20);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok21);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok22);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok23);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok24);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok25);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok26);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok27);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok28);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok29);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok30);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok31);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok32);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok33);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok34);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok35);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok36);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok37);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok38);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok39);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok40);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok41);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok42);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok43);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok44);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok45);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok46);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok47);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok48);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok49);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok50);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok51);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok52);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok53);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok54);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok55);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok56);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok57);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok58);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok59);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok60);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok61);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok62);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok63);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok64);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok65);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok66);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok67);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok68);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok69);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok70);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok71);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok72);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok73);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok74);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok75);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok76);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok77);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok78);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok79);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok80);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok81);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok82);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok83);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok84);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok85);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok86);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok87);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok88);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok89);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok90);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok91);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok92);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok93);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok94);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok95);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok96);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok97);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok98);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok99);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok100);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok101);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok102);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok103);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok104);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok105);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok106);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok107);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok108);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok109);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok110);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok111);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok112);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok113);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok114);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok115);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok116);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok117);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok118);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok119);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok120);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok121);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok122);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok123);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok124);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok125);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok126);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok127);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok128);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok129);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok130);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok131);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok132);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok133);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok134);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok135);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok136);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok137);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok138);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok139);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok140);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok141);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok142);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok143);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok144);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok145);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok146);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok147);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok148);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok149);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok150);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok151);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok152);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok153);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok154);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok155);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok156);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok157);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok158);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok159);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok160);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok161);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok162);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok163);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok164);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok165);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok166);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok167);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok168);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok169);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok170);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok171);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok172);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok173);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok174);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok175);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok176);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok177);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok178);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok179);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok180);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok181);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok182);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok183);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok184);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok185);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok186);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok187);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok188);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok189);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok190);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok191);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok192);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok193);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok194);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok195);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok196);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok197);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok198);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok199);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok200);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok201);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok202);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok203);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok204);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok205);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok206);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok207);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok208);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok209);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok210);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok211);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok212);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok213);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok214);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok215);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok216);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok217);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok218);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok219);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok220);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok221);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok222);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok223);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok224);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok225);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok226);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok227);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok228);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok229);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok230);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok231);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok232);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok233);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok234);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok235);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok236);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok237);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok238);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok239);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok240);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok241);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok242);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok243);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok244);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok245);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok246);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok247);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok248);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok249);
  tcase_add_test(tc_main, test_is_greater_or_equal_ok250);

  suite_add_tcase(s, tc_main);
  return s;
}

Suite *is_less_suite1(void) {
  Suite *s;
  TCase *tc_main;

  s = suite_create("is_less_suite1");
  tc_main = tcase_create("main");
  tcase_add_test(tc_main, test_is_less_ok1);
  tcase_add_test(tc_main, test_is_less_ok2);
  tcase_add_test(tc_main, test_is_less_ok3);
  tcase_add_test(tc_main, test_is_less_ok4);
  tcase_add_test(tc_main, test_is_less_ok5);
  tcase_add_test(tc_main, test_is_less_ok6);
  tcase_add_test(tc_main, test_is_less_ok7);
  tcase_add_test(tc_main, test_is_less_ok8);
  tcase_add_test(tc_main, test_is_less_ok9);
  tcase_add_test(tc_main, test_is_less_ok10);
  tcase_add_test(tc_main, test_is_less_ok11);
  tcase_add_test(tc_main, test_is_less_ok12);
  tcase_add_test(tc_main, test_is_less_ok13);
  tcase_add_test(tc_main, test_is_less_ok14);
  tcase_add_test(tc_main, test_is_less_ok15);
  tcase_add_test(tc_main, test_is_less_ok16);
  tcase_add_test(tc_main, test_is_less_ok17);
  tcase_add_test(tc_main, test_is_less_ok18);
  tcase_add_test(tc_main, test_is_less_ok19);
  tcase_add_test(tc_main, test_is_less_ok20);
  tcase_add_test(tc_main, test_is_less_ok21);
  tcase_add_test(tc_main, test_is_less_ok22);
  tcase_add_test(tc_main, test_is_less_ok23);
  tcase_add_test(tc_main, test_is_less_ok24);
  tcase_add_test(tc_main, test_is_less_ok25);
  tcase_add_test(tc_main, test_is_less_ok26);
  tcase_add_test(tc_main, test_is_less_ok27);
  tcase_add_test(tc_main, test_is_less_ok28);
  tcase_add_test(tc_main, test_is_less_ok29);
  tcase_add_test(tc_main, test_is_less_ok30);
  tcase_add_test(tc_main, test_is_less_ok31);
  tcase_add_test(tc_main, test_is_less_ok32);
  tcase_add_test(tc_main, test_is_less_ok33);
  tcase_add_test(tc_main, test_is_less_ok34);
  tcase_add_test(tc_main, test_is_less_ok35);
  tcase_add_test(tc_main, test_is_less_ok36);
  tcase_add_test(tc_main, test_is_less_ok37);
  tcase_add_test(tc_main, test_is_less_ok38);
  tcase_add_test(tc_main, test_is_less_ok39);
  tcase_add_test(tc_main, test_is_less_ok40);
  tcase_add_test(tc_main, test_is_less_ok41);
  tcase_add_test(tc_main, test_is_less_ok42);
  tcase_add_test(tc_main, test_is_less_ok43);
  tcase_add_test(tc_main, test_is_less_ok44);
  tcase_add_test(tc_main, test_is_less_ok45);
  tcase_add_test(tc_main, test_is_less_ok46);
  tcase_add_test(tc_main, test_is_less_ok47);
  tcase_add_test(tc_main, test_is_less_ok48);
  tcase_add_test(tc_main, test_is_less_ok49);
  tcase_add_test(tc_main, test_is_less_ok50);
  tcase_add_test(tc_main, test_is_less_ok51);
  tcase_add_test(tc_main, test_is_less_ok52);
  tcase_add_test(tc_main, test_is_less_ok53);
  tcase_add_test(tc_main, test_is_less_ok54);
  tcase_add_test(tc_main, test_is_less_ok55);
  tcase_add_test(tc_main, test_is_less_ok56);
  tcase_add_test(tc_main, test_is_less_ok57);
  tcase_add_test(tc_main, test_is_less_ok58);
  tcase_add_test(tc_main, test_is_less_ok59);
  tcase_add_test(tc_main, test_is_less_ok60);
  tcase_add_test(tc_main, test_is_less_ok61);
  tcase_add_test(tc_main, test_is_less_ok62);
  tcase_add_test(tc_main, test_is_less_ok63);
  tcase_add_test(tc_main, test_is_less_ok64);
  tcase_add_test(tc_main, test_is_less_ok65);
  tcase_add_test(tc_main, test_is_less_ok66);
  tcase_add_test(tc_main, test_is_less_ok67);
  tcase_add_test(tc_main, test_is_less_ok68);
  tcase_add_test(tc_main, test_is_less_ok69);
  tcase_add_test(tc_main, test_is_less_ok70);
  tcase_add_test(tc_main, test_is_less_ok71);
  tcase_add_test(tc_main, test_is_less_ok72);
  tcase_add_test(tc_main, test_is_less_ok73);
  tcase_add_test(tc_main, test_is_less_ok74);
  tcase_add_test(tc_main, test_is_less_ok75);
  tcase_add_test(tc_main, test_is_less_ok76);
  tcase_add_test(tc_main, test_is_less_ok77);
  tcase_add_test(tc_main, test_is_less_ok78);
  tcase_add_test(tc_main, test_is_less_ok79);
  tcase_add_test(tc_main, test_is_less_ok80);
  tcase_add_test(tc_main, test_is_less_ok81);
  tcase_add_test(tc_main, test_is_less_ok82);
  tcase_add_test(tc_main, test_is_less_ok83);
  tcase_add_test(tc_main, test_is_less_ok84);
  tcase_add_test(tc_main, test_is_less_ok85);
  tcase_add_test(tc_main, test_is_less_ok86);
  tcase_add_test(tc_main, test_is_less_ok87);
  tcase_add_test(tc_main, test_is_less_ok88);
  tcase_add_test(tc_main, test_is_less_ok89);
  tcase_add_test(tc_main, test_is_less_ok90);
  tcase_add_test(tc_main, test_is_less_ok91);
  tcase_add_test(tc_main, test_is_less_ok92);
  tcase_add_test(tc_main, test_is_less_ok93);
  tcase_add_test(tc_main, test_is_less_ok94);
  tcase_add_test(tc_main, test_is_less_ok95);
  tcase_add_test(tc_main, test_is_less_ok96);
  tcase_add_test(tc_main, test_is_less_ok97);
  tcase_add_test(tc_main, test_is_less_ok98);
  tcase_add_test(tc_main, test_is_less_ok99);
  tcase_add_test(tc_main, test_is_less_ok100);
  tcase_add_test(tc_main, test_is_less_ok101);
  tcase_add_test(tc_main, test_is_less_ok102);
  tcase_add_test(tc_main, test_is_less_ok103);
  tcase_add_test(tc_main, test_is_less_ok104);
  tcase_add_test(tc_main, test_is_less_ok105);
  tcase_add_test(tc_main, test_is_less_ok106);
  tcase_add_test(tc_main, test_is_less_ok107);
  tcase_add_test(tc_main, test_is_less_ok108);
  tcase_add_test(tc_main, test_is_less_ok109);
  tcase_add_test(tc_main, test_is_less_ok110);
  tcase_add_test(tc_main, test_is_less_ok111);
  tcase_add_test(tc_main, test_is_less_ok112);
  tcase_add_test(tc_main, test_is_less_ok113);
  tcase_add_test(tc_main, test_is_less_ok114);
  tcase_add_test(tc_main, test_is_less_ok115);
  tcase_add_test(tc_main, test_is_less_ok116);
  tcase_add_test(tc_main, test_is_less_ok117);
  tcase_add_test(tc_main, test_is_less_ok118);
  tcase_add_test(tc_main, test_is_less_ok119);
  tcase_add_test(tc_main, test_is_less_ok120);
  tcase_add_test(tc_main, test_is_less_ok121);
  tcase_add_test(tc_main, test_is_less_ok122);
  tcase_add_test(tc_main, test_is_less_ok123);
  tcase_add_test(tc_main, test_is_less_ok124);
  tcase_add_test(tc_main, test_is_less_ok125);
  tcase_add_test(tc_main, test_is_less_ok126);
  tcase_add_test(tc_main, test_is_less_ok127);
  tcase_add_test(tc_main, test_is_less_ok128);
  tcase_add_test(tc_main, test_is_less_ok129);
  tcase_add_test(tc_main, test_is_less_ok130);
  tcase_add_test(tc_main, test_is_less_ok131);
  tcase_add_test(tc_main, test_is_less_ok132);
  tcase_add_test(tc_main, test_is_less_ok133);
  tcase_add_test(tc_main, test_is_less_ok134);
  tcase_add_test(tc_main, test_is_less_ok135);
  tcase_add_test(tc_main, test_is_less_ok136);
  tcase_add_test(tc_main, test_is_less_ok137);
  tcase_add_test(tc_main, test_is_less_ok138);
  tcase_add_test(tc_main, test_is_less_ok139);
  tcase_add_test(tc_main, test_is_less_ok140);
  tcase_add_test(tc_main, test_is_less_ok141);
  tcase_add_test(tc_main, test_is_less_ok142);
  tcase_add_test(tc_main, test_is_less_ok143);
  tcase_add_test(tc_main, test_is_less_ok144);
  tcase_add_test(tc_main, test_is_less_ok145);
  tcase_add_test(tc_main, test_is_less_ok146);
  tcase_add_test(tc_main, test_is_less_ok147);
  tcase_add_test(tc_main, test_is_less_ok148);
  tcase_add_test(tc_main, test_is_less_ok149);
  tcase_add_test(tc_main, test_is_less_ok150);
  tcase_add_test(tc_main, test_is_less_ok151);
  tcase_add_test(tc_main, test_is_less_ok152);
  tcase_add_test(tc_main, test_is_less_ok153);
  tcase_add_test(tc_main, test_is_less_ok154);
  tcase_add_test(tc_main, test_is_less_ok155);
  tcase_add_test(tc_main, test_is_less_ok156);
  tcase_add_test(tc_main, test_is_less_ok157);
  tcase_add_test(tc_main, test_is_less_ok158);
  tcase_add_test(tc_main, test_is_less_ok159);
  tcase_add_test(tc_main, test_is_less_ok160);
  tcase_add_test(tc_main, test_is_less_ok161);
  tcase_add_test(tc_main, test_is_less_ok162);
  tcase_add_test(tc_main, test_is_less_ok163);
  tcase_add_test(tc_main, test_is_less_ok164);
  tcase_add_test(tc_main, test_is_less_ok165);
  tcase_add_test(tc_main, test_is_less_ok166);
  tcase_add_test(tc_main, test_is_less_ok167);
  tcase_add_test(tc_main, test_is_less_ok168);
  tcase_add_test(tc_main, test_is_less_ok169);
  tcase_add_test(tc_main, test_is_less_ok170);
  tcase_add_test(tc_main, test_is_less_ok171);
  tcase_add_test(tc_main, test_is_less_ok172);
  tcase_add_test(tc_main, test_is_less_ok173);
  tcase_add_test(tc_main, test_is_less_ok174);
  tcase_add_test(tc_main, test_is_less_ok175);
  tcase_add_test(tc_main, test_is_less_ok176);
  tcase_add_test(tc_main, test_is_less_ok177);
  tcase_add_test(tc_main, test_is_less_ok178);
  tcase_add_test(tc_main, test_is_less_ok179);
  tcase_add_test(tc_main, test_is_less_ok180);
  tcase_add_test(tc_main, test_is_less_ok181);
  tcase_add_test(tc_main, test_is_less_ok182);
  tcase_add_test(tc_main, test_is_less_ok183);
  tcase_add_test(tc_main, test_is_less_ok184);
  tcase_add_test(tc_main, test_is_less_ok185);
  tcase_add_test(tc_main, test_is_less_ok186);
  tcase_add_test(tc_main, test_is_less_ok187);
  tcase_add_test(tc_main, test_is_less_ok188);
  tcase_add_test(tc_main, test_is_less_ok189);
  tcase_add_test(tc_main, test_is_less_ok190);
  tcase_add_test(tc_main, test_is_less_ok191);
  tcase_add_test(tc_main, test_is_less_ok192);
  tcase_add_test(tc_main, test_is_less_ok193);
  tcase_add_test(tc_main, test_is_less_ok194);
  tcase_add_test(tc_main, test_is_less_ok195);
  tcase_add_test(tc_main, test_is_less_ok196);
  tcase_add_test(tc_main, test_is_less_ok197);
  tcase_add_test(tc_main, test_is_less_ok198);
  tcase_add_test(tc_main, test_is_less_ok199);
  tcase_add_test(tc_main, test_is_less_ok200);
  tcase_add_test(tc_main, test_is_less_ok201);
  tcase_add_test(tc_main, test_is_less_ok202);
  tcase_add_test(tc_main, test_is_less_ok203);
  tcase_add_test(tc_main, test_is_less_ok204);
  tcase_add_test(tc_main, test_is_less_ok205);
  tcase_add_test(tc_main, test_is_less_ok206);
  tcase_add_test(tc_main, test_is_less_ok207);
  tcase_add_test(tc_main, test_is_less_ok208);
  tcase_add_test(tc_main, test_is_less_ok209);
  tcase_add_test(tc_main, test_is_less_ok210);
  tcase_add_test(tc_main, test_is_less_ok211);
  tcase_add_test(tc_main, test_is_less_ok212);
  tcase_add_test(tc_main, test_is_less_ok213);
  tcase_add_test(tc_main, test_is_less_ok214);
  tcase_add_test(tc_main, test_is_less_ok215);
  tcase_add_test(tc_main, test_is_less_ok216);
  tcase_add_test(tc_main, test_is_less_ok217);
  tcase_add_test(tc_main, test_is_less_ok218);
  tcase_add_test(tc_main, test_is_less_ok219);
  tcase_add_test(tc_main, test_is_less_ok220);
  tcase_add_test(tc_main, test_is_less_ok221);
  tcase_add_test(tc_main, test_is_less_ok222);
  tcase_add_test(tc_main, test_is_less_ok223);
  tcase_add_test(tc_main, test_is_less_ok224);
  tcase_add_test(tc_main, test_is_less_ok225);
  tcase_add_test(tc_main, test_is_less_ok226);
  tcase_add_test(tc_main, test_is_less_ok227);
  tcase_add_test(tc_main, test_is_less_ok228);
  tcase_add_test(tc_main, test_is_less_ok229);
  tcase_add_test(tc_main, test_is_less_ok230);
  tcase_add_test(tc_main, test_is_less_ok231);
  tcase_add_test(tc_main, test_is_less_ok232);
  tcase_add_test(tc_main, test_is_less_ok233);
  tcase_add_test(tc_main, test_is_less_ok234);
  tcase_add_test(tc_main, test_is_less_ok235);
  tcase_add_test(tc_main, test_is_less_ok236);
  tcase_add_test(tc_main, test_is_less_ok237);
  tcase_add_test(tc_main, test_is_less_ok238);
  tcase_add_test(tc_main, test_is_less_ok239);
  tcase_add_test(tc_main, test_is_less_ok240);
  tcase_add_test(tc_main, test_is_less_ok241);
  tcase_add_test(tc_main, test_is_less_ok242);
  tcase_add_test(tc_main, test_is_less_ok243);
  tcase_add_test(tc_main, test_is_less_ok244);
  tcase_add_test(tc_main, test_is_less_ok245);
  tcase_add_test(tc_main, test_is_less_ok246);
  tcase_add_test(tc_main, test_is_less_ok247);
  tcase_add_test(tc_main, test_is_less_ok248);
  tcase_add_test(tc_main, test_is_less_ok249);
  tcase_add_test(tc_main, test_is_less_ok250);
  tcase_add_test(tc_main, test_is_less_ok251);

  suite_add_tcase(s, tc_main);
  return s;
}

Suite *is_less_or_equal_suite1(void) {
  Suite *s;
  TCase *tc_main;

  s = suite_create("is_less_or_equal_suite1");
  tc_main = tcase_create("main");
  tcase_add_test(tc_main, test_is_less_or_equal_ok1);
  tcase_add_test(tc_main, test_is_less_or_equal_ok2);
  tcase_add_test(tc_main, test_is_less_or_equal_ok3);
  tcase_add_test(tc_main, test_is_less_or_equal_ok4);
  tcase_add_test(tc_main, test_is_less_or_equal_ok5);
  tcase_add_test(tc_main, test_is_less_or_equal_ok6);
  tcase_add_test(tc_main, test_is_less_or_equal_ok7);
  tcase_add_test(tc_main, test_is_less_or_equal_ok8);
  tcase_add_test(tc_main, test_is_less_or_equal_ok9);
  tcase_add_test(tc_main, test_is_less_or_equal_ok10);
  tcase_add_test(tc_main, test_is_less_or_equal_ok11);
  tcase_add_test(tc_main, test_is_less_or_equal_ok12);
  tcase_add_test(tc_main, test_is_less_or_equal_ok13);
  tcase_add_test(tc_main, test_is_less_or_equal_ok14);
  tcase_add_test(tc_main, test_is_less_or_equal_ok15);
  tcase_add_test(tc_main, test_is_less_or_equal_ok16);
  tcase_add_test(tc_main, test_is_less_or_equal_ok17);
  tcase_add_test(tc_main, test_is_less_or_equal_ok18);
  tcase_add_test(tc_main, test_is_less_or_equal_ok19);
  tcase_add_test(tc_main, test_is_less_or_equal_ok20);
  tcase_add_test(tc_main, test_is_less_or_equal_ok21);
  tcase_add_test(tc_main, test_is_less_or_equal_ok22);
  tcase_add_test(tc_main, test_is_less_or_equal_ok23);
  tcase_add_test(tc_main, test_is_less_or_equal_ok24);
  tcase_add_test(tc_main, test_is_less_or_equal_ok25);
  tcase_add_test(tc_main, test_is_less_or_equal_ok26);
  tcase_add_test(tc_main, test_is_less_or_equal_ok27);
  tcase_add_test(tc_main, test_is_less_or_equal_ok28);
  tcase_add_test(tc_main, test_is_less_or_equal_ok29);
  tcase_add_test(tc_main, test_is_less_or_equal_ok30);
  tcase_add_test(tc_main, test_is_less_or_equal_ok31);
  tcase_add_test(tc_main, test_is_less_or_equal_ok32);
  tcase_add_test(tc_main, test_is_less_or_equal_ok33);
  tcase_add_test(tc_main, test_is_less_or_equal_ok34);
  tcase_add_test(tc_main, test_is_less_or_equal_ok35);
  tcase_add_test(tc_main, test_is_less_or_equal_ok36);
  tcase_add_test(tc_main, test_is_less_or_equal_ok37);
  tcase_add_test(tc_main, test_is_less_or_equal_ok38);
  tcase_add_test(tc_main, test_is_less_or_equal_ok39);
  tcase_add_test(tc_main, test_is_less_or_equal_ok40);
  tcase_add_test(tc_main, test_is_less_or_equal_ok41);
  tcase_add_test(tc_main, test_is_less_or_equal_ok42);
  tcase_add_test(tc_main, test_is_less_or_equal_ok43);
  tcase_add_test(tc_main, test_is_less_or_equal_ok44);
  tcase_add_test(tc_main, test_is_less_or_equal_ok45);
  tcase_add_test(tc_main, test_is_less_or_equal_ok46);
  tcase_add_test(tc_main, test_is_less_or_equal_ok47);
  tcase_add_test(tc_main, test_is_less_or_equal_ok48);
  tcase_add_test(tc_main, test_is_less_or_equal_ok49);
  tcase_add_test(tc_main, test_is_less_or_equal_ok50);
  tcase_add_test(tc_main, test_is_less_or_equal_ok51);
  tcase_add_test(tc_main, test_is_less_or_equal_ok52);
  tcase_add_test(tc_main, test_is_less_or_equal_ok53);
  tcase_add_test(tc_main, test_is_less_or_equal_ok54);
  tcase_add_test(tc_main, test_is_less_or_equal_ok55);
  tcase_add_test(tc_main, test_is_less_or_equal_ok56);
  tcase_add_test(tc_main, test_is_less_or_equal_ok57);
  tcase_add_test(tc_main, test_is_less_or_equal_ok58);
  tcase_add_test(tc_main, test_is_less_or_equal_ok59);
  tcase_add_test(tc_main, test_is_less_or_equal_ok60);
  tcase_add_test(tc_main, test_is_less_or_equal_ok61);
  tcase_add_test(tc_main, test_is_less_or_equal_ok62);
  tcase_add_test(tc_main, test_is_less_or_equal_ok63);
  tcase_add_test(tc_main, test_is_less_or_equal_ok64);
  tcase_add_test(tc_main, test_is_less_or_equal_ok65);
  tcase_add_test(tc_main, test_is_less_or_equal_ok66);
  tcase_add_test(tc_main, test_is_less_or_equal_ok67);
  tcase_add_test(tc_main, test_is_less_or_equal_ok68);
  tcase_add_test(tc_main, test_is_less_or_equal_ok69);
  tcase_add_test(tc_main, test_is_less_or_equal_ok70);
  tcase_add_test(tc_main, test_is_less_or_equal_ok71);
  tcase_add_test(tc_main, test_is_less_or_equal_ok72);
  tcase_add_test(tc_main, test_is_less_or_equal_ok73);
  tcase_add_test(tc_main, test_is_less_or_equal_ok74);
  tcase_add_test(tc_main, test_is_less_or_equal_ok75);
  tcase_add_test(tc_main, test_is_less_or_equal_ok76);
  tcase_add_test(tc_main, test_is_less_or_equal_ok77);
  tcase_add_test(tc_main, test_is_less_or_equal_ok78);
  tcase_add_test(tc_main, test_is_less_or_equal_ok79);
  tcase_add_test(tc_main, test_is_less_or_equal_ok80);
  tcase_add_test(tc_main, test_is_less_or_equal_ok81);
  tcase_add_test(tc_main, test_is_less_or_equal_ok82);
  tcase_add_test(tc_main, test_is_less_or_equal_ok83);
  tcase_add_test(tc_main, test_is_less_or_equal_ok84);
  tcase_add_test(tc_main, test_is_less_or_equal_ok85);
  tcase_add_test(tc_main, test_is_less_or_equal_ok86);
  tcase_add_test(tc_main, test_is_less_or_equal_ok87);
  tcase_add_test(tc_main, test_is_less_or_equal_ok88);
  tcase_add_test(tc_main, test_is_less_or_equal_ok89);
  tcase_add_test(tc_main, test_is_less_or_equal_ok90);
  tcase_add_test(tc_main, test_is_less_or_equal_ok91);
  tcase_add_test(tc_main, test_is_less_or_equal_ok92);
  tcase_add_test(tc_main, test_is_less_or_equal_ok93);
  tcase_add_test(tc_main, test_is_less_or_equal_ok94);
  tcase_add_test(tc_main, test_is_less_or_equal_ok95);
  tcase_add_test(tc_main, test_is_less_or_equal_ok96);
  tcase_add_test(tc_main, test_is_less_or_equal_ok97);
  tcase_add_test(tc_main, test_is_less_or_equal_ok98);
  tcase_add_test(tc_main, test_is_less_or_equal_ok99);
  tcase_add_test(tc_main, test_is_less_or_equal_ok100);
  tcase_add_test(tc_main, test_is_less_or_equal_ok101);
  tcase_add_test(tc_main, test_is_less_or_equal_ok102);
  tcase_add_test(tc_main, test_is_less_or_equal_ok103);
  tcase_add_test(tc_main, test_is_less_or_equal_ok104);
  tcase_add_test(tc_main, test_is_less_or_equal_ok105);
  tcase_add_test(tc_main, test_is_less_or_equal_ok106);
  tcase_add_test(tc_main, test_is_less_or_equal_ok107);
  tcase_add_test(tc_main, test_is_less_or_equal_ok108);
  tcase_add_test(tc_main, test_is_less_or_equal_ok109);
  tcase_add_test(tc_main, test_is_less_or_equal_ok110);
  tcase_add_test(tc_main, test_is_less_or_equal_ok111);
  tcase_add_test(tc_main, test_is_less_or_equal_ok112);
  tcase_add_test(tc_main, test_is_less_or_equal_ok113);
  tcase_add_test(tc_main, test_is_less_or_equal_ok114);
  tcase_add_test(tc_main, test_is_less_or_equal_ok115);
  tcase_add_test(tc_main, test_is_less_or_equal_ok116);
  tcase_add_test(tc_main, test_is_less_or_equal_ok117);
  tcase_add_test(tc_main, test_is_less_or_equal_ok118);
  tcase_add_test(tc_main, test_is_less_or_equal_ok119);
  tcase_add_test(tc_main, test_is_less_or_equal_ok120);
  tcase_add_test(tc_main, test_is_less_or_equal_ok121);
  tcase_add_test(tc_main, test_is_less_or_equal_ok122);
  tcase_add_test(tc_main, test_is_less_or_equal_ok123);
  tcase_add_test(tc_main, test_is_less_or_equal_ok124);
  tcase_add_test(tc_main, test_is_less_or_equal_ok125);
  tcase_add_test(tc_main, test_is_less_or_equal_ok126);
  tcase_add_test(tc_main, test_is_less_or_equal_ok127);
  tcase_add_test(tc_main, test_is_less_or_equal_ok128);
  tcase_add_test(tc_main, test_is_less_or_equal_ok129);
  tcase_add_test(tc_main, test_is_less_or_equal_ok130);
  tcase_add_test(tc_main, test_is_less_or_equal_ok131);
  tcase_add_test(tc_main, test_is_less_or_equal_ok132);
  tcase_add_test(tc_main, test_is_less_or_equal_ok133);
  tcase_add_test(tc_main, test_is_less_or_equal_ok134);
  tcase_add_test(tc_main, test_is_less_or_equal_ok135);
  tcase_add_test(tc_main, test_is_less_or_equal_ok136);
  tcase_add_test(tc_main, test_is_less_or_equal_ok137);
  tcase_add_test(tc_main, test_is_less_or_equal_ok138);
  tcase_add_test(tc_main, test_is_less_or_equal_ok139);
  tcase_add_test(tc_main, test_is_less_or_equal_ok140);
  tcase_add_test(tc_main, test_is_less_or_equal_ok141);
  tcase_add_test(tc_main, test_is_less_or_equal_ok142);
  tcase_add_test(tc_main, test_is_less_or_equal_ok143);
  tcase_add_test(tc_main, test_is_less_or_equal_ok144);
  tcase_add_test(tc_main, test_is_less_or_equal_ok145);
  tcase_add_test(tc_main, test_is_less_or_equal_ok146);
  tcase_add_test(tc_main, test_is_less_or_equal_ok147);
  tcase_add_test(tc_main, test_is_less_or_equal_ok148);
  tcase_add_test(tc_main, test_is_less_or_equal_ok149);
  tcase_add_test(tc_main, test_is_less_or_equal_ok150);
  tcase_add_test(tc_main, test_is_less_or_equal_ok151);
  tcase_add_test(tc_main, test_is_less_or_equal_ok152);
  tcase_add_test(tc_main, test_is_less_or_equal_ok153);
  tcase_add_test(tc_main, test_is_less_or_equal_ok154);
  tcase_add_test(tc_main, test_is_less_or_equal_ok155);
  tcase_add_test(tc_main, test_is_less_or_equal_ok156);
  tcase_add_test(tc_main, test_is_less_or_equal_ok157);
  tcase_add_test(tc_main, test_is_less_or_equal_ok158);
  tcase_add_test(tc_main, test_is_less_or_equal_ok159);
  tcase_add_test(tc_main, test_is_less_or_equal_ok160);
  tcase_add_test(tc_main, test_is_less_or_equal_ok161);
  tcase_add_test(tc_main, test_is_less_or_equal_ok162);
  tcase_add_test(tc_main, test_is_less_or_equal_ok163);
  tcase_add_test(tc_main, test_is_less_or_equal_ok164);
  tcase_add_test(tc_main, test_is_less_or_equal_ok165);
  tcase_add_test(tc_main, test_is_less_or_equal_ok166);
  tcase_add_test(tc_main, test_is_less_or_equal_ok167);
  tcase_add_test(tc_main, test_is_less_or_equal_ok168);
  tcase_add_test(tc_main, test_is_less_or_equal_ok169);
  tcase_add_test(tc_main, test_is_less_or_equal_ok170);
  tcase_add_test(tc_main, test_is_less_or_equal_ok171);
  tcase_add_test(tc_main, test_is_less_or_equal_ok172);
  tcase_add_test(tc_main, test_is_less_or_equal_ok173);
  tcase_add_test(tc_main, test_is_less_or_equal_ok174);
  tcase_add_test(tc_main, test_is_less_or_equal_ok175);
  tcase_add_test(tc_main, test_is_less_or_equal_ok176);
  tcase_add_test(tc_main, test_is_less_or_equal_ok177);
  tcase_add_test(tc_main, test_is_less_or_equal_ok178);
  tcase_add_test(tc_main, test_is_less_or_equal_ok179);
  tcase_add_test(tc_main, test_is_less_or_equal_ok180);
  tcase_add_test(tc_main, test_is_less_or_equal_ok181);
  tcase_add_test(tc_main, test_is_less_or_equal_ok182);
  tcase_add_test(tc_main, test_is_less_or_equal_ok183);
  tcase_add_test(tc_main, test_is_less_or_equal_ok184);
  tcase_add_test(tc_main, test_is_less_or_equal_ok185);
  tcase_add_test(tc_main, test_is_less_or_equal_ok186);
  tcase_add_test(tc_main, test_is_less_or_equal_ok187);
  tcase_add_test(tc_main, test_is_less_or_equal_ok188);
  tcase_add_test(tc_main, test_is_less_or_equal_ok189);
  tcase_add_test(tc_main, test_is_less_or_equal_ok190);
  tcase_add_test(tc_main, test_is_less_or_equal_ok191);
  tcase_add_test(tc_main, test_is_less_or_equal_ok192);
  tcase_add_test(tc_main, test_is_less_or_equal_ok193);
  tcase_add_test(tc_main, test_is_less_or_equal_ok194);
  tcase_add_test(tc_main, test_is_less_or_equal_ok195);
  tcase_add_test(tc_main, test_is_less_or_equal_ok196);
  tcase_add_test(tc_main, test_is_less_or_equal_ok197);
  tcase_add_test(tc_main, test_is_less_or_equal_ok198);
  tcase_add_test(tc_main, test_is_less_or_equal_ok199);
  tcase_add_test(tc_main, test_is_less_or_equal_ok200);
  tcase_add_test(tc_main, test_is_less_or_equal_ok201);
  tcase_add_test(tc_main, test_is_less_or_equal_ok202);
  tcase_add_test(tc_main, test_is_less_or_equal_ok203);
  tcase_add_test(tc_main, test_is_less_or_equal_ok204);
  tcase_add_test(tc_main, test_is_less_or_equal_ok205);
  tcase_add_test(tc_main, test_is_less_or_equal_ok206);
  tcase_add_test(tc_main, test_is_less_or_equal_ok207);
  tcase_add_test(tc_main, test_is_less_or_equal_ok208);
  tcase_add_test(tc_main, test_is_less_or_equal_ok209);
  tcase_add_test(tc_main, test_is_less_or_equal_ok210);
  tcase_add_test(tc_main, test_is_less_or_equal_ok211);
  tcase_add_test(tc_main, test_is_less_or_equal_ok212);
  tcase_add_test(tc_main, test_is_less_or_equal_ok213);
  tcase_add_test(tc_main, test_is_less_or_equal_ok214);
  tcase_add_test(tc_main, test_is_less_or_equal_ok215);
  tcase_add_test(tc_main, test_is_less_or_equal_ok216);
  tcase_add_test(tc_main, test_is_less_or_equal_ok217);
  tcase_add_test(tc_main, test_is_less_or_equal_ok218);
  tcase_add_test(tc_main, test_is_less_or_equal_ok219);
  tcase_add_test(tc_main, test_is_less_or_equal_ok220);
  tcase_add_test(tc_main, test_is_less_or_equal_ok221);
  tcase_add_test(tc_main, test_is_less_or_equal_ok222);
  tcase_add_test(tc_main, test_is_less_or_equal_ok223);
  tcase_add_test(tc_main, test_is_less_or_equal_ok224);
  tcase_add_test(tc_main, test_is_less_or_equal_ok225);
  tcase_add_test(tc_main, test_is_less_or_equal_ok226);
  tcase_add_test(tc_main, test_is_less_or_equal_ok227);
  tcase_add_test(tc_main, test_is_less_or_equal_ok228);
  tcase_add_test(tc_main, test_is_less_or_equal_ok229);
  tcase_add_test(tc_main, test_is_less_or_equal_ok230);
  tcase_add_test(tc_main, test_is_less_or_equal_ok231);
  tcase_add_test(tc_main, test_is_less_or_equal_ok232);
  tcase_add_test(tc_main, test_is_less_or_equal_ok233);
  tcase_add_test(tc_main, test_is_less_or_equal_ok234);
  tcase_add_test(tc_main, test_is_less_or_equal_ok235);
  tcase_add_test(tc_main, test_is_less_or_equal_ok236);
  tcase_add_test(tc_main, test_is_less_or_equal_ok237);
  tcase_add_test(tc_main, test_is_less_or_equal_ok238);
  tcase_add_test(tc_main, test_is_less_or_equal_ok239);
  tcase_add_test(tc_main, test_is_less_or_equal_ok240);
  tcase_add_test(tc_main, test_is_less_or_equal_ok241);
  tcase_add_test(tc_main, test_is_less_or_equal_ok242);
  tcase_add_test(tc_main, test_is_less_or_equal_ok243);
  tcase_add_test(tc_main, test_is_less_or_equal_ok244);
  tcase_add_test(tc_main, test_is_less_or_equal_ok245);
  tcase_add_test(tc_main, test_is_less_or_equal_ok246);
  tcase_add_test(tc_main, test_is_less_or_equal_ok247);
  tcase_add_test(tc_main, test_is_less_or_equal_ok248);
  tcase_add_test(tc_main, test_is_less_or_equal_ok249);
  tcase_add_test(tc_main, test_is_less_or_equal_ok250);

  suite_add_tcase(s, tc_main);
  return s;
}

Suite *is_not_equal_suite1(void) {
  Suite *s;
  TCase *tc_main;

  s = suite_create("is_not_equal_suite1");
  tc_main = tcase_create("Core");
  tcase_add_test(tc_main, test_is_not_equal_ok1);
  tcase_add_test(tc_main, test_is_not_equal_ok2);
  tcase_add_test(tc_main, test_is_not_equal_ok3);
  tcase_add_test(tc_main, test_is_not_equal_ok4);
  tcase_add_test(tc_main, test_is_not_equal_ok5);
  tcase_add_test(tc_main, test_is_not_equal_ok6);
  tcase_add_test(tc_main, test_is_not_equal_ok7);
  tcase_add_test(tc_main, test_is_not_equal_ok8);
  tcase_add_test(tc_main, test_is_not_equal_ok9);
  tcase_add_test(tc_main, test_is_not_equal_ok10);
  tcase_add_test(tc_main, test_is_not_equal_ok11);
  tcase_add_test(tc_main, test_is_not_equal_ok12);
  tcase_add_test(tc_main, test_is_not_equal_ok13);
  tcase_add_test(tc_main, test_is_not_equal_ok14);
  tcase_add_test(tc_main, test_is_not_equal_ok15);
  tcase_add_test(tc_main, test_is_not_equal_ok16);
  tcase_add_test(tc_main, test_is_not_equal_ok17);
  tcase_add_test(tc_main, test_is_not_equal_ok18);
  tcase_add_test(tc_main, test_is_not_equal_ok19);
  tcase_add_test(tc_main, test_is_not_equal_ok20);
  tcase_add_test(tc_main, test_is_not_equal_ok21);
  tcase_add_test(tc_main, test_is_not_equal_ok22);
  tcase_add_test(tc_main, test_is_not_equal_ok23);
  tcase_add_test(tc_main, test_is_not_equal_ok24);
  tcase_add_test(tc_main, test_is_not_equal_ok25);
  tcase_add_test(tc_main, test_is_not_equal_ok26);
  tcase_add_test(tc_main, test_is_not_equal_ok27);
  tcase_add_test(tc_main, test_is_not_equal_ok28);
  tcase_add_test(tc_main, test_is_not_equal_ok29);
  tcase_add_test(tc_main, test_is_not_equal_ok30);
  tcase_add_test(tc_main, test_is_not_equal_ok31);
  tcase_add_test(tc_main, test_is_not_equal_ok32);
  tcase_add_test(tc_main, test_is_not_equal_ok33);
  tcase_add_test(tc_main, test_is_not_equal_ok34);
  tcase_add_test(tc_main, test_is_not_equal_ok35);
  tcase_add_test(tc_main, test_is_not_equal_ok36);
  tcase_add_test(tc_main, test_is_not_equal_ok37);
  tcase_add_test(tc_main, test_is_not_equal_ok38);
  tcase_add_test(tc_main, test_is_not_equal_ok39);
  tcase_add_test(tc_main, test_is_not_equal_ok40);
  tcase_add_test(tc_main, test_is_not_equal_ok41);
  tcase_add_test(tc_main, test_is_not_equal_ok42);
  tcase_add_test(tc_main, test_is_not_equal_ok43);
  tcase_add_test(tc_main, test_is_not_equal_ok44);
  tcase_add_test(tc_main, test_is_not_equal_ok45);
  tcase_add_test(tc_main, test_is_not_equal_ok46);
  tcase_add_test(tc_main, test_is_not_equal_ok47);
  tcase_add_test(tc_main, test_is_not_equal_ok48);
  tcase_add_test(tc_main, test_is_not_equal_ok49);
  tcase_add_test(tc_main, test_is_not_equal_ok50);
  tcase_add_test(tc_main, test_is_not_equal_ok51);
  tcase_add_test(tc_main, test_is_not_equal_ok52);
  tcase_add_test(tc_main, test_is_not_equal_ok53);
  tcase_add_test(tc_main, test_is_not_equal_ok54);
  tcase_add_test(tc_main, test_is_not_equal_ok55);
  tcase_add_test(tc_main, test_is_not_equal_ok56);
  tcase_add_test(tc_main, test_is_not_equal_ok57);
  tcase_add_test(tc_main, test_is_not_equal_ok58);
  tcase_add_test(tc_main, test_is_not_equal_ok59);
  tcase_add_test(tc_main, test_is_not_equal_ok60);
  tcase_add_test(tc_main, test_is_not_equal_ok61);
  tcase_add_test(tc_main, test_is_not_equal_ok62);
  tcase_add_test(tc_main, test_is_not_equal_ok63);
  tcase_add_test(tc_main, test_is_not_equal_ok64);
  tcase_add_test(tc_main, test_is_not_equal_ok65);
  tcase_add_test(tc_main, test_is_not_equal_ok66);
  tcase_add_test(tc_main, test_is_not_equal_ok67);
  tcase_add_test(tc_main, test_is_not_equal_ok68);
  tcase_add_test(tc_main, test_is_not_equal_ok69);
  tcase_add_test(tc_main, test_is_not_equal_ok70);
  tcase_add_test(tc_main, test_is_not_equal_ok71);
  tcase_add_test(tc_main, test_is_not_equal_ok72);
  tcase_add_test(tc_main, test_is_not_equal_ok73);
  tcase_add_test(tc_main, test_is_not_equal_ok74);
  tcase_add_test(tc_main, test_is_not_equal_ok75);
  tcase_add_test(tc_main, test_is_not_equal_ok76);
  tcase_add_test(tc_main, test_is_not_equal_ok77);
  tcase_add_test(tc_main, test_is_not_equal_ok78);
  tcase_add_test(tc_main, test_is_not_equal_ok79);
  tcase_add_test(tc_main, test_is_not_equal_ok80);
  tcase_add_test(tc_main, test_is_not_equal_ok81);
  tcase_add_test(tc_main, test_is_not_equal_ok82);
  tcase_add_test(tc_main, test_is_not_equal_ok83);
  tcase_add_test(tc_main, test_is_not_equal_ok84);
  tcase_add_test(tc_main, test_is_not_equal_ok85);
  tcase_add_test(tc_main, test_is_not_equal_ok86);
  tcase_add_test(tc_main, test_is_not_equal_ok87);
  tcase_add_test(tc_main, test_is_not_equal_ok88);
  tcase_add_test(tc_main, test_is_not_equal_ok89);
  tcase_add_test(tc_main, test_is_not_equal_ok90);
  tcase_add_test(tc_main, test_is_not_equal_ok91);
  tcase_add_test(tc_main, test_is_not_equal_ok92);
  tcase_add_test(tc_main, test_is_not_equal_ok93);
  tcase_add_test(tc_main, test_is_not_equal_ok94);
  tcase_add_test(tc_main, test_is_not_equal_ok95);
  tcase_add_test(tc_main, test_is_not_equal_ok96);
  tcase_add_test(tc_main, test_is_not_equal_ok97);
  tcase_add_test(tc_main, test_is_not_equal_ok98);
  tcase_add_test(tc_main, test_is_not_equal_ok99);
  tcase_add_test(tc_main, test_is_not_equal_ok100);
  tcase_add_test(tc_main, test_is_not_equal_ok101);
  tcase_add_test(tc_main, test_is_not_equal_ok102);
  tcase_add_test(tc_main, test_is_not_equal_ok103);
  tcase_add_test(tc_main, test_is_not_equal_ok104);
  tcase_add_test(tc_main, test_is_not_equal_ok105);
  tcase_add_test(tc_main, test_is_not_equal_ok106);
  tcase_add_test(tc_main, test_is_not_equal_ok107);
  tcase_add_test(tc_main, test_is_not_equal_ok108);
  tcase_add_test(tc_main, test_is_not_equal_ok109);
  tcase_add_test(tc_main, test_is_not_equal_ok110);
  tcase_add_test(tc_main, test_is_not_equal_ok111);
  tcase_add_test(tc_main, test_is_not_equal_ok112);
  tcase_add_test(tc_main, test_is_not_equal_ok113);
  tcase_add_test(tc_main, test_is_not_equal_ok114);
  tcase_add_test(tc_main, test_is_not_equal_ok115);
  tcase_add_test(tc_main, test_is_not_equal_ok116);
  tcase_add_test(tc_main, test_is_not_equal_ok117);
  tcase_add_test(tc_main, test_is_not_equal_ok118);
  tcase_add_test(tc_main, test_is_not_equal_ok119);
  tcase_add_test(tc_main, test_is_not_equal_ok120);
  tcase_add_test(tc_main, test_is_not_equal_ok121);
  tcase_add_test(tc_main, test_is_not_equal_ok122);
  tcase_add_test(tc_main, test_is_not_equal_ok123);
  tcase_add_test(tc_main, test_is_not_equal_ok124);
  tcase_add_test(tc_main, test_is_not_equal_ok125);
  tcase_add_test(tc_main, test_is_not_equal_ok126);
  tcase_add_test(tc_main, test_is_not_equal_ok127);
  tcase_add_test(tc_main, test_is_not_equal_ok128);
  tcase_add_test(tc_main, test_is_not_equal_ok129);
  tcase_add_test(tc_main, test_is_not_equal_ok130);
  tcase_add_test(tc_main, test_is_not_equal_ok131);
  tcase_add_test(tc_main, test_is_not_equal_ok132);
  tcase_add_test(tc_main, test_is_not_equal_ok133);
  tcase_add_test(tc_main, test_is_not_equal_ok134);
  tcase_add_test(tc_main, test_is_not_equal_ok135);
  tcase_add_test(tc_main, test_is_not_equal_ok136);
  tcase_add_test(tc_main, test_is_not_equal_ok137);
  tcase_add_test(tc_main, test_is_not_equal_ok138);
  tcase_add_test(tc_main, test_is_not_equal_ok139);
  tcase_add_test(tc_main, test_is_not_equal_ok140);
  tcase_add_test(tc_main, test_is_not_equal_ok141);
  tcase_add_test(tc_main, test_is_not_equal_ok142);
  tcase_add_test(tc_main, test_is_not_equal_ok143);
  tcase_add_test(tc_main, test_is_not_equal_ok144);
  tcase_add_test(tc_main, test_is_not_equal_ok145);
  tcase_add_test(tc_main, test_is_not_equal_ok146);
  tcase_add_test(tc_main, test_is_not_equal_ok147);
  tcase_add_test(tc_main, test_is_not_equal_ok148);
  tcase_add_test(tc_main, test_is_not_equal_ok149);
  tcase_add_test(tc_main, test_is_not_equal_ok150);
  tcase_add_test(tc_main, test_is_not_equal_ok151);
  tcase_add_test(tc_main, test_is_not_equal_ok152);
  tcase_add_test(tc_main, test_is_not_equal_ok153);
  tcase_add_test(tc_main, test_is_not_equal_ok154);
  tcase_add_test(tc_main, test_is_not_equal_ok155);
  tcase_add_test(tc_main, test_is_not_equal_ok156);
  tcase_add_test(tc_main, test_is_not_equal_ok157);
  tcase_add_test(tc_main, test_is_not_equal_ok158);
  tcase_add_test(tc_main, test_is_not_equal_ok159);
  tcase_add_test(tc_main, test_is_not_equal_ok160);
  tcase_add_test(tc_main, test_is_not_equal_ok161);
  tcase_add_test(tc_main, test_is_not_equal_ok162);
  tcase_add_test(tc_main, test_is_not_equal_ok163);
  tcase_add_test(tc_main, test_is_not_equal_ok164);
  tcase_add_test(tc_main, test_is_not_equal_ok165);
  tcase_add_test(tc_main, test_is_not_equal_ok166);
  tcase_add_test(tc_main, test_is_not_equal_ok167);
  tcase_add_test(tc_main, test_is_not_equal_ok168);
  tcase_add_test(tc_main, test_is_not_equal_ok169);
  tcase_add_test(tc_main, test_is_not_equal_ok170);
  tcase_add_test(tc_main, test_is_not_equal_ok171);
  tcase_add_test(tc_main, test_is_not_equal_ok172);
  tcase_add_test(tc_main, test_is_not_equal_ok173);
  tcase_add_test(tc_main, test_is_not_equal_ok174);
  tcase_add_test(tc_main, test_is_not_equal_ok175);
  tcase_add_test(tc_main, test_is_not_equal_ok176);
  tcase_add_test(tc_main, test_is_not_equal_ok177);
  tcase_add_test(tc_main, test_is_not_equal_ok178);
  tcase_add_test(tc_main, test_is_not_equal_ok179);
  tcase_add_test(tc_main, test_is_not_equal_ok180);
  tcase_add_test(tc_main, test_is_not_equal_ok181);
  tcase_add_test(tc_main, test_is_not_equal_ok182);
  tcase_add_test(tc_main, test_is_not_equal_ok183);
  tcase_add_test(tc_main, test_is_not_equal_ok184);
  tcase_add_test(tc_main, test_is_not_equal_ok185);
  tcase_add_test(tc_main, test_is_not_equal_ok186);
  tcase_add_test(tc_main, test_is_not_equal_ok187);
  tcase_add_test(tc_main, test_is_not_equal_ok188);
  tcase_add_test(tc_main, test_is_not_equal_ok189);
  tcase_add_test(tc_main, test_is_not_equal_ok190);
  tcase_add_test(tc_main, test_is_not_equal_ok191);
  tcase_add_test(tc_main, test_is_not_equal_ok192);
  tcase_add_test(tc_main, test_is_not_equal_ok193);
  tcase_add_test(tc_main, test_is_not_equal_ok194);
  tcase_add_test(tc_main, test_is_not_equal_ok195);
  tcase_add_test(tc_main, test_is_not_equal_ok196);
  tcase_add_test(tc_main, test_is_not_equal_ok197);
  tcase_add_test(tc_main, test_is_not_equal_ok198);
  tcase_add_test(tc_main, test_is_not_equal_ok199);
  tcase_add_test(tc_main, test_is_not_equal_ok200);
  tcase_add_test(tc_main, test_is_not_equal_ok201);
  tcase_add_test(tc_main, test_is_not_equal_ok202);
  tcase_add_test(tc_main, test_is_not_equal_ok203);
  tcase_add_test(tc_main, test_is_not_equal_ok204);
  tcase_add_test(tc_main, test_is_not_equal_ok205);
  tcase_add_test(tc_main, test_is_not_equal_ok206);
  tcase_add_test(tc_main, test_is_not_equal_ok207);
  tcase_add_test(tc_main, test_is_not_equal_ok208);
  tcase_add_test(tc_main, test_is_not_equal_ok209);
  tcase_add_test(tc_main, test_is_not_equal_ok210);
  tcase_add_test(tc_main, test_is_not_equal_ok211);
  tcase_add_test(tc_main, test_is_not_equal_ok212);
  tcase_add_test(tc_main, test_is_not_equal_ok213);
  tcase_add_test(tc_main, test_is_not_equal_ok214);
  tcase_add_test(tc_main, test_is_not_equal_ok215);
  tcase_add_test(tc_main, test_is_not_equal_ok216);
  tcase_add_test(tc_main, test_is_not_equal_ok217);
  tcase_add_test(tc_main, test_is_not_equal_ok218);
  tcase_add_test(tc_main, test_is_not_equal_ok219);
  tcase_add_test(tc_main, test_is_not_equal_ok220);
  tcase_add_test(tc_main, test_is_not_equal_ok221);
  tcase_add_test(tc_main, test_is_not_equal_ok222);
  tcase_add_test(tc_main, test_is_not_equal_ok223);
  tcase_add_test(tc_main, test_is_not_equal_ok224);
  tcase_add_test(tc_main, test_is_not_equal_ok225);
  tcase_add_test(tc_main, test_is_not_equal_ok226);
  tcase_add_test(tc_main, test_is_not_equal_ok227);
  tcase_add_test(tc_main, test_is_not_equal_ok228);
  tcase_add_test(tc_main, test_is_not_equal_ok229);
  tcase_add_test(tc_main, test_is_not_equal_ok230);
  tcase_add_test(tc_main, test_is_not_equal_ok231);
  tcase_add_test(tc_main, test_is_not_equal_ok232);
  tcase_add_test(tc_main, test_is_not_equal_ok233);
  tcase_add_test(tc_main, test_is_not_equal_ok234);
  tcase_add_test(tc_main, test_is_not_equal_ok235);
  tcase_add_test(tc_main, test_is_not_equal_ok236);
  tcase_add_test(tc_main, test_is_not_equal_ok237);
  tcase_add_test(tc_main, test_is_not_equal_ok238);
  tcase_add_test(tc_main, test_is_not_equal_ok239);
  tcase_add_test(tc_main, test_is_not_equal_ok240);
  tcase_add_test(tc_main, test_is_not_equal_ok241);
  tcase_add_test(tc_main, test_is_not_equal_ok242);
  tcase_add_test(tc_main, test_is_not_equal_ok243);
  tcase_add_test(tc_main, test_is_not_equal_ok244);
  tcase_add_test(tc_main, test_is_not_equal_ok245);
  tcase_add_test(tc_main, test_is_not_equal_ok246);
  tcase_add_test(tc_main, test_is_not_equal_ok247);
  tcase_add_test(tc_main, test_is_not_equal_ok248);
  tcase_add_test(tc_main, test_is_not_equal_ok249);
  tcase_add_test(tc_main, test_is_not_equal_ok250);

  suite_add_tcase(s, tc_main);
  return s;
}

void test_is_equal(s21_decimal decimal1, s21_decimal decimal2, int check) {
  int code = s21_is_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

void test_is_greater(s21_decimal decimal1, s21_decimal decimal2, int check) {
  int code = s21_is_greater(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

void test_is_greater_or_equal(s21_decimal decimal1, s21_decimal decimal2,
                              int check) {
  int code = s21_is_greater_or_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

void test_is_less(s21_decimal decimal1, s21_decimal decimal2, int check) {
  int code = s21_is_less(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

void test_is_less_or_equal(s21_decimal decimal1, s21_decimal decimal2,
                           int check) {
  int code = s21_is_less_or_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}

void test_is_not_equal(s21_decimal decimal1, s21_decimal decimal2, int check) {
  int code = s21_is_not_equal(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}