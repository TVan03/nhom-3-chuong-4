#include <stdio.h>

int XnIterative(int n) {
    if (n == 1 || n == 2) return 1;

    int x1 = 1, x2 = 1, x = 0;
    for (int i = 3; i <= n; i++) {
        x = x2 + (i - 1) * x1;
        x1 = x2;
        x2 = x;
    }
    return x;
}

int main18khudequy() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);

    printf("Gia tri X(%d) = %d\n", n, XnIterative(n));

    return 0;
}
