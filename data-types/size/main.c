#include <inttypes.h>
#include <limits.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>


int main(void)
{
    printf("char:\n");
    printf("\tbits:          %d\n", CHAR_BIT);
    printf("\tsigned min:    %d\n", CHAR_MIN);
    printf("\tsigned min:    %d\n", CHAR_MAX);
    printf("\tunsigned max:  %u\n", UCHAR_MAX);

    printf("short:\n");
    printf("\tbits:          %zu\n", sizeof(short) * CHAR_BIT);
    printf("\tsigned min:    %d\n",  SHRT_MIN);
    printf("\tsigned min:    %d\n",  SHRT_MAX);
    printf("\tunsigned max:  %u\n",  USHRT_MAX);

    printf("int:\n");
    printf("\tbits:          %zu\n", sizeof(int) * CHAR_BIT);
    printf("\tsigned min:    %d\n",  INT_MIN);
    printf("\tsigned min:    %d\n",  INT_MAX);
    printf("\tunsigned max:  %u\n",  UINT_MAX);

    printf("long:\n");
    printf("\tbits:          %zu\n", sizeof(long) * CHAR_BIT);
    printf("\tsigned min:    %ld\n", LONG_MIN);
    printf("\tsigned min:    %ld\n", LONG_MAX);
    printf("\tunsigned max:  %lu\n", ULONG_MAX);

    printf("long long:\n");
    printf("\tbits:          %zu\n",  sizeof(long long) * CHAR_BIT);
    printf("\tsigned min:    %lld\n", LLONG_MIN);
    printf("\tsigned min:    %lld\n", LLONG_MAX);
    printf("\tunsigned max:  %llu\n", ULLONG_MAX);

    printf("int8_t:\n");
    printf("\tbits:          %zu\n",        sizeof(int8_t) * CHAR_BIT);
    printf("\tsigned min:    %" PRId8 "\n", (int8_t)INT8_MIN);
    printf("\tsigned min:    %" PRId8 "\n", (int8_t)INT8_MAX);
    printf("\tunsigned max:  %" PRIu8 "\n", (int8_t)UINT8_MAX);

    printf("int16_t:\n");
    printf("\tbits:          %zu\n",         sizeof(int16_t) * CHAR_BIT);
    printf("\tsigned min:    %" PRId16 "\n", (int16_t)INT16_MIN);
    printf("\tsigned min:    %" PRId16 "\n", (int16_t)INT16_MAX);
    printf("\tunsigned max:  %" PRIu16 "\n", (int16_t)UINT16_MAX);

    printf("int32_t:\n");
    printf("\tbits:          %zu\n",         sizeof(int32_t) * CHAR_BIT);
    printf("\tsigned min:    %" PRId32 "\n", INT32_MIN);
    printf("\tsigned min:    %" PRId32 "\n", INT32_MAX);
    printf("\tunsigned max:  %" PRIu32 "\n", UINT32_MAX);

#ifdef UINT64_MAX
    printf("int64_t:\n");
    printf("\tbits:          %zu\n",         sizeof(int64_t) * CHAR_BIT);
    printf("\tsigned min:    %" PRId64 "\n", INT64_MIN);
    printf("\tsigned min:    %" PRId64 "\n", INT64_MAX);
    printf("\tunsigned max:  %" PRIu64 "\n", UINT64_MAX);
#endif

    printf("int8_t:\n");
    printf("\tbits:          %zu\n",        sizeof(int8_t) * CHAR_BIT);
    printf("\tsigned min:    %" PRId8 "\n", (int8_t)INT8_MIN);
    printf("\tsigned min:    %" PRId8 "\n", (int8_t)INT8_MAX);
    printf("\tunsigned max:  %" PRIu8 "\n", (int8_t)UINT8_MAX);

    printf("int16_t:\n");
    printf("\tbits:          %zu\n",         sizeof(int16_t) * CHAR_BIT);
    printf("\tsigned min:    %" PRId16 "\n", (int16_t)INT16_MIN);
    printf("\tsigned min:    %" PRId16 "\n", (int16_t)INT16_MAX);
    printf("\tunsigned max:  %" PRIu16 "\n", (int16_t)UINT16_MAX);

    printf("int32_t:\n");
    printf("\tbits:          %zu\n",         sizeof(int32_t) * CHAR_BIT);
    printf("\tsigned min:    %" PRId32 "\n", INT32_MIN);
    printf("\tsigned min:    %" PRId32 "\n", INT32_MAX);
    printf("\tunsigned max:  %" PRIu32 "\n", UINT32_MAX);

#ifdef UINT64_MAX
    printf("int64_t:\n");
    printf("\tbits:          %zu\n",         sizeof(int64_t) * CHAR_BIT);
    printf("\tsigned min:    %" PRId64 "\n", INT64_MIN);
    printf("\tsigned min:    %" PRId64 "\n", INT64_MAX);
    printf("\tunsigned max:  %" PRIu64 "\n", UINT64_MAX);
#endif

    printf("int_least8_t:\n");
    printf("\tbits:          %zu\n",             sizeof(int_least8_t) * CHAR_BIT);
    printf("\tsigned min:    %" PRIdLEAST8 "\n", (int_least8_t)INT_LEAST8_MIN);
    printf("\tsigned min:    %" PRIdLEAST8 "\n", (int_least8_t)INT_LEAST8_MAX);
    printf("\tunsigned max:  %" PRIuLEAST8 "\n", (int_least8_t)UINT_LEAST8_MAX);

    printf("int_least16_t:\n");
    printf("\tbits:          %zu\n",              sizeof(int_least16_t) * CHAR_BIT);
    printf("\tsigned min:    %" PRIdLEAST16 "\n", (int_least16_t)INT_LEAST16_MIN);
    printf("\tsigned min:    %" PRIdLEAST16 "\n", (int_least16_t)INT_LEAST16_MAX);
    printf("\tunsigned max:  %" PRIuLEAST16 "\n", (int_least16_t)UINT_LEAST16_MAX);

    printf("int_least32_t:\n");
    printf("\tbits:          %zu\n",              sizeof(int_least32_t) * CHAR_BIT);
    printf("\tsigned min:    %" PRIdLEAST32 "\n", INT_LEAST32_MIN);
    printf("\tsigned min:    %" PRIdLEAST32 "\n", INT_LEAST32_MAX);
    printf("\tunsigned max:  %" PRIuLEAST32 "\n", UINT_LEAST32_MAX);

    printf("int_least64_t:\n");
    printf("\tbits:          %zu\n",              sizeof(int_least64_t) * CHAR_BIT);
    printf("\tsigned min:    %" PRIdLEAST64 "\n", INT_LEAST64_MIN);
    printf("\tsigned min:    %" PRIdLEAST64 "\n", INT_LEAST64_MAX);
    printf("\tunsigned max:  %" PRIuLEAST64 "\n", UINT_LEAST64_MAX);

    printf("int_fast8_t:\n");
    printf("\tbits:          %zu\n",            sizeof(int_fast8_t) * CHAR_BIT);
    printf("\tsigned min:    %" PRIdFAST8 "\n", (int_fast8_t)INT_FAST8_MIN);
    printf("\tsigned min:    %" PRIdFAST8 "\n", (int_fast8_t)INT_FAST8_MAX);
    printf("\tunsigned max:  %" PRIuFAST8 "\n", (int_fast8_t)UINT_FAST8_MAX);

    printf("int_fast16_t:\n");
    printf("\tbits:          %zu\n",             sizeof(int_fast16_t) * CHAR_BIT);
    printf("\tsigned min:    %" PRIdFAST16 "\n", (int_fast16_t)INT_FAST16_MIN);
    printf("\tsigned min:    %" PRIdFAST16 "\n", (int_fast16_t)INT_FAST16_MAX);
    printf("\tunsigned max:  %" PRIuFAST16 "\n", (int_fast16_t)UINT_FAST16_MAX);

    printf("int_fast32_t:\n");
    printf("\tbits:          %zu\n",             sizeof(int_fast32_t) * CHAR_BIT);
    printf("\tsigned min:    %" PRIdFAST32 "\n", INT_FAST32_MIN);
    printf("\tsigned min:    %" PRIdFAST32 "\n", INT_FAST32_MAX);
    printf("\tunsigned max:  %" PRIuFAST32 "\n", UINT_FAST32_MAX);

    printf("int_fast64_t:\n");
    printf("\tbits:          %zu\n",             sizeof(int_fast64_t) * CHAR_BIT);
    printf("\tsigned min:    %" PRIdFAST64 "\n", INT_FAST64_MIN);
    printf("\tsigned min:    %" PRIdFAST64 "\n", INT_FAST64_MAX);
    printf("\tunsigned max:  %" PRIuFAST64 "\n", UINT_FAST64_MAX);

    return EXIT_SUCCESS;
}
