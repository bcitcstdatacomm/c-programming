#include "parent.h"
#include "child.h"
#include <iostream>


using std::cout;
using std::endl;


void run(const parent *obj);


int main(int arc, char *argv[])
{
    parent a;
    child  b;

    a.str   = "Hello";
    b.str   = "World";
    b.value = 42;

    cout << "a: " << a.str << endl;
    cout << "b: " << b.str << " " << b.value << endl;
}
