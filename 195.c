//Creating string buffer (character pointer), allocating memory at run time in C.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    char *ptr;
    ptr = (char *)malloc(100 * sizeof(char));
    if (ptr == NULL)
    {
        printf("Memory not allocated.\n");
    }
    else
    {
        printf("Memory allocated successfully.\n");
        free(ptr);
    }
    return 0;
}