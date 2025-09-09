// Q38: Write a program to find the sum of digits of a number.

#include <stdio.h>

int main(){
    int n,sum =0,m;
    printf("Enter a number: ");
    scanf("%d",&n);
    m = n;

    while(m>0){
        int digit = m%10;
        sum += digit;
        m /=10;
    }
    printf("Sum of Digit is:%d\n",sum);
    return 0;
}