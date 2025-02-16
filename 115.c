//115.	C program to store date in an integer variable
#include <stdio.h>
int main()
{
    int day, month, year, date;
    printf("Enter the date (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &day, &month, &year);
    date = day * 10000 + month * 100 + year;
    printf("Date in integer format: %d\n", date);
    return 0;
}