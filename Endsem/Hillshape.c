#include <stdio.h>

int isHill(int n) {
    int size = 1;
    int t = n;
    while (t /= 10) size++;

    int arr[size - 1], c = 0;

    while (n) {
        arr[c++] = n % 10;
        n /= 10;
    }

    for (int i = 0; i < size / 2; i++) {
        int tmp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = tmp;
    }

    int max = 0, mId = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
            mId = i;
        }
    }

    if (mId == size - 1) return 0;

    for (int i = mId + 1; i < size; i++) if (arr[i - 1] <= arr[i]) return 0;
    for (int i = 1; i <= mId; i++) if (arr[i - 1] >= arr[i]) return 0;

    return 1;
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    if (isHill(n)) printf("%d is a Hillshape number.\n", n);
    else printf("%d is not a Hillshape number.\n", n);

    return 0;
}
