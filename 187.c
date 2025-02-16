//C program to read n strings and print each string's length.
#include <stdio.h>
int main()
{
    char str[100], *ptr;
    int n, i;
    printf("Enter the number of strings: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter a string: ");
        scanf(" %[^\n]", str);
        ptr = str;
        while (*ptr != '\0')
        {
            ptr++;
        }
        printf("Length of the string is: %d\n", ptr - str);
    }
    return 0;
}