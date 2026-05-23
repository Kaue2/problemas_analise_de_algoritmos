#include <stdlib.h>
#include "mochila.h"

typedef struct {
  int peso;
  int valor;
  float razao;
  int id_original;
} Item;

int comp(const void *a, const void* b) {
  Item *itemA = (Item *)a;
  Item *itemB = (Item *)b;

  if (itemA->razao < itemB->razao) return 1;
  if (itemA->razao > itemB->razao) return -1;
  return 0;
}

void mochila(int *pesos, int *valores, int n, int capacidade, float *resultado) {
  for (int i = 0; i < n; i++) resultado[i] = 0.0;

  Item *itens = (Item *) malloc(n * sizeof(Item));

  for (int i = 0; i < n; i++) {
    itens[i].peso = pesos[i];
    itens[i].valor = valores[i];
    itens[i].id_original = i;
    itens[i].razao = (float)valores[i] / pesos[i];
  }

  qsort(itens, n, sizeof(Item), comp);

  int i = 0;
  while (i < n && capacidade > 0) {
    int id = itens[i].id_original;

    if (itens[i].peso <= capacidade) {
      resultado[id] = 1.0;
      capacidade -= pesos[i];
    } else {
      resultado[id] = (float)valores[i] / pesos[i];
      capacidade = 0;
    }
    i++;
  }

  free(itens);
}
