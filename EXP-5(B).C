#include <stdio.h>

int main() {
    float units, totalAmount;

    printf("Enter the number of units consumed: ");
    scanf("%f", &units);

    if (units <= 50) {
        totalAmount = units * 0.50;
    } else if (units <= 150) {
        totalAmount = 25 + ((units - 50) * 0.75);
    } else if (units <= 250) {
        totalAmount = 100 + ((units - 150) * 1.20);
    } else {
        totalAmount = 220 + ((units - 250) * 1.50);
    }

    printf("Total electricity bill: $%.2f\n", totalAmount);

    return 0;
}
