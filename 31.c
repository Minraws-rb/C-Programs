#include<stdio.h>
#include<string.h>
int main()
{
    char n[20], a[20];
    printf("Enter your Name and Marital status\n");
    scanf("%s%s",n,a);
    if(strcmp(a, "married") == 0)
    {
        printf("Hi Mrs %s",n);
    }
    else
    {
        printf("Hi Miss %s",n);
    }
    return 0;
}