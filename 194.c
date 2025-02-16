//194.	C program to read time in string format and extract hours, minutes and second also check time validity.
#include <stdio.h>
int main()
{
    char str[100], *ptr;
    int hh, mm, ss;
    printf("Enter time in HH:MM:SS format: ");
    scanf("%[^\n]", str);
    ptr = str;
    if (*ptr >= '0' && *ptr <= '2')
    {
        hh = (*ptr - '0') * 10 + (*(ptr + 1) - '0');
        ptr = ptr + 3;
        if (*ptr >= '0' && *ptr <= '5')
        {
            mm = (*ptr - '0') * 10 + (*(ptr + 1) - '0');
            ptr = ptr + 3;
            if (*ptr >= '0' && *ptr <= '5')
            {
                ss = (*ptr - '0') * 10 + (*(ptr + 1) - '0');
                ptr = ptr + 3;
                if (*ptr == '\0')
                {
                    if (hh >= 0 && hh <= 23 && mm >= 0 && mm <= 59 && ss >= 0 && ss <= 59)
                    {
                        printf("Time is valid.\n");
                        printf("Hours: %d\n", hh);
                        printf("Minutes: %d\n", mm);
                        printf("Seconds: %d\n", ss);
                    }
                    else
                    {
                        printf("Time is invalid.\n");
                    }
                }
                else
                {
                    printf("Time is invalid.\n");
                }
            }
            else
            {
                printf("Time is invalid.\n");
            }
        }
        else
        {
            printf("Time is invalid.\n");
        }
    }
    else
    {
        printf("Time is invalid.\n");
    }

    return 0;
}
