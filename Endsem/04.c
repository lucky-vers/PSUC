// Write a string program to accept n names from the user and display them in different lines.
// Also create a function Capital() that capitalises the first letter of the names.
// Also create a function sort that sorts the letters of these names in alphabetical order

#include <stdio.h>

void Capital(char *s) {
    if (s[0] >= 'a' && s[0] <= 'z') s[0] -= 32;
    return;
}

void Sort(char *s) {
    if (s[0] >= 'A' && s[0] <= 'Z') s[0] += 32;
    int i, j;
    for (i = 0; s[i] != '\0'; i++) {
        for (j = i; s[j] != '\0'; j++) {
            if (s[i] > s[j]) {
                char tmp = s[j];
                s[j] = s[i];
                s[i] = tmp;
            }
        }
    }
}

int main() {
    int n, i, j;
    printf("Enter no. of names: ");
    scanf("%d", &n);

    char names[n][50];

    for (i = 0; i < n; i++) {
        printf("Enter name %d: ", i + 1);
        scanf("%s", &names[i]);
    }

    printf("Display of names:\n");
    for (i = 0; i < n; i++) {
        printf("%s\n", names[i]);
    }

    printf("Capitalized names:\n");
    for (i = 0; i < n; i++) {
        Capital(names[i]);
        printf("%s\n", names[i]);
    }

    printf("Sorted names:\n");
    for (i = 0; i < n; i++) {
        Sort(names[i]);
        printf("%s\n", names[i]);
    }


}
