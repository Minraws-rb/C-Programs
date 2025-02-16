//96.	C program to find class of an IP Address
#include <stdio.h>
int main()
{
    int ip[4];
    printf("Enter the IP Address: ");
    scanf("%d.%d.%d.%d", &ip[0], &ip[1], &ip[2], &ip[3]);
    if (ip[0] >= 1 && ip[0] <= 126)
    {
        printf("Class A\n");
    }
    else if (ip[0] >= 128 && ip[0] <= 191)
    {
        printf("Class B\n");
    }
    else if (ip[0] >= 192 && ip[0] <= 223)
    {
        printf("Class C\n");
    }
    else if (ip[0] >= 224 && ip[0] <= 239)
    {
        printf("Class D\n");
    }
    else if (ip[0] >= 240 && ip[0] <= 255)
    {
        printf("Class E\n");
    }
    else
    {
        printf("Invalid IP Address\n");
    }
    return 0;
}