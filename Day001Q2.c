//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

#include <stdio.h>

int main(){

    int a,b,s,d,p,q;

    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);

    s = a+b;
    d = a-b;
    p = a*b;

    if( b==0){
        printf("Zero Divison Error\n");
    }else{
        q = a/b;
        printf("Quotient of two number is:%d\n",q);
    }

    printf("Sum of two number is:%d\n",s);
    printf("Difference of two number is:%d\n",d);
    printf("Product of two number is:%d\n",p);
    

    return 0;

}
