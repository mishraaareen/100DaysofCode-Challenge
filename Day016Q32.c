// Q32: Write a program to check if a number is a palindrome.

#include <stdio.h>

int main(){

    int n,m,rev = 0; 
    printf("Enter a number: ");
    scanf("%d",&n);
    m = n;

    while(m>0){
        int digit = m%10;
        rev = rev*10+digit;
        m = m/10;
    }
    if (n==rev){
        printf("%d is a Palindrome Number\n",n);
    }else{
        printf("%d is not a Palindrome Number\n",n);
    }

    return 0;
}