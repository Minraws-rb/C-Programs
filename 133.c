//133.	C program to swap bytes (for example convert 0x1234 to 0x3412).
#include <stdio.h>
int main()
{
    unsigned int num, swapped_num;
    printf("Enter a number: ");
    scanf("%x", &num);
    swapped_num = ((num >> 8) & 0x00FF) | ((num << 8) & 0xFF00);
    printf("The number after swapping bytes: %X\n", swapped_num);
    return 0;
}