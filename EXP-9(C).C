#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char name[50];
    int rollNo;
    float marks;
} Student;

int main() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Allocate memory for the array of students
    Student* students = (Student*)calloc(n, sizeof(Student));

    // Enter data for each student
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll No: ");
        scanf("%d", &students[i].rollNo);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    // Display the list of failed students
    printf("\nList of failed students:\n");
    for (int i = 0; i < n; i++) {
        if (students[i].marks < 40) {
            printf("Name: %s\n", students[i].name);
            printf("Roll No: %d\n", students[i].rollNo);
            printf("Marks: %.2f\n", students[i].marks);
        }
    }

    // Free the allocated memory
    free(students);

    return 0;
}
