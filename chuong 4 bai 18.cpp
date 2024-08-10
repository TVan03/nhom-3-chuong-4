#include <stdio.h>

int XnRecursive(int n) {
    if (n == 1 || n == 2) return 1;
    return XnRecursive(n - 1) + (n - 1) * XnRecursive(n - 2);
}

int main18dequy() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);

    printf("Gia tri X(%d) = %d\n", n, XnRecursive(n));

    return 0;
}
