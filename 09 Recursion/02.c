#include <stdio.h>

int FIB(int n) {
    if (n <= 1) return n;
    return FIB(n - 1) + FIB(n - 2);
}

int main() {
    int n, i;
    printf("Number of Fibonacci terms: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) printf("%d ", FIB(i));
    return 0;
}

