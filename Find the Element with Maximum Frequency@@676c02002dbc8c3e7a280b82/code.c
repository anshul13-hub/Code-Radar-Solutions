#include <stdio.h>

int main() {
    int N;

    // Input size of the array
    scanf("%d", &N);

    int arr[N];
    
    // Input the elements of the array
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int max_freq = 0;  // Track the maximum frequency
    int result = arr[0];  // Element with the maximum frequency

    // Iterate over the array to find the element with maximum frequency
    for (int i = 0; i < N; i++) {
        int count = 0;

        // Count frequency of arr[i]
        for (int j = 0; j < N; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        // Update max_freq and result
        if (count > max_freq) {
            max_freq = count;
            result = arr[i];
        } else if (count == max_freq && arr[i] < result) {
            result = arr[i];
        }
    }

    // Output the element with the maximum frequency
    printf("%d\n", result);

    return 0;
}
