#include <stdio.h>

// Hàm chuyển đĩa từ cọc nguồn sang cọc đích, sử dụng cọc trung gian
void chuyenDia(int n, char nguon, char dich, char trungGian) {
    if (n == 1) {
        printf("Chuyen dia 1 tu %c sang %c\n", nguon, dich);
        return;
    }
    chuyenDia(n - 1, nguon, trungGian, dich);
    printf("Chuyen dia %d tu %c sang %c\n", n, nguon, dich);
    chuyenDia(n - 1, trungGian, dich, nguon);
}

int mainn() {
    int n; // Số lượng đĩa
    printf("Nhap so luong dia: ");
    scanf("%d", &n);
    chuyenDia(n, 'A', 'C', 'B'); // Chuyển n đĩa từ cọc A sang cọc C, dùng cọc B làm trung gian
    return 0;
}
