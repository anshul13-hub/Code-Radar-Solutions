#include <stdio.h>
int main()
{
    int a,b;
    char op;
    scanf("%d %d ",&a,&b);
    scanf("%c",&ch);
    switch(op)
    {
        case '+' :
        printf("%d",a+b);
        break;
        case '-':
        printf("%d",a-b);
        break;
        case '*':
        printf("%d",a*b);
        break;
        case '/':
        printf("%d",a/b);
        break;
        return 0;
    }
    
}