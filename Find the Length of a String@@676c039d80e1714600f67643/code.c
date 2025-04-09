#include <stdio.h>

int main() {
    char str[100];  // Declare a character array to hold the string
    int length = 0;

    // Read the input string
    scanf("%s", str);  // This reads a string but stops at the first space

    // Loop through the string until the null terminator is found
    while (str[length] != '\0') {
        length++;
    }

    // Print the length of the string
    printf("%d\n", length);

    return 0;
}
