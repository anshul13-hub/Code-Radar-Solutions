#include <stdio.h>
#include <stdlib.h>  // For abs() function

int main() {
    int N;

    // Input size of the array
    scanf("%d", &N);

    int arr[N];
    
    // Input the elements into the array
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Initialize minimum difference to a large value
    int min_diff = abs(arr[1] - arr[0]);
    int pair1 = arr[0], pair2 = arr[1];

    // Iterate through all pairs and find the pair with the minimum difference
    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            int diff = abs(arr[i] - arr[j]);
            if (diff < min_diff) {
                min_diff = diff;
                pair1 = arr[i];
                pair2 = arr[j];
            }
        }
    }

    // Output the result
    printf("%d %d\n", pair1, pair2);
 

    return 0;
}
