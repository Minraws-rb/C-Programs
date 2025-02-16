//C program to print the range of fundamental data types using bitwise operators
#include <stdio.h>
int main()
{
    printf("The range of char is from %d to %d\n", -(char)((unsigned char)~0 >> 1) - 1, (char)((unsigned char)~0 >> 1));
    printf("The range of unsigned char is from 0 to %u\n", (unsigned char)~0);
    printf("The range of short is from %d to %d\n", -(short)((unsigned short)~0 >> 1) - 1, (short)((unsigned short)~0 >> 1));
    printf("The range of unsigned short is from 0 to %u\n", (unsigned short)~0);
    printf("The range of int is from %d to %d\n", -(int)((unsigned int)~0 >> 1) - 1, (int)((unsigned int)~0 >> 1));
    printf("The range of unsigned int is from 0 to %u\n", (unsigned int)~0);
    printf("The range of long is from %ld to %ld\n", -(long)((unsigned long)~0 >> 1) - 1, (long)((unsigned long)~0 >> 1));
    printf("The range of unsigned long is from 0 to %lu\n", (unsigned long)~0);
    return 0;
}