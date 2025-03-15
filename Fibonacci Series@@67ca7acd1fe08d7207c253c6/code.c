#include <stdio.h>

// Function to print Fibonacci series up to the nth term
void printFibonacciSeries(int n) {
    int a = 0, b = 1, nextTerm;

    if (n <= 0) {
        return;
    }

    

    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            printf("%d ", a);  // First term
            continue;
        }
        if (i == 2) {
            printf("%d ", b);  // Second term
            continue;
        }
        nextTerm = a + b;  // Next term is the sum of the previous two
        a = b;              // Update a and b for the next iteration
        b = nextTerm;

        printf("%d ", nextTerm);  // Print the next Fibonacci number
    }
    printf("\n");
}

