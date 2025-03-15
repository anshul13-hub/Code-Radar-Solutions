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
    for(int i = 0;i<N-1;i++)
    {
        for(int j = i+1;j<N;j++)
        {
            if(arr[i]>arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;

            }
        }
    }
    if(N%2==1)
    {
        printf("%d\n",arr[N/2]);
    }
    else
    {
        int median = (arr[N/2-1]+arr[N/2]/2);
        printf("%d\n",median);
    }

}