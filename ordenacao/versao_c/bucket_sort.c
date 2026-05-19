#include "insertion_sort.h"

#define NUM_BALDES 10

void bucket_sort(int* v, int n) {
  if (n <= 0) return;

  int baldes[NUM_BALDES][n];
  int contadores[NUM_BALDES];

  for (int i = 0; i < NUM_BALDES; i++)
    contadores[i] = 0;

  int max = v[0];
  for (int i = 1; i < n; i++)
    if (v[i] > max) max = v[i];

  for (int i = 0; i < n; i++) {
    int indice_balde = (NUM_BALDES * v[i]) / (max + 1);

    baldes[indice_balde][contadores[indice_balde]] = v[i];
    contadores[indice_balde] += 1;
  }

  int pos_original = 0;
  for (int i = 0; i < NUM_BALDES; i++) {
    if (contadores[i] > 0) {
      insertion_sort(baldes[i], contadores[i]);

      for (int j = 0; j < contadores[i]; j++) {
        v[pos_original] = baldes[i][j];
        pos_original += 1;
      }
    }
  }
}
