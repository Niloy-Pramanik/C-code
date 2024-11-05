#include <stdio.h>
#include <math.h>

// Structure to represent a point in 2D space
struct Point {
    float x;
    float y;
};

// Function to calculate the area of a triangle given three points
float areaOfTriangle(struct Point A, struct Point B, struct Point C) {
    // Using the formula for area of a triangle using its vertices
    float area = fabs((A.x*(B.y-C.y) + B.x*(C.y-A.y) + C.x*(A.y-B.y))/2.0);
    return area;
}

int main() {
    struct Point A, B, C;

    // Taking input of coordinates of three points
    printf("Enter coordinates of point A: ");
    scanf("%f%f", &A.x, &A.y);

    printf("Enter coordinates of point B: ");
    scanf("%f%f", &B.x, &B.y);

    printf("Enter coordinates of point C: ");
    scanf("%f%f", &C.x, &C.y);

    // Calculating the area of the triangle
    float area = areaOfTriangle(A, B, C);

    // Checking if the points are collinear or not
    if(area == 0) {
        printf("They are in the same line\n");
    }
    else {
        printf("The area is %.2f unit\n", area);
    }

    return 0;
}

