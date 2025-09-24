// Q63: Merge two arrays.

#include <stdio.h>

int main(){

    int l1,l2,l3;
    printf("Enter length of 1st array: ");
    scanf("%d",&l1);
    printf("Enter length of 2nd array: ");
    scanf("%d",&l2);
    l3 = l1+l2;
    int a[l1];
    int b[l2];
    int c[l3];
    int counter = 0;

    printf("Enter %d element in 1st array: ",l1);
    for(int i = 0;i<l1;i++){
        scanf("%d",&a[i]);
    }

    printf("Enter %d element in 2nd array: ",l2);
    for(int i = 0;i<l2;i++){
        scanf("%d",&b[i]);
    }

    for(int i = 0;i<l1;i++){
        c[counter] = a[i];
        counter++;
    }

    for(int i = 0;i<l2;i++){
        c[counter] = b[i];
        counter++;
    }

    for(int i = 0;i<l3;i++){
        printf("%d ",c[i]);
    }


    return 0;

}