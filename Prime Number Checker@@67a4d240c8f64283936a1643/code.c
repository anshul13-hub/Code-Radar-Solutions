#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1) {
        return 0; // Not prime
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; // Not prime
        }
    }
    return 1; // Prime
}

int main() {
    int t;
    scanf("%d", &t); // Read the number of test cases

    while (t--) {
        int num;
        scanf("%d", &num); // Read the number to check
        printf("%d\n", isPrime(num)); // Print 1 if prime, 0 if not
    }

    return 0;
}