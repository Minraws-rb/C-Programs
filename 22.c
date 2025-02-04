#include<stdio.h>
int gv = 20;
void func(int lv)
{
    printf("Local var: %d\n Global Var: %d\n",lv,gv);//Here local variable is accessed by calling the variable through function but global variable can be accessed directly
}
int main()
{
    int lv=10;
    func(lv);
    printf("Local var: %d\n Global Var: %d\n",lv,gv);
    return 0;
}