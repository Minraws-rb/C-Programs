//148.	C program to swap two Integers using Bitwise Operators.
#include <stdio.h>
int main()
{
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    num1 = num1 ^ num2;
    num2 = num1 ^ num2;
    num1 = num1 ^ num2;
    printf("The numbers after swapping are: %d and %d\n", num1, num2);
    return 0;
}