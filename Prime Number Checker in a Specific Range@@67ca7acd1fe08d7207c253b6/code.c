#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1) {
        return 0;  // Not prime
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;  // Not a prime number
        }
    }
    return 1;  // Prime number
}

// Function to print prime numbers in the range [a, b]
void printPrimesInRange(int a, int b) {
    int foundPrime = 0;

    for (int i = a; i <= b; i++) {
        if (isPrime(i)) {
            printf("%d ", i);  // Printing the prime number i
            foundPrime = 1;
        }
    }

    if (!foundPrime) {
        printf("No prime numbers \n");
    }
}

int main() {
    int a, b;

    // Read input values for the range
    printf("Enter the range (a b): ");
    if (scanf("%d %d", &a, &b) != 2 || a > b) {
        printf("Invalid input. Please ensure that a <= b and both are integers.\n");
        return 1;
    }

    // Call the function to print primes in the range
    printPrimesInRange(a, b);

    return 0;
}
