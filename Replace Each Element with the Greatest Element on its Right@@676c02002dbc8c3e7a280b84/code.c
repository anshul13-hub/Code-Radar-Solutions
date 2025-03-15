#include <stdio.h>

int main() {
    int N;

    // Read the size of the array
    scanf("%d", &N);

    int arr[N];

    // Read the array elements
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // Variable to store the greatest element to the right
    int maxRight = -1;

    // Traverse the array from right to left
    for (int i = N - 1; i >= 0; i--) {
        // Store the current element to be replaced
        int current = arr[i];
        
        // Replace the element with the greatest element to its right
        arr[i] = maxRight;

        // Update maxRight for the next iteration
        if (current > maxRight) {
            maxRight = current;
        }
    }

    // Output the modified array
    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}