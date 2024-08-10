#include <stdio.h>

int YnIterative(int n) {
    if (n == 1) return 1;
    if (n == 2) return 2;
    if (n == 3) return 3;

    int y1 = 1, y2 = 2, y3 = 3, y = 0;
    for (int i = 4; i <= n; i++) {
        y = y3 + 2 * y2 + 3 * y1;
        y1 = y2;
        y2 = y3;
        y3 = y;
    }
    return y;
}

int main17khudequy() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);

    printf("Gia tri Y(%d) = %d\n", n, YnIterative(n));

    return 0;
}
