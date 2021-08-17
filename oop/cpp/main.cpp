#include "parent.h"
#include "child.h"


void run(const parent *obj);


int main(int arc, char *argv[])
{
    parent *a;
    parent *b;

    a = new child("abc", 1);
    b = new child("def", 2);
    run(a);
    run(b);

    delete b;
    delete a;
}

void run(const parent *obj)
{
    obj->sayHello();
}
