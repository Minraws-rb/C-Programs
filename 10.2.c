#include<stdio.h>
int main()
{
    char a[20];
    FILE *fptr;
    fptr = fopen("filec.txt","w");
    printf("Enter characters:\n");
    scanf("%[^\n]",a);
    fprintf(fptr,"%s",a);
    fclose(fptr);
    return 0;
}