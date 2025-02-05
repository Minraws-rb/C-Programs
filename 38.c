#include<stdio.h>
int main()
{
    int k,m,f,i;
    printf("Enter the distance between cities in Kilometer");
    scanf("%d",&k);
    m=k*1000;
    f=k*3281;
    i=f*12;
    printf("Distance in:\n");
    printf("Meter = %d\nFeet = %d\nInch = %d\n",m,f,i);
    return 0;
}