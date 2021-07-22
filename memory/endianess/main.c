#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>


// https://stackoverflow.com/questions/111928/is-there-a-printf-converter-to-print-in-binary-format
#define BYTE_TO_BINARY_PATTERN "%c%c%c%c%c%c%c%c"
#define BYTE_TO_BINARY(byte)   \
  ((byte) & 0x80U ? '1' : '0'), \
  ((byte) & 0x40U ? '1' : '0'), \
  ((byte) & 0x20U ? '1' : '0'), \
  ((byte) & 0x10U ? '1' : '0'), \
  ((byte) & 0x08U ? '1' : '0'), \
  ((byte) & 0x04U ? '1' : '0'), \
  ((byte) & 0x02U ? '1' : '0'), \
  ((byte) & 0x01U ? '1' : '0')


static void print_bytes(uint8_t bytes[static 4]);
static void print_byte(uint8_t byte);


int main(void)
{
    union
    {
        int32_t value;
        uint8_t bytes[4];
    } data;

    // 0001000 00000100 00000010 00000001
    // 0x08 04 02 01
    data.value = 0x08040201;

    if(data.bytes[0] == 1)
    {
        printf("Big Endian\n");
    }
    else
    {
        printf("Little Endian\n");
    }

    printf("\n");
    print_bytes(data.bytes);

    return EXIT_SUCCESS;
}


static void print_bytes(uint8_t bytes[static 4])
{
    print_byte(bytes[0]);
    print_byte(bytes[1]);
    print_byte(bytes[2]);
    print_byte(bytes[3]);
    printf("--------\n");
}

static void print_byte(uint8_t byte)
{
    printf(BYTE_TO_BINARY_PATTERN "\n", BYTE_TO_BINARY(byte));
}
