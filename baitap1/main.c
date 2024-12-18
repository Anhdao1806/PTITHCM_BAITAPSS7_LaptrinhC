#include <stdio.h>

int main() {
    int a[] = {12,24,35,57,68,79,80};
    int b = sizeof(a) / sizeof(a[0]);
    for (int i = 0; i < b; i++) {
        printf("Phan tu thu %d: %d\n", i, a[i]);
    }
    printf("Do dai cua mang: %d\n", b);

    return 0;
}

