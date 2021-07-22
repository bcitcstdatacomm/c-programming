#include <arpa/inet.h>
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


static void print_bytes(const uint8_t bytes[static 4], size_t count);


int main(void)
{
    union
    {
        uint16_t value16;
        uint32_t value32;
        uint8_t bytes[4];
    } data;

    // 0001000 00000100 00000010 00000001
    // 0x08 04 02 01
    data.value32 = 0x08040201;

    printf("\n");
    print_bytes(data.bytes, 4);

    // NOLINTNEXTLINE(hicpp-signed-bitwise)
    data.value32 = htonl(data.value32);
    print_bytes(data.bytes, 4);
    data.value16 = 0x0201;
    print_bytes(data.bytes, 2);

    // NOLINTNEXTLINE(hicpp-signed-bitwise)
    data.value16 = htons(data.value16);
    print_bytes(data.bytes, 2);

    return EXIT_SUCCESS;
}


static void print_bytes(const uint8_t bytes[static 4], size_t count)
{
    for(size_t i = 0; i < count; i++)
    {
        printf(BYTE_TO_BINARY_PATTERN "\n", BYTE_TO_BINARY(bytes[i]));
    }

    printf("--------\n");
}
