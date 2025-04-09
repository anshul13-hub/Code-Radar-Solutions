#include <stdio.h>
int main ()
{
    char str[100];
    
    int count = 0;
     fgets(str, sizeof(str), stdin);
     char ch = tolower(str[i]);
     for(int i = 0;str[i]!=0;i++)
     {
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
        {
            count++;
        }

     }
     printf("%d",count);
    
}