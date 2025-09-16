// Q56: Read and print elements of a one-dimensional array.

#include <stdio.h>

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);  

    int arr[n];  

    printf("Enter Elements of array\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    for(int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i != n - 1) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}
