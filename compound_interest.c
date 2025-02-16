#include <stdio.h>
#include <math.h> // For pow() function

int main() {
    float principal, rate, time, compoundInterest, amount;

    // Taking input from the user
    printf("Enter Principal amount: ");
    scanf("%f", &principal);

    printf("Enter Annual Interest Rate (in percentage): ");
    scanf("%f", &rate);

    printf("Enter Time (in years): ");
    scanf("%f", &time);

    // Compound Interest formula: A = P * (1 + R/100)^T
    amount = principal * pow((1 + rate / 100), time);
    compoundInterest = amount - principal;

    // Displaying the result
    printf("Compound Interest = %.2f\n", compoundInterest);
    printf("Total Amount = %.2f\n", amount);

    return 0;
}
