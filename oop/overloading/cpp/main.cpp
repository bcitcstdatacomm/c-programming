#include "clazz.h"
#include <iostream>


using std::cout;
using std::endl;


int main(int arc, char *argv[])
{
    clazz a(5);
    clazz *b;

    b = new clazz(6);
    cout << a.get_value() << endl;
    cout << b->get_value() << endl;

    a.set_value(10);
    b->set_value(20);
    cout << a.get_value() << endl;
    cout << b->get_value() << endl;

    return EXIT_SUCCESS;
}
