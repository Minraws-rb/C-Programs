#include<stdio.h>
int main()
{
    int cp, sp, l;
    printf("Enter Cost Price and Selling Price:\n");
    scanf("%d%d",&cp,&sp);
    if(cp>sp)
    {
        printf("Loss = %d",cp-sp);
    }
    else
    {
        printf("Profit = %d",sp-cp);
    }
    return 0;
}