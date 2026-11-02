#include <stdio.h>

int tim_so_lon_nhat(const int a[], int n) {
    int max_val = a[0];
    for (int i = 1; i < n; ++i) {
        if (a[i] > max_val) {
            max_val = a[i];
        }
    }
    return max_val;
}

int main(void) {
    int n;
    printf("Nhap so luong phan tu N: ");
    if (scanf("%d", &n) != 1 || n <= 0) return 1;

    int a[n];
    for (int i = 0; i < n; ++i) {
        printf("A[%d] = ", i);
        scanf("%d", &a[i]);
    }

    int max_result = tim_so_lon_nhat(a, n);
    printf("Max = %d\n", max_result);

    return 0;
}
