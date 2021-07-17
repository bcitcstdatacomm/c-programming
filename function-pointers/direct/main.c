#include <stdio.h>
#include <stdlib.h>


static void func(const char *msg);


int main(void)
{
    void (*invoke)(const char *msg);

    func("direct");
    invoke = func;
    invoke("by pointer");

    return EXIT_SUCCESS;
}


static void func(const char *msg)
{
    printf("%s\n", msg);
}
