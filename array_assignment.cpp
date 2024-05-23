#include <stdio.h>

int main() {
    int n;
    // So luong phan tu
    printf("Nhap So Luong Phan Tu: ");
    scanf("%d", &n);
    int arr[n];
    // Nhap Cac Phan Tu
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }
     // Printf
    printf("Mang da dao nguoc la:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
