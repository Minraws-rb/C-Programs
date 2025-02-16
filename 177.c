//177.	C program to print all upper case and lower case alphabets.
#include <stdio.h>
int main()
{
    char ch = 'A';
    printf("Uppercase Alphabets: ");
    while (ch <= 'Z')
    {
        printf("%c ", ch);
        ch++;
    }
    ch = 'a';
    printf("\nLowercase Alphabets: ");
    while (ch <= 'z')
    {
        printf("%c ", ch);
        ch++;
    }
    return 0;
}