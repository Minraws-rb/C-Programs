#include <stdio.h>

int main() {
    double b1, b2, h;
    scanf("%lf %lf %lf", &b1, &b2, &h);
    printf("Area: %.2lf\n", 0.5 * (b1 + b2) * h);
    return 0;
}
