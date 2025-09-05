// Q31: Write a program to take a number as input and print its equivalent binary representation.

#include <stdio.h>

void toBinary(int n) {
    if (n == 0) {
        return;
    }
    toBinary(n / 2);     
    printf("%d", n % 2);    
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("0");
    } else {
        toBinary(num);
    }

    printf("\n");
    return 0;
}
