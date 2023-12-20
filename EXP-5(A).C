#include <stdio.h>

int main() {
    int num1, num2, num3, num4;
    int max, min;

    printf("Enter four numbers: ");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    // Find the maximum number
    if (num1 >= num2 && num1 >= num3 && num1 >= num4) {
        max = num1;
    } else if (num2 >= num1 && num2 >= num3 && num2 >= num4) {
        max = num2;
    } else if (num3 >= num1 && num3 >= num2 && num3 >= num4) {
        max = num3;
    } else {
        max = num4;
    }

    // Find the minimum number
    if (num1 <= num2 && num1 <= num3 && num1 <= num4) {
        min = num1;
    } else if (num2 <= num1 && num2 <= num3 && num2 <= num4) {
        min = num2;
    } else if (num3 <= num1 && num3 <= num2 && num3 <= num4) {
        min = num3;
    } else {
        min = num4;
    }

    printf("Maximum number: %d\n", max);
    printf("Minimum number: %d\n", min);

    return 0;
}
