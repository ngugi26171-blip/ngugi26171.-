 //simple c program
 /*
Name:George Maina Ngugi
RegNo:CT100/G/26171/25
Description:Calculating fare()
*/
  #include <stdio.h>  
 
  //  calculate the fare based on the distance traveled  
  float calculateFare(float distance) {  
 float fareRate = 50.0; // KSh. 50 per kilometer  
 float totalFare = distance * fareRate;  
 return totalFare;  
  }  
 
  int main() {  
 float distance;  
 
 // Prompt the user to enter the distance traveled  
 printf("Enter the distance traveled in kilometers: ");  
 scanf("%f", &distance);  
 
 // Calculating the total fare using the calculateFare function  
 float totalFare = calculateFare(distance);  
 
 // Display the total fare  
 printf("The total fare is: KSh. %.2f"  
  , totalFare);  
 
 return 0;  
  } 