#include <stdio.h>

int main() {
    int choice;
    double balance = 0;
    while (1) {
        printf("1. Check balance\n2. Withdraw\n3. Deposit\n4. Exit\n");
        scanf("%d", &choice);
        if (choice == 1) {
            printf("Balance: %.2lf\n", balance);
        } else if (choice == 2) {
            double amt;
            printf("Enter amount to withdraw: ");
            scanf("%lf", &amt);
            if (amt > balance) {
                printf("Insufficient funds\n");
            } else {
                balance -= amt;
                printf("New balance: %.2lf\n", balance);
            }
        } else if (choice == 3) {
            double amt;
            printf("Enter amount to deposit: ");
            scanf("%lf", &amt);
            balance += amt;
            printf("New balance: %.2lf\n", balance);
        } else if (choice == 4) {
            break;
        } else {
            printf("Invalid option\n");
        }
    }
    return 0;
}
