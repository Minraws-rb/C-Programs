#include <stdio.h>
int main() {
    printf("ASCII Table:\n");
    printf("-------------\n");
    printf("Char  ASCII\n");
    printf("-------------\n");
    for (int i = 0; i < 385; i++) {
        printf("  %c     %3d\n", i, i);
    }
    return 0;
}
