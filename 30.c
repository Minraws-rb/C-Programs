#include<stdio.h>
int main()
{
    int a, b;
    printf("Enter two integers");
    scanf("%d%d",&a,&b);
    printf("No Swap:\n%d\t%d\n",a,b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("Swap:\n%d\t%d\n",a,b);
    return 0;
}