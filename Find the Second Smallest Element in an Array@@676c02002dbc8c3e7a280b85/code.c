#include <stdio.h>
#include <limits.h>

int main() {
    int N;
    scanf("%d", &N);

    int arr[N];
    
    // Read the elements of the array
    for(int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize min and smin to the largest possible integer
    int min = INT_MAX;
    int smin = INT_MAX;

    // Traverse the array to find the minimum and second minimum
    for(int i = 0; i < N; i++) {
        if (arr[i] < min) {
            smin = min;  // Update second minimum before updating min
            min = arr[i];  // Update min to the new smaller value
        } else if (arr[i] < smin && arr[i] != min) {
            smin = arr[i];  // Update second minimum

     printf("%d\n", smin);
        }
    }
    printf("-1\n");
     





}
