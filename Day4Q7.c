//Q7: Write a program to swap two numbers without using a third variable.

#include <stdio.h>

int main(){

    int a,b;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter Second number: ");
    scanf("%d",&b);

    a = a+b;
    b = a-b;
    a = a-b;
    
    printf("Value of a after swapping:%d\n",a);
    printf("Value of b after swapping:%d\n",b);
    return 0;
    
}
