#include "s21_math.h"

long double s21_counting_atan(double x) {
  long double sum = 0;
  long double term = 0;
  long double x1 = x;
  int n = 1;
  do {
    term = x1 / (2 * n - 1);
    sum += term;
    n++;
    x1 *= -x * x;
  } while (s21_fabs(term) > S21_EPS);

  return sum;
}

long double s21_atan(double x) {
  long double res = S21_NAN;
  if (x != x) {
    res = S21_NAN;
  } else if (s21_fabs(x) == 1)
    res = S21_PI / 4 * x;
  else if (s21_fabs(x) < 1)
    res = s21_counting_atan(x);
  else if (x > 0)
    res = S21_PI / 2 - s21_counting_atan(1 / x);
  else if (x < 0)
    res = -S21_PI / 2 - s21_counting_atan(1 / x);
  return res;
}