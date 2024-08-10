#include <stdio.h>

// Tinh S(n) = 1 + 2 + 3 + ... + n
int tinhTong1(int n) {
    int S = 0;
    for (int i = 1; i <= n; i++) {
        S += i;
    }
    return S;
}

// Tinh S(n) = 1 + 1/2 + 1/3 + ... + 1/n
double tinhTong2(int n) {
    double S = 0;
    for (int i = 1; i <= n; i++) {
        S += 1.0 / i;
    }
    return S;
}

// Tinh S(n) = 1*2 + 2*3 + 3*4 + ... + n*(n+1)
int tinhTong3(int n) {
    int S = 0;
    for (int i = 1; i <= n; i++) {
        S += i * (i + 1);
    }
    return S;
}

int main1() {
    int n;
    printf("Nhap gia tri cua n: ");
    scanf("%d", &n);

    int tong1 = tinhTong1(n);
    double tong2 = tinhTong2(n);
    int tong3 = tinhTong3(n);

    printf("Tong S(n) 1 + 2 + ... + n = %d\n", tong1);
    printf("Tong S(n) 1 + 1/2 + ... + 1/n = %lf\n", tong2);
    printf("Tong S(n) 1*2 + 2*3 + ... + n*(n+1) = %d\n", tong3);

    return 0;
}
