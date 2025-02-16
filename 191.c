//C program to remove alphabets from an alphanumeric string.
#include <stdio.h>
int main()
{
    char str[100], *ptr;
    printf("Enter a string: ");
    scanf("%[^\n]", str);
    ptr = str;
    while (*ptr != '\0')
    {
        if ((*ptr >= 'a' && *ptr <= 'z') || (*ptr >= 'A' && *ptr <= 'Z'))
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