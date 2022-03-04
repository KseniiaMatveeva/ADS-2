// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"
#include <cmath>


double pown(double value, uint16_t n) {
  pow (value, n)
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
  if (x = o) {
    return 0;
  } else {
    res = pow(x, n)/fact(n);
  }
  return res;
}

double expn(double x, uint16_t count) {

}

double sinn(double x, uint16_t count) {

}

double cosn(double x, uint16_t count) {

}
