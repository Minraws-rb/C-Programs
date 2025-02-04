#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number");
    scanf("%d",&a);
    printf("Its size is %d byte",sizeof(a));
    return 0;
}