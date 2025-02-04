#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number for odd even check\n");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }
    return 0;
}