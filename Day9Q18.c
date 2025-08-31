//Q18: Write a program to assign grades based on a percentage input.

#include <stdio.h>
int main(){

    float p;
    printf("Enter your percentage: ");
    scanf("%f",&p);

    if (p>90){
        printf("Grade A\n");

    }
    else if(p>80 && p<=90){
        printf("Grade B\n");
    }
    else if(p>=70 && p<80){
        printf("Grade C\n");
    }
    else if(p>=60 && p<70){
        printf("Grade D\n");
    }
    else if(p>=50 && p<60){
        printf("Grade F");
    }

    return 0;
}