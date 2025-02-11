#include <stdio.h>

int main() {
    double h;
    scanf("%lf", &h);
    if (h > 6) printf("Taller\n");
    else if (h < 4) printf("Dwarf\n");
    else printf("Average\n");
    return 0;
}
