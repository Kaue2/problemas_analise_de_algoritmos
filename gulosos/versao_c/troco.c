#include <stdio.h>
#include "troco.h"

void troco(int *moedas, int n, int valor) {
  int soma;
  int i = n - 1;

  while (i >= 0 && soma != valor) {
    if (soma + moedas[i] <= valor) {
      soma += moedas[i];
      printf("%d ", moedas[i]);
    } else {
      i--;
    }
  }

  if (soma == valor)
    printf("\nValor encontrado\n");
  else
    printf("\nNão encontrei a solução\n");
}
