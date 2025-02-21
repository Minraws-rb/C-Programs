#include <stdio.h>

int fact(int *p) {
    if (*p == 0 || *p == 1)  // Base case: Factorial of 0 and 1 is 1
        return 1;
    
    int n = *p - 1;  // Create a new variable for decremented value
    return (*p) * fact(&n); // Pass the address of the decremented value
}

int main() {
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);

    if (a < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        printf("Factorial is %d\n", fact(&a));
    }

    return 0;
}
