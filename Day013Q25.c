// Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

#include <stdio.h>

int main(){

    float f,s,r;
    char ch;
    
    printf("Enter 1st number 2nd number and symbol: ");
    scanf("%f %f %c",&f,&s,&ch);

    switch(ch){
        case '+':
            r = f+s;
            break;

        case '-':
            if(f>s){
                r = f-s;
            }else{
                r = s-f;
            }
            break;

        case '*':
            r = f*s;
            break;

        case '/':
            if(s == 0){
                printf("Zero Divison Error\n");
            }else{
                r = f/s;
            }
            break;
        case '%':
            r = (int)f % (int)s;
            break;
            
        default:
            printf("Wrong input\n");
    }
    printf("%.2f\n",r);
    
    return 0;
}
