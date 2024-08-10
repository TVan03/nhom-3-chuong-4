#include <stdio.h>


int timPhanTuThuN(int a, int r, int n) {
    return a + (n - 1) * r;
}

int main2() {
    int a, r, n;
    printf("Nhap gia tri cua so hang dau tien (a): ");
    scanf("%d", &a);
    printf("Nhap gia tri cua cong sai (r): ");
    scanf("%d", &r);
    printf("Nhap gia tri cua n: ");
    scanf("%d", &n);

    int un = timPhanTuThuN(a, r, n);
    printf("Gia tri phan tu thu %d cua cap so cong la: %d\n", n, un);

    return 0;
}
