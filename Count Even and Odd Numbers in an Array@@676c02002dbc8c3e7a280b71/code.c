#include <stdio.h>
int main ()
{
    int N,i;
    scanf("%d",&N);
    int evencount=0,oddcount=0;
    int arr[N];
    for(i=1;i<=N;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=1;i<=N;i++)
    {
        if(arr[i]%2==0)
        {
            evencount++;
        }
        else
        {
            oddcount++;
        }
    }
    printf("%d %d",evencount,oddcount);
    return 0;
}

