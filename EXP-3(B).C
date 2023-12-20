#include <stdio.h>
#include <math.h>

int main() {
    double principal, rate, time, compoundInterest;

    printf("Enter the principal amount: ");
    scanf("%lf", &principal);

    printf("Enter the interest rate: ");
    scanf("%lf", &rate);

    printf("Enter the time period (in years): ");
    scanf("%lf", &time);

    compoundInterest = principal * pow((1 + rate / 100), time);

    printf("Compound Interest = %.2lf\n", compoundInterest);

    return 0;
}
