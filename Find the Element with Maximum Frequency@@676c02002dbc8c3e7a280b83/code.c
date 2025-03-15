#include <stdio.h>
#include <limits.h>
int main ()
{
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i = 0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }
    int maxfreq = 0;
    int result = INT_MAX;
    for(int i = 0;i<N;i++)
    {
        int count = 0;
        for(int j = 0;j<N;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
            }
        }
        if(count>maxfreq||cont==maxfreq&&arr[i]<result){
            maxfreq = count;
            result = arr[i];
        }
    }
    printf("%d\n",result);
}