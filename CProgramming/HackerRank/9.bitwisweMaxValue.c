#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  
  int maxValueAnd=0,maxValueOr=0, maxValueXor=0;
  //Write your code here.
  for(int i=1;i<n;i++){
      for(int j=i+1;j<=n;j++){
        if ((i & j) < k && (i & j) > maxValueAnd) {
          maxValueAnd = (i & j);
          }
          if ((i | j) < k && (i | j) >maxValueOr) {
            maxValueOr=(i|j);
          }
          if ((i ^ j) < k && (i^j)>maxValueXor){
            maxValueXor=(i^j);
          }
      }
  }
  printf("%d\n%d\n%d",maxValueAnd,maxValueOr,maxValueXor);
}
int main() { 
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}

