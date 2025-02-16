//C program to eliminate/remove all vowels from a string.
#include <stdio.h>
int main()
{
    char str[100], *ptr;
    printf("Enter a string: ");
    scanf("%[^\n]", str);
    ptr = str;
    while (*ptr != '\0')
    {
        if (*ptr == 'a' || *ptr == 'e' || *ptr == 'i' || *ptr == 'o' || *ptr == 'u' || *ptr == 'A' || *ptr == 'E' || *ptr == 'I' || *ptr == 'O' || *ptr == 'U')
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