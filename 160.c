//C program to print bits that need to be flipped to convert a number to another number
#include <stdio.h>
int main()
{
    unsigned int num1, num2, count = 0;
    printf("Enter the first number: ");
    scanf("%u", &num1);
    printf("Enter the second number: ");
    scanf("%u", &num2);
    while (num1 || num2)
    {
        if ((num1 & 1) != (num2 & 1))
        {
            printf("Bit position %d needs to be flipped.\n", count);
        }
        num1 >>= 1;
        num2 >>= 1;
        count++;
    }
    return 0;
}