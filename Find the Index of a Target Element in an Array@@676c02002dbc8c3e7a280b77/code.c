#include <stdio.h>

int main() {
    int N, T;
    
    // Input the size of the array
    scanf("%d", &N);
    
    // Declare the array
    int arr[N];
    
    // Input the elements of the array
    for(int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Input the target element to find
    scanf("%d", &T);
    
    // Search for the first occurrence of T
    int index = -1; // Default value if not found
    for(int i = 0; i < N; i++) {
        if(arr[i] == T) {
            index = i;  // Update index to the first occurrence
            break;  // Stop searching after the first occurrence
        }
    }
    
    // Output the result (index of first occurrence or -1 if not found)
    printf("%d\n", index);
    
    return 0;
}