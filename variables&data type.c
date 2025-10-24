/*
 Name:George maina ngugi
 RegNo:CT100/G/26171/25
 Description:Caculating SurfaceArea & Volume
 */
#include <stdio.h>
#define PI 3.142
int main(){
 float radius,height,volume ,surfaceArea;
 
 //prompt the user for input
 printf("Enter the radius of cylinder: ");
 scanf("%f",&radius);
 
 printf("Enter height of the cylinder: ");
 scanf("%f",&height);
 //calculate the volume and surfaceArea
 
 volume = PI *radius * radius * height;
 surfaceArea=2*PI*radius*radius+2*PI*radius*height;
 printf("volume of the cylinder=%.2f\n",volume);
 printf("surface area of the cylinder=%.2f\n",surfaceArea);
 
 return 0;
 }
 
 
 
 
    
