//Q5: Write a program to convert temperature from Celsius to Fahrenheit.

#include <stdio.h>

int main(){
    
    float c,f;
    printf("Enter temperature in celsius: ");
    scanf("%f",&c);
    
    f = (c*9/5)+32;

    printf("Temperature in Fahrenheit is:%f\n",f);
    return 0;

}