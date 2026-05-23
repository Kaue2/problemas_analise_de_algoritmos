#include <stdio.h>
#include "lis_bottomup.h"
#include "lis_recursivo.h"
#include "lis_topdown.h"

int main() {
  int vec[8] = {9, 7, 1, 3, 8, 11, 12, 4};

  printf("LIS recursivo: %d\n", find_lis_recursivo(8, vec));  
  printf("LIS topdown: %d\n", find_lis_topdown(8, vec));
  printf("LIS bottomup: %d\n", lis_bottomup(8, vec));
}
