#include <stdio.h>
#include <math.h>

// Function prototypes
int S1(int n);
double S2(int n);
double S3(int n);
double S4(int n);
int S5(int n);

int main4() {
    int n;
    printf("Nhap gia tri cua n: ");
    scanf("%d", &n);

    printf("Chon bieu thuc S(n) ma ban muon tinh:\n");
    printf("S(n) = %d\n", S1(n));
    printf("1. S(n) = 1 + 2 + 3 + ... + n\n");
    printf("2. S(n) = sqrt(2 + sqrt(2 + ... + sqrt(2))) with n square roots\n");
    printf("S(n) = %lf\n", S2(n));
    printf("3. S(n) = 1/2 + 2/3 + 3/4 + ... + n/(n+1)\n");
    printf("S(n) = %lf\n", S3(n));
    printf("4. S(n) = 1 + 1/3 + 1/5 + ... + 1/(2n+1)\n");
    printf("S(n) = %lf\n", S4(n));
    printf("5. S(n) = 1*2 + 2*3 + 3*4 + ... + n*(n+1)\n");
    printf("S(n) = %d\n", S5(n));

  
    return 0;
}

// S(n) = 1 + 2 + 3 + ... + n
int S1(int n) {
    return n * (n + 1) / 2;
}

// S(n) = sqrt(2 + sqrt(2 + ... + sqrt(2))) with n square roots
double S2(int n) {
    if (n == 1) {
        return sqrt(2);
    }
    return sqrt(2 + S2(n - 1));
}

// S(n) = 1/2 + 2/3 + 3/4 + ... + n/(n+1)
double S3(int n) {
    double sum = 0.0;
    for (int i = 1; i <= n; i++) {
        sum += (double)i / (i + 1);
    }
    return sum;
}

// S(n) = 1 + 1/3 + 1/5 + ... + 1/(2n+1)
double S4(int n) {
    double sum = 0.0;
    for (int i = 0; i <= n; i++) {
        sum += 1.0 / (2 * i + 1);
    }
    return sum;
}

// S(n) = 1*2 + 2*3 + 3*4 + ... + n*(n+1)
int S5(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i * (i + 1);
    }
    return sum;
}
