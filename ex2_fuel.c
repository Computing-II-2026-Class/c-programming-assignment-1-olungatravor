/*Name: Olunga Travor*/
/*Student Number: 25/U/BIO/028/GV*/
#include <stdio.h>
int main(void){

    float Distance = 0.0f;
    float Fuel = 0.0f;
    float usage = 0.0f;

    printf("Total distance travelled(km): ");
    scanf("%f", &Distance);

    printf("Total fuel capacity used(l): ");
    scanf("%f", &Fuel);


    usage = Distance / Fuel;

    printf("The fuel efficiency is %.0f km/l \n", usage); 

    return 0;


}