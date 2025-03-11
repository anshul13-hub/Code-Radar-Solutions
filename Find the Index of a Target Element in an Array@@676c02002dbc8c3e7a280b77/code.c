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
    for(int i = 0;i<N;i++){
        if(arr[i]==T){
            printf("%d\n",i);
            return 0;
        }
    }
    printf("-1");
}
    