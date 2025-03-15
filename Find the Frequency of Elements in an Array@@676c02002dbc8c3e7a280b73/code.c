#include <stdio.h>
int main ()
{
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i = 1;i<=N;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i = 1;i<=N;i++)
    {
        int count = 1;
        if(arr[i]==-1)
        {
            continue;
        }
        for(int j = 1;j<=N;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                if(arr[j]==-1)

            }
        }
        printf("%d :%d",arr[i],count);
    }

}