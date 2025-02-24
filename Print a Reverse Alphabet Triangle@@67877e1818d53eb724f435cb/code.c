#include <stdio.h>
int main ()
{
    int N ;
    char i,j;
    scanf("%d",&N);
    for( i = N;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c ",64+j);
        }
        printf("\n");
    }
}