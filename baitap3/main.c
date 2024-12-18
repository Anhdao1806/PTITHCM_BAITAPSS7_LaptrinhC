#include <stdio.h>

int main() {
    int a[5] = {1,3,5,7,9};
    int flag = 1;

    for (int i = 0; i < 5; i++) {
        if (a[i] % 2 == 0) {
            printf("%d ", a[i]);
            flag = 0;
        }
    }

    if (flag) {
        printf("Mang khong co so chan. \n");
    }

    return 0;
}

