#include "swap.h"

void swap(int* p, int* q) {
  int aux = *p;
  *p = *q;
  *q = aux;
}

