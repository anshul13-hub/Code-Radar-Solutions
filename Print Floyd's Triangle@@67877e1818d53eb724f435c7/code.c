#include <stdio.h>
int main()
{
    int N ;
    scanf("%d",&N);
    int a = 1;
    for(int i = 1;i<=N;i++)
    {
        for(int j = 1;j<=i;j++)
        {
            printf("%d",a);
            a++;
        }
        printf("\n");
    }
    return 0;
}