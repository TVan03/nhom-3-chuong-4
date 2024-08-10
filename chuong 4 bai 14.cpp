#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1) return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int largestFibonacciRecursive(int n) {
    int i = 0;
    while (fibonacci(i) < n) {
        i++;
    }
    return fibonacci(i - 1);
}

int main14() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);

    int result = largestFibonacciRecursive(n);
    printf("So Fibonacci lon nhat nho hon %d la: %d\n", n, result);

    return 0;
}
