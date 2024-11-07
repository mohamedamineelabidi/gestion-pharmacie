// main.c
#include <stdio.h>
#include "medicine.h"

#define MAX_MEDICINES 100

int main() {
    Medicine medicines[MAX_MEDICINES];
    int count = 0;
    int choice;

    while (1) {
        printf("Pharmacy Management System\n");
        printf("1. Add Medicine\n");
        printf("2. View Medicines\n");
        printf("3. Delete Medicine\n");
        printf("4. Sell Medicine\n");  // New option for selling medicine
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                add_medicine(medicines, &count);
                break;
            case 2:
                view_medicines(medicines, count);
                break;
            case 3:
                delete_medicine(medicines, &count);
                break;
            case 4:
                sell_medicine(medicines, count);  // Call sell_medicine function
                break;
            case 5:
                printf("Exiting the system.\n");
                return 0;
            default:
                printf("Invalid choice. Try again.\n");
        }
    }
}
