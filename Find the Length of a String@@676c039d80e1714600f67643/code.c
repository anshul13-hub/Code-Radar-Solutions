#include <stdio.h>

int main() {
    char str[100]; 
    int length = 0;

    
    scanf("%s", str);  

    
    while (str[length] != '\0'&&str[length]!='\n') {
        length++;
    }

   
    printf("%d\n", length);

    return 0;
}
