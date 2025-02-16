//93.	C program to read and print name, where memory for variable should be declared at run time.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    char *name;
    name = (char *)malloc(20 * sizeof(char));
    if (name == NULL)
    {
        printf("Memory not allocated\n");
    }
    else
    {
        printf("Memory allocated successfully\n");
        printf("Enter your name: ");
        scanf("%s", name);
        printf("Name: %s\n", name);
        free(name);
    }
    return 0;
}
