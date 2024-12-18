#include <stdio.h>

int main() {
    int a[5];
    printf("Nhap 5 phan tu cho mang:\n");
    for (int i = 0; i < 5; i++) {
        printf("Nhap phan tu %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    printf("Mang sau khi nhap gia tri1:\n");
    for (int i = 0; i < 5; i++) {
        printf("Phan tu %d: %d\n", i + 1, a[i]);
    }

    return 0;
}

