#include <stdio.h>
#include <ctype.h>
int main()
{
    char ch ;
    scanf("%d",&ch);
    if(isupper(ch))
    {
        printf("Uppercase");
    }
    else 
    {
        printf("Lowercase");
    }
    return 0;
}