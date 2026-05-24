#include <stdio.h>
#include "caminhoneiro.h"


void caminhoneiro(int *p, int n, int C) {
  printf("Paradas nos postos (indices): ");
  
  int ultima_parada = p[0]; 
  for (int i = 1; i < n; i++) {
    if (p[i] - p[i - 1] > C) {
      printf("\nViagem impossível! Faltou gasolina antes do posto %d.\n", i);
      return;
    }

    if (p[i] - ultima_parada > C) {
      ultima_parada = p[i - 1];
      printf("%d ", i - 1); 
    }
  }
  
  printf("\nDestino alcancado!\n");
}
