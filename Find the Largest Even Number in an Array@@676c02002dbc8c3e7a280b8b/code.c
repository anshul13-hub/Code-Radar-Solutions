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
    int max = -1;
    for(int i = 0;i<N;i++)
    {
        if(arr[i]%2==0)
        {
            if(arr[i]>max){
                max = arr[i];
            }
        }
    }
    if(max==-1){
        printf("-1\n");

    }
    else
    {
        printf("%d\n",max);
    }
}
    
