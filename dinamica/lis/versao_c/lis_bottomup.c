#include "lis_bottomup.h"
#include "common.h"

int lis_bottomup(int n, int *vec) {
  int dp[n];
  for (int i = 0; i < n; i++) dp[i] = 1;

  int m = 1;

  for (int i = 1; i < n; i++) {
    for (int j = 0; j < i; j++)
      if (vec[j] < vec[i]) dp[i] = max(dp[i], dp[j] + 1);

    m = max(m, dp[i]);
  }
          
  return m;
}
