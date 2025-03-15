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
    int found = 0;
    for(int i =0;i<N;i++)
    {
        found[arr[i]] = 0;
    }
    for(int i = 0;i<N;i++)
    {
        if(found[arr[i]]==1)
        {
            printf("%d",arr[i]);
            return 0;
        }
        else
        {
            found[arr[i]] = 1;
        }
    }
    printf("-1\n");
}