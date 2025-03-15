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

    int max_product = arr[0] * arr[1]; // Initialize with the product of the first two elements

    // Iterate through all pairs of elements to find the maximum product
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            int product = arr[i] * arr[j];
            if (product > max_product) {
                max_product = product; // Update if a larger product is found
            }
        }
    }

    // Output the maximum product
    printf("%d\n", max_product);

    return 0;
}
