//168.	C Program to print tables from numbers 1 to 20.
#include <stdio.h>
int main()
{
    int i = 1, j;
    while (i <= 20)
    {
        j = 1;
        while (j <= 10)
        {
            printf("%d x %d = %d\n", i, j, i * j);
            j++;
        }
        i++;
    }
    return 0;
}