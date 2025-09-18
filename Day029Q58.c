// Q58: Find the maximum and minimum element in an array.

#include <stdio.h>

int main(){

    int n,min = 10,max=0;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d values in array: ",n);

    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int i = 0;i<n;i++){
        if(arr[i]<min)
            min = arr[i];
        if(arr[i]>max)
            max = arr[i];
    }
    printf("Max:%d and Min:%d\n",max,min);

    return 0;
}