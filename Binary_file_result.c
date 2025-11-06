// A program storing university students results in binary
/*
Name:George Maina Ngugi
RegNo:CT100/G/26171/25
Description:A binary file result
*/
#include <stdio.h>
#include <stdlib.h>

// Define the structure
struct Student {
    char name[50];
    int reg_no;
    float total_marks;
};

int main() {
    FILE *file;
    struct Student s;

    // Open the binary file in read mode
    file = fopen("results.dat", "rb");

    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    // Read and display all student records
    printf("Student Records:\n");
    printf("-----------------------------\n");
    while (fread(&s, sizeof(struct Student), 1, file)) {
        printf("Name: %s\n", s.name);
        printf("Reg No: %d\n", s.reg_no);
        printf("Total Marks: %.2f\n", s.total_marks);
        printf("-----------------------------\n");
    }

    fclose(file);
    return 0;
}
