// Q30: Write a program to reverse a given number.

#include <stdio.h>

int main(){

    int n,m;
    int rev = 0;
    printf("Enter the number n: ");
    scanf("%d",&n);
    m =n;

    while(m>0){
        int digit = m%10;
        rev = rev*10+digit;
        m = m/10;
    }
    printf("Reverse of %d is: %d\n",n,rev);

    return 0;

}