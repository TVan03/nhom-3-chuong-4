#include <stdio.h>

int geomSeq(int a, int q, int n) {
    if (n == 1) {
        return a;
    }
    return geomSeq(a, q, n - 1) * q;
}

int main8() {
    int a, q, n;
    printf("Nhap gia tri so hang dau tien (a): ");
    scanf("%d", &a);
    printf("Nhap gia tri cong boi (q): ");
    scanf("%d", &q);
    printf("Nhap gia tri n: ");
    scanf("%d", &n);

    int result = geomSeq(a, q, n);
    printf("Gia tri phan tu thu %d cua cap so nhan la: %d\n", n, result);

    return 0;
}
