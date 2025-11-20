#include <stdio.h>

int main() {
    int busID[10];          // store bus numbers
    int routeNo[10];        // store route numbers
    int seats[10];          // store available seats
    int count = 0;          // total buses stored

    int choice;
    
    while (1) {
        printf("\n===== TRANSPORT MANAGEMENT SYSTEM =====\n");
        printf("1. Add Bus Details\n");
        printf("2. View All Buses\n");
        printf("3. Search Bus by ID\n");
        printf("4. Update Seats of a Bus\n");
        printf("5. delete  bus\n");
         printf("6.exit \n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            if (count < 10) {
                printf("Enter Bus ID (number only): ");
                scanf("%d", &busID[count]);

                printf("Enter Route Number: ");
                scanf("%d", &routeNo[count]);

                printf("Enter Available Seats: ");
                scanf("%d", &seats[count]);

                count++;
                printf("Bus Added Successfully!\n");
            } else {
                printf("Storage Full! Cannot add more buses.\n");
            }
        }

        else if (choice == 2) {
            if (count == 0) {
                printf("No buses found.\n");
            } else {
                printf("\n--- All Bus Details ---\n");
                for (int i = 0; i < count; i++) {
                    printf("Bus %d -> ID: %d | Route: %d | Seats: %d\n",
                           i + 1, busID[i], routeNo[i], seats[i]);
                }
            }
        }

        else if (choice == 3) {
            int id, found = 0;
            printf("Enter Bus ID to search: ");
            scanf("%d", &id);

            for (int i = 0; i < count; i++) {
                if (busID[i] == id) {
                    printf("Bus Found!\n");
                    printf("Bus ID: %d\n", busID[i]);
                    printf("Route: %d\n", routeNo[i]);
                    printf("Seats: %d\n", seats[i]);
                    found = 1;
                    break;
                }
            }
            if (!found) {
                printf("Bus Not Found!\n");
            }
        }

        else if (choice == 4) {
            int id, newSeats, found = 0;
            printf("Enter Bus ID to update seats: ");
            scanf("%d", &id);

            for (int i = 0; i < count; i++) {
                if (busID[i] == id) {
                    printf("Enter new seats: ");
                    scanf("%d", &newSeats);
                    seats[i] = newSeats;
                    printf("Seats Updated Successfully!\n");
                    found = 1;
                    break;
                }
            }
            if (!found) {
                printf("Bus Not Found!\n");
            }
        }

        else if (choice == 5) {
            printf("Exiting Program...\n");
            break;
        }

        else {
            printf("Invalid Choice! Try again.\n");
        }
    }

    return 0;
}
