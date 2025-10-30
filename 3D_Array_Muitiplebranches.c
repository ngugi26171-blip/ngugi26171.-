//simple c program
/*
Name:George Maina Ngugi
RegNo:CT100/G/26171/25
Description:3D Array multiple branches
*/
#include <stdio.h>

int main() {
     //3 branches, 5 floors, 10 rooms per floor
    int chain[3][5][10];  
    int totalOccupied = 0;

    srand(time(0)); // Seed for random number

    // Assign random occupancy and count total occupied rooms
    for(int b = 0; b < 3; b++) {
        for(int f = 0; f < 5; f++) {
            for(int r = 0; r < 10; r++) {
                chain[b][f][r] = rand() % 2;  // 0 = vacant, 1 = occupied
                if(chain[b][f][r] == 1)
                    totalOccupied++;
            }
        }
    }

    printf("Total number of occupied rooms across all branches: %d\n", totalOccupied);

    return 0;
}