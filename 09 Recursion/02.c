#include <stdio.h>

int FIB(int n) {
    if (n <= 1) return n;
    return FIB(n - 1) + FIB(n - 2);
}

int main() {
    int N, i;
    printf("Number of Fibonacci terms: ");
    scanf("%d", &N);
    for (i = 0; i < N; i++) printf("%d ", FIB(i));
    return 0;
}

