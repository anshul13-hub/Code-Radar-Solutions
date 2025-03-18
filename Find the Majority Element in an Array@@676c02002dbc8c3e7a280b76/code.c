#include <stdio.h>

int main() {
    int N;

   
    scanf("%d", &N);

    int arr[n]; 
  
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int candidate = -1, count = 0;

    // Phase 1: Find the candidate for the majority element
    for (int i = 0; i < N; i++) {
        if (count == 0) {
            candidate = arr[i];
            count = 1;
        } else if (arr[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }

    // Phase 2: Verify if the candidate is the majority element
    count = 0;
    for (int i = 0; i < N; i++) {
        if (arr[i] == candidate) {
            count++;
        }
    }
    if (count > N / 2) {
        printf("%d\n", candidate);
    } else {
        printf("-1");
    }

    return 0;
}
