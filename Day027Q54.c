// Q54: Write a program to print the following pattern:

// *

// ***

// *****
// *******
// ***

// *

#include <stdio.h>

int main(){

    int n = 4,m = 2;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<2*i+1;j++){
            printf("*");
        }
        if(i==2)
            printf("\n");
        else if(i==3)
            break;
        else    
            printf("\n\n");
    }
    printf("\n");
    for(int i = m;i>0;i--){
        for(int j = 2*i-1;j>0;j--){
            printf("*");
        }
        printf("\n\n");
    }

    return 0;
}