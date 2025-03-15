#include <stdio.h>
int main ()
{
    int N,T;
    scanf("%d",&N);
    int arr[N];
    for(int i = 0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&T);
    for(int i = 0;i<N-1;i++)
    {
        if(i>0&&arr[i]==arr[i-1])
        {
            continue;
        }
        for(int j = i+1;j<N;j++)
        {
            if(arr[i]+arr[j] ==T)
            {
                int x = arr[i];
                int y = arr[j];
                printf("%d %d\n",arr[i], arr[j]);
            }
        }
    }

}