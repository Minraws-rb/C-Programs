//149.	C program to Check if nth Bit in a 32-bit Integer is set or not.
#include <stdio.h>
int main()
{
    int num, pos;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter the bit position to check: ");
    scanf("%d", &pos);
    if (num & (1 << pos))
    {
        printf("The %d bit is set.\n", pos);
    }
    else
    {
        printf("The %d bit is not set.\n", pos);
    }
    return 0;
}