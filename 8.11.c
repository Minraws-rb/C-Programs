#include<stdio.h>
#include<string.h>
int main()
{
    int i,j;
    char arr[10]="UNIVERSITY";
    for(i=0;i<6;i++)
    {
        for(j=0;j<2*i;j++)
        {
            printf("%c ",arr[j]);
        }
        printf("\n");
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<8-(2*i);j++)
        {
            printf("%c ",arr[j]);
        }
        printf("\n");
    }
}