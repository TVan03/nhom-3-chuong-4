#include <stdio.h>

#define MAX_SIZE 100  // Define a maximum size for the array

int binarySearch(int a[], int left, int right, int x) {
    if (right >= left) {
        int mid = left + (right - left) / 2;

        if (a[mid] == x) return mid;

        if (a[mid] > x) return binarySearch(a, left, mid - 1, x);

        return binarySearch(a, mid + 1, right, x);
    }
    return -1;
}

int main12() {
    int n, x;
    printf("Nhap so phan tu cua mang (toi da %d): ", MAX_SIZE);
    scanf("%d", &n);

    if (n > MAX_SIZE) {
        printf("Vuot qua kich thuoc toi da.\n");
        return 1;
    }

    int a[MAX_SIZE];  // Use a fixed-size array
    printf("Nhap cac phan tu cua mang da sap xep: \n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Nhap gia tri can tim: ");
    scanf("%d", &x);

    int result = binarySearch(a, 0, n - 1, x);
    if (result != -1) {
        printf("Gia tri %d duoc tim thay tai chi so %d\n", x, result);
    }
    else {
        printf("Gia tri %d khong ton tai trong mang\n", x);
    }

    return 0;
}
