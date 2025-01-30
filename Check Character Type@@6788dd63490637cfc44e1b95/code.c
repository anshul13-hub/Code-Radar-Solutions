#include <stdio.h>
int main ()
{
    int ch;
    scanf("%d",&ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
        printf("Vowel");
    }
    else if(ch>=0 && ch<=9)
    {
        printf("Digit");
    }
    else
    {
        printf("Special Character");
    }
    return 0;
}