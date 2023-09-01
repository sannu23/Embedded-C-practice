
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isPalindrome(char str[]) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    char word[] = "racecar";
    if (isPalindrome(word)) {
        printf("%s is a palindrome.\n", word);
    } else {
        printf("%s is not a palindrome.\n", word);
    }
    return 0;
}
