//150.	C program to check a number contain the alternative pattern of bits
#include <stdio.h>
#include <stdbool.h>
int main()
{
    int num;
    bool isAlternative = true;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num)
    {
        if ((num & 1) == ((num >> 1) & 1))
        {
            isAlternative = false;
            break;
        }
        num >>= 1;
    }
    if (isAlternative)
    {
        printf("The number contains the alternative pattern of bits.\n");
    }
    else
    {
        printf("The number does not contain the alternative pattern of bits.\n");
    }
    return 0;
}