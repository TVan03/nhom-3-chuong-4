#include <stdio.h>

int Yn(int n) {
    if (n == 1) return 1;
    if (n == 2) return 2;
    if (n == 3) return 3;
    return Yn(n - 1) + 2 * Yn(n - 2) + 3 * Yn(n - 3);
}

int main17dequy() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);

    printf("Gia tri Y(%d) = %d\n", n, Yn(n));

    return 0;
}
