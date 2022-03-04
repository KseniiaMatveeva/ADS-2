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
  double res = 1;
  for (int n = 1; n <= count; n++) {
    res += calcItem(x, n);
  }
  return res;
}

double sinn(double x, uint16_t count) {
  double res;
  for (uint16_t n = 1; n <= count; n++) {
    res += pown(-1, n - 1) * calcItem(x, 2 * n - 1);
  }
  return res;
}

double cosn(double x, uint16_t count) {
  double res;
  double m;
  for (uint16_t n = 1; n <= count; n++) {
    if (n == 1) {
    m = 1;
  } else {
    m = n * fact(n - 1);
  }
    res += pow(-1, n - 1) * pow(x, 2 * n - 2) / m;
  return res;
}
