// Q36: Write a program to find the HCF (GCD) of two numbers.

#include <stdio.h>

int main(){

    int n,m,h=0;
    printf("Enter two numbers: ");
    scanf("%d %d",&n,&m);

    for(int i = 1;i<=n,i<=m;i++){
        if(n%i==0 && m%i==0){
            h = i;
        }
    }
    printf("%d",h);
    return 0;
}