//C program to Count the Number of Trailing Zeroes in an Integer
#include <stdio.h>
int main()
{
    int num, count = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while ((num & 1) == 0)
    {
        num >>= 1;
        count++;
    }
    printf("The number of trailing zeroes in the number is: %d\n", count);
    return 0;
}