#include <stdio.h>
int main ()
{
    int n,positions;
    scanf("%d %d",&n,&positions);
    int result = n << positions;
    printf(result);
}