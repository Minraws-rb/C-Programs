//112.	C program to convert String into Hexadecimal.
#include <stdio.h>
#include <string.h>
int main()
{
    char str[20];
    int i, len;
    printf("Enter the string: ");
    scanf("%s", str);
    len = strlen(str);
    printf("Hexadecimal value of the string is: ");
    for (i = 0; i < len; i++)
    {
        printf("%x", str[i]);
    }
    return 0;
}