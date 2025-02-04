#include<stdio.h>
int main()
{
    int a;
    printf("Enter your age:\n");
    scanf("%d",&a);
    if(a<18)
    {
        printf("Not Eligible for voting.");
    }
    else
    {
        printf("Eligible for voting.");
    }
    return 0;
}