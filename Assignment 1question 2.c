// simple c programming
/*
Name:George maina
Reg:26171
Description:C programming
*/
#include<stdio.h>

int main(){
  float height;
  long long phone_number;//using long long for large phone numbers
  float weight;
  //prompt for height
  printf("please eneter your height (in meters): ");
  scanf("%f",&height);
   
   //prompt for phone number
   printf("please enter your phone number:");
   scanf("%lld",&phone_number);
   
   //prompt for weight
    printf("please eneter your weight ( in kg) :");
    scanf("%f", weight);
    //display the entered values(optional) 
    printf("65");
    printf("Height:%2f meters/n", height);
    printf("phone number:%lld/n",phone_number);
    printf(" weight:%2f kg/n",weight);
    
     return 0;
     }
    
    
    
    