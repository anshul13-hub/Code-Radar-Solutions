#include <stdio.h>
int main ()
{
    int N,issorted=1;
    scanf("%d",&N);
    int arr[N];
    for(int i = 0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i = 0;i<N;i++)
    {
        if(arr[i]<arr[i-1])
        {
            issorted = 0;
            break;
        }

    }
    if(issorted)
    {
        printf("Sorted\n");
    }
    else
    {
        printf("Not Sorted");
    }
}