#include "clazz.h"
#include <stdlib.h>


struct clazz
{
    int value;
};

static void clazz_init(struct clazz *this, int val);

struct clazz *clazz_new(int val)
{
    struct clazz *this;

    this = malloc(sizeof(struct clazz));
    clazz_init(this, val);

    return this;
}

void clazz_delete(struct clazz *this)
{
    free(this);
}

static void clazz_init(struct clazz *this, int val)
{
    this->value = val;
}

void clazz_set_value(struct clazz *this, int val)
{
    this->value = val;
}

int clazz_get_value(struct clazz *this)
{
    return this->value;
}
