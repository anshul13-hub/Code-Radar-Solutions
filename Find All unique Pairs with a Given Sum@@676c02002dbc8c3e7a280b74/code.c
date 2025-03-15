#include <stdio.h>

int main() {
    int N, T;
    scanf("%d", &N);

    int arr[N];
    
    // Input array elements
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the target sum T
    scanf("%d", &T);

    // Iterate through the array to find pairs
    for (int i = 0; i < N - 1; i++) {
        // Skip if the current element is the same as the previous one
        if (i > 0 && arr[i] == arr[i - 1]) {
            continue;
        }
        for (int j = i + 1; j < N; j++) {
            if (arr[i] + arr[j] == T) {
                printf("%d %d\n", arr[i], arr[j]);
            }
        }
    }

    return 0;
}
