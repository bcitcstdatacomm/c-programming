#include <stdio.h>
#include <stdlib.h>


static void foo_int(int value);
static void foo_float(float value);
static void foo_string(const char *value);


#define foo(value)  _Generic((value), \
    int:    foo_int,                  \
    float:  foo_float,                \
    char *: foo_string                \
)(value)


int main(int argc, char *argv[])
{
    foo("Hello, World!");
    foo(10);
    foo(123.4f);

    return EXIT_SUCCESS;
}

static void foo_int(int value)
{
    printf("int: %d\n", value);
}

static void foo_float(float value)
{
    printf("float: %f\n", value);
}

static void foo_string(const char *value)
{
    printf("string: %s\n", value);
}
