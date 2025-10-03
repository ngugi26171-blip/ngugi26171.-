// simple c program
/*
Name:George Maina Ngugi
RegNo:CT100/G/26171/25
Description:Implementation of Bank laon program
*/
#include<stdio.h>
int main(){
   int age;
   float income;
   
//prompt the user to enter 
printf("please eneter you age(yrs):\n");
scanf("%d",&age);
printf("please eneter your annual income in (ksh):\n");
scanf("%f",&income);
// Loan qulification check
if(age>=21 &income>=21000){ 
printf("Congratulations you qualify for a loan");
}
else{
printf("Unfortunately,we are unable to offer you a loan at this time");
}
return 0;
}