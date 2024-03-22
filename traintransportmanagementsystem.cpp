/*You've been appointed as a systems Developer for Kenya Railways Authority. You've been tasked by the Management board to Developer a train transport service management system. 
The System is required to capture the following details and store them into a text file named Train.txt in append mode.
The system should take in the following details: 
Customer Name
Phone Number
From
Destination
Travel date/Time

The travel date/time should be system generated and not input by the user.

Once a customer details have been entered, the system should generate a well formatted travel receipt and display it/Print it, then next keep prompting for further details entry.

Once the system is open, it should keep running(loop), asking for the details above and storing them in the Train.txt file until the user enters 0 which then exits the system.

Write a C program that performs the above functionality.

(This should be done for today and tomorrow's class, to be marked on next week)*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void currenttime(char *dateTime) {
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    sprintf(dateTime, "%d-%02d-%02d %02d:%02d:%02d", tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday,
            tm.tm_hour, tm.tm_min, tm.tm_sec);
}

int main() {
    FILE *filePtr;
    char CustomerName[100];
    char PhoneNumber[20];
    char SeatNumber[10000];
    char Locationfrom[100];
    char Destination[100];
    char travelDateTime[50];
    char choice;

    filePtr = fopen("Train.txt", "a");
    if (filePtr == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }

    do {
        printf("Enter Customer Name: ");
        scanf(" %[^\n]s", CustomerName);
		printf("\n");
        printf("Enter Phone Number: ");
        scanf(" %[^\n]s", PhoneNumber);
		printf("\n");
		printf("Enter Seat Number: ");
        scanf(" %[^\n]s", SeatNumber);
		printf("\n");
        printf("Enter  Location From: ");
        scanf(" %[^\n]s", Locationfrom);
		printf("\n");
        printf("Enter Destination: ");
        scanf(" %[^\n]s", Destination);
	
        // Generating current date and time
        currenttime(travelDateTime);

        // Updating details to the file
        fprintf(filePtr, "Customer Name: %s\n", CustomerName);
        
        fprintf(filePtr, "Phone Number: %s\n", PhoneNumber);
        
        fprintf(filePtr, "Seat Number: %s\n", SeatNumber);
    
        fprintf(filePtr, "From: %s\n", Locationfrom);
        
        fprintf(filePtr, "Destination: %s\n", Destination);
        
        fprintf(filePtr, "Travel Date and Time: %s\n\n", travelDateTime);

        // Printing the receipt
        printf("\n==========================Train Transport Service Management System Travel Receipt ==================================\n");
        printf("\n");
        printf("Customer Name: %s\n", CustomerName);
        printf("\n");
        printf("Phone Number: %s\n", PhoneNumber);
        printf("\n");
        printf("Seat Number: %s\n", SeatNumber);
        printf("\n");
        printf("From: %s\n", Locationfrom);
        printf("\n");
        printf("Destination: %s\n", Destination);
        printf("\n");
        printf("Travel Date and Time: %s\n", travelDateTime);
        printf("\n");
        printf("===================================================================================================\n\n");

        printf("Enter any digit from 1 to 9 to add another Train Customer (otherwise press 0 to exit the program): ");
        scanf(" %c", &choice);
        printf("\n");

    } while (choice != '0');

    fclose(filePtr);

    return 0;
}

