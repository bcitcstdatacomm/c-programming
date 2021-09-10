#include "foo.h"
#include "bar.h"
#include <stdlib.h>


static void a(int);


int main(int argc, char *argv[])
{
    foo();
    bar();
    a(5);

    return EXIT_SUCCESS;
}


static void a(int x)
{
}
