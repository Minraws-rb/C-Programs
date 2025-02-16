//157.	C program to swap two bits of a 32-bit integer number
#include <stdio.h>
int main()
{
    unsigned int num, bit1, bit2;
    printf("Enter a number: ");
    scanf("%u", &num);
    printf("Enter the first bit position: ");
    scanf("%u", &bit1);
    printf("Enter the second bit position: ");
    scanf("%u", &bit2);
    num ^= (1 << bit1);
    num ^= (1 << bit2);
    printf("The number after swapping the bits is: %u\n", num);
    return 0;
}