#include <stdio.h>
int main ()
{
    int n,num,result,mask;
    scanf("%d %d ",&n,&num);
    mask = 1 << n ;
    result = num | mask ;
    printf("%d",result);
    return 0;
}