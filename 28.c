#include <stdio.h>

int main() 
{
    int a, b, c;
    int count;
    printf("Enter three numbers: ");
    count = scanf("%d %d %d", &a, &b, &c);
    printf("Number of inputs successfully read: %d\n", count);
    return 0;
}
