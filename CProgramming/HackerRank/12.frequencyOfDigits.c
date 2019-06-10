#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */     
    int n;
    char *arr=(char *)malloc(100*sizeof(char));
    int countArr[10]={0};
    scanf("%s",arr);
    for(int i=0;i<strlen(arr);i++){
      if (arr[i] >= '0' && arr[i] <= '9') {
        countArr[(int)arr[i] - '0']++;
      }
    }
      for (int i = 0; i <= 9; i++) {
        printf("%d ", countArr[i]);

    }
    return 0;
}

