#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // Remove trailing newline character

    printf("Original string: %s\n", str);

    // Reverse the string using the strrev() function
    strrev(str);

    printf("Reversed string: %s\n", str);

    return 0;
}
