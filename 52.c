#include <stdio.h>
int isAlphaNum(char c) {
    return (c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z');
}
int main() {
    char c;
    scanf("%c", &c);
    printf(isAlphaNum(c) ? "Yes\n" : "No\n");
    return 0;
}
