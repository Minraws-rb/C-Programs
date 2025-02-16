//132.	C program to check whether all bits of a number are UNSET/LOW?
#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num == 0)
        printf("All bits are UNSET/LOW.\n");
    else
        printf("All bits are not UNSET/LOW.\n");
    return 0;
}