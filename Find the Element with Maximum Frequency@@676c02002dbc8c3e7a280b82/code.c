#include <stdio.h>

int main() {
    int N;

    // Input size of the array
    scanf("%d", &N);

    int arr[N];

    // Input the elements into the array
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // Traverse through the array to find elements with multiple frequencies
    for (int i = 0; i < N; i++) {
        // Skip the elements that have already been counted
        int isDuplicate = 0;
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                isDuplicate = 1;
                break;
            }
        }

        // If the element is not a duplicate, count its frequency
        if (!isDuplicate) {
            int count = 0;
            for (int j = 0; j < N; j++) {
                if (arr[i] == arr[j]) {
                    count++;
                }
            }

            printf("%d",count);
        }
    }

    return 0;
}
