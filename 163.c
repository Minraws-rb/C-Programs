//C program to print all uppercase alphabets using while loop.
#include <stdio.h>
int main()
{
    char ch = 'A';
    while (ch <= 'Z')
    {
        printf("%c ", ch);
        ch++;
    }
    return 0;
}