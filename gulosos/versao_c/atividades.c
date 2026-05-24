#include "atividades.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int id;     
    int inicio; 
    int fim;    
} Atividade;

int compara_termino(const void *a, const void *b) {
    Atividade *atvA = (Atividade *)a;
    Atividade *atvB = (Atividade *)b;
    
    return atvA->fim - atvB->fim;
}

void atividades(int *s, int *t, int n) {
  Atividade *atv = (Atividade *)malloc(n * sizeof(Atividade));
  for (int i = 0; i < n; i++) {
    atv[i].id = i + 1; 
    atv[i].inicio = s[i];
    atv[i].fim = t[i];
  }

  qsort(atv, n, sizeof(Atividade), compara_termino);
  printf("Atividades selecionadas (IDs): ");

  printf("%d ", atv[0].id); 
  int j = 0; 
  for (int i = 1; i < n; i++) {
    if (atv[i].inicio >= atv[j].fim) {
      printf("%d ", atv[i].id);
      j = i; 
    }
  }
  printf("\n");

  free(atv);
}
