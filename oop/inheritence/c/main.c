#include "child.h"
#include <stdlib.h>


int main(int argc, char *argv[])
{
    struct parent *object;

    parent_setup();
    child_setup();

    object = malloc(sizeof(struct child));
    child_init((struct child *)object, "abc", 123);
    parent_say_hello(object);
    child_destroy((struct child *)object);
    free(object);

    return EXIT_SUCCESS;
}
