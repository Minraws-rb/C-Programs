//167.	C program to read an integer and print its multiplication table.
#include <stdio.h>
int main()
{
    int n, i = 1;
    printf("Enter the value of N: ");
    scanf("%d", &n);
    while (i <= 10)
    {
        printf("%d x %d = %d\n", n, i, n * i);
        i++;
    }
    return 0;
}