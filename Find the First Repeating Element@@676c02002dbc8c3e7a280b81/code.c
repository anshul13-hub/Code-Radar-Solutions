#include <stdio.h>

int main() {
    int N;

    // Input the size of the array
    scanf("%d", &N);

    int arr[N];
    
    // Input the array elements
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // Use a simple array to track elements we've already seen
    int seen[100000] = {0}; // The range of array elements will be assumed within this range (e.g., 0 to 99999)
    int first_repeating = -1;

    // Traverse the array
    for (int i = 0; i < N; i++) {
        if (seen[arr[i]] == 1) {
            first_repeating = arr[i];  // Found the first repeating element
            break;  // Stop once we find the first repeating element
        } else {
            seen[arr[i]] = 1;  // Mark this element as seen
        }
    }

    // Output the result
    if (first_repeating == -1) {
        printf("-1/n");
    } else {
        printf("%d\n", first_repeating);
    }

    return 0;
}
