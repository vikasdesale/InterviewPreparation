#include <stdio.h>
#include <stdlib.h>
int compare(int  num1, int num2){
    if(num1<num2)
      return 1;
    else 
     return -1;
}

int main()
{
    int num, *arr, i,j,temp;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }


    /* Write the logic to reverse the array. */
    for(i=0;i<num;i++){
        for(j=i+1;j<num;j++){
           if(compare(arr[i],arr[j])){
               temp=arr[i];
               arr[i]=arr[j];
               arr[j]=temp;
           }
        }
    }
    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}


