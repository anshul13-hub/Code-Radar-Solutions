#include <stdio.h>

// Function to generate and print the Fibonacci series
void fibonacciSeries(int N) {
    int first = 0, second = 1, next;

    // Special case for N = 1
    if (N == 1) {
        printf("%d\n", first);
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
    scanf("%d", &N);
    fibonacciSeries(N);

    return 0;
}
