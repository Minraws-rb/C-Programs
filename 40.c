#include<stdio.h>
int main()
{
    int a, b, s;
    printf("Enter two numbers:\n");
    scanf("%d%d",&a,&b);
    s = a + (~b + 1);
    printf("%d - %d = %d",a,b,s);
    return 0;
}