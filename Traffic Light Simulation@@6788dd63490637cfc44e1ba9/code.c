#include <stdio.h>
int main()
{
    char ch;
    scanf("%c", &ch);

    if(ch == 'R')
    {
        printf("Stop\n");
    }
    else if(ch == 'G')
    {
        printf("Go\n");
    }
    else if(ch=='Y')
    {
        printf("Slow Down");
    }
    else
    {
        printf("Invalid input\n");
    }

    return 0;
}