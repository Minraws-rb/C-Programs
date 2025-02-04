#include<stdio.h>
int main()
{
        int a,b,c;
        printf("Enter two numbers\n");
        scanf("%d%d",&a,&b);
        if(a>b)
        {
            c= a-b;
        }
        else
        {
            c=b-a;
        }
        printf("Difference = %d",c);
        return 0;
}