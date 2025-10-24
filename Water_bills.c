// simple c program

/*
NAME: George Maina Ngugi
REGNO: CT100/G/26171/25
DESCRIPTION: Caculating water bills
*/

#include <stdio.h>
int main() {
  float units;
  double bill;
  
  //prompt the user to enter units
  printf("Enter water units consumed: ");
  scanf("%f", &units);
  printf("units = %.2f\n", units);
  
  //calculating the water bills 
  if(units <= 30) {
  
     bill = units * 20.00;
     printf("Your bill is = %.2fKES", bill);
     
  } else if (units >= 31 && units <= 60) {
  
     bill = units * 25.00;
     printf("Your bill is = %.2fKES", bill);
  } else {
  
     bill = units * 30.00;
     printf("Your bill is = %.2fKES", bill);
  }
  
  return 0;
  
}