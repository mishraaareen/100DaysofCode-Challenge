// Q40: Write a program to find the 1’s complement of a binary number and print it.
#include <stdio.h>

int main() {
    int binary, temp;
    int digit;

    printf("Enter a binary number: ");
    scanf("%d", &binary);

    printf("1's complement: ");

    temp = binary;
    
    while (temp > 0) {
        digit = temp % 10;
        if (digit == 0)
            printf("1");
        else if (digit == 1)
            printf("0");
        else {
            printf("\nInvalid binary number.\n");
            return 1;
        }
        temp /= 10;
    }

    printf("\n");
    return 0;
}
