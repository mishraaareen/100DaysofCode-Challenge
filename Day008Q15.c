/*Q15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.*/

#include <stdio.h>
#include <ctype.h>

int main(){
    
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);

    if (!isalnum(ch) && !isspace(ch)){
        printf("%c is a special character\n",ch);

    }else{
        if (isupper(ch)){
        printf("%c is a uppercase charcater\n",ch);

        }
        if (islower(ch)){
        
            printf("%c is lowercase character\n",ch);
        }


        if (isdigit(ch)){
            printf("%c is a digit\n",ch);
        }
    }

    return 0;
}
