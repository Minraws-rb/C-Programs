#include<stdio.h>
struct campus{
    char nam[20], add[20];
    int estd, nofstds;
};
void cmpus( struct campus *ptr)
{
    printf("Name\tAddress\tEstablished Year\t No of Stds\n");
    printf("%s\t%s\t%d\t%d\n",ptr->nam,ptr->add,ptr->estd,ptr->nofstds);
}
int main()
{
    struct campus cmps,*ptr;
    printf("Enter campus name: ");
    scanf("%s", cmps.nam);

    printf("Enter campus address: ");
    scanf("%s", cmps.add);

    printf("Enter established year: ");
    scanf("%d", &cmps.estd);

    printf("Enter number of students: ");
    scanf("%d", &cmps.nofstds);
    ptr=&cmps;
    cmpus(ptr);
    return 0;
}