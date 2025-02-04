#include<stdio.h>
int main()
{
    int a;
    int *p;
    p = &a;
    printf("Enter a number\n");
    scanf("%d",&a);
    printf("%d address is %d",a,p);
    return 0;
}