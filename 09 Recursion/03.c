#include <stdio.h>

int findMax(int *arr, int size) {
    int max = *arr;
    for (int i = 1; i < size; i++) if (*(arr + i) > max) max = *(arr + i);
    return max;
}

int main() {
    int n, i;
    printf("Number of elements: ");
    scanf("%d", &n);

    int arr[n];
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Maximum number in the array is: %d\n", findMax(arr, n));
    return 0;
}

