#include <stdio.h>
#include "troco.h"
#include "mochila.h"
#include "sapo.h"
#include "caminhoneiro.h"
#include "atividades.h"

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
  printf("\n");

  int posicoes[8] = {1,2,3,4,5,6,7,8};
  int salto = 1;
  sapo(posicoes, 8, salto);

  int postos[] = {0, 50, 90, 150, 180, 240, 290};
  int n_postos = 7; 
  int autonomia = 100; 
  caminhoneiro(postos, n_postos, autonomia);

  int s[] = {1, 3, 0, 5, 8, 5};
  int t[] = {2, 4, 6, 7, 9, 9};
  int n_atividades = 6;
  atividades(s, t, n_atividades);
  
  return 0;
}
