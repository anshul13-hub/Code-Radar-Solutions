#include <stdio.h>
#include <limits.h>
int main ()
{
    int N;
    scanf("%d",&N);
    int min = INT_MIN;
    int smin= INT_MIN;
    int arr[N];
    for(int i = 0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i = 0;i<N;i++)
    {
        if(min >arr[i])
        {
            smin = min ;
            min = arr[i];
        }
        else if(arr[i]<smin&&arr[i]!=min)
        {
            min = arr[i];
        }
    }
    printf("%d",smin);
}