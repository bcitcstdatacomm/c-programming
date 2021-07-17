#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>
#include <arpa/inet.h>

//             1
//             2631
//             84268421
const uint8_t B10000000 = UINT8_C(0x80);
const uint8_t B01000000 = UINT8_C(0x40);
const uint8_t B00100000 = UINT8_C(0x20);
const uint8_t B00010000 = UINT8_C(0x10);
const uint8_t B00001000 = UINT8_C(0x08);
const uint8_t B00000100 = UINT8_C(0x04);
const uint8_t B00000010 = UINT8_C(0x02);
const uint8_t B00000001 = UINT8_C(0x01);


static void print_mask(uint8_t byte, uint8_t mask);


// warning - make sure you are masking with unsigned values only!
int main(void)
{
    uint8_t byte;

    // 00000101 = B00000001 + B00000100
    // 0x05     = 0x04      + 0x01
    byte = 5;
    print_mask(byte, B10000000);
    print_mask(byte, B01000000);
    print_mask(byte, B00100000);
    print_mask(byte, B00010000);
    print_mask(byte, B00001000);
    print_mask(byte, B00000100);
    print_mask(byte, B00000010);
    print_mask(byte, B00000001);

    return EXIT_SUCCESS;
}


static void print_mask(uint8_t byte, uint8_t mask)
{
    unsigned char masked;

    masked = byte & mask;
    printf("%u\n", masked);
}
