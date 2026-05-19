int get_max(int* v, int n) {
  int max = v[0];
  for (int i = 1; i < n; i++)
    if (v[i] > max) max = v[i];

  return max;
}

void counting_sort_for_digit(int* v, int n, int exp) {
  int output[n];
  int contagem[10] = {0};

  for (int i = 0; i < n; i++)
    contagem[(v[i] / exp) % 10]++;

  for (int i = 1; i < 10; i++)
    contagem[i] += contagem[i - 1];

  for (int i = n - 1; i >= 0; i--){
    int digito = (v[i] / exp) % 10;
    output[contagem[digito] - 1] = v[i];
    contagem[digito]--;
  }

  for (int i = 0; i < n; i++)
    v[i] = output[i];
}

void radix_sort(int* v, int n) {
  int max = get_max(v, n);

  for (int exp = 1; max / exp > 0; exp *= 10) {
    counting_sort_for_digit(v, n, exp);
  }
}
