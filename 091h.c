//pattern 8
#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 5; j >= i; j--)
        {
            printf("  ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        for (j = i - 1; j >= 1; j--)
        {
            printf("* ");
        }
        printf("\n");
    }
    for (i = 4; i >= 1; i--)
    {
        for (j = 5; j >= i; j--)
        {
            printf("  ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        for (j = i - 1; j >= 1; j--)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}