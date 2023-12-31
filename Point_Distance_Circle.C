// Preprocessor and libraries.
#include <stdio.h>
#include <math.h>

// Main function.
int main(){
    // Initialization.
    double radius = 0.0, x = 0.0, y = 0.0, distance = 0;

    // Set the radius based on input.
    printf("The center of the circle is (0,0).\n");
    printf("Give the circle a radius: ");
    scanf("%lf", &radius);
    printf("Saving.\n");

    // Determine the coordinates of a point based on input.
    printf("\nNow you need to specify the coordinates of a point so I can determine if it's on, inside, or outside the circle.\n");
    printf("Give me the x-coordinate: ");
    scanf("%lf", &x);
    printf("Give me the y-coordinate: ");
    scanf("%lf", &y);
    printf("Saving.\n");

    // Calculate the distance using the distance formula.
    printf("\nCalculating.\n");
    distance = sqrt(pow(x, 2) + pow(y, 2));
    printf("The distance is: %f.\n");

    // Explain the result.
    printf("Explanation:\n");
    if (distance == radius) {
        printf("The point is on the circle's circumference.\n");
    } else if (distance < radius) {
        printf("The point is inside the circle.\n");
    } else if (distance > radius) {
        printf("The point is outside the circle.\n");
    }

    return 0;
}
