//134.	C program to reverse bits of a number.
#include <stdio.h>
int main()
{
    unsigned int num, reversed_num = 0;
    int bits = sizeof(num) * 8 - 1;
    printf("Enter a number: ");
    scanf("%u", &num);
    for (int i = 0; i <= bits; i++)
    {
        if (num & (1 << i))
        {
            reversed_num |= 1 << (bits - i);
        }
    }
    printf("The number after reversing bits: %u\n", reversed_num);
    return 0;
}