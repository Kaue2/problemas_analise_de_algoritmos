#include "bubble_sort.h"
#include "swap.h"

void bubble_sort(int* v, int n) {
  for (int i = 0; i < n; i++) {
      for (int j = 0; j < n - 1; j++) {
        if (v[j] > v[j + 1]) {
          swap(&v[j], &v[j+ 1]);
        }        
      }
  }
}
