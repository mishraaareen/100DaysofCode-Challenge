// Q45: Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

#include <stdio.h>

int main(){

    int n;
    float sum = 0,N = 2,D = 3;
    printf("Enter n number of terms: ");
    scanf("%d",&n);

    for(int i = 1; i<=n;i++){
        sum += (N/D);
        N +=2;
        D +=4;
    }

    printf("Sum is:%.2f\n",sum);

    return 0;
}