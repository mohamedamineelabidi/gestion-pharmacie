// medicine.h
#ifndef MEDICINE_H
#define MEDICINE_H

typedef struct {
    char name[50];
    float price;
    int quantity;
} Medicine;

void add_medicine(Medicine medicines[], int *count);
void view_medicines(Medicine medicines[], int count);
void delete_medicine(Medicine medicines[], int *count);
void sell_medicine(Medicine medicines[], int count);  // New function prototype

#endif
