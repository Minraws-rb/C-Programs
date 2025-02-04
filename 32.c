#include<stdio.h>
int main()
{
    int a, b, c;
    printf("Enter a number and 2 divisors");
    scanf("%d%d%d",&a,&b,&c);
    if(a%b==0 || a%c==0)
    {
        printf("%d is divisible by %d and %d",a,b,c);
    }
    else
    {
        printf("%d is not divisible by %d and %d",a,b,c);
    }
    return 0;
}