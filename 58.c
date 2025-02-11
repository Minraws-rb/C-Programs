#include <stdio.h>

int isPrint(char c) {
    return c >= 32 && c <= 126;
}

int main() {
    char c;
    scanf("%c", &c);
    printf(isPrint(c) ? "Yes\n" : "No\n");
    return 0;
}
