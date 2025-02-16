//100.	C program to implement gotoxy(),clrscr(),getch(),getche()
#include <stdio.h>
#include <conio.h>
void gotoxy(int x, int y)
{
    printf("%c[%d;%df", 0x1B, y, x);
}
void clrscr()
{
    printf("\033[2J");
}
int main()
{
    int x, y;
    clrscr();
    printf("Enter the x and y coordinates: ");
    scanf("%d %d", &x, &y);
    gotoxy(x, y);
    printf("Hello World");
    getch();
    printf("\nPress any key to exit...");
    getch();
    return 0;
}