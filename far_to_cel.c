#include <stdio.h>

int main() {
    float fahrenheit, celsius;

    // Taking input from the user
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    // Conversion formula: C = (F - 32) * 5/9
    celsius = (fahrenheit - 32) * 5 / 9;

    // Displaying the result
    printf("Temperature in Celsius: %.2f°C\n", celsius);

    return 0;
}
