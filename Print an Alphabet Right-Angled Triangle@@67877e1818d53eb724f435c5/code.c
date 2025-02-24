#include <stdio.h>
int main ()
{
    char i,j;
    int N;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c ",64+j);
        }
        printf("\n");
    }
    return 0;
}