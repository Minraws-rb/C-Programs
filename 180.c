//180.	C program to compare two strings using pointers.
#include <stdio.h>
int main()
{
    char str1[100], str2[100], *ptr1, *ptr2;
    int flag = 0;
    printf("Enter first string: ");
    scanf("%[^\n]", str1);
    printf("Enter second string: ");
    scanf(" %[^\n]", str2);
    ptr1 = str1;
    ptr2 = str2;
    while (*ptr1 != '\0' && *ptr2 != '\0')
    {
        if (*ptr1 != *ptr2)
        {
            flag = 1;
            break;
        }
        ptr1++;
        ptr2++;
    }
    if (flag == 0 && *ptr1 == '\0' && *ptr2 == '\0')
    {
        printf("Strings are equal.\n");
    }
    else
    {
        printf("Strings are not equal.\n");
    }
    return 0;
}