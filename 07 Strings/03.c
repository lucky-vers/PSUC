#include <stdio.h>

int main() {
    char str[100];
    int isPalindrome = 1;
    int len = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[len] != '\0') {
        len++;
    }
    len -= 2;

    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i]) {
            printf("The string is not a palindrome.\n");
            return 0;
        }
    }

    printf("The string is a palindrome.\n");

    return 0;
}

