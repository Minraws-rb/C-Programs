#include<stdio.h>
int main()
{
    int a[3]={7,3,4},l;
    l=a[0];
    for( int i=1;i<3;i++)
    {
        if(l<*(a+i))
        {
            l=*(a+i);
        }
    }
    printf("Largest is %d",l);
    
    return 0;
}