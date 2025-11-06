//A a program to show book title stored in a text file
/*
Name: George Maina Ngugi
RegNo; CT100/G/26171/25
Description; a program showing books stored under file name borrowed_book txt. 
*/ 

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char title[100];

    // Open file in append mode so new entries are added without deleting existing ones
    file = fopen("borrowed_books.txt", "a");

    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Enter book title: ");
    fgets(title, sizeof(title), stdin);  // Read book title from user

    fprintf(file, "%s", title);  // Write title to file

    fclose(file);  // Close the file

    printf("Book title successfully stored.\n");
     return 0;
}
    