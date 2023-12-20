#include <stdio.h>
#include <string.h>

// Define a structure
struct Person {
    char name[50];
    int age;
};

// Define a union
union Data {
    int i;
    float f;
    char str[20];
};

int main() {
    // Create an instance of the structure
    struct Person person;
    strcpy(person.name, "John");
    person.age = 30;

    // Print the structure values
    printf("Structure values:\n");
    printf("Name: %s\n", person.name);
    printf("Age: %d\n\n", person.age);

    // Create an instance of the union
    union Data data;
    data.i = 10;

    // Print the union values
    printf("Union values:\n");
    printf("Integer: %d\n", data.i);
    printf("Float: %f\n", data.f);
    printf("String: %s\n\n", data.str);

    // Modify the union values
    data.f = 3.14;
    strcpy(data.str, "Hello");

    // Print the modified union values
    printf("Modified union values:\n");
    printf("Integer: %d\n", data.i);
    printf("Float: %f\n", data.f);
    printf("String: %s\n", data.str);

    return 0;
}
