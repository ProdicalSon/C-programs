#include <stdio.h>

#define FEEBAL 0

int main() {
    char regNumber[100];
    float amountPaid;

	
    printf("Enter Registration Number: ");
    scanf("%s",regNumber);
	printf("\n");
	printf("Enter Amount Paid: ");
    scanf("%f", &amountPaid);

	printf("\n");

    if (amountPaid >= FEEBAL) {
        int option;
        printf("\nAmount paid successfully! Continue to select an operation of your choice\n");
        printf("1) Report Online\n");
        printf("2) Register Units\n");
        printf("3) Download Exam card\n");
        printf("Choose an option: ");
        scanf("%d", &option);
        
        printf("\n");

        switch (option) {
            case 1:
                printf("You have successfully Reported online.\n");
                printf("Registration Number: %s\n", regNumber);
                printf("Amount Paid: %.2f\n", amountPaid);
                break;
            case 2:
                printf("You have successfully Registered units.\n");
                printf("Registration Number: %s\n", regNumber);
                printf("Amount Paid: %.2f\n", amountPaid);
                break;
            case 3:
                printf("You have successfully Downloaded exam card.\n");
                printf("Registration Number: %s\n", regNumber);
                printf("Amount Paid: %.2f\n", amountPaid);
                break;
            default:
                printf("Invalid option!\n");
        }
    } else {
        printf("Error: You're not allowed to access university services until you clear your fees.\n");
    }

    return 0;
}

