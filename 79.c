#include <stdio.h>
#include <math.h>
#define PI 3.14159

int main() {
    double r, h, sl;
    scanf("%lf %lf", &r, &h);
    sl = sqrt(r * r + h * h);
    printf("Surface Area: %.2lf\n", PI * r * (r + sl));
    printf("Volume: %.2lf\n", (PI * r * r * h) / 3);
    return 0;
}
