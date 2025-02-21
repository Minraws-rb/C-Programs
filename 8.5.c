#include<stdio.h>
#include<string.h>
int main()
{
    int i, c=1, l;
    char str[200];
    printf("Enter a sentence");
    scanf("%[^\n]",str);
    l = strlen(str);
    for(i=0;i<l; i++)
    {
        if (str[i]==' ')
        {
            c++;
        }
    }
    printf("The number of words in the sentence is %d",c);
    return 0;
}