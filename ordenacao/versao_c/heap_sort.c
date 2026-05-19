#include "swap.h"

void heapfy(int arr[], int n, int i) {
  int maior = i;
  int esquerda = 2 * i + 1;
  int direita = 2 * i + 2;

  if (esquerda < n && arr[esquerda] > arr[maior])
    maior = esquerda;

  if (direita < n && arr[direita] > arr[maior])
    maior = direita;

  if (maior != i) {
    swap(&arr[i], &arr[maior]);
    heapfy(arr, n, maior);
  }
}

void heap_sort(int* v, int n) {
  for (int i = n / 2 - 1; i >= 0; i--)
    heapfy(v, n, i);

  for (int i = n - 1; i >= 0; i--) {
    swap(&v[0], &v[i]);
    heapfy(v, i, 0);
  }
}
