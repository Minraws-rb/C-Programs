//98.	Function Pointer example program in C programming.
#include <stdio.h>
int add(int a, int b)
{
    return a + b;
}
int main()
{
    int (*ptr)(int, int);
    ptr = add;
    int sum = ptr(10, 20);
    printf("Sum = %d\n", sum);
    return 0;
}
