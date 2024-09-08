#include <stdio.h>

// Function to calculate the area of a rectangle
float calculateRectangleArea(float length, float width) {
    return length * width;
}

int main() {
    float side1, side2, area;

    // Input the sides of the rectangle
    printf("Enter the length of the rectangle: ");
    scanf("%f", &side1);
    printf("Enter the width of the rectangle: ");
    scanf("%f", &side2);

    // Calculate the area using the user-defined function
    area = calculateRectangleArea(side1, side2);

    // Output the calculated area
    printf("The area of the rectangle is: %.2f\n", area);

    return 0;
}







