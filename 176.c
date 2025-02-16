//176.	C program to print all leap years from 1 to N.
#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter the value of N: ");
    scanf("%d", &n);
    printf("Leap years between 1 to %d are: ", n);
    for (i = 1; i <= n; i++)
    {
        if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
        {
            printf("%d ", i);
        }
    }
    return 0;
}