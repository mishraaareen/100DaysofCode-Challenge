// Q24: Write a program to calculate an electricity bill based on units consumed.

#include <stdio.h>

int main(){

    float u,b;
    printf("Enter unit consumed: ");
    scanf("%f",&u);

    if(u<=100){
        b = u*5;
        printf("Bill is:%.2f\n",b);
    }else if(u<=200){
        b = u*7;
        printf("Bill is:%.2f\n",b);
    }else if(u<=300){
        b = u*10;
        printf("Bill is:%.2f\n",b);
    }else{
        b = u*12;
        printf("Bill is:%.2f\n",b);
    }

    return 0;

}
