#include <stdio.h>
#include <math.h>


double timPhanTuThuN(int a, int q, int n) {
    return a * pow(q, n - 1);
}

int main3() {
    int a, q, n;
    printf("Nhap gia tri cua so hang dau tien (a): ");
    scanf("%d", &a);
    printf("Nhap gia tri cua cong boi (q): ");
    scanf("%d", &q);
    printf("Nhap gia tri cua n: ");
    scanf("%d", &n);

    double un = timPhanTuThuN(a, q, n);
    printf("Gia tri phan tu thu %d cua cap so nhan la: %lf\n", n, un);

    return 0;
}
