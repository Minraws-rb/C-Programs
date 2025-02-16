//189.	C program to remove all spaces from a given string.
#include <stdio.h>
int main()
{
    char str[100], *ptr;
    printf("Enter a string: ");
    scanf("%[^\n]", str);
    ptr = str;
    while (*ptr != '\0')
    {
        if (*ptr == ' ')
        {
            ptr++;
        }
        else
        {
            printf("%c", *ptr);
            ptr++;
        }
    }
    return 0;
}