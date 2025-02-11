#include <stdio.h>
#define PI 3.14159

int main() {
    double r;
    scanf("%lf", &r);
    printf("Surface Area: %.2lf\n", 4 * PI * r * r);
    printf("Volume: %.2lf\n", (4.0 / 3.0) * PI * r * r * r);
    return 0;
}
