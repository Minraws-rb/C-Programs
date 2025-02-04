#include <stdio.h>

int main() 
{
    int sal, a, cpf, epf, pf;
    printf("Enter the salary and Employees PF in percentage\n");
    scanf("%d%d",&sal,&a);
    cpf = a*sal/100;
    epf = a*sal/100;
    pf = cpf + epf;
    printf("Total PF is: %d\n",pf);
    return 0;
}
