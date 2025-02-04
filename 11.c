#include<stdio.h>
int main()
{
    int p,m,c;
    float per;
    printf("Enter marks of 3 subjects");
    scanf("%d%d%d",&p,&m,&c);
    per=(p+c+m)/3;
    printf("Your percentage is %f\n",per);
    if(per<35)
    {
        printf("You have failedd");
    }
    else if(per<50&&per>=35)
    {
        printf("3rd Division");
    }
    else if(per<65&&per>=50)
    {
        printf("2nd Division");
    }
    else if(per<80&&per>=65)
    {
        printf("1st Division");
    }
    else
    {
         printf("Distinction");
    }
    return 0;
}