//C program to round off an integer number to the next lower multiple of 2
#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    num >>= 1;
    printf("The next lower multiple of 2 is: %d\n", num << 1);
    return 0;
}