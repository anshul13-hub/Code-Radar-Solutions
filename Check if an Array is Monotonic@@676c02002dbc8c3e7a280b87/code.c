#include <stdio.h>
int main ()
{
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i = 0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }
    int increasing = 1,descreasing = 1;
    for(int i = 1;i<N;i++)
    {
        if(arr[i]<arr[i-1])
        {
            increasing = 0;
        }
        if(arr[i]>arr[i-1])
        {
            descreasing = 0;
        }
    }
    if(increasing||descreasing)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO");
    }
}