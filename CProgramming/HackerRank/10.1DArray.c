#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int sum(int arr[],int n){
     int total=0;
    for(int i=0;i<n;i++)
     {
         total=total+ arr[i];
     }
     return total;
}
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    int *arr;
    scanf("%d\n",&n); 
    arr = (int*)malloc(n * sizeof(int));  
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    printf("%d",sum(arr,n));
    return 0;
}


