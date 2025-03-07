#include <stdio.h>

// Function to generate and print the Fibonacci series
void fibonacciSeries(int N) {
    // Handle the edge case for when n is 1 or less
    if (N >= 1) {
        printf("@");  // First term is "@"
    }

    if (N >= 2) {
        printf(" 1");  // Second term is "1"
    }

    int first = 0, second = 1, next;

    // Generate Fibonacci numbers starting from the 3rd term
    for (int i = 3; i <= N; i++) {
        next = first + second;  // Fibonacci rule: next = sum of the previous two
        printf(" %d", next);     // Print the next Fibonacci number
        first = second;          // Update first for the next iteration
        second = next;           // Update second for the next iteration
    }

    printf("\n");  // Move to the next line after printing the series
}

int main() {
    int n;

    // Read the number of terms
    scanf("%d", &n);

    // Validate input
    if (n <= 0) {
        printf("Invalid input\n");
        return 0;
    }

    // Call the fibonacciSeries function
    fibonacciSeries(n);

    return 0;
}