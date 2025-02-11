#include <stdio.h>
int isSpace(char c) {
    return c == ' ' || c == '\t' || c == '\n';
}
int main() {
    char c;
    scanf("%c", &c);
    printf(isSpace(c) ? "Yes\n" : "No\n");
    return 0;
}
