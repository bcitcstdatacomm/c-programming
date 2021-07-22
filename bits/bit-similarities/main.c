#include <stdio.h>
#include <stdlib.h>


// warning - make sure you are shifting with unsigned values only!
int main(void)
{
    unsigned char byte;
    unsigned char mask;
    unsigned char masked;

    // 11011111 = 223
    // 11110000 = 240
    // --------
    // 11010000 = 208
    byte   = 223;
    mask   = 240;
    masked = byte & mask;
    printf("%u\n", byte);
    printf("%u\n", mask);
    printf("%u\n", masked);

    return EXIT_SUCCESS;
}

