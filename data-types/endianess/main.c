#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>
#include <arpa/inet.h>


// https://stackoverflow.com/questions/111928/is-there-a-printf-converter-to-print-in-binary-format
#define BYTE_TO_BINARY_PATTERN "%c%c%c%c%c%c%c%c"
#define BYTE_TO_BINARY(byte)   \
  ((byte) & 0x80 ? '1' : '0'), \
  ((byte) & 0x40 ? '1' : '0'), \
  ((byte) & 0x20 ? '1' : '0'), \
  ((byte) & 0x10 ? '1' : '0'), \
  ((byte) & 0x08 ? '1' : '0'), \
  ((byte) & 0x04 ? '1' : '0'), \
  ((byte) & 0x02 ? '1' : '0'), \
  ((byte) & 0x01 ? '1' : '0')


static void print_bytes(uint8_t bytes[static 4]);


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
    printf(BYTE_TO_BINARY_PATTERN "\n", BYTE_TO_BINARY(bytes[0]));
    printf(BYTE_TO_BINARY_PATTERN "\n", BYTE_TO_BINARY(bytes[1]));
    printf(BYTE_TO_BINARY_PATTERN "\n", BYTE_TO_BINARY(bytes[2]));
    printf(BYTE_TO_BINARY_PATTERN "\n", BYTE_TO_BINARY(bytes[3]));
    printf("--------\n");
}
