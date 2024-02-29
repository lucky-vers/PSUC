#include <stdio.h>
#include <string.h>

int main() {
    char sentence[100];
    char del[20];
    int len, i, j;

    printf("Enter sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    printf("Word to delete: ");
    scanf("%s", del);

    len = strlen(del);

    for (i = 0; sentence[i] != '\0'; i++) {
        for (j = 0; sentence[i + j] == del[j] && del[j] != '\0'; j++);
        if (del[j] == '\0') {
            while (sentence[i + j] != '\0') {
                sentence[i] = sentence[i + j];
                i++;
            }
            sentence[i] = '\0';
        }
    }

    printf("%s\n", sentence);

    return 0;
}

