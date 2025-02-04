#include<stdio.h>
int main()
{
    int p, t, r,i;
    printf("Enter Principal Amount, Time and Rate of Interest\n");
    scanf("%d%d%d",&p,&t,&r);
    i=(p*t*r)/100;
    printf("Simple Interest = %d\n",i);
    return 0;
}