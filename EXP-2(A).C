#include <stdio.h>

int main() {
    int num1, num2, num3;
    float sum, average;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    sum = num1 + num2 + num3;
    average = sum / 3;

    printf("Sum: %.2f\n", sum);
    printf("Average: %.2f\n", average);

    return 0;
}
