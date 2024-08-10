#include <stdio.h>

int f(int n) {
    if (n == 1) return 1;
    if (n % 2 == 0) return 2 * f(n / 2);
    return 2 * f(n / 2) + 3 * f(n / 2 + 1);
}

int main11() {
    int n;
    printf("Nhap gia tri n: ");
    scanf("%d", &n);

    int result = f(n);
    printf("Gia tri f(%d) la: %d\n", n, result);

    return 0;
}