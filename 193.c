//193.	C program to swap adjacent characters of a string.
#include <stdio.h>
int main()
{
    char str[100], *ptr;
    char temp;
    printf("Enter a string: ");
    scanf("%[^\n]", str);
    ptr = str;
    while (*ptr != '\0')
    {
        temp = *ptr;
        *ptr = *(ptr + 1);
        *(ptr + 1) = temp;
        ptr = ptr + 2;
    }
    printf("String after swapping adjacent characters: %s\n", str);
    return 0;
}