#include <stdio.h>

int main() {
    int N, k;

    // Input the size of the array
    scanf("%d", &N);
    
    // If the array size is 1 or less, we can't rotate it


    int arr[N];

    // Input the array elements
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the number of steps to rotate
    scanf("%d", &k);

    // Handle case where k >= N
    k = k % N;  // No need to rotate more than N times

    // Temporary array to store last k elements
    int temp[k];

    // Step 1: Store the last k elements in temp
    for (int i = 0; i < k; i++) {
        temp[i] = arr[N - k + i];
    }

    // Step 2: Shift the rest of the array to the right by k positions
    for (int i = N - 1; i >= k; i--) {
        arr[i] = arr[i - k];
    }

    // Step 3: Copy the elements from temp to the front of the array
    for (int i = 0; i < k; i++) {
        arr[i] = temp[i];
    }

    // Output the rotated array
    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
