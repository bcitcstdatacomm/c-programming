#include <float.h>
#include <limits.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    printf("Radix: %d\n", FLT_RADIX);

    printf("float:\n");
    printf("\tsizeof:               %zu\n",   sizeof(float));
    printf("\tbits:                 %zu\n",   sizeof(float) * CHAR_BIT);
    printf("\tmantissa digits:      %d\n",    FLT_MANT_DIG);
    printf("\tdigits:               %d\n",    FLT_DIG);
    printf("\tmin exponent radix:   %d\n",    FLT_MIN_EXP);
    printf("\tmin exponent base 10: %d\n",    FLT_MIN_10_EXP);
    printf("\tmax exponent radix:   %d\n",    FLT_MAX_EXP);
    printf("\tmax exponent base 10: %d\n",    FLT_MAX_10_EXP);
    printf("\tmin:                  %10e\n",  FLT_MIN);
    printf("\tmax:                  %10e\n",  FLT_MAX);
    printf("\tepsilon:              %10e\n",  FLT_MAX);

    printf("double:\n");
    printf("\tsizeof:               %zu\n",   sizeof(double));
    printf("\tbits:                 %zu\n",   sizeof(double) * CHAR_BIT);
    printf("\tmantissa digits:      %d\n",    DBL_MANT_DIG);
    printf("\tdigits:               %d\n",    DBL_DIG);
    printf("\tmin exponent radix:   %d\n",    DBL_MIN_EXP);
    printf("\tmin exponent base 10: %d\n",    DBL_MIN_10_EXP);
    printf("\tmax exponent radix:   %d\n",    DBL_MAX_EXP);
    printf("\tmax exponent base 10: %d\n",    DBL_MAX_10_EXP);
    printf("\tmin:                  %10e\n",  DBL_MIN);
    printf("\tmax:                  %10e\n",  DBL_MAX);
    printf("\tepsilon:              %10e\n",  DBL_MAX);

    printf("long double:\n");
    printf("\tsizeof:               %zu\n",    sizeof(long double));
    printf("\tbits:                 %zu\n",    sizeof(long double) * CHAR_BIT);
    printf("\tmantissa digits:      %d\n",     LDBL_MANT_DIG);
    printf("\tdigits:               %d\n",     LDBL_DIG);
    printf("\tmin exponent radix:   %d\n",     LDBL_MIN_EXP);
    printf("\tmin exponent base 10: %d\n",     LDBL_MIN_10_EXP);
    printf("\tmax exponent radix:   %d\n",     LDBL_MAX_EXP);
    printf("\tmax exponent base 10: %d\n",     LDBL_MAX_10_EXP);
    printf("\tmin:                  %10Le\n",  LDBL_MIN);
    printf("\tmax:                  %10Le\n",  LDBL_MAX);
    printf("\tepsilon:              %10Le\n",  LDBL_MAX);

    return EXIT_SUCCESS;
}

