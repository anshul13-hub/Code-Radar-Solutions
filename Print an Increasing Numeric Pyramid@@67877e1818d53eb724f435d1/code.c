#include <stdio.h>
int main ()
{
    int N,i,j,k;
    scanf("%d ",&N);
    int a=1;
    for(i=1;i<=N;i++)
    {
        for(j=1;j<=N-i;j++)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
            printf("%d ",a);
        }
        printf("\n");
    }
}