#include "s21_math.h"

long double s21_acos(double x) {
  long double res = 0;
  if (x != x || x == S21_INF || x == -S21_INF || x > 1. || x < -1.) {
    res = S21_NAN;
  } else if (x == 1) {
    res = 0;
  } else {
    res = (S21_PI / 2) - s21_asin(x);
  }

  return res;
}