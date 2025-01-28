#include <stdio.h>
int main ()
{
    int year ;
    scanf("%d",&year);
    if(year % 400 == 0)
    {
        printf("Leap Year");
    }
    else if( year % 4== 0)
    {
        printf("Leap Year");
    }
    else 
    {
        printf("Not a leap year");
    }
    return 0;
}