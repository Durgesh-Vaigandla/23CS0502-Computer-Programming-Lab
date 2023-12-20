#include <stdio.h>

// Define the structure
struct Student {
    char name[50];
    int age;
    float marks;
};

int main() {
    // Declare two structure variables
    struct Student student1, student2;

    // Copy the values from student1 to student2
    strcpy(student2.name, student1.name);
    student2.age = student1.age;
    student2.marks = student1.marks;

    // Print the values of student2
    printf("Copied values:\n");
    printf("Name: %s\n", student2.name);
    printf("Age: %d\n", student2.age);
    printf("Marks: %.2f\n", student2.marks);

    return 0;
}
