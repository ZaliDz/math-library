#include <check.h>
#include <math.h>
#include <stdlib.h>

#include "s21_math.h"

START_TEST(abs_tests) {
  ck_assert_ldouble_eq(abs(-45), s21_abs(-45));
  ck_assert_ldouble_eq(abs(32343), s21_abs(32343));
  ck_assert_ldouble_eq(abs(-1111), s21_abs(-1111));
  ck_assert_ldouble_eq(abs(23378933), s21_abs(23378933));
  ck_assert_ldouble_eq(abs(0), s21_abs(0));
}
END_TEST

START_TEST(acos_tests) {
  ck_assert_ldouble_nan(s21_acos(-3.140290));
  ck_assert_ldouble_eq_tol(acos(0.3733839), s21_acos(0.3733839), 1e-6);
  ck_assert_ldouble_eq_tol(acos(0.5555), s21_acos(0.5555), 1e-6);
  ck_assert_ldouble_eq(acos(0), s21_acos(0));
  ck_assert_ldouble_eq(acos(1), s21_acos(1));
  ck_assert_ldouble_eq(acos(-1), s21_acos(-1));
  ck_assert_ldouble_nan(s21_acos(S21_NAN));
  ck_assert_ldouble_nan(acos(S21_NAN));
  ck_assert_ldouble_nan(s21_acos(S21_INF));
  ck_assert_ldouble_nan(acos(S21_INF));
}
END_TEST

START_TEST(asin_tests) {
  ck_assert_ldouble_nan(s21_asin(-3.140290));
  ck_assert_ldouble_nan(s21_asin(2.527));
  ck_assert_ldouble_eq_tol(asin(0.5555), s21_asin(0.5555), 1e-6);
  ck_assert_ldouble_eq_tol(asin(0), s21_asin(0), 1e-6);
  ck_assert_ldouble_eq_tol(asin(1), s21_asin(1), 1e-6);
  ck_assert_ldouble_eq_tol(asin(-1), s21_asin(-1), 1e-6);
  ck_assert_ldouble_eq_tol(asin(0.5), s21_asin(0.5), 1e-6);
  ck_assert_ldouble_eq_tol(asin(-0.5), s21_asin(-0.5), 1e-6);
  ck_assert_ldouble_nan(s21_asin(S21_INF));
  ck_assert_ldouble_nan(asin(S21_INF));
  ck_assert_ldouble_nan(s21_asin(S21_NAN));
  ck_assert_ldouble_nan(asin(S21_NAN));
}
END_TEST

START_TEST(atan_tests) {
  ck_assert_ldouble_eq_tol(atan(-3.140290), s21_atan(-3.140290), 1e-6);
  ck_assert_ldouble_eq_tol(atan(2.527), s21_atan(2.527), 1e-6);
  ck_assert_ldouble_eq_tol(atan(3.14), s21_atan(3.14), 1e-6);
  ck_assert_ldouble_eq_tol(atan(6.28), s21_atan(6.28), 1e-6);
  ck_assert_ldouble_eq_tol(atan(2.3232), s21_atan(2.3232), 1e-6);
  ck_assert_ldouble_eq_tol(atan(0.5555), s21_atan(0.5555), 1e-6);
  ck_assert_ldouble_eq_tol(atan(0), s21_atan(0), 1e-6);
  ck_assert_ldouble_eq_tol(atan(1), s21_atan(1), 1e-6);
  ck_assert_ldouble_eq_tol(atan(-1), s21_atan(-1), 1e-6);
  ck_assert_ldouble_eq_tol(atan(3.5), s21_atan(3.5), 1e-6);
  ck_assert_ldouble_eq_tol(atan(-3.5), s21_atan(-3.5), 1e-6);
  ck_assert_ldouble_eq_tol(atan(S21_INF), s21_atan(S21_INF), 1e-6);
  ck_assert_ldouble_eq_tol(atan(-S21_INF), s21_atan(-S21_INF), 1e-6);
  ck_assert_ldouble_nan(s21_atan(S21_NAN));
  ck_assert_ldouble_nan(atan(S21_NAN));
}
END_TEST

START_TEST(ceil_tests) {
  ck_assert_ldouble_eq_tol(ceil(-3.140290), s21_ceil(-3.140290), 1e-6);
  ck_assert_ldouble_eq_tol(ceil(2.527), s21_ceil(2.527), 1e-6);
  ck_assert_ldouble_eq_tol(ceil(1000), s21_ceil(1000), 1e-6);
  ck_assert_ldouble_eq_tol(ceil(102.0000002), s21_ceil(102.0000002), 1e-6);
  ck_assert_ldouble_eq_tol(ceil(10231313.0000002), s21_ceil(10231313.0000002),
                           1e-6);
  ck_assert_ldouble_eq(ceil(S21_INF), s21_ceil(S21_INF));
  ck_assert_ldouble_eq(ceil(-S21_INF), s21_ceil(-S21_INF));
  ck_assert_ldouble_eq_tol(ceil(0), s21_ceil(0), 1e-6);
  ck_assert_ldouble_nan(s21_ceil(S21_NAN));
  ck_assert_ldouble_nan(ceil(S21_NAN));
}
END_TEST

START_TEST(cos_tests) {
  ck_assert_ldouble_eq_tol(cos(-3.140290), s21_cos(-3.140290), 1e-6);
  ck_assert_ldouble_eq_tol(cos(2.527), s21_cos(2.527), 1e-6);
  ck_assert_ldouble_eq_tol(cos(0.0), s21_cos(0.0), 1e-6);
  ck_assert_ldouble_eq_tol(cos(1.0), s21_cos(1.0), 1e-6);
  ck_assert_ldouble_eq_tol(cos(6.28), s21_cos(6.28), 1e-6);
  ck_assert_ldouble_eq_tol(cos(0.5555), s21_cos(0.5555), 1e-6);
  ck_assert_ldouble_nan(cos(S21_NAN));
  ck_assert_ldouble_nan(s21_cos(S21_NAN));
  ck_assert_ldouble_nan(s21_cos(S21_INF));
  ck_assert_ldouble_nan(cos(S21_INF));
}
END_TEST

START_TEST(exp_tests) {
  ck_assert_ldouble_eq_tol(exp(2.527), s21_exp(2.527), 1e-6);
  ck_assert_ldouble_eq_tol(exp(-0.54), s21_exp(-0.54), 1e-6);
  ck_assert_ldouble_eq(exp(1000), s21_exp(1000));
  ck_assert_ldouble_eq_tol(exp(1), s21_exp(1), 1e-6);
  ck_assert_ldouble_eq_tol(exp(2), s21_exp(2), 1e-6);
  ck_assert_ldouble_eq_tol(exp(0), s21_exp(0), 1e-6);
  ck_assert_ldouble_eq(exp(S21_INF), s21_exp(S21_INF));
  ck_assert_ldouble_eq(exp(-S21_INF), s21_exp(-S21_INF));
  ck_assert_ldouble_nan(exp(S21_NAN));
  ck_assert_ldouble_nan(s21_exp(S21_NAN));
  ck_assert_ldouble_eq_tol(s21_exp(-999999999999), exp(-999999999999), 1e-6);
}
END_TEST

START_TEST(fabs_tests) {
  ck_assert_ldouble_eq(fabs(-13.21313), s21_fabs(-13.21313));
  ck_assert_ldouble_eq(fabs(13.21313), s21_fabs(13.21313));
  ck_assert_ldouble_eq(fabs(-1000.21313), s21_fabs(-1000.21313));
  ck_assert_ldouble_eq(fabs(32346234.21313), s21_fabs(32346234.21313));
  ck_assert_ldouble_eq(fabs(0.0), s21_fabs(0.0));
  ck_assert_ldouble_eq(fabs(S21_INF), s21_fabs(S21_INF));
  ck_assert_ldouble_eq(fabs(-S21_INF), s21_fabs(-S21_INF));
}
END_TEST

START_TEST(floor_tests) {
  ck_assert_ldouble_eq(floor(-3.140290), s21_floor(-3.140290));
  ck_assert_ldouble_eq(floor(2.527), s21_floor(2.527));
  ck_assert_ldouble_eq(floor(-0.54), s21_floor(-0.54));
  ck_assert_ldouble_eq(floor(0), s21_floor(0));
  ck_assert_ldouble_eq(floor(1111), s21_floor(1111));
  ck_assert_ldouble_eq(floor(201.0000002), s21_floor(201.0000002));
  ck_assert_ldouble_eq(floor(S21_INF), s21_floor(S21_INF));
  ck_assert_ldouble_eq(floor(-S21_INF), s21_floor(-S21_INF));
  ck_assert_ldouble_nan(floor(S21_NAN));
  ck_assert_ldouble_nan(s21_floor(S21_NAN));
}
END_TEST

START_TEST(fmod_tests) {
  ck_assert_ldouble_eq(fmod(-13.21313, 2.5), s21_fmod(-13.21313, 2.5));
  ck_assert_ldouble_eq(fmod(13.21313, 2.5), s21_fmod(13.21313, 2.5));
  ck_assert_ldouble_eq(fmod(-1000.21313, 2.5), s21_fmod(-1000.21313, 2.5));
  ck_assert_ldouble_eq(fmod(32346234.21313, 2.5),
                       s21_fmod(32346234.21313, 2.5));
  ck_assert_ldouble_eq(fmod(32346234.21313, 213131313.5),
                       s21_fmod(32346234.21313, 213131313.5));
  ck_assert_ldouble_eq(fmod(0, 2.5), s21_fmod(0, 2.5));
  ck_assert_ldouble_eq(fmod(2.5, 2.5), s21_fmod(2.5, 2.5));
  ck_assert_double_nan(s21_fmod(2.5, 0));
  ck_assert_ldouble_nan(s21_fmod(S21_NAN, 0));
  ck_assert_ldouble_nan(fmod(S21_NAN, 0));
  ck_assert_ldouble_eq(fmod(2.5, S21_INF), s21_fmod(2.5, S21_INF));
  ck_assert_ldouble_nan(s21_fmod(S21_INF, -S21_INF));
  ck_assert_ldouble_nan(fmod(S21_INF, -S21_INF));
}
END_TEST

START_TEST(log_tests) {
  ck_assert_ldouble_nan(s21_log(-3.140290));
  ck_assert_ldouble_nan(log(-3.140290));
  ck_assert_ldouble_eq_tol(log(2.527), s21_log(2.527), 1e-6);
  ck_assert_ldouble_eq(log(0.0), s21_log(0.0));
  ck_assert_ldouble_eq(log(1.0), s21_log(1.0));
  ck_assert_ldouble_eq_tol(log(3.14), s21_log(3.14), 1e-6);
  ck_assert_ldouble_eq_tol(log(6.28), s21_log(6.28), 1e-6);
  ck_assert_ldouble_eq_tol(log(2.3232), s21_log(2.3232), 1e-6);
  ck_assert_ldouble_eq_tol(log(0.5555), s21_log(0.5555), 1e-6);
  ck_assert_ldouble_eq_tol(log(10), s21_log(10), 1e-6);
  ck_assert_ldouble_nan(s21_log(S21_NAN));
  ck_assert_ldouble_nan(log(S21_NAN));
  ck_assert_ldouble_eq(log(S21_INF), s21_log(S21_INF));
  ck_assert_ldouble_nan(s21_log(-S21_INF));
}
END_TEST

START_TEST(pow_tests) {
  ck_assert_ldouble_eq_tol(pow(13.21313, 2.5), s21_pow(13.21313, 2.5), 1e-6);
  ck_assert_ldouble_eq_tol(pow(21.287287, 6.453), s21_pow(21.287287, 6.453),
                           1e-6);
  ck_assert_ldouble_eq(pow(0, 2.5), s21_pow(0, 2.5));
  ck_assert_ldouble_eq_tol(pow(2, 18.12334), s21_pow(2, 18.12334), 1e-6);
  ck_assert_ldouble_eq_tol(pow(111, -2), s21_pow(111, -2), 1e-6);
  ck_assert_ldouble_eq_tol(pow(111, 2), s21_pow(111, 2), 1e-6);
  ck_assert_ldouble_eq_tol(pow(111, 0), s21_pow(111, 0), 1e-6);
  ck_assert_ldouble_nan(pow(-12.1, -1.1));
  ck_assert_double_nan(s21_pow(-12.1, -1.1));
  ck_assert_ldouble_nan(s21_pow(0, S21_NAN));
  ck_assert_ldouble_nan(pow(0, S21_NAN));
  ck_assert_ldouble_eq(pow(S21_INF, 1), s21_pow(S21_INF, 1));
  ck_assert_ldouble_eq(pow(-S21_INF, 1), s21_pow(-S21_INF, 1));
  ck_assert_ldouble_eq(pow(S21_INF, S21_INF), s21_pow(S21_INF, S21_INF));
  ck_assert_ldouble_eq(pow(-S21_INF, -2.5), s21_pow(-S21_INF, -2.5));
  ck_assert_ldouble_eq(pow(-S21_INF, 2.5), s21_pow(-S21_INF, 2.5));
  ck_assert_ldouble_eq(pow(S21_INF, 2.5), s21_pow(S21_INF, 2.5));
  ck_assert_ldouble_eq(pow(S21_INF, -2.5), s21_pow(S21_INF, -2.5));
  ck_assert_ldouble_eq(pow(-1, S21_INF), s21_pow(-1, S21_INF));
  ck_assert_double_eq(pow(1, 0), s21_pow(1, 0));
}
END_TEST

START_TEST(sin_tests) {
  ck_assert_ldouble_eq_tol(sin(-3.140290), s21_sin(-3.140290), 1e-6);
  ck_assert_ldouble_eq_tol(sin(0.01), s21_sin(0.01), 1e-6);
  ck_assert_ldouble_eq_tol(sin(S21_PI - 0.01), s21_sin(S21_PI - 0.01), 1e-6);
  ck_assert_ldouble_eq_tol(sin(2.527), s21_sin(2.527), 1e-6);
  ck_assert_ldouble_eq_tol(sin(0.0), s21_sin(0.0), 1e-6);
  ck_assert_ldouble_eq_tol(sin(1.0), s21_sin(1.0), 1e-6);
  ck_assert_ldouble_eq_tol(sin(3.14), s21_sin(3.14), 1e-6);
  ck_assert_ldouble_eq_tol(sin(6.28), s21_sin(6.28), 1e-6);
  ck_assert_ldouble_eq_tol(sin(2.3232), s21_sin(2.3232), 1e-6);
  ck_assert_ldouble_eq_tol(sin(0.5555), s21_sin(0.5555), 1e-6);
  ck_assert_ldouble_nan(s21_sin(S21_NAN));
  ck_assert_ldouble_nan(sin(S21_NAN));
  ck_assert_ldouble_nan(sin(S21_INF));
  ck_assert_ldouble_nan(s21_sin(S21_INF));
  ck_assert_ldouble_nan(sin(S21_INF));
  ck_assert_ldouble_nan(sin(-S21_INF));
  ck_assert_ldouble_nan(s21_sin(-S21_INF));
}
END_TEST

START_TEST(sqrt_tests) {
  ck_assert_ldouble_eq(sqrt(0.0), s21_sqrt(0.0));
  ck_assert_ldouble_eq(sqrt(1.0), s21_sqrt(1.0));
  ck_assert_ldouble_eq_tol(sqrt(3.14), s21_sqrt(3.14), 1e-6);
  ck_assert_ldouble_eq_tol(sqrt(6.28), s21_sqrt(6.28), 1e-6);
  ck_assert_ldouble_eq_tol(sqrt(2.3232), s21_sqrt(2.3232), 1e-6);
  ck_assert_double_nan(s21_sqrt(-2.3232));
  ck_assert_ldouble_eq_tol(sqrt(0.5), s21_sqrt(0.5), 1e-6);
  ck_assert_ldouble_nan(s21_sqrt(S21_NAN));
  ck_assert_ldouble_nan(sqrt(S21_NAN));
  ck_assert_ldouble_eq(sqrt(S21_INF), s21_sqrt(S21_INF));
  ck_assert_ldouble_nan(s21_sqrt(-S21_INF));
  ck_assert_ldouble_nan(sqrt(-S21_INF));
}
END_TEST

START_TEST(tan_tests) {
  ck_assert_ldouble_eq_tol(tan(-3.140290), s21_tan(-3.140290), 1e-6);
  ck_assert_ldouble_eq_tol(tan(2.527), s21_tan(2.527), 1e-6);
  ck_assert_ldouble_eq(tan(0), s21_tan(0));
  ck_assert_ldouble_eq_tol(tan(1), s21_tan(1), 1e-6);
  ck_assert_ldouble_eq_tol(tan(3.14), s21_tan(3.14), 1e-6);
  ck_assert_ldouble_eq_tol(tan(6.28), s21_tan(6.28), 1e-6);
  ck_assert_ldouble_eq_tol(tan(2.3232), s21_tan(2.3232), 1e-6);
  ck_assert_ldouble_eq_tol(tan(0.5555), s21_tan(0.5555), 1e-6);
  ck_assert_ldouble_nan(tan(S21_NAN));
  ck_assert_ldouble_nan(s21_tan(S21_NAN));
  ck_assert_ldouble_nan(s21_tan(S21_INF));
  ck_assert_ldouble_nan(tan(S21_INF));
  ck_assert_ldouble_nan(s21_tan(-S21_INF));
  ck_assert_ldouble_nan(tan(-S21_INF));
}
END_TEST

Suite *s21_math_tests_create() {
  Suite *s21_math = suite_create("s21_math");
  TCase *s21_math_tests = tcase_create("S21_MATH");
  tcase_add_test(s21_math_tests, abs_tests);
  tcase_add_test(s21_math_tests, acos_tests);
  tcase_add_test(s21_math_tests, asin_tests);
  tcase_add_test(s21_math_tests, atan_tests);
  tcase_add_test(s21_math_tests, ceil_tests);
  tcase_add_test(s21_math_tests, cos_tests);
  tcase_add_test(s21_math_tests, exp_tests);
  tcase_add_test(s21_math_tests, fabs_tests);
  tcase_add_test(s21_math_tests, floor_tests);
  tcase_add_test(s21_math_tests, fmod_tests);
  tcase_add_test(s21_math_tests, log_tests);
  tcase_add_test(s21_math_tests, pow_tests);
  tcase_add_test(s21_math_tests, sin_tests);
  tcase_add_test(s21_math_tests, sqrt_tests);
  tcase_add_test(s21_math_tests, tan_tests);
  suite_add_tcase(s21_math, s21_math_tests);
  return s21_math;
}

int main() {
  Suite *s21_math = s21_math_tests_create();
  SRunner *s21_math_runner = srunner_create(s21_math);
  int number_failed;
  srunner_run_all(s21_math_runner, CK_NORMAL);
  number_failed = srunner_ntests_failed(s21_math_runner);
  srunner_free(s21_math_runner);

  return number_failed == 0 ? 0 : 1;
}