#include <stdio.h>
#include<string.h>
void palindrome(char str[])
{
    int i,c=0;
    int len = strlen(str);
    for(i=0;i<(len/2);i++)
    {
        if(str[i]!=str[len-i-1])
        {
            printf("It is not a palindrome");
            return;
        }
}
printf("It is a palindrome");
}
int main() {
    char str[20];
    printf("Enter any string");
    scanf("%s",str);
    palindrome(str);
    return 0;
}
