//memcpy() function in C with Example.
#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100] = "Hello, World!";
    char str2[100];
    memcpy(str2, str1, strlen(str1) + 1);
    printf("Copied string is: %s\n", str2);
    return 0;
}