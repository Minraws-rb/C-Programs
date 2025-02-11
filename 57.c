#include <stdio.h>

int isPunct(char c) {
    return (c >= 33 && c <= 47) || (c >= 58 && c <= 64) || (c >= 91 && c <= 96) || (c >= 123 && c <= 126);
}

int main() {
    char c;
    scanf("%c", &c);
    printf(isPunct(c) ? "Yes\n" : "No\n");
    return 0;
}
