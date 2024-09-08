#include<stdio.h>




// Function to print a 4x4 square of stars
void printSquare() {
    int i, j; // Declare loop variables at the beginning
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

// Function to print a 4x4 half square (right triangle) of stars
void printHalfSquare() {
    int i, j; // Declare loop variables at the beginning
    for (i = 0; i < 4; i++) {
        for (j = 0; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

// Function to print Pascal's triangle of height 4
void printPascalsTriangle() {
    int i, j, space, coef = 1; // Declare loop variables and space variable at the beginning
    for (i = 0; i < 4; i++) {
        // Print spaces to create a triangular shape
        for (space = 1; space <= 4 - i; space++) {
            printf("  ");
        }
        // Calculate and print coefficients
        for (j = 0; j <= i; j++) {
            if (j == 0 || i == 0)
                coef = 1;
            else
                coef = coef * (i - j + 1) / j;
            printf("%4d", coef);
        }
        printf("\n");
    }
}

void printPascalsTriangle() {
    int coef;
    for (int i = 0; i < 4; i++) {
        coef = 1;
        for (int j = 0; j <= i; j++) {
            printf("%4d", coef);
            coef = coef * (i - j) / (j + 1);
        }
        printf("\n");
    }
}


int main() {
    int choice;
    
    // Main loop to repeatedly prompt for user choice
    do {
        printf("Enter your choice (0 to exit):\n");
        printf("1. Print a 4x4 square of stars\n");
        printf("2. Print a 4x4 half square (right triangle) of stars\n");
        printf("3. Print Pascal's triangle of height 4\n");
        scanf("%d", &choice);
        
        // Switch case to handle user choice
        switch(choice) {
            case 0:
                printf("Exiting the program.\n");
                break;
            case 1:
                printf("Printing a 4x4 square of stars:\n");
                printSquare();
                break;
            case 2:
                printf("Printing a 4x4 half square (right triangle) of stars:\n");
                printHalfSquare();
                break;
            case 3:
                printf("Printing Pascal's triangle of height 4:\n");
                printPascalsTriangle();
                break;
            default:
                printf("Invalid choice. Please enter again.\n");
        }
    } while (choice != 0);
    
    return 0; // Program executed successfully
}
