/* Name: Olunga Travor */
/* Student Number: 25/U/BIO/028/GV */
# include<stdio.h>
int main(void){

 float Units = 0;
 float price = 0.0f;
 float total_bill = 0.0f;
 
 printf("Enter units consumed: ");
 scanf("%f", &Units);

 printf("Enter cost per unit: ");
 scanf("%f", &price);

 total_bill = price * Units;

 printf("Total bill: %.2f UGX \n", total_bill);

 return 0;

}