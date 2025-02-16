//121.	C program to implement substring function.
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100], substr[100];
    int i, j, start, end;
    printf("Enter the string: ");
    scanf("%s", str);
    printf("Enter the start and end position of the substring: ");
    scanf("%d %d", &start, &end);
    for (i = start, j = 0; i < end; i++, j++)
    {
        substr[j] = str[i];
    }
    substr[j] = '\0';
    printf("The substring is: %s\n", substr);
    return 0;
}