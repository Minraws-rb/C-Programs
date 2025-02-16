//186.	C program to eliminate/remove first character of each word from a string.
#include <stdio.h>      
int main()      
{      
    char str[100], *ptr;      
    printf("Enter a string: ");      
    scanf("%[^\n]", str);      
    ptr = str;      
    while (*ptr != '\0')      
    {      
        if (*ptr == ' ' || *ptr == '\t')      
        {      
            ptr++;      
            printf("%c", *ptr);      
        }      
        else      
        {      
            ptr++;      
        }      
    }      
    return 0;      
}
