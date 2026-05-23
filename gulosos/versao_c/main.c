#include "troco.h"
#include "mochila.h"
#include <stdio.h>

int main(void) {
  int vec[3] = {1, 2, 5};
  troco(vec, 3, 12);

  int valores[8] = {60,120, 55, 80, 72, 80, 95, 125};
  int pesos[8] = {10, 40, 20, 35, 26, 20, 15, 21};
  float resultado[8] = {0,0,0,0,0,0,0,0};
  mochila(pesos, valores, 8, 45, resultado);

  printf("\nResultado da mochila:\n");
  for (int i = 0; i < 8; i++) {
    printf("%f ", resultado[i]);
  }
  
  return 0;
}
