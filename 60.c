#include <stdio.h>

char toLower(char c) {
    return c >= 'A' && c <= 'Z' ? c - 'A' + 'a' : c;
}

int main() {
    char c;
    scanf("%c", &c);
    printf("%c\n", toLower(c));
    return 0;
}
