#include <stdio.h>
int main ()
{
    int N,K;
    scanf("%d",&N);
    scanf("%d",&K);
    int arr[N];
    for(int i = 0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }
    int count = 0;
    for(int i = 0;i<N;i++)
    {
        if(arr[i]>K)
        {
            printf("%d ",count);
            count++;
        }

    }

}