#include <stdio.h>

int stringLength(const char* str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int main() {
    const char* str = "Hello, World!";
    int length = stringLength(str);
    printf("The length of the string is: %d\n", length);
    return 0;
}
