#include <arpa/inet.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>


// warning - make sure you are shifting with unsigned values only!
int main(void)
{
    unsigned char byte;

    // 00000001
    byte = 1U;
    printf("A %u\n", byte);

    // 00000010
    byte <<= 1U;
    printf("B %u\n", byte);

    // 00000100
    byte <<= 1U;
    printf("C %u\n", byte);

    // 00001000
    byte <<= 1U;
    printf("D %u\n", byte);

    // 00010000
    byte <<= 1U;
    printf("E %u\n", byte);

    // 00100000
    byte <<= 1U;
    printf("F %u\n", byte);

    // 01000000
    byte <<= 1U;
    printf("G %u\n", byte);

    // 10000000
    byte <<= 1U;
    printf("H %u\n", byte);

    // 01000000
    byte >>= 1U;
    printf("I %u\n", byte);

    // 00100000
    byte >>= 1U;
    printf("J %u\n", byte);

    // 00010000
    byte >>= 1U;
    printf("K %u\n", byte);

    // 00001000
    byte >>= 1U;
    printf("L %u\n", byte);

    // 00000100
    byte >>= 1U;
    printf("M %u\n", byte);

    // 00000010
    byte >>= 1U;
    printf("N %u\n", byte);

    // 00000001
    byte >>= 1U;
    printf("O %u\n", byte);

    // 00000000
    byte >>= 1U;
    printf("P %u\n", byte);

    return EXIT_SUCCESS;
}
