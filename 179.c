//179.	C program to print indexes of a particular character in a string.
#include <stdio.h>
int main()
{
    char str[100], ch;
    int i = 0;
    printf("Enter a string: ");
    scanf("%[^\n]", str);
    printf("Enter a character to find its indexes: ");
    scanf("%c", &ch);
    printf("Indexes of character '%c' in the string are: ", ch);
    while (str[i] != '\0')
    {
        if (str[i] == ch)
        {
            printf("%d ", i);
        }
        i++;
    }
    return 0;
}