#include <stdio.h>

int main() {
    float real1, imag1, real2, imag2, realSum, imagSum;

    // Taking input for the first complex number
    printf("Enter real and imaginary parts of the first complex number: ");
    scanf("%f %f", &real1, &imag1);

    // Taking input for the second complex number
    printf("Enter real and imaginary parts of the second complex number: ");
    scanf("%f %f", &real2, &imag2);

    // Adding the real and imaginary parts separately
    realSum = real1 + real2;
    imagSum = imag1 + imag2;

    // Displaying the result
    printf("Sum of the complex numbers: %.2f + %.2fi\n", realSum, imagSum);

    return 0;
}
