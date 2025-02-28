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
        arr[i]= min;
       }
       if(arr[i]>max){
        arr[i] = max ;
       }
    }
    printf("%d %d",min,max);
}