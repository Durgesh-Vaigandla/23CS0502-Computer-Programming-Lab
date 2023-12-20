#include <stdio.h>

int main() {
    float speed, time, distance;

    printf("Enter the speed of the object (in km/h): ");
    scanf("%f", &speed);

    printf("Enter the time taken by the object (in hours): ");
    scanf("%f", &time);

    distance = speed * time;

    printf("The distance traveled by the object is %.2f km\n", distance);

    return 0;
}
