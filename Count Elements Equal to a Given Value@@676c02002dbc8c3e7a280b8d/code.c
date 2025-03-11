#include <stdio.h>
int main ()
{
    int N,K;
    scanf("%d",&N);
    int arr[N];
    for(int i = 0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&K);
    int count = 0;
    for(int i = 0;i<N;i++)
    {
        if(arr[i]==K)
        {
            count++;
        }
    }
    printf("%d",count);
}


}