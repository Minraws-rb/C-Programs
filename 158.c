//C program to check a given number is the power of 2 using bitwise operator
#include <stdio.h>
#include <stdbool.h>
int main()
{
    int num;
    bool isPowerOf2 = true;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num <= 0)
    {
        printf("The number is not a power of 2.\n");
        return 0;
    }
    if (num & (num - 1))
    {
        isPowerOf2 = false;
    }
    if (isPowerOf2)
    {
        printf("The number is a power of 2.\n");
    }
    else
    {
        printf("The number is not a power of 2.\n");
    }
    return 0;
}