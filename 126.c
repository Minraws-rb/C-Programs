//126.	C program to find Binary Addition and Binary Subtraction
#include <stdio.h>
#include <string.h>
#include <stdlib.h> // For exit(0)

int main()
{
    char binary1[65], binary2[65], result[65];
    int i, carry = 0;

    printf("Enter the first binary number: ");
    scanf("%s", binary1);
    printf("Enter the second binary number: ");
    scanf("%s", binary2);

    if (strlen(binary1) != strlen(binary2))
    {
        printf("Binary numbers should have the same length.\n");
        exit(0);
    }

    for (i = 0; i < strlen(binary1); i++)
    {
        if (binary1[i] == '0' && binary2[i] == '0')
        {
            if (carry == 0)
                result[i] = '0';
            else
            {
                result[i] = '1';
                carry = 0;
            }
        }
        else if ((binary1[i] == '0' && binary2[i] == '1') || (binary1[i] == '1' && binary2[i] == '0'))
        {
            if (carry == 0)
                result[i] = '1';
            else
                result[i] = '0';
        }
        else
        {
            if (carry == 0)
            {
                result[i] = '0';
                carry = 1;
            }
            else
                result[i] = '1';
        }
    }
    result[i] = '\0';

    printf("The sum of binary numbers is: %s\n", result);

    return 0;
}