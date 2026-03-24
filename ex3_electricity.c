/*Name: Olunga Travor*/
/*Student Number: 25/U/BIO/028/GV*/

# include<stdio.h>
int main(void){

 float Units = 0;
 float price = 0.0f;
 char currency = 'UGX' ;
 int total = 0 ;
 
 printf("How many units acquired?: ");
 scanf("%f", &Units);

 printf("Whats the price for each?: ");
 scanf("%f", &price);

 total = price * Units;

 printf("Total charge: %d UGX \n", total);

 return 0;

}