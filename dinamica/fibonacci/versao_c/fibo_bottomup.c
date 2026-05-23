#include "fibo_bottomup.h"

int fibo_bottomup(int f) {
  int aux[3];
  aux[0] = 1;
  aux[1] = 1;

  for (int i = 2; i <= f; i++) {
    aux[2] = aux[0] + aux[1];

    aux[0] = aux[1];
    aux[1] = aux[2];
  }

  return aux[2];
}
