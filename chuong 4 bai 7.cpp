#include <stdio.h>

int arithSeq(int a, int r, int n) {
    if (n == 1) {
        return a;
    }
    return arithSeq(a, r, n - 1) + r;
}

int main7() {
    int a, r, n;
    printf("Nhap gia tri so hang dau tien (a): ");
    scanf("%d", &a);
    printf("Nhap gia tri cong sai (r): ");
    scanf("%d", &r);
    printf("Nhap gia tri n: ");
    scanf("%d", &n);

    int result = arithSeq(a, r, n);
    printf("Gia tri phan tu thu %d cua cap so cong la: %d\n", n, result);

    return 0;
}
