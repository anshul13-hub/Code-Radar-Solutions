#include <stdio.h>

int main() {
    int N;
    
    // Read the size of the array
    scanf("%d", &N);
    
    int arr[N];
    
    // Read the array elements
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Create an auxiliary array to mark visited elements
    int visited[N]; // Initialize a visited array with all elements set to 0
    
    for (int i = 0; i < N; i++) {
        // If the element has been visited, it's the duplicate
        if (visited[arr[i]] == 1) {
            printf("%d\n", arr[i]);
            return 0; // Exit as we found the duplicate
        }
        // Mark the element as visited
        visited[arr[i]] = 1;
    }

    return 0;
}