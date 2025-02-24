#include <stdio.h>
int main ()
{
    int N;
    char i,j,k;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        for(j=1;j<=N-i;j++)
        {
            printf(" ");
        }
        for(k=1;k<=2*i-1;k++)
        {
            printf("%d",64+i);
        }
        printf("\n");
    }
    return 0;
}