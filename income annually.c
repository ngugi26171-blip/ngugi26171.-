//simple c program
/*
Name:George Maina
RegNo:CT100/G/26171/25
Description:calculating income annually
*/


#include<stdio.h>
int main() {
int age;
float income;
//prompt the user input
printf("please enter the age (years):\n");
scanf("%d",&age);
printf("age = %d", age);

printf("please enter you annual income:\n");
scanf("%f",&income);
printf("income = %.2f", income);

//loan offer
if (age>= 21 & income >=21000) {
printf("qualified to get income \n");
}
else {
printf("Not qulified to get income in ksh\n");
}
return 0;
}