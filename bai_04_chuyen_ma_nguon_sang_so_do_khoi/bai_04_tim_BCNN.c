#include <stdio.h>

int main(void) {
    int a, b;
    if (scanf("%d %d", &a, &b) != 2) return 1;

    int x = a;
    int y = b;

    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }

    int bcnn = (x * y) / a;
    printf("%d\n", bcnn);

    return 0;
}
