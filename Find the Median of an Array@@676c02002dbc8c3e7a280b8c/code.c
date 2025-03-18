#include <stdio.h>

int main() {
    int N;

    scanf("%d", &N);

    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int temp;

    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Finding the median
    float median;
    if (N % 2 == 0) {
        median = (arr[(N / 2) - 1] + arr[N / 2]) / 2.0;
    } else {
        median = arr[N / 2];
    }
    printf("%.2f\n", median);

    return 0;
}
