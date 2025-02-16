//117.	C program to create your own header file.
#include <stdio.h>
#define sum(a, b) (a + b)
#define diff(a, b) (a - b)
#define product(a, b) (a * b)
#define division(a, b) (a / b)
int main()
{
    int a = 10, b = 20;
    printf("The sum of %d and %d is %d\n", a, b, sum(a, b));
    printf("The difference of %d and %d is %d\n", a, b, diff(a, b));
    printf("The product of %d and %d is %d\n", a, b, product(a, b));
    printf("The division of %d and %d is %d\n", a, b, division(a, b));
    return 0;
}