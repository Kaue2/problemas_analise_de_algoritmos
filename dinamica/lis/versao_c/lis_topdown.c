#include "lis_topdown.h"
#include "common.h"
#include "lis_recursivo.h"

#define MAX 1024

int aux[MAX];

int lis_topdown(int i, int *vec) {
  if (aux[i] != -1) return aux[i];

  int m = 1;

  for (int j = 0; j < i; j++)
    if (vec[j] < vec[i]) 
      m = max(m, lis_topdown(j, vec) + 1);

  return m;
}

int find_lis_topdown(int n, int *vec) {
  for (int i = 0; i < MAX; i++) aux[i] = -1;

  int m = 1;

  for (int i = 0; i < n; i++)
    m = max(m, lis_topdown(i, vec));
  
  return m;
}
