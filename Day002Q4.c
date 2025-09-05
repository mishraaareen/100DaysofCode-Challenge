//Q4: Write a program to calculate the area and circumference of a circle given its radius.

#include <stdio.h>


int main(){

    float r,area, cir;
    printf("Enter radius of circle: ");
    scanf("%f",&r);

    area = 3.14*r*r;
    cir = 2*3.14*r;
    printf("Area of circle is:%f\n",area);
    printf("Circumference of circle:%f\n",cir);

    return 0;

}
