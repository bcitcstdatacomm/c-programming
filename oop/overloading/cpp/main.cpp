#include <iostream>


using std::cout;
using std::endl;


static void foo(int value);
static void foo(float value);
static void foo(const char *value);


int main(int arc, char *argv[])
{
    foo("Hello, World!");
    foo(10);
    foo(123.4f);

    return EXIT_SUCCESS;
}


static void foo(int value)
{
    cout << "int: " << value << endl;
}


static void foo(float value)
{
    cout << "float: " << value << endl;
}


static void foo(const char *value)
{
    cout << "string: " << value << endl;
}