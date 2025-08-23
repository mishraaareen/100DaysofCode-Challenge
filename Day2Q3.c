//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include <stdio.h>

int main(){

    float l,b,area,peri;
    printf("Enter length of the rectangle: ");
    scanf("%f",&l);
    printf("Enter breadth of the rectangel: ");
    scanf("%f",&b);

    area = l*b;
    peri = 2*(l+b);
    printf("Area of the rectangle is:%f\n",area);
    printf("Perimeter of recatangle is:%f\n",peri);

    return 0;

}