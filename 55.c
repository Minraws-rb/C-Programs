#include <stdio.h>
int isUpper(char c) {
    return c >= 'A' && c <= 'Z';
}
int main() {
    char c;
    scanf("%c", &c);
    printf(isUpper(c) ? "Yes\n" : "No\n");
    return 0;
}
