#include <stdio.h>
#include <math.h>

int main() {
    double number, squareRoot;

    printf("Enter a number: ");
    scanf("%lf", &number);

    squareRoot = sqrt(number);

    printf("The square root of %.2lf is %.2lf\n", number, squareRoot);

    return 0;
}
