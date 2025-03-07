#include <stdio.h>
#include <limits.h>  // For INT_MIN

int main() {
    int max = INT_MIN;  // Initialize max with the smallest possible integer
    int smax = INT_MIN; // Initialize second max with the smallest possible integer
    int N;
    scanf("%d",&N);
    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    for(int i = 0;i<N;i++)
    {
        if(max<arr[i]){
        smax = max;
        max = arr[i];
    }
    else if(arr[i]>smax&& arr[i]!=max ){
        smax = arr[i];
    }
}

    printf("%d",smax);
}