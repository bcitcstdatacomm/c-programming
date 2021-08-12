#include <stdio.h>
#include <stdlib.h>


// warning - make sure you are shifting with unsigned values only!
int main(void)
{
    unsigned char byte;
    unsigned char flipped;

    // 00001111 = 150
    byte = 15;
    // 11110000 = 240
    flipped = ~byte;
    printf("%u\n", byte);
    printf("%u\n", flipped);

    return EXIT_SUCCESS;
}
