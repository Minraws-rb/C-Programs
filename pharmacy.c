#include<stdio.h>
#include<string.h>
#define FILE_NAME "pharmacy_data.txt"
// Structure for medicine details
struct medicine {
    int id, quantity;
    char name[30];
    float price;
};
// Function to add medicine
void addmed() {
    FILE *file = fopen("pharmacy_data.txt","a");
    struct medicine med;
    printf("Enter Medicine ID: ");
    scanf("%d", &med.id);
    printf("Enter Medicine Name: ");
    scanf("%s", med.name);
    printf("Enter Medicine Quantity: ");
    scanf("%d", &med.quantity);
    printf("Enter Medicine Price per unit: ");
    scanf("%f", &med.price);
    fprintf(file,"%d %s %d %f\n",med.id, med.name, med.quantity, med.price);
    fclose(file);
    printf("Medicine is successfully added");
}
// FUnction to DIsplay all medicines
void dismed() {
    FILE *file = fopen(FILE_NAME, "r");
    struct medicine med;
    printf("\nID    | Name                | Quantity | Price per Unit\n");
    printf("----------------------------------------------------------\n");
    while (fscanf(file, "%d %s %d %f", &med.id, med.name, &med.quantity, &med.price) != EOF) {
        printf("%-5d | %-30s | %-8d | $%.2f\n", med.id, med.name, med.quantity, med.price);
    }
    fclose(file);
}
void dispensemed() {
    int id, qty;
    printf("Enter Medicine ID to dispense: ");
    scanf("%d", &id);
    printf("Enter Quantity to dispense: ");
    scanf("%d", &qty);

    FILE *file = fopen(FILE_NAME, "r");
    if (!file) {
        printf("No data found!\n");
        return;
    }
    FILE *temp = fopen("temp.txt", "w");

    struct medicine med;
    int found = 0;
    while (fscanf(file, "%d %s %d %f", &med.id, med.name, &med.quantity, &med.price) != EOF) {
        if (med.id == id) {
            found = 1;
            if (med.quantity >= qty) {
                med.quantity -= qty;
                printf("Dispensed %d units of %s. Remaining stock: %d\n", qty, med.name, med.quantity);
            } else {
                printf("Insufficient stock!\n");
            }
        }
        fprintf(temp, "%d %s %d %.2f\n", med.id, med.name, med.quantity, med.price);
    }
    fclose(file);
    fclose(temp);

    remove(FILE_NAME);
    rename("temp.txt", FILE_NAME);
    
    if (!found) printf("Medicine ID not found!\n");
}
void searchmed() {
    int id;
    printf("Enter Medicine ID to search: ");
    scanf("%d", &id);

    FILE *file = fopen(FILE_NAME, "r");
    if (!file) {
        printf("No data found!\n");
        return;
    }
    struct medicine med;
    int found = 0;
    while (fscanf(file, "%d %s %d %f", &med.id, med.name, &med.quantity, &med.price) != EOF) {
        if (med.id == id) {
            found = 1;
            printf("\nMedicine Found!\n");
            printf("ID: %d\nName: %s\nQuantity: %d\nPrice per Unit: $%.2f\n", med.id, med.name, med.quantity, med.price);
            break;
        }
    }
    fclose(file);
    if (!found) printf("Medicine ID not found!\n");
}
int main() {
    int choice;
    do {
        printf("\n--- Pharmacy Management System ---\n");
        printf("1. Add Medicine\n");
        printf("2. Display Medicines\n");
        printf("3. Dispense Medicine\n");
        printf("4. Search Medicine\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1: addmed(); break;
            case 2: dismed(); break;
            case 3: dispensemed(); break;
            case 4: searchmed(); break;
            case 5: printf("Exiting Pharmacy Management System...\n"); break;
            default: printf("Invalid choice!\n");
        }
    } while (choice != 5);
    return 0;
}