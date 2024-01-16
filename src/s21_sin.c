#include "s21_math.h"

long double s21_sin(double x) {
  long double res = 0;
  if (x != x || x == S21_INF || x == -S21_INF) {
    res = S21_NAN;
  } else if (x == 0) {
    res = x;
  } else {
    for (; s21_fabs(x) > S21_PI; x += x > S21_PI ? 2 * -S21_PI : 2 * S21_PI) {
      continue;
    }
    res = x;
    double x1 = x;
    for (int i = 1; s21_fabs(x1) > S21_EPS; i++) {
      x1 = x1 * (-1) * (x * x) / ((2 * i + 1) * (2 * i));
      res = res + x1;
    }
  }
  return res;
}