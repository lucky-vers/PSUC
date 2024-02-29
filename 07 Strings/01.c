#include <stdio.h>
#include <string.h>

int main() {
    char s[1024];
    printf("String: ");
    fgets(s, sizeof(s), stdin);

    int i;
    int n = 1;

    for (i = 0; i < strlen(s) - 1; i++) {
        if (s[i] == ' ') n++;
    }

    printf("String has %d words.\n", n);

}
