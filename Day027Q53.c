// Q53: Write a program to print the following pattern:
// *
// ***
// *****
// *******
// *********
// *******
// *****
// ***
// *

#include <stdio.h>

int main(){

    int n = 5,m = 4;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<2*i+1;j++){
            printf("*");
        }
        printf("\n");
    }

    for(int i = m;i>0;i--){
        for(int j = 2*i-1;j>0;j--){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}