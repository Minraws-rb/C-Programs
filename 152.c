//152.	C program to find the position of MSB bit of an unsigned integer number
#include <stdio.h>
int main()
{
    unsigned int num;
    int msb = 0;
    printf("Enter a number: ");
    scanf("%u", &num);
    while (num > 1)
    {
        num >>= 1;
        msb++;
    }
    printf("The position of MSB bit is: %d\n", msb);
    return 0;
}