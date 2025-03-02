#include <stdio.h>
int main ()
{
    int N ,i,j,k;
    scanf("%d",&k);
    for(i = 1;i<=N;i++){
        for(j=1;j<=N-i;j++)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++){
            printf("%d",k);
        }
        for(j=i-1;j>=1;j--){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}