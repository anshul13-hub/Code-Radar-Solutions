#include <stdio.h>

int main() {
    char str[100]; 
    int length = 0;

    
    fgets(str,sizeof(str),stdin);

    
    while (str[length] != '\0'&&str[length]!='\n') {
        length++;
    }

   
    printf("%d", length);

    return 0;
}
