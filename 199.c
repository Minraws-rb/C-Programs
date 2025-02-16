//199.	Write your own memset() function in C.
#include <stdio.h>
void my_memset(char *str, char ch, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        *(str + i) = ch;
    }
    *(str + i) = '\0';
}