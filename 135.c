//135.	C program to count number of 1's in a number.
#include <stdio.h>
int main()
{
    int num, count = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num)
    {
        num &= (num - 1); // Drops the lowest set bit
        count++;
    }
    printf("The number of 1's in the number is: %d\n", count);
    return 0;
}
