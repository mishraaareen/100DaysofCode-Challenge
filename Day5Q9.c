//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

#include <stdio.h>

int main(){

    float sim,p,r,t;

    printf("Enter principal value: ");
    scanf("%f",&p);
    printf("Enter rate of intrest: ");
    scanf("%f",&r);
    printf("Enter time period: ");
    scanf("%f",&t);

    sim = (p*r*t)/100;
    
    printf("Simple intrest is:%f\n",sim);
    
    return 0;
}