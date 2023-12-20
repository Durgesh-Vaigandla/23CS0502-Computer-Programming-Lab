#include <stdio.h>

struct Student {
    char name[50];
    int marks;
};

int main() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct Student students[n];
    int total = 0;

    for (int i = 0; i < n; i++) {
        printf("Enter the name of student %d: ", i + 1);
        scanf("%s", students[i].name);

        printf("Enter the marks of student %d: ", i + 1);
        scanf("%d", &students[i].marks);

        total += students[i].marks;
    }

    float average = (float)total / n;

    printf("Total marks: %d\n", total);
    printf("Average marks: %.2f\n", average);

    return 0;
}
