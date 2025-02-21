#include<stdio.h>
#include<string.h>
int main()
{
    int i, l;
    char arr[100], t=0,e=0;
    printf("Enter a sentence:\n");
    scanf("%[^\n]",arr);
    l = strlen(arr);
    for(i=0;i<l;i++)
    {
        if(arr[i]=='.')
        {
            e=arr[i];
            arr[i]=':';
        }
    }
    for(i=0;i<l;i++)
    {
        if(arr[i]!=' ')
        {
            printf("%c",arr[i]);
        }
    }
    return 0;
}