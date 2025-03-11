#include <stdio.h>

int main() {
    int N;

    // Input the size of the array
    scanf("%d", &N);

    int arr[N];  // Declare an array of size N

    int T;

    // Input the target element to find
    scanf("%d", &T);

    // Input the array elements
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);  // Fill the array with input elements
    }

    int found = 0;  // To check if any index was found

    // Search for the target element and print all indices where it occurs
    for (int i = 0; i < N; i++) {
        if (arr[i] == T) {  // Check if the element matches the target
            printf("%d ", i);  // Print the index of the occurrence
            found = 1;  // Mark that we found at least one occurrence
        }
    }

    // If no occurrences of the target element were found, print -1
    

    return 0;
}