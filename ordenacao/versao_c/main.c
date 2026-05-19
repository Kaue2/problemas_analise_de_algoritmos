#include <stdio.h>
#include "bubble_sort.h"
#include "heap_sort.h"
#include "insertion_sort.h"
#include "merge_sort.h"
#include "quick_sort.h"
#include "radix_sort.h"
#include "selection_sort.h"
#include "shell_sort.h"
#include "bucket_sort.h"
#include "radix_sort.h"

void imprime_vetor(int v[], int n) {
  for (int i = 0; i < n; i++) {
    printf("%d ", v[i]);
  }
  printf("\n");
}

int main(void) {
  int v1[5] = {5,4,3,2,1,};
  bubble_sort(v1, 5);
  imprime_vetor(v1, 5);

  int v2[5] = {5,4,3,2,1};
  insertion_sort(v2, 5);
  imprime_vetor(v2, 5);

  int v3[5] = {5,4,3,2,1};
  selection_sort(v3, 5);
  imprime_vetor(v3, 5);

  int v4[5] = {5,4,3,2,1};
  shell_sort(v4, 5);
  imprime_vetor(v4, 5);
  
  int v5[8] = {8,7,6,5,4,3,2,1};
  quick_sort(v5, 0, 7);
  imprime_vetor(v5, 8);

  int v6[8] = {8,7,6,5,4,3,2,1};
  merge_sort(v6, 0, 7);
  imprime_vetor(v6, 8);

  int v7[16] = {13, 1, 2, 7, 45, 2, 15, -1 , 33, 21, 10, -3, -2 , -2, 17, 13};
  heap_sort(v7, 16);
  imprime_vetor(v7, 16);

  int v8[16] = {16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1};
  bucket_sort(v8,  16);
  imprime_vetor(v8, 16);

  int v9[8] = {170, 45, 75, 90, 802, 24, 2, 66};
  radix_sort(v9, 8);
  imprime_vetor(v9, 8);
  
  return 0;
}
