#include <stdio.h>

int main() {
    int t,a;
    float c,d;
    printf("Enter temperature");
    scanf("%d", &t);
    printf("Enter 1 to Convert into Celsius and 2 to convert into fahrenheit");
    scanf("%d",&a);
    switch(a) {
        case 1:
            c=(t-32)*100/180;
            printf("Your temperature in Celcius is %.3f",c);
            break;
        case 2:
            d=(t*180/100)+32;
            printf("Your temperature in fahrenheit is %.3f",d);
            break;
      
        default:
            printf("Invalid input! Please enter 1 or 2");
    }

    return 0;
}
