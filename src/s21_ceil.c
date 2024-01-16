#include "s21_math.h"

long double s21_ceil(double x) {
  long double res = 0;
  if (x != x) {
    res = S21_NAN;
  } else if (x == 0 || x == S21_INF || x == -S21_INF) {
    res = x;
  } else {
    if (s21_fmod(x, 1) && x > 0) {
      res = (long long int)x + 1;
    } else if (s21_fmod(x, 1) && x < 0) {
      res = (long long int)x;
    } else {
      res = x;
    }
  }
  return res;
}