#include <stdio.h>
#include "sapo.h"

void sapo(int *posicoes, int n, int salto) {
  printf("%d ",posicoes[0]);
  int ultima_pos = posicoes[0];

  for (int i = 1; i < n; i++) {
    if (posicoes[i] - posicoes[i - 1] > salto) {
      printf("\nNão encontrei a solução\n");
    }
    if (posicoes[i] - ultima_pos > salto) {
      ultima_pos = posicoes[i - 1];
      printf("%d ", posicoes[i - 1]);
    }
  }
  
  if (ultima_pos != posicoes[n - 1]) {
    printf("%d ", posicoes[n - 1]);
  }

  printf("\nSolução encontrada!\n");
}
