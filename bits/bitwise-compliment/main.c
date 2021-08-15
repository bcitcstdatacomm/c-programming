#include <stdio.h>
#include <stdlib.h>
#include <iso646.h>


// warning - there can be issues performing bitwise operations on signed values.
int main(void)
{
    unsigned char byteA;
    unsigned char differences;

    // Base: 2     8  10 16
    //       00001011 13 11 0B
    // Compliment (~)
    //       -------- --- --- --
    //       11110100 364 244 F4

    byteA       = 11;
    differences = ~byteA;
    //    differences = compl byteA; // compl is the same as ~
    printf("~\n");
    printf("%03o %03u %02X\n", byteA, byteA, byteA);
    printf("--- --- --\n");
    printf("%03o %03u %02X\n", differences, differences, differences);

    return EXIT_SUCCESS;
}
