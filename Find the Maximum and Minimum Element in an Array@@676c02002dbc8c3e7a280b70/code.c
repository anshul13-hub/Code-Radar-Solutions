#include <stdio.h>
int main ()
{
    int N ,i;
    scanf("%d",&N);
    int min,max;
    
    int arr[N];
    for(i=1;i<=N;i++)
    {
        scanf("%d",&arr[i]);
    }
    min = arr[0];
    max = arr[0];
    for(i=1;i<=N;i++)
    {
        if(arr[i]<min){
            min = arr[i];
        }
         if(arr[i]>max)
        {
            max = arr[i];
        }
    }
    printf("%d %d",min,max);
}