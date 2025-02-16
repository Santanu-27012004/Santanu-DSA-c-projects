#include <stdio.h>

int main() {
    float principal, rate, time, simpleInterest;

    // Taking input from the user
    printf("Enter Principal amount: ");
    scanf("%f", &principal);
    
    printf("Enter Annual Interest Rate (in percentage): ");
    scanf("%f", &rate);
    
    printf("Enter Time (in years): ");
    scanf("%f", &time);

    // Simple Interest formula: SI = (P × R × T) / 100
    simpleInterest = (principal * rate * time) / 100;

    // Displaying the result
    printf("Simple Interest = %.2f\n", simpleInterest);

    return 0;
}
