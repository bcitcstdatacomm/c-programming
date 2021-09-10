#include "foo.h"


static void a(const char *str);


void foo(void)
{
    a("Hello");
}

static void a(const char *str)
{
}
