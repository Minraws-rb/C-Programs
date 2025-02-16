//C program to find the Highest Bit Set for any given Integer.
#include <stdio.h>
int main()
{
    int num, i;
    printf("Enter a number: ");
    scanf("%d", &num);
    for (i = 31; i >= 0; i--)
    {
        if (num & (1 << i))
        {
            printf("The highest bit set is at position %d\n", i);
            break;
        }
    }
    return 0;
}