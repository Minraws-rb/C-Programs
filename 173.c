//C program to print all even and odd numbers from 1 to N.
#include <stdio.h>
int main()
{
    int n, i = 1;
    printf("Enter the value of N: ");
    scanf("%d", &n);
    printf("Even numbers between 1 to %d are: ", n);
    while (i <= n)
    {
        if (i % 2 == 0)
        {
            printf("%d ", i);
        }
        i++;
    }
    i = 1;
    printf("\nOdd numbers between 1 to %d are: ", n);
    while (i <= n)
    {
        if (i % 2 != 0)
        {
            printf("%d ", i);
        }
        i++;
    }
    return 0;
}