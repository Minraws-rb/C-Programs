//181.	C program to create and print array of strings.
#include <stdio.h>
int main()
{
    char str[5][20];
    int i;
    printf("Enter 5 strings: ");
    for (i = 0; i < 5; i++)
    {
        scanf("%s", str[i]);
    }
    printf("You entered: \n");
    for (i = 0; i < 5; i++)
    {
        printf("%s\n", str[i]);
    }
    return 0;
}