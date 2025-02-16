//124.	C program to extract bytes from an integer (Hexadecimal) value
#include <stdio.h>
int main()
{
    int hex, byte1, byte2, byte3, byte4;
    printf("Enter a hexadecimal number: ");
    scanf("%x", &hex);
    byte1 = (hex & 0xFF000000) >> 24;
    byte2 = (hex & 0x00FF0000) >> 16;
    byte3 = (hex & 0x0000FF00) >> 8;
    byte4 = (hex & 0x000000FF);
    printf("The bytes are: %02X %02X %02X %02X\n", byte1, byte2, byte3, byte4);
    return 0;
}