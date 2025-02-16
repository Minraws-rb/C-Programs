//182.	C program to capitalize first character of each word in a string
#include <stdio.h>
int main()
{
    char str[100];
    int i = 0;
    printf("Enter a string: ");
    scanf("%[^\n]", str);
    while (str[i] != '\0')
    {
        if (i == 0 && str[i] != ' ' || str[i] != ' ' && str[i - 1] == ' ')
        {
            if (str[i] >= 'a' && str[i] <= 'z')
            {
                str[i] = str[i] - 32;
            }
        }
        i++;
    }
    printf("String after capitalizing first character of each word: %s\n", str);
    return 0;
}