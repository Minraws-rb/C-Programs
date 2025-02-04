#include<stdio.h>
#include<math.h>>
int main()
{
    int a,c,b=1,d;
    printf("Enter a number\n");
    scanf("%d",&a);
    c=a*a*a;
    printf("cube of %d = %d\n",a,c);
    for(int i=0; i<3; i++)
    {
        b=b*a;
    }
    printf("Cube of %d using loop = %d\n",a,b);
    d=pow(a,3);
    printf("Cube of %d using math library is %d",a,d);
    return 0;
}