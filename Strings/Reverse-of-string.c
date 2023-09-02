#include <stdio.h>

int main() {
    char str[1000];
    printf("Enter a string: ");
    
    // Read user input
    scanf("%s", str);

    // Find the length of the string
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }

    // Print the string in reverse
    printf("Reverse of the string: ");
    for (int i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    return 0;
}
