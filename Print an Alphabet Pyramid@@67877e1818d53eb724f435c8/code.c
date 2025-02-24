#include <stdio.h>
int main ()
{
    int N;
    char i,j,k;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c ",64+i);
        }
        printf("\n");
    }
       
    return 0;
}