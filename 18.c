#include<stdio.h>
#include<math.h>
#define pi 3.14
int main()
{
    int r;
    float a, p;
    printf("Enter the radius\n");
    scanf("%d",&r);
    a=pi*pow(r,2);
    p=2*pi*r;
    printf("Area = %.4f\n Perimeter = %.4f\n",a,p);
    return 0;
}