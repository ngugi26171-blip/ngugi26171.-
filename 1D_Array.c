/*
Name:George Maina Ngugi
RegNo:CT100/G/26171/25
Description:1D Arry weekly Revenue
*/

#include <stdio.h>
int main() {
    // 1D Array: Weekly Revenue Tracker
    int revenue[7];
    int totalRevenue = 0;
    float averageRevenue;

    printf("Enter revenue for 7 days:\n");
    for(int i = 0; i < 7; i++) {
        printf("Day %d: ", i+1);
        scanf("%d", &revenue[i]);
        totalRevenue += revenue[i];
    }

    averageRevenue = totalRevenue / 7.0;
    printf("\nTotal Weekly Revenue: %d\n", totalRevenue);
    printf("Average Daily Revenue: %.2f\n", averageRevenue);
  return 0;
   }