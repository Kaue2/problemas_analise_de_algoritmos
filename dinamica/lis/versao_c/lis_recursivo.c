#include "lis_recursivo.h"
#include "common.h"

int lis_recursivo(int i, int *vec) {
  int m = 1;

  for (int j = 0; j < i; j++)
    if (vec[j] < vec[i])
      m = max(m, lis_recursivo(j, vec) + 1);

  return m;
}

int find_lis_recursivo(int n, int *vec) {
  int m = 1;

  for (int i = 0; i < n; i++) 
    m = max(m, lis_recursivo(i, vec));

  return m;
}
