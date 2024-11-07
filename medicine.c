// medicine.c
#include <stdio.h>
#include <string.h>
#include "medicine.h"

void add_medicine(Medicine medicines[], int *count) {
    printf("Enter medicine name: ");
    scanf("%s", medicines[*count].name);
    printf("Enter price: ");
    scanf("%f", &medicines[*count].price);
    printf("Enter quantity: ");
    scanf("%d", &medicines[*count].quantity);
    (*count)++;
    printf("Medicine added successfully!\n");
}

void view_medicines(Medicine medicines[], int count) {
    printf("\nList of Medicines:\n");
    for (int i = 0; i < count; i++) {
        printf("Name: %s, Price: %.2f, Quantity: %d\n",
               medicines[i].name, medicines[i].price, medicines[i].quantity);
    }
    printf("\n");
}

void delete_medicine(Medicine medicines[], int *count) {
    char name[50];
    printf("Enter the name of the medicine to delete: ");
    scanf("%s", name);

    for (int i = 0; i < *count; i++) {
        if (strcmp(medicines[i].name, name) == 0) {
            for (int j = i; j < *count - 1; j++) {
                medicines[j] = medicines[j + 1];
            }
            (*count)--;
            printf("Medicine deleted successfully!\n");
            return;
        }
    }
    printf("Medicine not found.\n");
}

void sell_medicine(Medicine medicines[], int count) {
    char name[50];
    int quantity;

    printf("Enter the name of the medicine to sell: ");
    scanf("%s", name);
    printf("Enter the quantity to sell: ");
    scanf("%d", &quantity);

    for (int i = 0; i < count; i++) {
        if (strcmp(medicines[i].name, name) == 0) {
            if (medicines[i].quantity >= quantity) {
                medicines[i].quantity -= quantity;
                printf("Sold %d units of %s. Updated quantity: %d\n",
                       quantity, medicines[i].name, medicines[i].quantity);
            } else {
                printf("Insufficient stock. Available quantity: %d\n", medicines[i].quantity);
            }
            return;
        }
    }
    printf("Medicine not found.\n");
}
