//C program to read a byte and print bits between given positions
#include <stdio.h>
int main()
{
    unsigned char num, start, end, mask;
    printf("Enter a number: ");
    scanf("%hhu", &num);
    printf("Enter the start position: ");
    scanf("%hhu", &start);
    printf("Enter the end position: ");
    scanf("%hhu", &end);
    mask = (1 << (end - start + 1)) - 1;
    mask <<= start;
    printf("The bits between %d and %d are: %d\n", start, end, (num & mask) >> start);
    return 0;
}