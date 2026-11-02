#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool kiem_tra_so_nguyen_to(int n) {
    if (n < 2) {
        return false;
    }
    
    int gioi_han = (int)sqrt(n);
    for (int i = 2; i <= gioi_han; ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main(void) {
    int n;
    printf("Nhap n: ");
    if (scanf("%d", &n) != 1) return 1;

    if (kiem_tra_so_nguyen_to(n)) {
        printf("%d la SNT\n", n);
    } else {
        printf("%d Khong phai sNT\n", n);
    }

    return 0;
}
