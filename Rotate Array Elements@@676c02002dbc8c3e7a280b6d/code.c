#include <stdio.h>
int main ()

{
    int N,K;
    scanf("%d", &N);
    int arr[N];
    for(int i = 0;i<N;i++)
    {
        scanf("%d",&arr[i]);
        
    }
    scanf("%d", &K);
    K = K % N ;
    for(int i = 0;i<N/2;i++){
        int temp = arr[i];
        arr[i] = arr[N-1-i];
        arr[N-1-i] = temp ;

    }
    for(int i = 0;i<K/2;i++){
        int temp = arr[i];
        arr[i] = arr[K-1-i];
        arr[K-1-i] = temp ;

    }
    for(int i = K;i<(N+K)/2;i++){
        int temp = arr[i];
        arr[i] = arr[N-1-(i-K)];
        arr[N-1-(i-K)] = temp ;

    }
    for (int i = 0; i < N; i++) {
        printf("%d\n ", arr[i]);
    }
    printf("\n");

    return 0;
}
    
    

