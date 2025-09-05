//Q1: Write a program to input two numbers and display their sum.

#include <stdio.h>

int main(){
    int a,b,sum;

    printf("Enter first numbers: ");

    scanf("%d",&a);

    printf("Enter second number: ");

    scanf("%d",&b);

    sum = a+b;
    printf("Sum of two number is: %d\n",sum);
    
    return 0;
}
