#include <stdio.h>
#include <ctype.h>

int main() {
    for (char c = 32; c <= 126; c++) {
        if (isprint(c)) printf("%c ", c);
    }
    printf("\n");
    return 0;
}
