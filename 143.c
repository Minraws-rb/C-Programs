//C program to check if all the bits of a given integer is one (1).
#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num == -1)
    {
        printf("All bits are 1\n");
    }
    else
    {
        printf("All bits are not 1\n");
    }
    return 0;
}
