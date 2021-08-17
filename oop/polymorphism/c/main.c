#include "child.h"
#include <stdlib.h>


void run(struct parent *object);


int main(int argc, char *argv[])
{
    struct parent *a;
    struct parent *b;

    a = malloc(sizeof(struct child));
    child_init((struct child *)a, "abc", 1);
    b = malloc(sizeof(struct child));
    child_init((struct child *)b, "def", 2);

    run(a);
    run(b);

    child_destroy((struct child *)a);
    free(a);
    child_destroy((struct child *)b);
    free(b);

    return EXIT_SUCCESS;
}


void run(struct parent *object)
{
    parent_say_hello(object);
}
