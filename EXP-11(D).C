#include <stdio.h>

// Function to calculate the derivative of the function
double derivative(double x, double y) {
    // Define the differential equation here
    double dy_dx = x * y; // Example: dy/dx = x * y

    return dy_dx;
}

// Function to perform numerical integration using Euler's method
void eulerIntegration(double x0, double y0, double h, double x) {
    double y = y0;

    // Iterate until the desired x value is reached
    while (x0 < x) {
        double dy_dx = derivative(x0, y);
        y = y + h * dy_dx;
        x0 = x0 + h;
    }

    printf("The value of y at x = %.2f is %.4f\n", x, y);
}

int main() {
    double x0, y0, h, x;

    printf("Enter the initial value of x: ");
    scanf("%lf", &x0);

    printf("Enter the initial value of y: ");
    scanf("%lf", &y0);

    printf("Enter the step size (h): ");
    scanf("%lf", &h);

    printf("Enter the value of x at which y is to be calculated: ");
    scanf("%lf", &x);

    eulerIntegration(x0, y0, h, x);

    return 0;
}
