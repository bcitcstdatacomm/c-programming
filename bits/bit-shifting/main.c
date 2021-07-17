#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>
#include <arpa/inet.h>


// warning - make sure you are shifting with unsigned values only!
int main(void)
{
    unsigned char byte;

    // 00000001
    byte = 1;
    printf("A %u\n", byte);

    // 00000010
    byte <<= 1u;
    printf("B %u\n", byte);

    // 00000100
    byte <<= 1u;
    printf("C %u\n", byte);

    // 00001000
    byte <<= 1u;
    printf("D %u\n", byte);

    // 00010000
    byte <<= 1u;
    printf("E %u\n", byte);

    // 00100000
    byte <<= 1u;
    printf("F %u\n", byte);

    // 01000000
    byte <<= 1u;
    printf("G %u\n", byte);

    // 10000000
    byte <<= 1u;
    printf("H %u\n", byte);

    // 01000000
    byte >>= 1u;
    printf("I %u\n", byte);

    // 00100000
    byte >>= 1u;
    printf("J %u\n", byte);

    // 00010000
    byte >>= 1u;
    printf("K %u\n", byte);

    // 00001000
    byte >>= 1u;
    printf("L %u\n", byte);

    // 00000100
    byte >>= 1u;
    printf("M %u\n", byte);

    // 00000010
    byte >>= 1u;
    printf("N %u\n", byte);

    // 00000001
    byte >>= 1u;
    printf("O %u\n", byte);

    // 00000000
    byte >>= 1u;
    printf("P %u\n", byte);

    return EXIT_SUCCESS;
}
