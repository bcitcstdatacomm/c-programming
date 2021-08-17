#include "child.h"
#include <stdbool.h>
#include <stdio.h>


static struct parent_vtable vtable;
static void child_say_hello(struct child *this);


inline void child_setup(void)
{
    static bool initialized = false;

    if(!(initialized))
    {
        parent_setup();
        vtable.say_hello = (void (*)(struct parent *))child_say_hello;
        initialized = true;
    }
}


void child_init(struct child *this, const char *str, int val)
{
    child_setup();
    parent_init((struct parent *)this, str);
    this->super.vtable = &vtable;

    this->value = val;
}


void child_destroy(struct child *this)
{
    parent_destroy((struct parent *)this);
}

static void child_say_hello(struct child *this)
{
    printf("%s %d\n", this->super.str, this->value);
}