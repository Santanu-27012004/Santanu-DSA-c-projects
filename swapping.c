#include <stdio.h>

int main() {
    float num1, num2, temp;

    // Taking input from the user
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    // Swapping numbers using a temporary variable
    temp = num1;
    num1 = num2;
    num2 = temp;

    // Displaying swapped values
    printf("After swapping:\n");
    printf("First number = %.2f\n", num1);
    printf("Second number = %.2f\n", num2);

    return 0;
}
