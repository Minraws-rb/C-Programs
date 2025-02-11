#include <stdio.h>

char toUpper(char c) {
    return c >= 'a' && c <= 'z' ? c - 'a' + 'A' : c;
}

int main() {
    char c;
    scanf("%c", &c);
    printf("%c\n", toUpper(c));
    return 0;
}
