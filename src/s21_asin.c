#include "s21_math.h"

long double s21_asin(double x) {
  long double res = x;
  long double x1 = x;
  if (x != x || x == S21_INF || x == -S21_INF || x > 1. || x < -1.) {
    res = S21_NAN;
  } else if (x == 0) {
    res = x;
  } else if (x == 1) {
    res = S21_PI / 2;
  } else if (x == -1) {
    res = -S21_PI / 2;
  } else {
    for (int i = 1; s21_fabs((double)x1) > S21_EPS; i++) {
      x1 = (x1 * (x * x) * (2 * i - 1) * (2 * i - 1)) / ((2 * i + 1) * (2 * i));
      res += x1;
    }
  }
  return res;
}