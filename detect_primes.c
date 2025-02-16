#include <stdio.h>

int isPrime(int num) {
    if (num < 2) return 0; // 0 and 1 are not prime
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0; // Not a prime number
    }
    return 1; // Prime number
}

int main() {
    int n;

    // Taking input from the user
    printf("Enter the value of N: ");
    scanf("%d", &n);

    // Printing prime numbers from 1 to N
    printf("Prime numbers from 1 to %d are: ", n);
    for (int i = 1; i <= n; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
