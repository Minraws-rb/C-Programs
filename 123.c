//123.	C program to convert hexadecimal Byte to integer
#include <stdio.h>
int main()
{
    unsigned char hex;
    int dec;
    printf("Enter a hexadecimal byte: ");
    scanf("%x", &hex);
    dec = hex;
    printf("The decimal value is: %d\n", dec);
    return 0;
}