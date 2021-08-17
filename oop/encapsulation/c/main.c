#include "clazz.h"
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
    struct clazz *a;
    struct clazz *b;

    a = clazz_new(5);
    b = clazz_new(6);
    printf("%d\n", clazz_get_value(a));
    printf("%d\n", clazz_get_value(b));

    clazz_set_value(a, 10);
    clazz_set_value(b, 20);
    printf("%d\n", clazz_get_value(a));
    printf("%d\n", clazz_get_value(b));

    clazz_delete(a);
    clazz_delete(b);

    return EXIT_SUCCESS;
}
