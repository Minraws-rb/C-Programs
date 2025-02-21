#include<stdio.h>
int main(){
    int a[20],l,s;
    for(int i=0;i<5;i++)
    {
        scanf("%d\n",&a[i]);
    }
    l=a[0];
    s=a[0];
    for(int i=1;i<5;i++)
    {
        if(l<a[i])
        {
            l=a[i];
        }
        if(s>a[i])
        {
            s=a[i];
        }
    }
    printf("%d\n%d",l,s);
    return 0;
}