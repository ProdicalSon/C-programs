#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_ITEMS 10
#define MAX_NAME_LENGTH 50
#define MAX_PHONE_LENGTH 15

// Structure to hold item details
struct Item {
    char name[50];
    float price;
    int quantity;
};

// Function to get current date and time
void getCurrentDateTime(char *dateTime) {
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    sprintf(dateTime, "%d-%02d-%02d %02d:%02d:%02d", tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday,
            tm.tm_hour, tm.tm_min, tm.tm_sec);
}

int main() {
    struct Item items[MAX_ITEMS];
    char customerName[MAX_NAME_LENGTH];
    char phoneNumber[MAX_PHONE_LENGTH];
    char dateTime[50];
    float totalAmount = 0.0;
    float payment, balance;
    int numItems;

    printf("Enter customer name: ");
    fgets(customerName, sizeof(customerName), stdin);
    printf("Enter phone number: ");
    fgets(phoneNumber, sizeof(phoneNumber), stdin);

    printf("\nEnter the number of items to purchase: ");
    scanf("%d", &numItems);

    // Input item details
    for (int i = 0; i < numItems; i++) {
        printf("\nEnter name of item %d: ", i + 1);
        scanf(" %[^\n]s", items[i].name);
        printf("\n");
        printf("Enter price of item %d: ", i + 1);
        scanf("%f", &items[i].price);
        printf("\n");
        printf("Enter quantity of item %d: ", i + 1);
        scanf("%d", &items[i].quantity);
        printf("\n");
        totalAmount += items[i].price * items[i].quantity;
    }

    printf("\nTotal amount: %.2f\n", totalAmount);

    // Input payment and calculate balance
    printf("Enter payment amount: ");
    scanf("%f", &payment);
    balance = payment - totalAmount;

    // Print receipt
    printf("\n========================== JOHNES ENTERPRICES MISIKHU ==============================\n");
    printf("Date/Time: ");
    getCurrentDateTime(dateTime);
    printf("%s\n", dateTime);
    printf("\n");
    printf("-----------------------------------------------------------------------------");
    printf("\n");
    printf("Customer Name: %s", customerName);
    printf("Phone Number: %s", phoneNumber);
    printf("\n");
    printf("\nItems Purchased:\n");
    for (int i = 0; i < numItems; i++) {
        printf("- %s (Quantity: %d): %.2f\n", items[i].name, items[i].quantity, items[i].price * items[i].quantity);
    }
    printf("Total Amount: %.2f\n", totalAmount);
    printf("Payment: %.2f\n", payment);
    printf("Balance: %.2f\n", balance);
    printf("Served by: John Brian\n");
    printf("===========================================================================\n");

    return 0;
}

