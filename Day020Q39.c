// Q39: Write a program to find the product of odd digits of a number.

#include <stdio.h>

int main(){

    int n,m,p=1,count=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    m=n;

    while(m>0){
        int digit = m%10;
        if(digit%2 !=0){
            p *= digit;
            count++;
        }
        m /=10;

    }
    if(count!=0)
        printf("%d\n",p);
    else
        printf("%c\n",'1');

    return 0;
}