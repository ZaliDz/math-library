#include "s21_math.h"

long double s21_exp(double x) {
  long double new_value = 1;
  long double sum = 1;
  long double i = 1;
  int flag = 0;
  if (x < 0 && x != -S21_INF) {
    x *= -1;
    flag = 1;
  }
  if (x != x) {
    sum = S21_NAN;
  } else if (x == S21_INF) {
    sum = S21_INF;
  } else if (x == -S21_INF) {
    sum = 0;
  } else {
    while (s21_fabs(new_value) > S21_EPS) {
      new_value = new_value * (x / i);
      i++;
      sum += new_value;
      if (sum > S21_DBL_MAX && x > 0) {
        sum = S21_INF;
        break;
      }
    }
    if (flag == 1) {
      if (sum > S21_DBL_MAX)
        sum = 0;
      else
        sum = 1. / sum;
    }
  }
  return sum;
}