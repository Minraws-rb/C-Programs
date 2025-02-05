#include<stdio.h>
int main()
{
    int l, b;
    printf("Enter length and Breadth of the rectangle:\n");
    scanf("%d%d",&l,&b);
    printf("Area=%d\nPerimeter=%d\n",l*b,2*(l+b));
    return 0;
}