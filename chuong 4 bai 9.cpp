#include <stdio.h>

int U(int n) {
    if (n < 6) {
        return n;
    }
    return U(n - 5) + U(n - 4) + U(n - 3) + U(n - 2) + U(n - 1);
}

int main9() {
    int n;
    printf("Nhap gia tri n: ");
    scanf("%d", &n);

    int result = U(n);
    printf("Gia tri cua U(%d) la: %d\n", n, result);

    return 0;
}
