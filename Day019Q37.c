// Q37: Write a program to find the LCM of two numbers.

#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int num1, num2;
    printf("Enter two number: ");

    scanf("%d %d", &num1, &num2);

    printf("LCM is:%d\n", lcm(num1, num2));

    return 0;
}
