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
    int foundeven = 0;
    int max = arr[0];
    for(int i = 0;i<N;i++){
        if(arr[i]%2==0){
            foundeven = 1;
            if(arr[i]>max)
            {
                max = arr[i];
            }
        }
    }
    if(foundeven ==0){
        printf("-1\n");
    }
    else
    {
        printf("%d\n",max);
    }
    return 0;
}