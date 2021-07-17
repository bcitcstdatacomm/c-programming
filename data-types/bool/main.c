#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>


int main(void)
{
    bool a;
    bool b;

    a = true;
    b = false;

    printf("size %zu\n", sizeof(bool));
    printf("size %d\n", a);
    printf("size %d\n", b);

    return EXIT_SUCCESS;
}
