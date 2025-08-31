#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double discriminant, root1, root2, realPart, imagPart;

    // Input coefficients
    printf("Enter coefficients a, b, and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    // Calculate the discriminant
    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        // Two real and different roots
        root1 = (-b + (sqrt(discriminant)) )/ (2 * a);
        root2 = (-b - (sqrt(discriminant))) / (2 * a);
        printf("Roots are real and different: %.0f, %.0f\n", root1, root2);
    } else if (discriminant == 0) {
        // Two real and same roots
        root1 = -b / (2 * a);
        printf("Roots are real and same: %.0f\n", root1);
    } else {
        // Complex roots
        realPart = -b / (2 * a);
        imagPart = (sqrt(-discriminant)) / (2 * a);
        printf("Roots are complex\n");
    }

    return 0;
}
