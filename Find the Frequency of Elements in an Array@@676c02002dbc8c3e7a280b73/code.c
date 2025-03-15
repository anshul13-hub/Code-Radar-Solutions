#include <stdio.h>
int main ()
{
    int N,i,j,count;
    scanf("%d",&N);
    int arr[N];
    for(i = 0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i = 0;i<n;i++)
    {
         count = 1;
        if(arr[i]==-1){
            continue;
        }
        for(j = i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                arr[j] = -1;
            }
        }
        printf("%d %d\n",arr[i],count);
}