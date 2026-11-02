#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);
    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                printf("Vo so nghiem");
            } else {
                printf("Vo nghiem");
            }
        } else {
            float x = -c / b;
            printf("Phuong trinh co 1 nghiem: %f", x);
        }
    } else {
        float delta = b * b - 4 * a * c;
        if (delta < 0) {
            printf("Vo nghiem");
        } else if (delta == 0) {
            float x = -b / (2 * a);
            printf("Nghiem kep: %f", x);
        } else {
            float x1 = (-b - sqrt(delta)) / (2 * a);
            float x2 = (-b + sqrt(delta)) / (2 * a);
            printf("2 nghiem phan biet: x1 = %f, x2 = %f", x1, x2);
        }
    }
    return 0;
}
