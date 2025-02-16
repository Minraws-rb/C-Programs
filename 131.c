//131.	C program to swap two bits.
#include <stdio.h>
int main()
{
    int num, pos1, pos2, bit1, bit2;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter the positions of bits to swap: ");
    scanf("%d %d", &pos1, &pos2);
    bit1 = (num >> pos1) & 1;
    bit2 = (num >> pos2) & 1;
    if (bit1 != bit2)
    {
        num = num ^ (1 << pos1);
        num = num ^ (1 << pos2);
    }
    printf("The number after swapping bits: %d\n", num);
    return 0;
}