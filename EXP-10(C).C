#include <stdio.h>

// Define a structure with a bit field
struct BitField {
    unsigned int value : 8; // 8-bit unsigned integer
};

int main() {
    struct BitField bf;
    bf.value = 0b11001100; // Initial value

    printf("Before rotation: 0x%02X\n", bf.value);

    // Perform left shift rotation
    unsigned int msb = bf.value >> 7; // Get the most significant bit
    bf.value = (bf.value << 1) | msb; // Shift left and set the least significant bit to the previous most significant bit

    printf("After rotation:  0x%02X\n", bf.value);

    return 0;
}
