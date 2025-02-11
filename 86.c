#include <stdio.h>

struct Complex {
    double real, img;
};

int main() {
    struct Complex c1, c2;
    scanf("%lf %lf %lf %lf", &c1.real, &c1.img, &c2.real, &c2.img);
    printf("Sum: %.2lf + %.2lfi\n", c1.real + c2.real, c1.img + c2.img);
    return 0;
}
