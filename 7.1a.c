#include<stdio.h>
int main()
{
    int a,b,c,G;
    int *x,*y,*z;
    printf("Enter the 3 numbers");
    scanf("%d%d%d",&a,&b,&c);
    x=&a;
    y=&b;
    z=&c;
    if(*x > *y && *x > *z)
    {
        G=*x;
    }
    else if(*y>*z)
    {
        G=*y;
    }
    else
    {
        G=*z;
    }
    printf("Greatest number is %d",G);
    return 0;
}