//Q28: Write a program to print the product of even numbers from 1 to n.

#include <stdio.h>

int main(){

    int n,p = 1;
    printf("Enter n: ");
    scanf("%d",&n);

    for(int i = 1;i<=n;i++){
       if (i%2==0){
        p = p*i;
       }
        
    }
    printf("Product of first %d even numbers is:%d\n",n ,p);

    return 0;
}