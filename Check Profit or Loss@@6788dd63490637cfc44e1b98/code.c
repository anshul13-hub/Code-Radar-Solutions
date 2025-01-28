#include <stdio.h>
int main ()
{
    int selling_price,cost_price;
    scanf("%d %d",&selling_price,&cost_price);
    if(selling_price > cost_price)
    {
        printf("%d",Profit);
    }
    else if(cost_price > selling_price)
    {
        printf("%d",Loss);
    }
    else 
    {
        printf("No Profit Loss");
    }
    return 0;
}