//Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

#include <stdio.h>

int main(){

    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    if (n>0){
        printf("Number %d is Positive\n",n);
    }else if (n<0){
        printf("Number %d is Negative\n",n);
    }else {
        printf("Number is Zero\n");
    }

    return 0;

}