#include <stdio.h>

int An(int n) {
    if (n == 1) return 1;
    int sum = 0;
    for (int i = 1; i < n; i++) {
        sum += An(i);
    }
    return n * sum;
}

int main16() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);

    printf("Gia tri A(%d) = %d\n", n, An(n));

    return 0;
}
