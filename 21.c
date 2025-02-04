#include<stdio.h>
int main()
{
    int a,b,m=0,i;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    for(i=0;i<b;i++)
    {
        m=m+a;
    }
    printf("Multiplication of %d and %d is %d",a,b,m);
    return 0;
}