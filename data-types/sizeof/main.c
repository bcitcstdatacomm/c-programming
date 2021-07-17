#include <stdbool.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>


static void print_size(const char *type_name, size_t bytes);


int main(void)
{
    print_size("bool",          sizeof(bool));
    printf("\n");
    print_size("char",          sizeof(char));
    print_size("short",         sizeof(short));
    print_size("int",           sizeof(int));
    print_size("long",          sizeof(long));
    print_size("long long",     sizeof(long long));
    printf("\n");
    print_size("int8_t",        sizeof(int8_t));
    print_size("int16_t",       sizeof(int16_t));
    print_size("int32_t",       sizeof(int32_t));

    // int64_t is optional
#ifdef UINT64_MAX
    print_size("int64_t",       sizeof(int64_t));
#endif

    printf("\n");
    print_size("int_fast8_t",   sizeof(int_fast8_t));
    print_size("int_fast16_t",  sizeof(int_fast16_t));
    print_size("int_fast32_t",  sizeof(int_fast32_t));
    print_size("int_fast64_t",  sizeof(int_fast64_t));
    printf("\n");
    print_size("int_least8_t",  sizeof(int_least8_t));
    print_size("int_least16_t", sizeof(int_least16_t));
    print_size("int_least32_t", sizeof(int_least32_t));
    print_size("int_least64_t", sizeof(int_least64_t));

    return EXIT_SUCCESS;
}

static void print_size(const char *type_name, size_t bytes)
{
    printf("%-13s %zu\n", type_name, bytes);
}
