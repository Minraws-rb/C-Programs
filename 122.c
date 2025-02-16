//122.	C program to design a digital clock
#include <stdio.h>
#include <stdlib.h>  // For system("cls")
#include <windows.h> // For Sleep()

int main()
{
    int hours = 0, minutes = 0, seconds = 0;

    while (1)
    {
        system("cls");  // Clear screen in Windows
        printf("%02d:%02d:%02d\n", hours, minutes, seconds);
        fflush(stdout);

        seconds++;
        if (seconds == 60)
        {
            seconds = 0;
            minutes++;
        }
        if (minutes == 60)
        {
            minutes = 0;
            hours++;
        }
        if (hours == 24)
        {
            hours = 0;
        }

        Sleep(1000);  // 1-second delay
    }

    return 0;
}
