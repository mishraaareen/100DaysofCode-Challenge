//Q6: Write a program to swap two numbers using a third variable.

#include <stdio.h>

int main(){

    int a,b,c;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);

    c = a;
    a = b;
    b = c;

    printf("Value of a after swapping:%d\n",a);
    printf("Value of b after swapping:%d\n",b);

    return 0;
}