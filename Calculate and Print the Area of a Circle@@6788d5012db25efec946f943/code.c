#include <stdio.h>
int main ()
{
    float radius;
    float pi = 3.14;
    float Area;
    Area = pi * radius * radius ;
    scanf("%f",&radius);
    printf("Area:%.2f\n",Area);
    return 0;
}