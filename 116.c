//116.	C program to remove consecutive repeated characters from string.
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100], newStr[100];
    int i, j = 0;
    printf("Enter the string: ");
    scanf("%s", str);
    for (i = 0; i < strlen(str); i++)
    {
        if (str[i] != str[i + 1])
        {
            newStr[j] = str[i];
            j++;
        }
    }
    newStr[j] = '\0';
    printf("String after removing consecutive repeated characters: %s\n", newStr);
    return 0;
}