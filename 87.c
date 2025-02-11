#include <stdio.h>

int main() {
    int year;
    scanf("%d", &year);
    printf("Last two digits: %d\n", year % 100);
    return 0;
}
