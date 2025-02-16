//C Program to check entered number is ZERO, POSITIVE or NEGATIVE until user does not want to quit.
#include <stdio.h>
int main()
{
    int num;
    char ch;
    do
    {
        printf("Enter a number: ");
        scanf("%d", &num);
        if (num == 0)
        {
            printf("Number is ZERO.\n");
        }
        else if (num > 0)
        {
            printf("Number is POSITIVE.\n");
        }
        else
        {
            printf("Number is NEGATIVE.\n");
        }
        printf("Do you want to continue? (Y/N): ");
        scanf(" %c", &ch);
    } while (ch == 'Y' || ch == 'y');
    return 0;
}