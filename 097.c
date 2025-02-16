//97.	Stringizing Operator in C - Program to print variable name in C.
#include <stdio.h>
#define STRING(x) #x
int main()
{
    int num = 10;
    printf("Value of num: %d\n", num);
    printf("Name of the variable: %s\n", STRING(num));
    return 0;
}