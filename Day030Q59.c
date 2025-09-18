// Q59: Count even and odd numbers in an array.

#include <stdio.h>

int main(){

    int l,c_e = 0,c_o = 0;
    printf("Enter length of array: ");
    scanf("%d",&l);
    int arr[l];

    printf("Enter %d element in array:",l);
    for(int i = 0;i<l;i++){
        scanf("%d",&arr[i]);
    }

    for(int i = 0;i<l;i++){
        if(arr[i]%2==0)
            c_e++;
        else   
            c_o++;
    }
    printf("Even: %d , Odd: %d\n",c_e,c_o);

    return 0;
}