#include "s21_math.h"

long double s21_fmod(double x, double y) {
  long double res = 0;
  if (x == S21_INF || x == -S21_INF || x != x || y != y || y == 0) {
    res = S21_NAN;
  } else if (y == S21_INF || y == -S21_INF || x == 0) {
    res = x;
  } else {
    long long int mod = x / y;
    res = x - mod * y;
  }
  return res;
}
