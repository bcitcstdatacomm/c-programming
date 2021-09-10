#include "bar.h"


static int a(void);


void bar(void)
{
    a();
}

static int a(void)
{
    return 42;
}

