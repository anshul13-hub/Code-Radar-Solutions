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
    for(int i = 0;i<N;i++){
        if(arr[i]==T){
            found = 1;
            break;
        }
    }
    if(found)
    {
        printf("%d\n",i);
    }
    else
    {
        printf("-1\n");
    }
}
