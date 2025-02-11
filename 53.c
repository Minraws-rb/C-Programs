#include <stdio.h>
int isDigit(char c) {
    return c >= '0' && c <= '9';
}
int main() {
    char c;
    scanf("%c", &c);
    printf(isDigit(c) ? "Yes\n" : "No\n");
    return 0;
}
