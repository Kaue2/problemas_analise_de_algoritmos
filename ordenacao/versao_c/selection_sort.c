#include "selection_sort.h"
#include "swap.h"

void selection_sort(int *v, int n) {
  for (int i = 0; i < n; i++) {
    int min = i;
    for (int j = i + 1; j < n; j++) {
      if (v[j] < v[min]) {
        min = j;
      }
      swap(&v[i], &v[min]);
    }
  }
}
