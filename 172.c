//172.	C program to print all prime numbers from 1 to N.

#include <stdio.h>
int main()
{
    int n, i, j, flag;
    printf("Enter the value of N: ");
    scanf("%d", &n);
    printf("Prime numbers between 1 to %d are: ", n);
    for (i = 2; i <= n; i++)
    {
        flag = 0;
        for (j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            printf("%d ", i);
        }
    }
    return 0;
}