#include <stdio.h>
#include <math.h>

int main() {
    double l, w, h;
    scanf("%lf %lf %lf", &l, &w, &h);
    printf("Surface Area: %.2lf\n", 2 * (l * w + w * h + h * l));
    printf("Volume: %.2lf\n", l * w * h);
    printf("Space Diagonal: %.2lf\n", sqrt(l * l + w * w + h * h));
    return 0;
}
