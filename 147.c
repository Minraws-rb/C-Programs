//147.	C program to replace bit in an integer at a specified position from another integer.
#include <stdio.h>
int main()
{
    int num1, num2, pos;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("Enter the bit position to replace: ");
    scanf("%d", &pos);
    num1 = num1 & (~(1 << pos));
    num1 = num1 | ((num2 & 1) << pos);
    printf("The number after replacing the bit: %d\n", num1);
    return 0;
}