#include<stdio.h>
int gv= 20;
void global(int gv)
{
    printf("Acessing global variable: %d\n",gv);
}
int main()
{
    global(gv);
    gv++;
    printf("Modifying global variable: %d\n",gv);
    return 0;
}