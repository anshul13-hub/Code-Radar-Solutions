#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1) {
        return 0;  // Not prime
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;  // Not prime
        }
    }
    return 1;  // Prime
}

int main() {
    int t;  // Number of test cases
    scanf("%d", &t);  // Read the number of test cases

    // Loop through each test case
    while (t--) {
        int num;
        scanf("%d", &num);  // Read the number to check
        
        // Check if the number is prime and print the result
        if (isPrime(num)) {
            printf("Prime\n");
        } else {
            printf("Not Prime\n");
        }
    }

    return 0;  // Indicate successful execution
}
