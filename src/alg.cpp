// Copyright 2022 NNTU-CS
#include <cstdint>
#include <cmath>
#include "alg.h"


double pown(double value, uint16_t n) {
  return pow(value, n);
}

uint64_t fact(uint16_t n) {
  if (n == 1) {
    return 1;
  } else {
    return n * fact(n - 1);
  }
}

double calcItem(double x, uint16_t n) {
  return pow(x, n)/fact(n);
}

double expn(double x, uint16_t count) {
  double res;
  int n = 0;
  for (int i = 0; i <= count; i++) {
    res = pow(x, n)/fact(n);
    n++;
  }
  return res;
}

double sinn(double x, uint16_t count) {
  return 0;
}

double cosn(double x, uint16_t count) {
  return 0;
}
