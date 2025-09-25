//simple c programming
/*
Name:George Maina
RegNo.CT100/G/26171/25
Description: variables and data type
*/
#include <stdio.h>
#define PI 3.142
int main(){
 float radius,height,volume ,surfaceArea;
 
 //prompt the user for input
 printf("Enter the radius of cylinder:");
 scanf("%f",&radius);
 printf("radius=%.2fcm\n",radius);
 
 printf("Enter height of the cylinder:");
 scanf("%f",&height);
 printf("height=%.2fcm\n",height);
 //calculate the volume and surfaceArea
 
 volume = PI *radius * radius * height;
 surfaceArea=2*PI*radius*radius+2*PI*radius*height;
 
 //Dispaly the output
 printf("volume of the cylinder=%.4fcm³\n",volume);
 printf("surface area of the cylinder=%.4fcm²\n",surfaceArea);
 
 return 0;
 }
 
 
 
 
    