#include <stdio.h>
int myAtoi(char *str) {
    int result = 0;
    int sign = 1;

    while (*str == ' ') {
        str++;
    }
    if (*str == '-' || *str == '+') {
        if (*str == '-') {
            sign = -1;
        }
        str++;
    }
    while (*str >= '0' && *str <= '9') {
        result = result * 10 + (*str - '0');
        str++;
    }
    return result * sign;
}
int main() {
    char str1[] = "123";
    char str2[] = "-456";
    char str3[] = "   789";
    char str4[] = "+321";
    printf("%d\n", myAtoi(str1));
    printf("%d\n", myAtoi(str2));
    printf("%d\n", myAtoi(str3));
    printf("%d\n", myAtoi(str4));
    return 0;
}
