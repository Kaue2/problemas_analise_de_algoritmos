#include "fibo_recrusivo.h"

int fibo_recursivo(int f) {
  if (f == 0 || f == 1 ) return 1;

  return fibo_recursivo(f - 1) + fibo_recursivo(f - 2);
}
