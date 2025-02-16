//198.	memset() function in C with Example.
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100] = "Hello, World!";
    memset(str, '*', 5);
    printf("String after memset(): %s\n", str);
    return 0;
}