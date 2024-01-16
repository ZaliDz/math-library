#include "s21_math.h"

long double s21_sqrt(double x) {
  long double res = 0;
  if (x < 0 || x != x || x == -S21_INF) {
    res = S21_NAN;
  } else if (x == 0 || x == S21_INF) {
    res = x;
  } else {
    double x0 = x;
    res = 0.5 * (x0 + x / x0);
    double d = s21_fabs(res - x0);
    while (d >= 2 * S21_EPS) {
      x0 = res;
      res = 0.5 * (x0 + x / x0);
      d = s21_fabs(res - x0);
    }
  }
  return res;
}