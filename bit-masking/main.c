#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>
#include <arpa/inet.h>

//       1
//       2631
//       84268421
#define B10000000 0x80u
#define B01000000 0x40u
#define B00100000 0x20u
#define B00010000 0x10u
#define B00001000 0x08u
#define B00000100 0x04u
#define B00000010 0x02u
#define B00000001 0x01u


static void print_mask(size_t position, unsigned char byte, unsigned char mask);


// warning - make sure you are masking with unsigned values only!
int main(void)
{
    unsigned char byte;

    // 00000101 = B00000001 + B00000100
    // 0x05     = 0x04      + 0x01
    byte = 5;
    print_mask(1, byte, B10000000);
    print_mask(2, byte, B01000000);
    print_mask(3, byte, B00100000);
    print_mask(4, byte, B00010000);
    print_mask(5, byte, B00001000);
    print_mask(6, byte, B00000100);
    print_mask(7, byte, B00000010);
    print_mask(8, byte, B00000001);

    return EXIT_SUCCESS;
}


static void print_mask(size_t position, unsigned char byte, unsigned char mask)
{
    unsigned char masked;

    masked = byte & mask;
    printf("%u\n", masked);
}