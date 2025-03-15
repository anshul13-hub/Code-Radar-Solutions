#include <stdio.h>

int main() {
    int N, T;

    // Input the size of the array
    scanf("%d", &N);

    int arr[N];

    // Input the array elements
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the target sum
    scanf("%d", &T);

    // A simple brute force approach to find all unique pairs
    int found = 0; // Flag to check if any pair was found
    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            if (arr[i] + arr[j] == T) {
                // Print the pair and mark that a pair was found
                printf("(%d, %d)\n", arr[i], arr[j]);
                found = 1;
            }
        }
    }

  
    

    return 0;
}
