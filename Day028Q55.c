// Q55: Write a program to print all the prime numbers from 1 to n.

#include <stdio.h>

int prime(int);

int prime(int n){
    int m = n,count = 0;
    for(int i = 1;i<=m;i++){
        if(m%i==0)
            count++;
    }
    if( count == 2)
        return 1;
    else
        return 0;
}

int main(){

    int n;
    printf("Enter n: ");
    scanf("%d",&n);

    for(int i = 1;i<=n;i++){
        if(prime(i))
            printf("%d ",i);
    }
    printf("\n");

    return 0;
}