#include <stdio.h>

int main() {
    int N, T;

    // Read the size of the array
    scanf("%d", &N);

    // Declare the array of size N
    int arr[N];

    // Read the target number T
    scanf("%d", &T);

    // Populate the array with N integers
    for(int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // Search for the number T in the array
    int found = -1;  // Variable to store the index of T if found
    for(int i = 0; i < N; i++) {
        if(arr[i] == T) {
            found = i;  // Store the index of T
            break;  // Exit the loop as soon as T is found
        }
    }

    // Print the result
    if(found != -1) {
        // If T is found, print its index (add 1 for 1-based indexing)
        printf("%d\n", found + 1);
    } else {
        // If T is not found, print -1
        printf("-1\n");
    }

    return 0;
}