#include <stdio.h>
int main ()
{
    float radius;
    float pi = 3.14;
    float Area;
    scanf("%f",&radius);
    Area = pi * radius * radius;
    printf("Area:%.2f\n",Area);
    return 0;
}