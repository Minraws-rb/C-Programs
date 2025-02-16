/*
: Write a C program to print the following pyramid:
0        0
01      01
010    010
0101  0101
0101001010

*/

#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 10; j++)
        {
            if (j <= i || j > 10 - i)
            {
                if (j % 2 == 0)
                {
                    printf("0");
                }
                else
                {
                    printf("1");
                }
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}