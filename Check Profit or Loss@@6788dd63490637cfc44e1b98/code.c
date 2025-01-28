#include <stdio.h>
int main ()
{
    int selling price,cost price;
    scanf("%d %d",&selling price,&cost price);
    if(selling price > cost price)
    {
        printf("%d",Profit);
    }
    else if(cost price > selling price)
    {
        printf("%d",Loss);
    }
    else 
    {
        printf("No Profit Loss");
    }
    return 0;
}