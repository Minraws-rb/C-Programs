//139.	C program to set/clear (low/high) bits of a number
#include <stdio.h>
int main()
{
    int num, pos, choice;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter the bit position to set/clear: ");
    scanf("%d", &pos);
    printf("Enter 0 to clear the bit or 1 to set the bit: ");
    scanf("%d", &choice);
    if (choice == 1)
    {
        num = num | (1 << pos);
    }
    else
    {
        num = num & (~(1 << pos));
    }
    printf("The number after setting/clearing the bit: %d\n", num);
    return 0;
}