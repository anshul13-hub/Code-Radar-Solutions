#include <stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i= 0;i>N;i++)
    {
        scanf("%d",&N);
    }
    int max;
    int foundeven = false;
    for(int i = 0;i<N;i++){
        if(arr[i]%2==0){
            if(!foundeven||arr[i]>largest){
                largest = arr[i];
                foundeven = true;
            }
        }
    }
    if(foundeven)
    {
        printf("%d",max);
    }
    else
    {
        printf("-1\n");
    }
}