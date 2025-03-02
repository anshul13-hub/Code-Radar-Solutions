#include <stdio.h>
int main ()
{
    int N;
    scanf("%d",&N);
    int arr[N];
    int K;
    scanf("%d",&K);
    K= K%N;
    if(K!=0)
    {
        for(int i = 0 ;i<N/2;i++)
        {
            int temp = arr[i];
            arr[i] = arr[N-i-1];
            arr[N-i-1] = temp ;

        }
        for(int i = 0 ;i<K/2;i++)
        {
            int temp = arr[i];
            arr[i] = arr[K-i-1];
            arr[K-i-1] = temp ;

        }
        for(int i = 0 ;i<(N+K)/2;i++)
        {
            int temp = arr[i];
            arr[i] = arr[(N+K)-i-1];
            arr[(N+K)-i-1] = temp ;

        }
    }
    for(int i = 0;i<N;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
