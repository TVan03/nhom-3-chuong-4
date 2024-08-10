#include <stdio.h>

int An1(int n) {
    if (n == 0) return 1;
    if (n == 1) return 0;
    if (n == 2) return -1;
    return 2 * An1(n - 1) - 3 * An1(n - 2) - An1(n - 3);
}
int An2(int n) {
    if (n == 1) return 1;
    if (n == 2) return 2;
    if (n == 3) return 3;
    return 2 * An2(n - 1) + An2(n - 2) - 3 * An2(n - 3);
}
int main10() {
    int n;
    printf("Nhap gia tri n: ");
    scanf("%d", &n);

    int result = An1(n);
    printf("Gia tri A(%d) la: %d\n", n, result);

    int result2 = An2(n);
    printf("Gia tri A(%d) la: %d\n", n, result);

    return 0;
}