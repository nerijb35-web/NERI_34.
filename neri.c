#include <stdio.h>

int main() {
    int num_passengers, i, distance;
    float fare, total_revenue = 0.0, average_fare = 0.0;
    int count_more_than_5 = 0;

    printf("===================================\n");
    printf(" BUS FARE CALCULATION SYSTEM\n");
    printf("===================================\n");

    printf("Enter number of passengers: ");
    if (scanf("%d", &num_passengers) != 1 || num_passengers <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
    }  
    for (i = 1; i <= num_passengers; i++) {
        printf("\nPassenger %d distance (km): ", i);
        if (scanf("%d", &distance) != 1 || distance < 0) {
        printf("Invalid distance. Skipping passenger.\n");
        }

        if (distance >5) {
            fare = 15.0; 
    } else { 
        fare = 15.0; + (distance -5) * 3.0;
    }

        fare = 10.0 + (distance * 2.0); 
        total_revenue += fare;

        if (distance > 5) {
            count_more_than_5++;
        }

        printf("Fare for passenger %d: ₱%.2f\n", i, fare);
    }
        average_fare = total_revenue / num_passengers;

       printf("Total revenue: ₱%.2f\n", total_revenue);
       printf("Average fare: ₱%.2f\n", average_fare);
       printf("Passengers > 5 km: %d\n", count_more_than_5);
       printf("=============================\n");

       return 0;
       }

