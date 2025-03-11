#include <stdio.h>
int main ()
{
    int N ;
    scanf("%d",&N);
    int arr[N];
    int T;
    scanf("%d",%T);
    for(int i = 0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }
    int foundindx= 0;
    for(int i = 0;i<N;i++)
    {
        if(arr[i]==T)
        {
            foundindx = i;
        }
        
    }
}