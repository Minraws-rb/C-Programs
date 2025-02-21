#include<stdio.h>
int main()
{
    char str1[20], str2[20];
    printf("Enter two strings");
    scanf("%s%s",str1,str2);
    printf("%s",strcat(str1,str2));
    return 0;
    
}