 //simple c program
 /*
Name:George Maina Ngugi
RegNo:CT100/G/26171/25
Description:convert to ceclius
*/
  #include <stdio.h>  
 
  // Function to convert Fahrenheit to Celsius  
  float convertToCelsius(float fahrenheit) {  
 return (fahrenheit - 32) * 5.0 / 9.0;  
  }  
 
  int main() {  
 float fahrenheit, celsius;  
 
 // Get Fahrenheit input from the user  
 printf("Enter temperature in Fahrenheit: ");  
 scanf("%f", &fahrenheit);  
 
 // Convert Fahrenheit to Celsius  
 celsius = convertToCelsius(fahrenheit);  
 
 // Print the result  
 printf("Temperature in Celsius: %.2f", celsius);
  
 return 0;  
  }  
  