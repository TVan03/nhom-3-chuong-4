#include <stdio.h>

int Distribute(int m, int n) {
    if (n == 1) {
        return 1;
    }
    int count = 0;
    for (int i = 0; i <= m; i++) {
        count += Distribute(m - i, n - 1);
    }
    return count;
}

int main() {
    int m, n;
    printf("Nhap so luong vat m: ");
    scanf("%d", &m);
    printf("Nhap so luong doi tuong n: ");
    scanf("%d", &n);

    int result = Distribute(m, n);
    printf("So cach chia vat: %d\n", result);

    return 0;
}
