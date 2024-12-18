#include <stdio.h>

int main(){
    int a[5] = {100,65,90,99,1};
    int phanTuLonNhat= a[0];
    int phanTuNhoNhat = a[0];
    for (int i = 1; i < 5; i++) {
        if (a[i] > phanTuLonNhat)
        {
            phanTuLonNhat = a[i];
        }
        if (a[i] < phanTuNhoNhat)
        {
            phanTuNhoNhat = a[i];
        }
    }

    printf("Phan tu lon nhat trong mang la: %d\n", phanTuLonNhat);
    printf("Phan tu nho nhat trong mang la: %d\n", phanTuNhoNhat);

    return 0;
}

