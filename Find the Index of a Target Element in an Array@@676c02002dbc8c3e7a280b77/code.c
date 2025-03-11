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
    int index = -1;
    for(int i = 0;i<N;i++){
        if(arr[i]==T){
            found = 1;
            index = i+1;
            break;
        }
    }
    if(found)
    {
        printf("%d\n",index);
    }
    else
    {
        printf("-1\n");
    }
}
