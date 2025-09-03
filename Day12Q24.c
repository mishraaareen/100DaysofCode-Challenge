// Q24: Write a program to calculate an electricity bill based on units consumed.

#include <stdio.h>

int main(){

    float u,b;
    printf("Enter unit consumed: ");
    scanf("%f",&u);

    if(u<=50){
        b = u*5;
        printf("Bill is:%.2f\n",b);
    }else if(u<=150){
        b = u*6.33;
        printf("Bill is:%.2f\n",b);
    }else{
        b = u*8.8;
        printf("Bill is:%.2f\n",b);
    }

    return 0;

}