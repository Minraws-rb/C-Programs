#include <stdio.h>

int main() {
    int days;
    scanf("%d", &days);
    int years = days / 365;
    days %= 365;
    int weeks = days / 7;
    days %= 7;
    printf("%d years, %d weeks, %d days\n", years, weeks, days);
    return 0;
}
