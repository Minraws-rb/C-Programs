//C program to find the next number power of 2 using bitwise operators
#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    num |= num >> 1;
    num |= num >> 2;
    num |= num >> 4;
    num |= num >> 8;
    num |= num >> 16;
    num++;
    printf("The next number power of 2 is: %d\n", num);
    return 0;
}