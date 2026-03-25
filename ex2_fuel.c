/* Name: Olunga Travor */
/* Student Number: 25/U/BIO/028/GV */
#include <stdio.h>
int main(void){

    float distance = 0.0f;
    float fuel_used = 0.0f;
    float efficiency = 0.0f;

    printf("Enter distance (km): ");
    scanf("%f", &distance);
    printf("Enter fuel used (litres): ");
    scanf("%f", &fuel_used);

    efficiency = distance / fuel_used;
    printf("Fuel efficiency:%.2f km/l\n", efficiency); 

    return 0;


}