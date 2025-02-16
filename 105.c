/*
Question 105: Write a C program to print the following character pyramid:

    A
   BAB
  CBABC
 DCBABCD
EDCBABCDE

*/

#include <stdio.h>
int main()
{
    int i, j, k;
    char ch;
    for (i = 1; i <= 5; i++)
    {
        ch = 'A' + i - 1;
        for (j = 5; j > i; j--)
        {
            printf(" ");
        }
        for (k = 1; k <= i; k++)
        {
            printf("%c", ch--);
        }
        ch = 'A' + i;
        for (k = 1; k < i; k++)
        {
            printf("%c", ch++);
        }
        printf("\n");
    }
    return 0;
}