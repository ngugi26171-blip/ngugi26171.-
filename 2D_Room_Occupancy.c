/*
Name:George Maina Ngugi
RegNo:CT100/G/26171/25
Descrip:2D Array Room occupancy
*/
#include <stdio.h>
int main() {
    
    // 2D Array: Room Occupancy (One Branch)
    int occupancy[5][10];
    srand(time(0));
    printf("\nRoom Occupancy (1 = Occupied, 0 = Vacant):\n");

    for(int i = 0; i < 5; i++) {
        int occupied = 0, vacant = 0;
        for(int j = 0; j < 10; j++) {
            occupancy[i][j] = rand() % 2;
            if(occupancy[i][j] == 1) occupied++;
            else vacant++;
        }
        printf("Floor %d - Occupied: %d, Vacant: %d\n", i+1, occupied, vacant);
    
}
  return 0;
   }