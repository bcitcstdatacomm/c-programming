#include <stdio.h>
#include <stdlib.h>

static int y;

int main(void)
{
    static int x;
    char a;
    char b;
    char c;
    char d;
    char e;

    printf("x = [%p]\n", (void *)&y);
    printf("x = [%p]\n", (void *)&x);
    printf("a = [%p]\n", (void *)&a);
    printf("b = [%p]\n", (void *)&b);
    printf("c = [%p]\n", (void *)&c);
    printf("d = [%p]\n", (void *)&d);
    printf("e = [%p]\n", (void *)&e);
    printf("[%p]\n", (const void *)"Hello, World!");

    return EXIT_SUCCESS;
}
