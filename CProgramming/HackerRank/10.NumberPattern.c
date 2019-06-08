#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define findmin(m,n)((m < n) ? (m) : (n));

int main() {
  int n, row, col, min, len;
  scanf("%d", &n);
  len = 2 * n - 1;
  for (row = 0; row < len; row++) {
    for (col = 0; col < len; col++) {
      min = findmin(row, col);
      min = findmin(min, len - row - 1);
      min = findmin(min, len - col - 1);
      printf("%d ", n-min);
    }
    printf("\n");
  }
  return 0;
}





