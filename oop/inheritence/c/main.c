#include "child.h"
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
    struct parent a;
    struct child  b;

    a.str       = "Hello";
    b.super.str = "Hello";
    b.value     = 42;

    printf("a: %s\n", a.str);
    printf("b: %s %d\n", b.super.str, b.value);

    return EXIT_SUCCESS;
}
