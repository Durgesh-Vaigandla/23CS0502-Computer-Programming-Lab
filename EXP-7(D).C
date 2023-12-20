#include <stdio.h>

int main() {
    long long binaryNum, onesComplement, twosComplement;
    int bitCount = 0;

    printf("Enter a binary number: ");
    scanf("%lld", &binaryNum);

    // Calculate the ones complement
    onesComplement = ~binaryNum;

    // Calculate the number of bits in the binary number
    while (binaryNum > 0) {
        binaryNum = binaryNum >> 1;
        bitCount++;
    }

    // Calculate the twos complement
    twosComplement = onesComplement + 1;

    printf("The 2's complement of the given binary number is: %lld\n", twosComplement);

    return 0;
}
