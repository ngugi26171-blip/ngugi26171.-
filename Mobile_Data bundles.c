//simple c program in switch case
/*
Name:George Maina Ngugi
RegNo:CT100/G/26171/25
Descrption:switch case programe for Mobile Data Bundle purchase
*/
#include<stdio.h>
int main(){
int choice;
//Display the menu
printf("select data bundles:\n");
printf("1. 100MB @ 50 KES\n");
printf("2. 500MB @ 200 KES\n");
printf("3. 1GB   @ 350 KES\n");
printf("4. 2GB   @ 600 KES\n");
// Enter you choice (1-4)
printf("Enter your  choic(1-4):");
scanf("%d",&choice);
// using a switch case statement to display the bundle selected and its cost
switch (choice) {
case 1:
printf("You selected 100MB.cost = 50 KES");
break;
case 2:
printf("You selected 500MB.cost= 200 KES");
break;
case 3:
printf("You selected 1GB. cost= 350 KES");
break;
case 4:
printf("You selected 2GB. cost = 600 KES");
break;
default:
printf("invalid choice");
}
return 0;
}