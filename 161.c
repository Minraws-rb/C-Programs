//C program to print ODD numbers from 1 to N using while loop.
#include <stdio.h>
int main()
{
    int n, i = 1;
    printf("Enter the value of N: ");
    scanf("%d", &n);
    while (i <= n)
    {
        printf("%d\n", i);
        i += 2;
    }
    return 0;
}