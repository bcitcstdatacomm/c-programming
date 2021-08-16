#include <stdio.h>
#include <stdlib.h>

// NOLINTNEXTLINE(cppcoreguidelines-avoid-non-const-global-variables)
static int y;

int main(void)
{
    static int x;
    int a;
    int b;
    int c;

    printf("[%p] = y\n", (void *)&y);
    printf("[%p] = x\n", (void *)&x);
    printf("[%p] = a\n", (void *)&a);
    printf("[%p] = b\n", (void *)&b);
    printf("[%p] = c\n", (void *)&c);
    printf("[%p] = \"Hello, World!\"\n", (const void *)"Hello, World!");
    printf("[%p] = main()\n", (const void *)&main);

    return EXIT_SUCCESS;
}
