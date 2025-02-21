#include<stdio.h>
int main(){
    int a[20],temp;
    printf("Enter 5 numbers");
    for(int i=0;i<5;i++)
    {
        scanf("%d\n",&a[i]);
    }
    for(int i=0;i<4;i++)
    {
      for(int j=i+1;j<5;j++)
      {
        if(a[i]>a[j])
        {
          temp = a[j];
          a[j]=a[i];
          a[i]=temp;
        }
      }
    }
    printf("Array list is:");
    for( int i=0;i<5;i++)
    {
      printf("%d\t",a[i]);
    }
    return 0;
}