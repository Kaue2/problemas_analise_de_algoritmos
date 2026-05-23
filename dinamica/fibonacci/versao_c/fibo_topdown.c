#include "fibo_topdown.h"
#define MAX 1024

int aux[MAX];


int calc_fibo_topdown(int f) {
  if (aux[f] != -1) {
    return aux[f];
  }
  aux[f] = calc_fibo_topdown(f - 2) + calc_fibo_topdown(f - 1);
  return aux[f];
}


int fibo_topdown(int f) {
  for (int i = 0; i < MAX; i++) {
    aux[i] = -1;
  }
  aux[0] = aux[1] = 1;

  return calc_fibo_topdown(f);
}
