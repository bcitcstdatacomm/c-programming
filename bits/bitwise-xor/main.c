#include <stdio.h>
#include <stdlib.h>
#include <iso646.h>


// warning - there can be issues performing bitwise operations on signed values.
int main(void)
{
    unsigned char byteA;
    unsigned char byteB;
    unsigned char differences;

    // Base: 2     8  10 16
    //       01011 13 11 0B
    // XOR (^)
    //       01110 16 14 0E
    //       ----- -- -- --
    //       01010 12 10 0A

    byteA       = 11;
    byteB       = 14;
    differences = byteA ^ byteB;
//    differences = byteA xor byteB; // xor is the same as ^
    printf("%02o %02u %02X\n", byteA, byteA, byteA);
    printf("^\n");
    printf("%02o %02u %02X\n", byteB, byteB, byteB);
    printf("-- -- --\n");
    printf("%02o %02u %02X\n", differences, differences, differences);

    return EXIT_SUCCESS;
}
