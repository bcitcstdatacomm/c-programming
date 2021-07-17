#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    int   a;
    int  *b;
    void *c;
    void *d;

    a = 5;
    b = &a;
    c = &a;
    d = b;
    printf("[%p] = %d\n", (void *)&a, a);
    printf("[%p] = %d\n", (void *)b, *b);
    printf("[%p]\n", c);
    printf("[%p]\n", d);
    b = c;
    *b = 6;
    printf("[%p] = %d\n", (void *)&a, a);
    printf("[%p] = %d\n", (void *)b, *b);
    printf("[%p]\n", c);
    printf("[%p]\n", d);

    return EXIT_SUCCESS;
}
