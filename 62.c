#include <stdio.h>
#include <ctype.h>

int main() {
    for (char c = 33; c <= 126; c++) {
        if (ispunct(c)) printf("%c ", c);
    }
    printf("\n");
    return 0;
}
