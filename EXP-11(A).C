#include <stdio.h>

// Function to calculate factorial
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// Function to calculate nCr
int nCr(int n, int r) {
    int numerator = factorial(n);
    int denominator = factorial(r) * factorial(n - r);
    int result = numerator / denominator;
    return result;
}

int main() {
    int n, r;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Enter the value of r: ");
    scanf("%d", &r);
    int result = nCr(n, r);
    printf("The value of %dC%d is %d\n", n, r, result);
    return 0;
}
