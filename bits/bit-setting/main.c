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


static int set_bit(unsigned char byte, unsigned char mask);


// warning - make sure you are masking with unsigned values only!
int main(void)
{
    unsigned char byte;

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


static int set_bit(unsigned char byte, unsigned char mask)
{
    unsigned char set;

    set = byte | mask;

    return set;
}