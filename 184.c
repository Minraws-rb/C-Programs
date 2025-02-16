//184.	C program to read a string and print the length of the each word.
#include <stdio.h>
int main()
{
    char str[100];
    int i = 0, count = 0;
    printf("Enter a string: ");
    scanf("%[^\n]", str);
    while (str[i] != '\0')
    {
        if (str[i] != ' ')
        {
            count++;
        }
        else
        {
            printf("Length of word: %d\n", count);
            count = 0;
        }
        i++;
    }
    printf("Length of word: %d\n", count);
    return 0;
}