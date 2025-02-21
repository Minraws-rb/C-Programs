#include<stdio.h>
int main()
{
    int l=0,i;
    char str1[200], str2[200];
    printf("Enter a string");
    scanf("%s",str1);
    while(str1[l]!='\0')
    {
        l++;
    }
    for(i=0;i<l;i++)
    {
        str2[i]=str1[i];
    }
    str2[i]='\0';
    printf("%s\n%s\n",str1,str2);
    return 0;
}