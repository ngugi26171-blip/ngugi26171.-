//simple c programming
/*
Name:George Maina
RegNo.CT100/G/26171/25
Description: Bank sample program
*/
#include <stdio.h>
int main() {
float height;
double BankBalance;
char phoneNumber[20];

// prompt the user to enter hieght
printf("Please enter you height in (meters):\n");
scanf("%f",&height);

//prompt the user to enter BankBalance
printf("please enter your BankBalance(in kenya shillings):\n");
scanf("%lf",&BankBalance);

// Ask user input
printf("please enter  phoneNumber\n");
scanf("%s",&phoneNumber);

//Display the output
printf("height: %.2f\n",height);
printf("BankBalance: %.2lf\n",BankBalance);
printf("phoneNumber:%s\n",phoneNumber);

return 0;
 }
 
 
 
 
    
