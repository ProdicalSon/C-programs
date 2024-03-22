#include <stdio.h>

int main() {
    int flightLevel;
	int altitude;
    for (;;) {
        printf("Enter flight level in digits (0 will exit the programme): ");
        scanf("%d", &flightLevel);

        if (flightLevel == 123) {
            printf("Descending altitude in readiness for landing.\n");
            break;
        }

		// Multiplying flight level by 1000
		altitude = flightLevel * 1000;
		
        switch (flightLevel) {
      
           case 1:
                printf("Flight level is: %d and the plane is rising\n", altitude);
                break;
            case 2:
                printf("Flight level is: %d and the plane is rising\n", altitude);
                break;    
            case 3:
                printf("Flight level is: %d and the plane is rising\n", altitude);
                break;
             case 4:
                printf("Flight level is: %d and the plane is rising\n", altitude);
                break;
            case 5:
                printf("Flight level is: %d and the plane is rising\n", altitude);
                break;
            case 6:
                printf("Flight level is: %d and the plane is rising\n", altitude);
                break;
            case 7:
                printf("Flight level is: %d and the plane is rising\n", altitude);
                break;
            case 8:
                printf("Flight level is: %d and the plane is rising\n", altitude);
                break;
            case 9:
                printf("Flight level is: %d and the plane is rising\n", altitude);
                break;
            case 10:
                printf("Flight level is: %d and the plane is rising\n", altitude);
                break;   
			default:
                printf("Invalid flight level.\n");
                break;
        }
    }

    return 0;
}

