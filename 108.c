//108.	Age Calculator (C program to calculate age).
#include <stdio.h>
int main()
{
    int currentDay, currentMonth, currentYear, birthDay, birthMonth, birthYear, age;
    printf("Enter the current date (dd mm yyyy): ");
    scanf("%d %d %d", &currentDay, &currentMonth, &currentYear);
    printf("Enter the birth date (dd mm yyyy): ");
    scanf("%d %d %d", &birthDay, &birthMonth, &birthYear);
    if (birthMonth > currentMonth)
    {
        age = currentYear - birthYear - 1;
    }
    else if (birthMonth < currentMonth)
    {
        age = currentYear - birthYear;
    }
    else
    {
        if (birthDay > currentDay)
        {
            age = currentYear - birthYear - 1;
        }
        else
        {
            age = currentYear - birthYear;
        }
    }
    printf("The age is %d years\n", age);
    return 0;
}