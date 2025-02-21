#include<stdio.h>
#include<string.h>
int main()
{
    char a[20],b[20];
    printf("ENter two strings");
    scanf("%s%s",a,b);
    if(strcmp(a,b)==0)
    {
        printf("Strings are same");
    }
    else 
    {
        printf("They are different");
    }
    return 0;
}