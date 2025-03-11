#include <stdio.h>
int main ()
{
    int N;
    scanf("%d",&N);
    int arr[N];
    int T;
    scanf("%d",&T);
    for(int i = 0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }
    int found = 0;
    for(int i = 0;i<N;i++){
        if(arr[i]==T){
            printf("%d ",i);
            found = 1;
        }
    }
    if(!found){
        printf("-1\n");
    }
    
}