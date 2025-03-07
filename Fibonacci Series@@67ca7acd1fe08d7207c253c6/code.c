#include <stdio.h>

// Function to generate and print the Fibonacci series
void fibonacciSeries(int N) {
    int first = 0, second = 1, next;

    // Special cases for n = 1
    if (N == 1) {
        printf("%d", first);
        return;
    }

    // Print the first two terms
    printf("%d %d", first, second);

    // Print the remaining terms
    for (int i = 3; i <= N; i++) {
        next = first + second;
        printf(" %d", next);
        first = second;
        second = next;
    }

    printf("\n");
}

int main() {
    int N;

    // Read the number of terms
    scanf("%d", &N);

    // Validate input
    if (N <= 0) {
        printf("Invalid input\n");
        return 0;
    }

    // Call the fibonacciSeries function
    fibonacciSeries(N);

    return 0;
}