#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

  int n, i, remainder, sum=0;
  scanf("%d", &n);
  // Complete the code to calculate the sum of the five digits on n.
  for (i = n; i >= 0; i--){
      remainder=n%10;
      sum=sum+remainder;
      n=n/10;
  }
  printf("%d",sum);
    return 0;
}


