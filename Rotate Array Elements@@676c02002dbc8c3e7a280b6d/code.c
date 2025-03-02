#include <stdio.h>

int main() {
    int N, K;

    // Read the number of elements and the number of positions to rotate
    scanf("%d", &N);
    int arr[N];
    
    // Read the elements of the array
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // Read the value of K and normalize it (K % N to handle cases where K > N)
    scanf("%d", &K);
    K = K % N;

    // Step 1: Reverse the entire array
    for (int i = 0; i < N / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[N - 1 - i];
        arr[N - 1 - i] = temp;
    }

    // Step 2: Reverse the first K elements
    for (int i = 0; i < K / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[K - 1 - i];
        arr[K - 1 - i] = temp;
    }

    // Step 3: Reverse the remaining N - K elements
    for (int i = K; i < (N + K) / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[N - 1 - (i - K)];
        arr[N - 1 - (i - K)] = temp;
    }

    // Print the rotated array
    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
