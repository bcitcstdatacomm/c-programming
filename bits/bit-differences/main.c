#include <stdio.h>
#include <stdlib.h>


// warning - make sure you are shifting with unsigned values only!
int main(void)
{
    unsigned char byteA;
    unsigned char byteB;
    unsigned char differences;

    // 01001100 = 76
    // 00011001 = 25
    // --------
    // 01010101 = 85
    byteA       = 76;
    byteB       = 25;
    differences = byteA ^ byteB;
    printf("%u\n", byteA);
    printf("%u\n", byteB);
    printf("%u\n", differences);

    return EXIT_SUCCESS;
}
