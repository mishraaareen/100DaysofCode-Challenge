// Q60: Count positive, negative, and zero elements in an array.

#include <stdio.h>

int main(){

    int l,p = 0,n = 0,z = 0;
    printf("Enter length of array: ");
    scanf("%d",&l);
    int arr[l];

    printf("Enter %d elements in array: ",l);
    for(int i = 0;i<l;i++){
        scanf("%d",&arr[i]);
    }

    for(int i = 0;i<l;i++){
        if(arr[i]>0)
            p++;
        else if(arr[i]<0)
            n++;
        else
            z++;
    }

    printf("Positive: %d , Negative: %d and Zero: %d\n",p,n,z);

    return 0;
}