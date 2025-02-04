#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    int c=a+b;
    float d=c/2;
    printf("Sum = %d\nAverage = %.2f",c,d);
    return 0;
}