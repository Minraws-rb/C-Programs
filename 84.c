#include <stdio.h>

long fact(int n) {
    long f = 1;
    for (int i = 1; i <= n; i++) f *= i;
    return f;
}

int main() {
    int n, r;
    scanf("%d %d", &n, &r);
    printf("nPr: %ld\n", fact(n) / fact(n - r));
    return 0;
}
