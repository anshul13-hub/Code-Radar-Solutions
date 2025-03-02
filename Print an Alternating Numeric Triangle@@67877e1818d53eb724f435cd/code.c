#include <stdio.h>
int main ()
{
    int N;
    scanf("%d",&N);
    for(int i = 1;i<=N;i++){
        for(int j =1;j<=i;j++)
        {
            if(j%2!=0)
            {
                printf("1 ");
            }
            else 
            {
                printf("0 ");
            }
        }
        printf("\n");

    }
    
}