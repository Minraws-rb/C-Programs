//109.	C program to compare names compatibality.
#include <stdio.h>
#include <string.h>
int main()
{
    char name1[20], name2[20];
    int i, j, len1, len2, count = 0;
    printf("Enter the first name: ");
    scanf("%s", name1);
    printf("Enter the second name: ");
    scanf("%s", name2);
    len1 = strlen(name1);
    len2 = strlen(name2);
    for (i = 0; i < len1; i++)
    {
        for (j = 0; j < len2; j++)
        {
            if (name1[i] == name2[j])
            {
                count++;
                name2[j] = '0';
                break;
            }
        }
    }
    if (count == len1)
    {
        printf("The names are compatible\n");
    }
    else
    {
        printf("The names are not compatible\n");
    }
    return 0;
}