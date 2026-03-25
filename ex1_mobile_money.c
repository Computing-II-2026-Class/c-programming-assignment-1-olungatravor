/* Name: Olunga Travor */
/* Student: 2500800028 25/U/BIO/028/GV */
#include <stdio.h>

int main (void){

    int amount_to_send = 0 ;
    float transaction_fee = 0.0f;
    float fee_amount = 0.0f;
    float total_amount_deducted= 0.0f;


    printf("Enter amount to send: ");
    scanf("%d", &amount_to_send);

    printf("Enter transaction fee(%%): ");
    scanf("%f", &transaction_fee);
    
    fee_amount = (transaction_fee/100) * amount_to_send;

    total_amount_deducted = amount_to_send + fee_amount;
    printf("\n------Transaction summary-----\n");
    printf("Amount Sent: %d UGX\n", amount_to_send);
    printf("total amount deducted: %.2f UGX\n", total_amount_deducted);
    printf("--------------------- \n");
    
return 0;
}
