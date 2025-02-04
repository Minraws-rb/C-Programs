#include<stdio.h>
int main()
{
    int s;
    float h,d,p;
    printf("Enter your salary\n");
    scanf("%d",&s);
    printf("Enter your HRA, DA and PF cuts in percentage\n");
    scanf("%f%f%f",&h,&d,&p);
   float sum= s-(s*h/100)-(s*d/100)-(s*p/100);
    printf("Your Gross salary is %f\n",sum);
}