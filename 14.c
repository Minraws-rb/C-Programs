#include<stdio.h>
#include<math.h>
int main()
{
    int a,n,p;
    printf("Enter a number and its power\n");
    scanf("%d%d",&a,&n);
    p=pow(a,n);
    printf("%d^%d = %d",a,n,p);
    return 0;
}