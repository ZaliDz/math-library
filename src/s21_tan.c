#include "s21_math.h"

long double s21_tan(double x) {
  long double res = 0;
  if (x != x || x == S21_INF || x == -S21_INF) {
    res = S21_NAN;
  } else if (x == 0) {
    res = x;
  } else {
    res = s21_sin(x) / s21_cos(x);
  }
  return res;
}