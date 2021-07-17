#include <stdbool.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>


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


static void print_bytes(uint8_t *bytes, size_t count);


int main(void)
{
    struct entity
    {
        // this is not safe on some architectures, but it makes it so that the struct won't be padded
        __attribute__((packed))
        char wordA[4];
        uint8_t byte;
    };

    union
    {
        struct entity e;
        uint8_t bytes[sizeof(struct entity)];
    } data;

    data.e.wordA[0] = 'A';
    data.e.wordA[1] = 'B';
    data.e.wordA[2] = 'C';
    data.e.wordA[3] = '\0';
    data.e.byte     = 255;

    print_bytes(data.bytes, sizeof(struct entity));

    return EXIT_SUCCESS;
}

static void print_bytes(uint8_t *bytes, size_t count)
{
    for(size_t i = 0; i < count; i++)
    {
        printf(BYTE_TO_BINARY_PATTERN "\n", BYTE_TO_BINARY(bytes[i]));
    }
}
