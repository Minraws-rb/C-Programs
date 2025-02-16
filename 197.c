//197.	Write your own memcpy() function in C.
#include <stdio.h>
void my_memcpy(char *dest, char *src, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        *(dest + i) = *(src + i);
    }
    *(dest + i) = '\0';
}