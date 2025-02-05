#include<stdio.h>
int main()
{
    int dsr, dvd, q, r;
    printf("Enter divisor and dividend\n");
    scanf("%d%d",&dsr,&dvd);
    q = dvd/dsr;
    r= dvd - q*dsr;
    printf("Remainder = %d",r);
    return 0;
}