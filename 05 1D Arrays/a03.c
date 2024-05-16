#include <stdio.h>

void Del(int index, int *arr) {
    int i;
    for (i = index; arr[i] != '\0'; i++) arr[i] = arr[i + 1];
    return;
}

int main() {
    int n, i, e, c = 0;

    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array: ");
    for (i = 0; i < n; i++) scanf("%d", &arr[i]);

    printf("Enter number to delete: ");
    scanf("%d", &e);

    for (i = 0; i < n; i++) {
        if (arr[i] == e) {
            Del(i, arr);
            c++;
        }
    }

    printf("Array after: ");
    for (i = 0; i < c; i++) printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
