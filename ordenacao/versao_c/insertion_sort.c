#include "insertion_sort.h"

void insertion_sort(int* v, int n) {
  for (int j = 1; j < n; j++) {
    int chave = v[j];
    int i = j - 1;
    while (i >= 0 && v[i] > chave) {
      v[i + 1] = v[i];
      i -= 1;
    }
    v[i + 1] = chave;
  }
}
