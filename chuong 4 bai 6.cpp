#include <stdio.h>

int gcd(int a, int b) {
    while (a != b) {
        if (a > b) {
            a = a - b;
        }
        else {
            b = b - a;
        }
    }
    return a;
}

int main6() {
    int a, b;
    printf("Nhap so nguyen duong a: ");
    scanf("%d", &a);
    printf("Nhap so nguyen duong b: ");
    scanf("%d", &b);

    int result = gcd(a, b);
    printf("Uoc chung lon nhat cua %d va %d la: %d\n", a, b, result);

    return 0;
}
