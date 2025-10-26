// Q100: Print all sub-strings of a string.

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    int n = strlen(str);
    int first = 1;  

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
           
            for (int k = i; k <= j; k++) {
                printf("%c", str[k]);
            }
            if (i != n - 1 || j != n - 1)
                printf(",");
        }
    }

    printf("\n");
    return 0;
}
