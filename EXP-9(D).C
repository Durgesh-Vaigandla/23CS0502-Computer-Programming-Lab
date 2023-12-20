#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc < 3) {
        printf("Insufficient arguments! Please provide student name and marks.\n");
        return 1;
    }

    char *name = argv[1];
    int marks = atoi(argv[2]);

    printf("Student Name: %s\n", name);
    printf("Marks: %d\n", marks);
    printf("Total: %d\n", marks);

    return 0;
}
