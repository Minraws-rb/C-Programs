#include<stdio.h>
void concat(char a[],char s1[],char s2[])
{
    int i=0,j=0;
    while(s1[i]!='\0')
    {
        a[i]=s1[i];
        i++;
    }
    while(s2[j]!='\0')
    {
        a[i]=s2[j];
        i++;
        j++;
    }  
    printf("The concat of 2 string is %s",a); 
}
int main()
{
    char a[20],s1[20],s2[20];
    printf("Enter 2 words:\n");
    scanf("%s%s",s1,s2);
    concat(a,s1,s2);
    return 0;
}