#include <stdio.h>
#include <math.h>

double calculateArea(double a, double b, double c) {
    double s = (a + b + c) / 2; // Calculate the semi-perimeter
    double area = sqrt(s * (s - a) * (s - b) * (s - c)); // Calculate the area using Heron's formula
    return area;
}

int main() {
    double side1, side2, side3;
    printf("Enter the lengths of the three sides of the triangle: ");
    scanf("%lf %lf %lf", &side1, &side2, &side3);

    double area = calculateArea(side1, side2, side3);
    printf("The area of the triangle is: %.2lf\n", area);

    return 0;
}
