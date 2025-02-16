//111.	C program to check given string is a valid IPv4 address or not.
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char ip[20];
    int i, len, count = 0, num = 0, dot = 0;
    printf("Enter the IP address: ");
    scanf("%s", ip);
    len = strlen(ip);
    for (i = 0; i < len; i++)
    {
        if (ip[i] == '.')
        {
            dot++;
        }
    }
    if (dot != 3)
    {
        printf("Invalid IP address\n");
        exit(1);
    }
    for (i = 0; i < len; i++)
    {
        if (ip[i] == '.')
        {
            if (num < 0 || num > 255)
            {
                count++;
            }
            num = 0;
        }
        else if (ip[i] >= '0' && ip[i] <= '9')
        {
            num = num * 10 + (ip[i] - '0');
        }
        else
        {
            count++;
        }
    }
    if (num < 0 || num > 255)
    {
        count++;
    }
    if (count == 0)
    {
        printf("Valid IP address\n");
    }
    else
    {
        printf("Invalid IP address\n");
    }
    return 0;
}