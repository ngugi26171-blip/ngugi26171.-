// simple c program
/*
Name:George Maina Ngugi
RegNo:CT100/G/26171/25
Description:A Bank ATM Program
*/
#include<stdio.h>
int main(){
  int balance=100, amount;
  
  
  printf("Enter the initial balance:\n");
  scanf("%d",&balance);
  
      while(balance >0) {
      printf("Enter Amount to withdraw:\n");
      scanf("%d",&amount); 
      balance-=amount;
      printf("Remaning Balance:%d\n",&balance);
}
return 0;
}