#include <stdio.h>
#include "fibo_recrusivo.h"
#include "fibo_topdown.h"
#include "fibo_bottomup.h"

int main(void) {

  printf("Fibo de 2: %d\n", fibo_recursivo(2));
  printf("Fibo de 3: %d\n", fibo_recursivo(3));
  printf("Fibo de 4: %d\n", fibo_recursivo(4));
  printf("Fibo de 20: %d\n", fibo_recursivo(20));

  printf("Fibo topdown de 2: %d\n", fibo_topdown(2));
  printf("Fibo topdown de 3: %d\n", fibo_topdown(3));
  printf("Fibo topdown de 4: %d\n", fibo_topdown(4));
  printf("Fibo topdown de 20: %d\n", fibo_topdown(20));
  
  printf("Fibo bottomup de 2: %d\n", fibo_bottomup(2));
  printf("Fibo bottomup de 3: %d\n", fibo_bottomup(3));
  printf("Fibo bottomup de 4: %d\n", fibo_bottomup(4));
  printf("Fibo bottomup de 20: %d\n", fibo_bottomup(20));
  return 0;
}
