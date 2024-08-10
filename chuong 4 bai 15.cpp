#include <stdio.h>
int xn(int n);
int yn(int n);

int xn(int n) {
    if (n == 0) return 1;
    if (n == 1) return 0;
    return xn(n - 1) + yn(n - 1);
}

int yn(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return 3 * xn(n - 1) + 2 * yn(n - 1);
}

int main15() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);

    printf("Gia tri x(%d) = %d\n", n, xn(n));
    printf("Gia tri y(%d) = %d\n", n, yn(n));

    return 0;
}
