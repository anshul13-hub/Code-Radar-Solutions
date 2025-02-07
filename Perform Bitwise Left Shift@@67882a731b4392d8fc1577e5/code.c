#include <stdio.h>
int main ()
{
    int n,positions,result;
    scanf("%d %d",&n,&positions);
    result = n << positions;
    printf(result);
    return 0;
}