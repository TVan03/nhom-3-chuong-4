#include <stdio.h>

int Fibonacci(int n) {
    if (n <= 2) return 1;
    return Fibonacci(n - 1) + Fibonacci(n - 2);
}

int main13() {
    int n;
    printf("Nhap gia tri n: ");
    scanf("%d", &n);

    printf("Day so Fibonacci: ");
    for (int i = 1; i <= n; i++) {
        printf("%d ", Fibonacci(i));
    }
    printf("\n");

    return 0;
}