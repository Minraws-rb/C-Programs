//130.	C program to get minimum number of bits to store an integer number.
#include <stdio.h>
int main()
{
    int num, bits = 0;
    printf("Enter an integer number: ");
    scanf("%d", &num);
    while (num > 0)
    {
        num >>= 1;
        bits++;
    }
    printf("Minimum number of bits required to store the number is: %d\n", bits);
    return 0;
}