#include <stdio.h>
int main ()
{
    char str[100];
    int length = 0;
    scanf("%c",str);
    while(str[length]!='\0')
    {
        length++;
    }
    printf("%d\n",length);

}