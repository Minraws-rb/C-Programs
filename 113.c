//113.	C program to demonstrate example of Variable Arguments.
#include <stdio.h>
#include <stdarg.h>
void display(int num, ...)
{
    va_list ptr;
    va_start(ptr, num);
    for (int i = 0; i < num; i++)
    {
        printf("%d ", va_arg(ptr, int));
    }
    va_end(ptr);
}
int main()
{
    display(5, 1, 2, 3, 4, 5);
    return 0;
}
