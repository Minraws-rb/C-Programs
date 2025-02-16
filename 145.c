//145.	C program to check whether a given number is palindrome or not using Bitwise Operator.
#include <stdio.h>
#include <stdbool.h>
int main()
{
    int num, reversed_num = 0, temp;
    bool isPalindrome = true;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    while (temp)
    {
        reversed_num = (reversed_num << 1) | (temp & 1);
        temp >>= 1;
    }
    if (num != reversed_num)
    {
        isPalindrome = false;
    }
    if (isPalindrome)
    {
        printf("The number is a palindrome.\n");
    }
    else
    {
        printf("The number is not a palindrome.\n");
    }
    return 0;
}