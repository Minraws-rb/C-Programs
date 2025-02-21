#include<stdio.h>
#include<string.h>
struct students{
    int roll,age,m[3];
    char nam[20], add[20];
};
float avg(struct students *ptr)
{
    float avg;
    int sum=0;
    int i;
    for(i=0;i<3;i++)
    {
        sum = sum + ptr->m[i];
    }
    avg = sum/3;
    return avg;
}
int main()
{
    struct students st, *ptr;
    ptr = &st;
    int i;
    printf("Enter Name,address, roll no, age and marks of 3 subs");
    scanf("%s%s%d%d",ptr->nam, ptr->add,&ptr->roll,&ptr->age);
    for(i=0;i<3;i++)
    {
        scanf("%d",&ptr->m[i]);
    }
    printf("Name:\t%s\nAddress:\t%s\nRoll No:\t%d\nAge:\t%d\n",ptr->nam,ptr->add,ptr->roll,ptr->age);
    printf("Marks:\n");
    for(i=0;i<3;i++)
    {
        printf("%d\t",ptr->m[i]);
    }
    printf("Average marks: %f",avg(ptr));
    return 0;
}