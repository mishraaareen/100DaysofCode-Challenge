//Q13: Write a program to input a year and check whether it is a leap year or not using conditional statements.

#include <stdio.h>

int main(){
    
    int y;
    printf("Enter year: ");
    scanf("%d",&y);

    if (y%4==0 && y%100 !=0){
        printf("%d is a leap year\n",y);
    }else if(y%400==0){
        printf("%d is  leap year\n",y);
    }else{
        printf("%d is not a leap year\n",y);
    }

    return 0;
}