#include<stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen("filec.txt","r");
    FILE *ptr1;
    FILE *ptr2;
    ptr1 = fopen("upper.txt","w");
    ptr2 = fopen("lower.txt","w");
    char c;
    while(c = fgetc(ptr)!=EOF)
    {
        if(c>='A'&&c<='Z')
        {
             fputc(c,ptr1);
        }
        if(c>='a'&&c<='z')
        {
            fputc(c,ptr2);
        }
    }
    fclose(ptr);
    fclose(ptr1);
    fclose(ptr2);
    return 0;
}