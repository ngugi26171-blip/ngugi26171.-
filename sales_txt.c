// A program to display daily stores transctions 
/*
Name:George Maina Ngugi
RegNo:CT100/G/26171/25
Description:A program showing daily sales aand transactions
*/
#include <stdio.h>

int main() {
    FILE *file;
    float amount, total = 0;

    // Open the file for reading
    file = fopen("sales.txt", "r");

    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    // Read each transaction and sum it
    while (fscanf(file, "%f", &amount) == 1) {
        total += amount;
    }

    // Display total sales
    printf("Total sales for the day: %.2f\n", total);

    // Close the file
    fclose(file);

    return 0;
}
