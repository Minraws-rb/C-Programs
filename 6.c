#include<stdio.h>
int main()
{
    int a,b,r,q;
    printf("Enter a the divisor and dividend\n");
    scanf("%d%d",&a,&b);
    q=b/a;
    r=b%a;
    printf("Quotient = %d \n Remainder = %d\n",q,r);
    return 0;
}