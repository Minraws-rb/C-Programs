#include<stdio.h>
int sum(int *x)
{
    int i,s=0;
    for(i=0;i<*x;i=i+2){
        if(i%5==0)
        {
            s=s+i;
        }
    }
    return s;
}
int main()
{
    int N,*p;
    p=&N;
    printf("Enter the value of N:");
    scanf("%d",p);
    int s = sum(p);
    printf("Sum = %d",s);
}