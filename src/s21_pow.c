#include "s21_math.h"

long double s21_pow(double base, double exp) {
  long double res = 0;
  if ((s21_fabs(base) < 1 && exp == -S21_INF) ||
      (s21_fabs(base) > 1 && exp == S21_INF) || (exp > 0 && base == S21_INF) ||
      (base == -S21_INF &&
       ((exp > 0 && (int)exp % 2 == 0) || exp == S21_INF))) {
    res = S21_INF;
  } else if (base == 1 || exp == 0 ||
             (base == -1 && (exp == S21_INF || exp == -S21_INF))) {
    res = 1;
  } else if ((base == 0 && exp > 0) ||
             (s21_fabs(base) > 1 && exp == -S21_INF) ||
             (s21_fabs(base) < 1 && exp == S21_INF) ||
             (exp < 0 && (int)exp % 2 == 0 && base == -S21_INF) ||
             (exp < 0 && base == S21_INF)) {
    res = 0;
  } else if (base == -S21_INF && (exp > 0 && (int)exp % 2 != 0)) {
    res = -S21_INF;
  } else if ((base != base && exp != exp) ||
             (base < 0 && (int)exp - exp != 0)) {
    res = S21_NAN;
  } else {
    res = s21_exp(exp * s21_log(base));
  }
  return res;
}