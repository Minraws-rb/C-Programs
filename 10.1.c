#include<stdio.h>
struct student{
    int roll,age,mark;
    char nam[20],add[20];
};
int main()
{
    struct student std[3];
    FILE *fptr;
    fptr = fopen("std.txt","w");
    printf("Enter Name Roll no Address age and Marks");
    for( int i=0; i<3; i++)
    {
        scanf("%s%d%s%d%d",std[i].nam,&std[i].roll,std[i].add,&std[i].age,&std[i].mark);
    }
    fprintf(fptr,"Name\t Roll no \t Address \t Age\t Marks\n");
    for( int i=0; i<3; i++)
    {
        fprintf(fptr,"%s\t%d\t%s\t%d\t%d\n",std[i].nam,std[i].roll,std[i].add,std[i].age,std[i].mark);
    }
    fclose(fptr);
    return 0;
}