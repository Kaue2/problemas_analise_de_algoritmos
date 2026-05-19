#include "swap.h"

int partition(int *v, int low, int high) {
  int pivot = v[high];
  int i = (low - 1);

  for (int j = low; j < high; j++) {
    if (v[j] <= pivot) {
      i++; 
      swap(&v[i], &v[j]);
    }
  }
  swap(&v[i + 1], &v[high]);
  return (i + 1);
}

void quick_sort(int *v, int low, int high) {
  if (low < high) {
    int pi = partition(v, low, high);

    quick_sort(v, low, pi - 1);
    quick_sort(v, pi + 1, high);
  }
}
