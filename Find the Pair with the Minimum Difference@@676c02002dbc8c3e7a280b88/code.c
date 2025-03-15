#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;
    
    // Input the size of the array
    scanf("%d", &N);

    // If there's only one element, return -1
    if (N <= 1) {
        printf("-1\n");
        return 0;
    }

    int arr[N];

    // Input the array elements
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize the minimum difference as a large number
    int min_diff = __INT_MAX__;
    int first = -1, second = -1;

    // Brute-force comparison of each pair
    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            int diff = abs(arr[i] - arr[j]);
            if (diff < min_diff) {
                min_diff = diff;
                first = arr[i];
                second = arr[j];
            }
        }
    }

    // Ensure first is smaller than second for ascending order
    if (first > second) {
        int temp = first;
        first = second;
        second = temp;
    }

    // Output the pair in ascending order
    printf("%d %d\n", first, second);

    return 0;
}
