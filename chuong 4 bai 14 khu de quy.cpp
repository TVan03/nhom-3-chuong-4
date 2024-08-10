#include <stdio.h>

int largestFibonacciIterative(int n) {
    int a = 0, b = 1, c = a + b;
    while (c < n) {
        a = b;
        b = c;
        c = a + b;
    }
    return b;
}

int main14khudequy() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);

    int result = largestFibonacciIterative(n);
    printf("So Fibonacci lon nhat nho hon %d la: %d\n", n, result);

    return 0;
}
