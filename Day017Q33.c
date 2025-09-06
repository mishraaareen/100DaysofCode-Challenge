// Q33: Write a program to check if a number is an Armstrong number.

#include <stdio.h>
#include <math.h>

int main(){

    int n,m,s=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    m = n;

    while(m>0){
        int digit = m%10;
        s += pow(digit,3);
        m /= 10;
    }
    if(n==s){
        printf("%d is a Armstrong Number\n",n);
    }else{
        printf("%d is not a Armstrong Number\n",n);
    }

    return 0;
}