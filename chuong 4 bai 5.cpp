#include <stdio.h>

int power(int m, int n) {
    int result = 1;
    for (int i = 0; i < n; i++) {
        result *= m;
    }
    return result;
}

int main5() {
    int m, n;
    printf("Nhap gia tri m: ");
    scanf("%d", &m);
    printf("Nhap gia tri n: ");
    scanf("%d", &n);

    int result = power(m, n);
    printf("%d^%d = %d\n", m, n, result);

    return 0;
}