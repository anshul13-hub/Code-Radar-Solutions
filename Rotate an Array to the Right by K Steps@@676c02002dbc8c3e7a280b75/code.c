#include <stdio.h>

int main() {
    int N;

   
    scanf("%d", &N);
    int K;
    scanf("%d", &K);

    int arr[N];

    for (int i = 0; i < N; i++) {
    
        scanf("%d", &arr[i]);
    }
    int last = arr[N-1];
    for(int i =N-1;i>0;i--){
        arr[i] = arr[i-1];
    }
    arr[0] = last;

    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}


