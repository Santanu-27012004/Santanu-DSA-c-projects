#include <stdio.h>

int main() {
    float num1, num2, product;

    // Taking input from user
    printf("Enter two floating-point numbers: ");
    scanf("%f %f", &num1, &num2);

    // Multiplication
    product = num1 * num2;

    // Display the result
    printf("Product = %.2f\n", product);

    return 0;
}
