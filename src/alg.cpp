// Copyright 2022 NNTU-CS
#include <cstdint>
#include <cmath>
#include "alg.h"


double pown(double value, uint16_t n) {
  uint16_t res = pow(value, n);
  return res;
}

uint64_t fact(uint16_t n) {
  if (n == 1) {
    return 1;
  } else {
    return n * fact(n - 1);
  }
}

double calcItem(double x, uint16_t n) {
  uint16_t res;
  if (x = 0) {
    return 0;
  } else {
    res = pow(x, n)/fact(n);
  }
  return res;
}

double expn(double x, uint16_t count) {
  uint16_t res;
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
