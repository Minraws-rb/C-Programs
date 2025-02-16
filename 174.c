//174.	C program to print all Armstrong numbers from 1 to N.
#include <stdio.h>
#include <math.h>
int main()
{
    int n, i, sum, temp, rem, digits;
    printf("Enter the value of N: ");
    scanf("%d", &n);
    printf("Armstrong numbers between 1 to %d are: ", n);
    for (i = 1; i <= n; i++)
    {
        sum = 0;
        temp = i;
        digits = (int)log10(i) + 1;
        while (temp != 0)
        {
            rem = temp % 10;
            sum += pow(rem, digits);
            temp /= 10;
        }
        if (sum == i)
        {
            printf("%d ", i);
        }
    }
    return 0;
}