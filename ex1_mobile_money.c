/*Name: Olunga Travor*/
/*Student: 25/U/BIO/028/GV*/

#include <stdio.h>

int main (void){

    int amount = 0 ;
    float charge = 0.0f;
    float Total = 0.0f;


    printf("Amount to be sent? ");
    scanf("%d", &amount);

    charge = 0.15 * amount;

    printf("Total charges due %.0f UGX \n", charge);

    Total = amount + charge;
    
    printf("The total amount charged is %.0f UGX \n", Total);
    
return 0;
}
