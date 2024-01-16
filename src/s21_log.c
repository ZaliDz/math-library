#include "s21_math.h"

long double s21_log(double x) {
  long double res = 0;
  int count = 0;
  long double temp = 0;

  if (x == S21_INF) {
    res = S21_INF;
  } else if (x == 0) {
    res = -S21_INF;
  } else if (x == 1) {
    res = 0;
  } else if (x != x || x < 0) {
    res = S21_NAN;
  } else {
    for (; x >= S21_EXP; x /= S21_EXP, count++) {
      continue;
    }

    for (int i = 0; i < 100; i++) {
      temp = res;
      res = temp + 2 * (x - s21_exp(temp)) / (x + s21_exp(temp));
    }
  }

  return res + count;
}
