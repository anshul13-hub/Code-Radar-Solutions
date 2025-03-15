#include <stdio.h>
int main ()
{
    int N,i,count = 0;
    scanf("%d",&arr[N]);
    int arr[N];
    for(int i = 0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i = 0;i<N;i++)
    {
        if(arr[i]!=0)
        {
            arr[count++] = arr[i];
        }
    }
    while(count<N)
    {
        arr[count++]=0;
    }
    for(int i = 0;i<N;i++)
    {
        printf("%d",arr[i]);
        if(i<n-1)
        {
            printf(" ");
        }
    }
}