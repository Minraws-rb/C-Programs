#include <stdio.h>
#define PI 3.14159

int main() {
    double r, h;
    scanf("%lf %lf", &r, &h);
    printf("Surface Area: %.2lf\n", 2 * PI * r * (r + h));
    printf("Volume: %.2lf\n", PI * r * r * h);
    return 0;
}
