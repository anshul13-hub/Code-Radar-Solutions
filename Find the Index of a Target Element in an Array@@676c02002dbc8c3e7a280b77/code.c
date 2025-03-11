#include <stdio.h>
int main ()
{
    int N ;
    scanf("%d",&N);
    int arr[N];
    int T;
    scanf("%d",&T);
    for(int i = 0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i = 0;i<N;i++)
    {
        if(arr[i]==T)
        {
            T = i;
           
            break;
            
        }
         printf("%d\n",T+1);
    }
        {
            printf("-1");
        }
    

    

}