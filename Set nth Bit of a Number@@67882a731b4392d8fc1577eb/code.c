#include <stdio.h>
int main ()
{
    int num ,n;
    scanf("%d %d",&num,&n);
    int mask = 1 << n;
    int result = num | mask ;
    printf("%d",result);
    return 0;
}