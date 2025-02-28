#include <stdio.h>
int main ()
{
    int N ,i;
    scanf("%d",&N);
    int min=arr[0],max=[0];
    int arr[N];
    for(i=1;i<=N;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=1;i<=N;i++)
    {
        if(arr[i]<min){
            min = arr[i];
        }
        else
        {
            max = arr[i];
        }
    }
    printf("%d %d",min,max);
}

}