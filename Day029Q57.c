// Q57: Find the sum of array elements.

#include <stdio.h>

int main(){

    int n,sum = 0;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int arr[n];

    printf("Enter values in array: ");

    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int i = 0;i<n;i++){
        sum += arr[i];
    }

    printf("Sum is:%d\n",sum);

    return 0;
}