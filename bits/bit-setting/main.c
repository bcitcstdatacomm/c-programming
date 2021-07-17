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


static uint8_t set_bit(uint8_t byte, uint8_t mask);


// warning - make sure you are masking with unsigned values only!
int main(void)
{
    uint8_t byte;

    byte = 0;
    printf("%u\n", byte);
    byte = set_bit(byte, B00000001);
    printf("%u\n", byte);
    byte = set_bit(byte, B00000010);
    printf("%u\n", byte);
    byte = set_bit(byte, B00000100);
    printf("%u\n", byte);
    byte = set_bit(byte, B00001000);
    printf("%u\n", byte);
    byte = set_bit(byte, B00010000);
    printf("%u\n", byte);
    byte = set_bit(byte, B00100000);
    printf("%u\n", byte);
    byte = set_bit(byte, B01000000);
    printf("%u\n", byte);
    byte = set_bit(byte, B10000000);
    printf("%u\n", byte);

    return EXIT_SUCCESS;
}


static uint8_t set_bit(uint8_t byte, uint8_t mask)
{
    unsigned char set;

    set = byte | mask;

    return set;
}
