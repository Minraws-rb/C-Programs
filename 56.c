#include <stdio.h>
int isLower(char c) {
    return c >= 'a' && c <= 'z';
}
int main() {
    char c;
    scanf("%c", &c);
    printf(isLower(c) ? "Yes\n" : "No\n");
    return 0;
}
