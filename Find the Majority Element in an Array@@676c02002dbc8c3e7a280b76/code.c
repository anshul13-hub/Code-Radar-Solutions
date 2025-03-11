#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);  // Input the size of the array
    
    int arr[N];
    
    // Input the elements of the array
    for(int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Boyer-Moore Voting Algorithm to find the potential majority element
    int candidate = -1;
    int count = 0;
    
    // First pass: Find the potential candidate
    for(int i = 0; i < N; i++) {
        if(count == 0) {
            candidate = arr[i];
            count = 1;
        } else if(arr[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }
    
    // Second pass: Verify if the candidate is actually the majority element
    count = 0;
    for(int i = 0; i < N; i++) {
        if(arr[i] == candidate) {
            count++;
        }
    }
    
    // If the candidate appears more than N/2 times, print it; otherwise, print -1
    if(count > N / 2) {
        printf("%d\n", candidate);
    } else {
        printf("-1\n");
    }
    
    return 0;
}