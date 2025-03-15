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
    scanf("%d %d"&a,&b);

    
    

    
    printPrimesInRange(a, b);

    return 0;
}
