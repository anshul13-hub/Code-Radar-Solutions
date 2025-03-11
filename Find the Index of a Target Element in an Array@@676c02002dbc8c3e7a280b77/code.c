#include <stdio.h>
int main ()
{
    int N;
    scanf("%d",&N);
    
    int T;
    scanf("%d",&T);
    int arr[N];
    for(int i = 0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }
    int found = 0;
    for(int i = 0;i<N;i++)
    {
        if(arr[i]==T)
        {
            found = 1;

        }
    }
    if(found==0)
    {
        printf("-1");
    }
    else
    {
        printf("%d",arr[i]);
    }

}