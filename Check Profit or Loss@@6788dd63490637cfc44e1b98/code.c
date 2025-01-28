#include <stdio.h>
int main ()
{
    int cost_price,selling_price_price;
    scanf("%d %d",&cost_price,&selling_price);
    if(selling_price > cost_price)
    {
        printf("Profit");
    }
    else if(cost_price > selling_price)
    {
        printf("Loss");
    }
    else 
    {
        printf("No Profit Loss");
    }
    return 0;
}