//92.	C program to declare memory for an integer variable dynamically.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    ptr = (int *)malloc(sizeof(int));
    if (ptr == NULL)
    {
        printf("Memory not allocated\n");
    }
    else
    {
        printf("Memory allocated successfully\n");
        *ptr = 10;
        printf("Value of the variable: %d\n", *ptr);
        free(ptr);
    }
    return 0;
}