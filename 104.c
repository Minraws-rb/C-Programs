/*
Question 107: Write a C program to print the following pyramid:

    A
   ABA
  ABCBA
 ABCDCBA
*/

#include <stdio.h>
int main()
{
    int i, j, k;
    char ch;
    for (i = 1; i <= 4; i++)
    {
        ch = 'A';
        for (j = 4; j > i; j--)
        {
            printf(" ");
        }
        for (k = 1; k <= i; k++)
        {
            printf("%c", ch++);
        }
        ch--;
        for (k = 1; k < i; k++)
        {
            printf("%c", --ch);
        }
        printf("\n");
    }
    return 0;
}