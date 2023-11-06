/*
Kadel Saleh.
Cyber and Computer Technology.
ksaleh22@student.aau.dk
Group no. 6.

This program demonstrates the use of the trapezoidal method to approximate the area under a curve.
The trapezoidal method divides the desired interval into smaller segments (trapezoids) and calculates
the area under the curve for each segment, and then sums them to obtain the total area.

Two specific functions are analyzed:
1. g(x) = x^2 * sin(x)
2. h(x) = sqrt(4 - x^2) (representing a semicircle).

Using a typedefinition `FunctionPointer`, the program allows working with different mathematical functions
in a flexible manner. This means that the `trap` function can take different functions as input and
calculate the area under the curve for them.

For each function, the program calculates the approximation at different subdivisions of the interval
(for different values of n) and prints the results.
Inspired by ChatGPT.
*/

#include <stdio.h>
#include <math.h>

// `FunctionPointer` is a typedefinition that creates an alias for a specific type of functions.
// It represents a pointer to a function that takes a `double` as input and returns a `double`.
// This allows us to refer to such functions more compactly in the code.
typedef double (*FunctionPointer)(double);

// Forward declarations (prototypes) of functions that will be defined later in the code.
double trap(double a, double b, int n, FunctionPointer f);
double g_function(double x);
double h_function(double x);
double h_interval(double a, double b, int n);
double sum(double a, double b, int n, FunctionPointer f);

int main() {
    // Initialize the variables n, a, and b.
    int n;
    double a = 0;
    double b = 3.14159;

    // A loop that runs the trapezoidal method for different values of n for the g_function.
    for (n = 2; n <= 128; n *= 2) {
        printf("For g(x) = x^2 * sin(x) for [0, 3.14159] n=%d: %lf\n", n, trap(a, b, n, g_function));
    }
    
    // Reset the values of a and b for the next function.
    a = -2;
    b = 2;
    double Actual_area = 2 * M_PI;  // M_PI is a constant in math.h that represents the value of pi.
    
    // A similar loop for the h_function.
    for (n = 2; n <= 128; n *= 2) {
        double approximation_area = trap(a, b, n, h_function);
        printf("h(x) = sqrt(4 - x^2) for [-2, 2] n=%d: %lf, Difference from actual area: %lf\n", n, approximation_area, fabs(Actual_area - approximation_area));
    }
    
    return 0;  // Exit the program without errors.
}

// g_function represents the mathematical function x^2 * sin(x).
double g_function(double x) {
    return x * x * sin(x);
}

// h_function represents the mathematical function sqrt(4 - x^2), which describes a semicircle.
double h_function(double x) {
    return sqrt(4 - x * x);
}

// h_interval calculates the width of each subinterval given the total interval [a, b] and the number of subintervals n.
double h_interval(double a, double b, int n) {
    return (b - a) / n;
}

// sum calculates the cumulative value of all function values at the midpoints in the subintervals.
double sum(double a, double b, int n, FunctionPointer f) {
    double h = h_interval(a, b, n);  // Calculate the width of each subinterval.
    double total = 0.0;  // Initialize the total sum to 0.

    // Iterate through all subintervals, calculate the function value at each midpoint, and add it to the total sum.
    for (int i = 1; i < n; i++) {
        total += f(a + i * h);
    }

    return total;  // Return the total sum.
}

// trap calculates the area under the curve of the function f over the interval [a, b] using the trapezoidal method.
// Here, `FunctionPointer f` is a parameter in the `trap` function.
// This means that `trap` can accept any function (that takes a `double` and returns a `double`) as an argument.
// This makes the `trap` function more flexible and reusable.
double trap(double a, double b, int n, FunctionPointer f) {
    double h = h_interval(a, b, n);  // Calculate the width of each subinterval.
    
    // Calculate the trapezoidal approximation using:
    // - The average of function values at the start and end of the interval.
    // - The cumulative function value at all midpoints in the subintervals.
    double T = h * (0.5 * (f(a) + f(b)) + sum(a, b, n, f));

    return T;  // Return the estimated area under the curve.
}
// In the main function, we pass different functions (such as `g_function` and `h_function`) to the `trap` function.
// This demonstrates how we can reuse the `trap` function with different mathematical functions.
