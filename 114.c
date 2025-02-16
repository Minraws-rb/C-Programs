//114.	C program to store time in an integer variable.
#include <stdio.h>
int main()
{
    int hours, minutes, seconds, time;
    printf("Enter the time (hh:mm:ss): ");
    scanf("%d:%d:%d", &hours, &minutes, &seconds);
    time = hours * 3600 + minutes * 60 + seconds;
    printf("Time in seconds: %d\n", time);
    return 0;
}