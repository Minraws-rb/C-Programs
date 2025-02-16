//144.	C program to count number of bits set to 1 in an Integer.
#include <stdio.h>
int main()
{
    int num, count = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num)
    {
        count += num & 1;
        num >>= 1;
    }
    printf("The number of bits set to 1 in the number is: %d\n", count);
    return 0;
}